#include "motorstorm_env.hpp"
#include "motorstorm_media.hpp"
#include "motorstorm_bootstrap.hpp"
#include "motorstorm_hle.hpp"
#include "psprecomp/common.hpp"
#include "vcs_media_decoder.hpp"
#include <algorithm>
#include <array>
#include <fstream>
#include <map>
#include <memory>
#include <set>
#include <vector>

namespace motorstorm {
namespace {
using psprecomp::Runtime;
using psprecomp::AllegrexContext;
constexpr std::uint32_t invalid = 0x80610103, no_data = 0x80618001;
constexpr std::uint32_t avc_decode_fatal = 0x80628002;
constexpr std::uint32_t ring_return = 8;
std::uint32_t be32(std::span<const std::uint8_t> h, std::size_t at) {
    return (h[at] << 24u) | (h[at+1] << 16u) | (h[at+2] << 8u) | h[at+3];
}
std::uint64_t timestamp(std::span<const std::uint8_t> h, std::size_t at) {
    std::uint64_t t = 0; for (std::size_t i = 0; i < 6; ++i) t = (t << 8) | h[at+i]; return t;
}
std::string key(std::span<const std::uint8_t> h) { return {reinterpret_cast<const char *>(h.data()), 128}; }
bool header_valid(std::span<const std::uint8_t> h) {
    return h.size() >= 2048 && h[0]=='P' && h[1]=='S' && h[2]=='M' && h[3]=='F' &&
           be32(h,8) >= 2048 && (be32(h,8) & 2047) == 0 && be32(h,12) != 0;
}
struct Movie {
    std::uint32_t ring{}, width{}, height{}, format{3}, default_stride{512}, frames{}, audio_frames{}, size{}, stream_offset{}, consumed_packets{};
    std::uint64_t first{}, last{}, start_us{};
    std::map<std::uint32_t, std::uint32_t> streams;
    std::array<bool,2> es{};
    std::filesystem::path source;
    vcs::VideoStreamDecoder video;
    vcs::PmfAudioDecoder audio;
    std::vector<std::uint8_t> image;
    std::map<std::uint32_t, std::vector<std::uint8_t>> ycbcr_images;
    bool video_eof{}, audio_eof{};
    std::uint32_t audio_channel{}, video_loops{}, audio_loops{};
};
struct Pending { AllegrexContext resume; std::uint32_t ring{}, count{}; };
std::map<std::uint32_t, std::unique_ptr<Movie>> movies;
std::map<std::string, std::filesystem::path> sources;
std::map<std::int32_t, Pending> pending;
std::uint32_t next_stream = 0x3000;
bool ring_trace() {
    static const bool enabled = std::getenv("PSPRECOMP_MOTORSTORM_TRACE_MPEG_RING") != nullptr;
    return enabled;
}
void ring_line(const std::string &text) {
    static std::uint64_t count = 0;
    if (count++ < 4000u) log_line("MPEG RING", text);
}
Movie *movie(std::uint32_t handle) {
    const auto it = movies.find(handle); return it == movies.end() ? nullptr : it->second.get();
}
void put_return(Runtime &r, AllegrexContext &c) {
    const auto it = pending.find(psprecomp::runtime_thread_uid());
    if (it == pending.end()) { r.stop("MPEG callback returned without pending request"); return; }
    auto request = it->second; pending.erase(it);
    const auto result = static_cast<std::int32_t>(c.gpr[2]);
    const auto accepted = result < 0 ? 0u : std::min(request.count, static_cast<std::uint32_t>(result));
    auto &m = r.memory(); const auto ring = request.ring;
    const auto packets = m.load32(ring);
    m.store32(ring + 4, m.load32(ring + 4) + accepted);
    m.store32(ring + 8, (m.load32(ring + 8) + accepted) % packets);
    m.store32(ring + 12, m.load32(ring + 12) + accepted);
    if (ring_trace())
        ring_line("put_return result=" + std::to_string(result) + " requested=" + std::to_string(request.count) +
                  " accepted=" + std::to_string(accepted) + " used_after=" +
                  std::to_string(m.load32(ring + 12)) + " total=" + std::to_string(packets));
    c = request.resume; c.set_gpr(2, result < 0 ? static_cast<std::uint32_t>(result) : accepted);
}
void write_time(psprecomp::GuestMemory &m, std::uint32_t at, std::uint64_t t) {
    m.store32(at, static_cast<std::uint32_t>(t >> 32)); m.store32(at+4, static_cast<std::uint32_t>(t));
}
bool get_header(Runtime &r, std::uint32_t address, std::array<std::uint8_t,2048> &h) {
    if (!r.memory().contains(address,h.size())) return false;
    r.memory().copy_out(address,h); return header_valid(h);
}
// Looping movies (the main menu background) are not flushed or recreated:
// the guest feeder simply rewinds its file and keeps putting the same stream
// into the ring. The decoder then continues with the stream's first picture.
// Our decoder reads the cached PMF, so detect the next pass from the packet
// count fed since the last flush. The margin keeps a stream whose final read
// was padded past its end from replaying.
constexpr std::uint32_t loop_margin_packets = 16;
bool feeding_next_pass(Runtime &r, const Movie &v, std::uint32_t loops) {
    const std::uint64_t total = v.size / 2048;
    return total && r.memory().load32(v.ring + 4) >= (loops + 1) * total + loop_margin_packets;
}
void restart_video(Runtime &r, Movie &v) {
    // Release the packets retained for the previous pass's delayed frames.
    const auto total_packets = v.size / 2048;
    const auto leftover = total_packets > v.consumed_packets ? total_packets - v.consumed_packets : 0;
    const auto used = r.memory().load32(v.ring + 12);
    r.memory().store32(v.ring + 12, used > leftover ? used - leftover : 0);
    v.video.close(); v.video_eof = false;
    v.frames = v.consumed_packets = 0; ++v.video_loops;
    log_line("MPEG", "video loop=" + std::to_string(v.video_loops));
}
void restart_audio(Movie &v) {
    v.audio.close(); v.audio_eof = false; v.audio_frames = 0; ++v.audio_loops;
}
bool decode_frame(Runtime &r, Movie &v) {
    if (v.video_eof && feeding_next_pass(r, v, v.video_loops)) restart_video(r, v);
    if (v.video_eof || v.source.empty() || !v.width || !v.height || v.width > 480 || v.height > 272) return false;
    if (!v.video.is_open() && !v.video.open(v.source)) { v.video_eof = true; return false; }
    // The game decodes one picture per game frame, so an unlocked frame rate
    // would play movies fast. Repeat the current picture until the stream's
    // own clock (one picture per 3003 ticks of 90 kHz) is due.
    if (frame_rate_unlocked() && v.frames != 0 && !v.image.empty() &&
        static_cast<std::uint64_t>(v.frames) * 3003 > (guest_time_us() - v.start_us) * 9 / 100) return true;
    v.image.resize(v.width * v.height * 4);
    bool decoded = v.video.read(v.image) == v.image.size();
    if (!decoded && feeding_next_pass(r, v, v.video_loops)) {
        restart_video(r, v);
        decoded = v.video.open(v.source) && v.video.read(v.image) == v.image.size();
    }
    if (!decoded) {
        v.video_eof = true;
        log_line("MPEG", "video EOF frames=" + std::to_string(v.frames));
        return false;
    }
    if (++v.frames == 1) v.start_us = guest_time_us();
    // Free a proportional share of the actual submitted ring packets as the
    // decoder consumes the movie. The feeder callback still reads real data.
    const auto total_frames = std::max<std::uint64_t>(1, (v.last - v.first) / 3003);
    const auto total_packets = v.size / 2048;
    // Retain the packet containing the final access unit until the codec has
    // drained its delayed frames. Rounding up every frame exhausted the ring
    // early (160 of 197 frames in the first intro), falsely reporting starvation.
    const auto desired = static_cast<std::uint32_t>(std::min<std::uint64_t>(
        total_packets ? total_packets - 1 : 0, static_cast<std::uint64_t>(total_packets) * v.frames / total_frames));
    const auto consumed = desired - v.consumed_packets;
    v.consumed_packets = desired;
    const auto used = r.memory().load32(v.ring + 12);
    r.memory().store32(v.ring + 12, used > consumed ? used - consumed : 0);
    if (ring_trace())
        ring_line("decode_frames=" + std::to_string(v.frames) + " consumed=" + std::to_string(consumed) +
                  " used_before=" + std::to_string(used) + " used_after=" +
                  std::to_string(used > consumed ? used - consumed : 0) +
                  " total=" + std::to_string(r.memory().load32(v.ring)));
    if (v.frames == 1 || v.frames % 120 == 0)
        log_line("MPEG", "decoded frame=" + std::to_string(v.frames) + " size=" +
                 std::to_string(v.width) + "x" + std::to_string(v.height));
    return true;
}
bool copy_image(Runtime &r, Movie &v, std::uint32_t dest, std::uint32_t stride,
                 std::uint32_t x=0, std::uint32_t y=0, std::uint32_t width=0, std::uint32_t height=0) {
    if (v.image.empty()) return false;
    if (!stride) stride=v.default_stride;
    if (!width) width = v.width; if (!height) height = v.height;
    if (x>v.width || y>v.height || width>v.width-x || height>v.height-y || stride<width || stride>2048) return false;
    const auto pixel_bytes = v.format == 3 ? 4u : 2u;
    if (!r.memory().contains(dest, static_cast<std::size_t>(stride) * height * pixel_bytes)) return false;
    std::vector<std::uint8_t> row(width * pixel_bytes);
    for (std::uint32_t j = 0; j < height; ++j) {
        for (std::uint32_t i = 0; i < width; ++i) {
            const auto at = ((y+j)*v.width + x+i)*4;
            const auto red = v.image[at], green = v.image[at+1], blue = v.image[at+2], alpha = v.image[at+3];
            if (v.format == 3) std::copy_n(v.image.data()+at, 4, row.data()+i*4);
            else {
                const std::uint16_t p = v.format == 0 ? (red>>3) | ((green>>2)<<5) | ((blue>>3)<<11) :
                    v.format == 1 ? (red>>3) | ((green>>3)<<5) | ((blue>>3)<<10) | ((alpha>>7)<<15) :
                    (red>>4) | ((green>>4)<<4) | ((blue>>4)<<8) | ((alpha>>4)<<12);
                row[i*2] = p & 255; row[i*2+1] = p >> 8;
            }
        }
        r.memory().copy_in(dest + j * stride * pixel_bytes, row);
    }
    return true;
}
}

void record_psmf_read(const std::filesystem::path &source, std::uint64_t offset, std::span<const std::uint8_t> h) {
    std::array<std::uint8_t,2048> complete{};
    if (h.size() < 2048) {
        std::ifstream header_file(source, std::ios::binary); header_file.seekg(offset);
        if (!header_file.read(reinterpret_cast<char *>(complete.data()),complete.size())) return;
        h = complete;
    }
    if (!header_valid(h) || sources.contains(key(h))) return;
    const auto length = static_cast<std::uint64_t>(be32(h,8)) + be32(h,12);
    if (length > 128ull*1024*1024 || offset + length > std::filesystem::file_size(source)) return;
    const auto root = std::filesystem::path("out/motorstorm/media-cache");
    std::filesystem::create_directories(root);
    const auto path = root / (source.stem().string() + "_" + std::to_string(offset) + ".pmf");
    std::ifstream in(source,std::ios::binary); in.seekg(offset);
    std::ofstream out(path,std::ios::binary|std::ios::trunc);
    std::array<char,65536> block{};
    for (std::uint64_t done=0; done<length;) {
        const auto count = std::min<std::uint64_t>(block.size(),length-done);
        if (!in.read(block.data(),count) || !out.write(block.data(),count)) return;
        done += count;
    }
    sources.emplace(key(h),path);
    log_line("MPEG", "PMF source=" + path.string() + " bytes=" + std::to_string(length));
}

void report_mpeg_summary(const Runtime &r) {
    for (const auto &[handle,v] : movies) {
        log_line("MPEG", "summary handle=" + psprecomp::hex32(handle) + " video_frames=" +
            std::to_string(v->frames) + " audio_frames=" + std::to_string(v->audio_frames) +
            " video_loops=" + std::to_string(v->video_loops) + " video_eof=" + std::to_string(v->video_eof) + " audio_eof=" + std::to_string(v->audio_eof) +
            " packets_read=" + std::to_string(r.memory().load32(v->ring+4)) +
            " packets_queued=" + std::to_string(r.memory().load32(v->ring+12)) +
            " first_pts=" + std::to_string(v->first) + " last_pts=" + std::to_string(v->last));
    }
}

void install_mpeg_hle(Runtime &rt) {
    movies.clear(); sources.clear(); pending.clear(); next_stream = 0x3000;
    rt.register_function(ring_return, &put_return, "mpeg_ringbuffer_return");
    const auto bind = [&rt](std::uint32_t nid, const char *name, Runtime::HleFunction f) {
        rt.register_hle("sceMpeg",nid,[f=std::move(f),name,seen=false](Runtime &r, AllegrexContext &c) mutable {
            if (!seen) { seen=true; log_line("MPEG",name); } f(r,c);
        });
    };
    const auto success = [](Runtime &, AllegrexContext &c) { c.set_gpr(2,0); };
    bind(0x682A619B,"Init",success); bind(0x874624D6,"Finish",success);
    bind(0xC132E22F,"QueryMemSize",[](Runtime &,AllegrexContext &c){c.set_gpr(2,0x10000);});
    bind(0xD7A29F46,"RingbufferQueryMemSize",[](Runtime &,AllegrexContext &c){
        c.set_gpr(2,c.gpr[4] > 0x7FFFFFFF/2152 ? invalid : c.gpr[4]*2152);
    });
    bind(0x37295ED8,"RingbufferConstruct",[](Runtime &r,AllegrexContext &c){
        auto &m=r.memory(); const auto p=c.gpr[4], count=c.gpr[5], data=c.gpr[6];
        if (!count || count>0x7FFFFFFF/2152 || c.gpr[7]<count*2152 || !m.contains(p,48) || !m.contains(data,count*2048ull)) {
            c.set_gpr(2,invalid); return;
        }
        m.zero(p,48); m.store32(p,count); m.store32(p+16,2048); m.store32(p+20,data);
        m.store32(p+24,c.gpr[8]); m.store32(p+28,c.gpr[9]); m.store32(p+32,data+count*2048); m.store32(p+44,c.gpr[28]); c.set_gpr(2,0);
    });
    bind(0xD8C5F121,"Create",[](Runtime &r,AllegrexContext &c){
        auto &m=r.memory(); const auto p=c.gpr[4], data=c.gpr[5], size=c.gpr[6], ring=c.gpr[7];
        if (size<0x10000 || !m.contains(p,4) || !m.contains(data,size) || !m.contains(ring,48)) {c.set_gpr(2,invalid);return;}
        const auto handle=data+0x30; m.store32(p,handle);
        constexpr std::array<std::uint8_t,8> magic{'L','I','B','M','P','E','G',0}; m.copy_in(handle,magic);
        m.store32(handle+16,ring); m.store32(handle+20,m.load32(ring+32)); m.store32(ring+40,p);
        auto v=std::make_unique<Movie>(); v->ring=ring;
        v->default_stride=c.gpr[8]?c.gpr[8]:512;
        movies[p]=std::move(v); c.set_gpr(2,0);
    });
    bind(0x606A4649,"Delete",[](Runtime &,AllegrexContext &c){movies.erase(c.gpr[4]);c.set_gpr(2,0);});
    bind(0x21FF80E4,"QueryStreamOffset",[](Runtime &r,AllegrexContext &c){
        std::array<std::uint8_t,2048> h{}; auto *v=movie(c.gpr[4]);
        if (!v || !r.memory().contains(c.gpr[6],4) || !get_header(r,c.gpr[5],h)) {c.set_gpr(2,invalid);return;}
        v->stream_offset=be32(h,8); v->size=be32(h,12); v->width=h[142]*16u; v->height=h[143]*16u;
        v->first=timestamp(h,0x54); v->last=timestamp(h,0x5A);
        if (const auto it=sources.find(key(h));it!=sources.end()) v->source=it->second;
        r.memory().store32(c.gpr[6],v->stream_offset); c.set_gpr(2,0);
    });
    bind(0x611E9E11,"QueryStreamSize",[](Runtime &r,AllegrexContext &c){
        std::array<std::uint8_t,2048> h{};
        if (!r.memory().contains(c.gpr[5],4) || !get_header(r,c.gpr[4],h)) {c.set_gpr(2,invalid);return;}
        r.memory().store32(c.gpr[5],be32(h,12)); c.set_gpr(2,0);
    });
    bind(0x42560F23,"RegistStream",[](Runtime &,AllegrexContext &c){
        auto *v=movie(c.gpr[4]); if (!v) {c.set_gpr(2,invalid);return;}
        const auto id=next_stream++; v->streams[id]=c.gpr[5];
        if(c.gpr[5]==1 || c.gpr[5]==15) v->audio_channel=c.gpr[6];
        c.set_gpr(2,id);
    });
    bind(0x591A4AA2,"UnRegistStream",[](Runtime &,AllegrexContext &c){
        if (auto *v=movie(c.gpr[4])) v->streams.erase(c.gpr[5]); c.set_gpr(2,0);
    });
    bind(0xA780CF7E,"MallocAvcEsBuf",[](Runtime &,AllegrexContext &c){
        auto *v=movie(c.gpr[4]); if (!v) {c.set_gpr(2,0);return;}
        for (std::uint32_t i=0;i<2;++i) if (!v->es[i]) {v->es[i]=true;c.set_gpr(2,i+1);return;} c.set_gpr(2,0);
    });
    bind(0xCEB870B1,"FreeAvcEsBuf",[](Runtime &,AllegrexContext &c){
        auto *v=movie(c.gpr[4]); if (v && c.gpr[5]>=1 && c.gpr[5]<=2) v->es[c.gpr[5]-1]=false; c.set_gpr(2,0);
    });
    bind(0x167AFD9E,"InitAu",[](Runtime &r,AllegrexContext &c){
        if (!movie(c.gpr[4]) || !r.memory().contains(c.gpr[6],24)) {c.set_gpr(2,invalid);return;}
        r.memory().zero(c.gpr[6],24); r.memory().store32(c.gpr[6]+16,c.gpr[5]); c.set_gpr(2,0);
    });
    bind(0xF8DCB679,"QueryAtracEsSize",[](Runtime &r,AllegrexContext &c){
        if (!movie(c.gpr[4]) || !r.memory().contains(c.gpr[5],4) || !r.memory().contains(c.gpr[6],4)) {c.set_gpr(2,invalid);return;}
        r.memory().store32(c.gpr[5],2112);r.memory().store32(c.gpr[6],8192);c.set_gpr(2,0);
    });
    bind(0xC02CF6B5,"QueryPcmEsSize",[](Runtime &r,AllegrexContext &c){
        if (!r.memory().contains(c.gpr[5],4) || !r.memory().contains(c.gpr[6],4)) {c.set_gpr(2,invalid);return;}
        r.memory().store32(c.gpr[5],320);r.memory().store32(c.gpr[6],320);c.set_gpr(2,0);
    });
    bind(0xB5F6DC87,"RingbufferAvailableSize",[](Runtime &r,AllegrexContext &c){
        if (!r.memory().contains(c.gpr[4],48)) {c.set_gpr(2,invalid);return;}
        const auto total=r.memory().load32(c.gpr[4]), used=r.memory().load32(c.gpr[4]+12);
        const auto available=total>used?total-used:0;
        if (ring_trace()) {
            static std::uint64_t calls=0;
            if (available==0 || ++calls%512==0)
                ring_line("available="+std::to_string(available)+" used="+std::to_string(used)+" total="+std::to_string(total));
        }
        c.set_gpr(2,available);
    });
    bind(0xB240A59E,"RingbufferPut",[](Runtime &r,AllegrexContext &c){
        auto &m=r.memory();const auto p=c.gpr[4]; if (!m.contains(p,48)) {c.set_gpr(2,invalid);return;}
        const auto total=m.load32(p), used=m.load32(p+12), pos=m.load32(p+8), cb=m.load32(p+24);
        if (!total || pos>=total || !cb || used>total) {c.set_gpr(2,invalid);return;}
        const auto count=std::min({c.gpr[5],c.gpr[6],total-used,total-pos});if (!count) {c.set_gpr(2,0);return;}
        if (ring_trace())
            ring_line("put requested=" + std::to_string(c.gpr[5]) + " limit=" + std::to_string(c.gpr[6]) +
                      " used=" + std::to_string(used) + " pos=" + std::to_string(pos) +
                      " count=" + std::to_string(count) + " total=" + std::to_string(total));
        const auto uid=psprecomp::runtime_thread_uid(); if (pending.contains(uid)) {r.stop("Nested MPEG feeder callback");return;}
        Pending request{c,p,count};request.resume.pc=c.gpr[31]; pending.emplace(uid,request);
        c.gpr[4]=m.load32(p+20)+pos*2048;c.gpr[5]=count;c.gpr[6]=m.load32(p+28);c.gpr[31]=ring_return;c.pc=cb;
    });
    const auto get_au=[](Runtime &r,AllegrexContext &c,bool audio){
        auto *v=movie(c.gpr[4]);const auto at=c.gpr[6];
        if (!v || !v->streams.contains(c.gpr[5]) || !r.memory().contains(at,24)) {
            if (ring_trace()) ring_line("au_reject audio=" + std::to_string(audio) + " reason=invalid");
            c.set_gpr(2,invalid);return;
        }
        const auto pts=v->first+(audio?static_cast<std::uint64_t>(v->audio_frames)*4180:static_cast<std::uint64_t>(v->frames)*3003);
        if (ring_trace())
            ring_line("au audio=" + std::to_string(audio) + " frames=" + std::to_string(audio?v->audio_frames:v->frames) +
                      " used=" + std::to_string(r.memory().load32(v->ring+12)) +
                      " total=" + std::to_string(r.memory().load32(v->ring)) +
                      " eof=" + std::to_string(audio?v->audio_eof:v->video_eof));
        if (audio && v->audio_eof && feeding_next_pass(r,*v,v->audio_loops)) restart_audio(*v);
        if (!audio && v->video_eof && feeding_next_pass(r,*v,v->video_loops)) restart_video(r,*v);
        if (audio?v->audio_eof:v->video_eof) {
            write_time(r.memory(),at,pts);write_time(r.memory(),at+8,UINT64_MAX);
            c.set_gpr(2,no_data);return;
        }
        if (r.memory().load32(v->ring+12)==0) {
            if (ring_trace()) ring_line("au_starved audio=" + std::to_string(audio));
            write_time(r.memory(),at,0);write_time(r.memory(),at+8,0);c.set_gpr(2,no_data);return;
        }
        write_time(r.memory(),at,pts);write_time(r.memory(),at+8,pts>=3003?pts-3003:0);
        r.memory().store32(at+20,audio?2112:2048);
        if (c.gpr[7] && r.memory().contains(c.gpr[7],4)) r.memory().store32(c.gpr[7],audio?0:1); c.set_gpr(2,0);
    };
    bind(0xFE246728,"GetAvcAu",[get_au](Runtime &r,AllegrexContext &c){get_au(r,c,false);});
    bind(0xE1CE83A7,"GetAtracAu",[get_au](Runtime &r,AllegrexContext &c){get_au(r,c,true);});
    bind(0x8C1E027D,"GetPcmAu",[get_au](Runtime &r,AllegrexContext &c){get_au(r,c,true);});
    bind(0xA11C7026,"AvcDecodeMode",[](Runtime &r,AllegrexContext &c){
        auto *v=movie(c.gpr[4]);if (!v || !r.memory().contains(c.gpr[5],8)) {c.set_gpr(2,invalid);return;}
        const auto format=r.memory().load32(c.gpr[5]+4);if (format!=0xFFFFFFFF && format>3) {c.set_gpr(2,invalid);return;}
        v->format=format==0xFFFFFFFF?3:format;c.set_gpr(2,0);
    });
    bind(0x211A057C,"AvcQueryYCbCrSize",[](Runtime &r,AllegrexContext &c){
        const auto w=c.gpr[6],h=c.gpr[7];
        if (!w || !h || (w&15) || (h&15) || w>480 || h>272 || !r.memory().contains(c.gpr[8],4)) {c.set_gpr(2,invalid);return;}
        r.memory().store32(c.gpr[8],w*h*3/2+128);c.set_gpr(2,0);
    });
    bind(0x67179B1B,"AvcInitYCbCr",[](Runtime &r,AllegrexContext &c){
        if (!movie(c.gpr[4]) || !r.memory().contains(c.gpr[8],128)) {c.set_gpr(2,invalid);return;}
        r.memory().zero(c.gpr[8],128); c.set_gpr(2,0);
    });
    bind(0xF0EB1125,"AvcDecodeYCbCr",[](Runtime &r,AllegrexContext &c){
        auto *v=movie(c.gpr[4]);if (!v || !r.memory().contains(c.gpr[6],4) || !r.memory().contains(c.gpr[7],4)) {c.set_gpr(2,invalid);return;}
        const auto buffer=r.memory().load32(c.gpr[6]);
        if (!r.memory().contains(buffer,128)) {c.set_gpr(2,invalid);return;}
        const bool was_eof=v->video_eof;
        const auto decoded=decode_frame(r,*v);
        if (decoded) v->ycbcr_images[buffer]=v->image;
        if (r.memory().contains(c.gpr[5],24))
            write_time(r.memory(),c.gpr[5],v->first+static_cast<std::uint64_t>(v->frames)*3003);
        // A valid final AU can drain the codec without producing a picture.
        // It completes successfully with frame status zero; NO_DATA belongs
        // to GetAvcAu, not this decode completion. A further decode after EOS
        // is a codec error. Returning NO_DATA here took the movie wrapper's
        // unexpected-error path while its source mutex remained held.
        r.memory().store32(c.gpr[7],decoded?1:0);
        c.set_gpr(2,decoded || (!was_eof && v->video_eof) ? 0 : avc_decode_fatal);
    });
    bind(0x31BD0272,"AvcCsc",[](Runtime &r,AllegrexContext &c){
        auto *v=movie(c.gpr[4]);if (!v || !r.memory().contains(c.gpr[6],16)) {c.set_gpr(2,invalid);return;}
        auto &m=r.memory(); const auto p=c.gpr[6];
        if(MOTORSTORM_ENV_FLAG("PSPRECOMP_MOTORSTORM_TRACE_MEDIA")) {
            static unsigned count=0;
            if(count++<8 || count%120==0) log_line("MPEG CSC","src="+psprecomp::hex32(c.gpr[5])+" dest="+psprecomp::hex32(c.gpr[8])+" stride="+std::to_string(c.gpr[7])+" range="+std::to_string(m.load32(p))+","+std::to_string(m.load32(p+4))+","+std::to_string(m.load32(p+8))+","+std::to_string(m.load32(p+12))+" frame="+std::to_string(v->frames));
        }
        const auto source=v->ycbcr_images.find(c.gpr[5]);
        if (source==v->ycbcr_images.end()) {c.set_gpr(2,invalid);return;}
        v->image=source->second;
        // CSC range fields are pixels; only QueryYCbCrSize/InitYCbCr impose
        // macroblock-aligned frame dimensions. Multiplying this rectangle by
        // 16 discarded every decoded picture used by the menu background.
        c.set_gpr(2,copy_image(r,*v,c.gpr[8],c.gpr[7],m.load32(p),m.load32(p+4),m.load32(p+8),m.load32(p+12))?0:invalid);
    });
    bind(0x13407F13,"AvcDecode",[](Runtime &r,AllegrexContext &c){
        auto *v=movie(c.gpr[4]);if (!v || !r.memory().contains(c.gpr[7],4) || !r.memory().contains(c.gpr[8],4)) {c.set_gpr(2,invalid);return;}
        const bool was_eof=v->video_eof;
        const auto decoded=decode_frame(r,*v);r.memory().store32(c.gpr[8],decoded?1:0);
        if (r.memory().contains(c.gpr[5],24))
            write_time(r.memory(),c.gpr[5],v->first+static_cast<std::uint64_t>(v->frames)*3003);
        if (decoded) c.set_gpr(2,copy_image(r,*v,r.memory().load32(c.gpr[7]),c.gpr[6])?0:invalid);
        else c.set_gpr(2,!was_eof && v->video_eof ? 0 : avc_decode_fatal);
    });
    bind(0x800C44DF,"AtracDecode",[](Runtime &r,AllegrexContext &c){
        if (MOTORSTORM_ENV_FLAG("PSPRECOMP_MOTORSTORM_NO_PMF_AUDIO")) { c.set_gpr(2,no_data); return; }
        auto *v=movie(c.gpr[4]); if (!v || !r.memory().contains(c.gpr[6],8192)) {c.set_gpr(2,invalid);return;}
        std::array<std::uint8_t,8192> output{};
        if (v->audio_eof && feeding_next_pass(r,*v,v->audio_loops)) restart_audio(*v);
        if (v->audio_eof || v->source.empty() || (!v->audio.is_open()&&!v->audio.open(v->source,v->audio_channel))) {v->audio_eof=true;c.set_gpr(2,no_data);return;}
        auto size=v->audio.read(output);
        if (!size && feeding_next_pass(r,*v,v->audio_loops)) {
            restart_audio(*v);
            if (v->audio.open(v->source,v->audio_channel)) size=v->audio.read(output);
        }
        if (!size) {
            v->audio_eof=true;log_line("MPEG","audio EOF frames=" + std::to_string(v->audio_frames));
            c.set_gpr(2,no_data);return;
        }
        r.memory().copy_in(c.gpr[6],output);++v->audio_frames;
        if (r.memory().contains(c.gpr[5],24))
            write_time(r.memory(),c.gpr[5],v->first+static_cast<std::uint64_t>(v->audio_frames)*2048*90000/44100);
        c.set_gpr(2,0);
    });
    bind(0x4571CC64,"AvcDecodeFlush",success);
    bind(0x707B7629,"FlushAllStream",[](Runtime &r,AllegrexContext &c){
        if (auto *v=movie(c.gpr[4])) {
            log_line("MPEG","flush video_frames="+std::to_string(v->frames));
            v->video.close();v->audio.close();v->video_eof=v->audio_eof=false;
            v->frames=v->audio_frames=v->consumed_packets=v->video_loops=v->audio_loops=0;v->image.clear();v->ycbcr_images.clear();
            r.memory().store32(v->ring+4,0);r.memory().store32(v->ring+8,0);r.memory().store32(v->ring+12,0);
        }
        c.set_gpr(2,0);
    });

    // scePsmf supplies metadata to the guest's movie wrapper. Keep the header
    // address in the ABI structure so copies of that structure remain valid.
    rt.register_hle("scePsmf",0xC22C8327,[](Runtime &r,AllegrexContext &c){
        auto &m=r.memory();std::array<std::uint8_t,2048> h{};
        if (!m.contains(c.gpr[4],32) || !get_header(r,c.gpr[5],h)) {c.set_gpr(2,invalid);return;}
        const auto p=c.gpr[4]; m.zero(p,32);m.store32(p,m.load32(c.gpr[5]+4));
        m.store32(p+4,2048);m.store32(p+8,c.gpr[5]);m.store32(p+12,be32(h,12));m.store32(p+16,be32(h,8));
        c.set_gpr(2,0);
    });
    const auto psmf_header=[](Runtime &r,std::uint32_t p,std::array<std::uint8_t,2048> &h) {
        return r.memory().contains(p,32) && get_header(r,r.memory().load32(p+8),h);
    };
    rt.register_hle("scePsmf",0xEAED89CD,[psmf_header](Runtime &r,AllegrexContext &c){
        std::array<std::uint8_t,2048> h{}; c.set_gpr(2,psmf_header(r,c.gpr[4],h)?(h[128]<<8)|h[129]:invalid);
    });
    rt.register_hle("scePsmf",0x4BC9BDE0,[psmf_header](Runtime &r,AllegrexContext &c){
        std::array<std::uint8_t,2048> h{};
        if (!psmf_header(r,c.gpr[4],h) || c.gpr[5]>=static_cast<std::uint32_t>((h[128]<<8)|h[129])) {c.set_gpr(2,invalid);return;}
        r.memory().store32(c.gpr[4]+20,c.gpr[5]);c.set_gpr(2,0);
    });
    rt.register_hle("scePsmf",0xC7DB3A5B,[psmf_header](Runtime &r,AllegrexContext &c){
        std::array<std::uint8_t,2048> h{};
        if (!psmf_header(r,c.gpr[4],h) || !r.memory().contains(c.gpr[5],4) || !r.memory().contains(c.gpr[6],4)) {c.set_gpr(2,invalid);return;}
        const auto stream=r.memory().load32(c.gpr[4]+20);const auto at=0x82+stream*16;
        if (stream>=static_cast<std::uint32_t>((h[128]<<8)|h[129]) || at+16>h.size()) {c.set_gpr(2,invalid);return;}
        const bool video=(h[at]&0xF0)==0xE0;
        r.memory().store32(c.gpr[5],video?0:(h[at+1]&0xF0)?2:1);
        r.memory().store32(c.gpr[6],(video?h[at]:h[at+1])&15);c.set_gpr(2,0);
    });
    const auto stream_info=[psmf_header](Runtime &r,AllegrexContext &c,bool video){
        std::array<std::uint8_t,2048> h{};
        if (!psmf_header(r,c.gpr[4],h) || !r.memory().contains(c.gpr[5],8)) {c.set_gpr(2,invalid);return;}
        const auto stream=r.memory().load32(c.gpr[4]+20);const auto at=0x82+stream*16;
        if (stream>=static_cast<std::uint32_t>((h[128]<<8)|h[129]) || at+16>h.size() || video!=((h[at]&0xF0)==0xE0)) {c.set_gpr(2,invalid);return;}
        r.memory().store32(c.gpr[5],video?h[at+12]*16u:h[at+14]);
        r.memory().store32(c.gpr[5]+4,video?h[at+13]*16u:h[at+15]);c.set_gpr(2,0);
    };
    rt.register_hle("scePsmf",0x0BA514E5,[stream_info](Runtime &r,AllegrexContext &c){stream_info(r,c,true);});
    rt.register_hle("scePsmf",0xA83F7113,[stream_info](Runtime &r,AllegrexContext &c){stream_info(r,c,false);});
    const auto get_time=[psmf_header](Runtime &r,AllegrexContext &c,std::size_t offset){
        std::array<std::uint8_t,2048> h{};
        if (!psmf_header(r,c.gpr[4],h) || !r.memory().contains(c.gpr[5],4)) {c.set_gpr(2,invalid);return;}
        r.memory().store32(c.gpr[5],static_cast<std::uint32_t>(timestamp(h,offset)));c.set_gpr(2,0);
    };
    rt.register_hle("scePsmf",0x76D3AEBA,[get_time](Runtime &r,AllegrexContext &c){get_time(r,c,0x54);});
    rt.register_hle("scePsmf",0xBD8AE0D8,[get_time](Runtime &r,AllegrexContext &c){get_time(r,c,0x5A);});
}
}
