#include "motorstorm_env.hpp"
#include "motorstorm_atrac.hpp"
#include "motorstorm_bootstrap.hpp"
#include "psprecomp/common.hpp"
#include "vcs_media_decoder.hpp"
#include <algorithm>
#include <array>
#include <cstring>
#include <fstream>
#include <map>
#include <memory>
#include <vector>

namespace motorstorm {
namespace {
std::uint16_t u16(std::span<const std::uint8_t> bytes,std::size_t at) {
    return static_cast<std::uint16_t>(bytes[at]|(bytes[at+1]<<8));
}
std::uint32_t u32(std::span<const std::uint8_t> bytes,std::size_t at) {
    return u16(bytes,at)|(static_cast<std::uint32_t>(u16(bytes,at+2))<<16);
}
struct Header {
    std::uint32_t size{},data_offset{},data_size{},rate{},samples{},block{},frame_samples{},sample_offset{};
    std::int32_t loop_start{},loop_end{-1};
};
bool parse(std::span<const std::uint8_t> bytes,Header &h) {
    if(bytes.size()<12 || std::memcmp(bytes.data(),"RIFF",4) || std::memcmp(bytes.data()+8,"WAVE",4)) return false;
    const auto size=static_cast<std::uint64_t>(u32(bytes,4))+8;
    if(size>128ull*1024*1024 || size<44) return false; h={};h.size=static_cast<std::uint32_t>(size);
    std::uint32_t encoder_offset=0,loop_offset=0;
    for(std::size_t at=12;at+8<=bytes.size();) {
        const auto length=u32(bytes,at+4);const auto begin=at+8;
        if(!std::memcmp(bytes.data()+at,"data",4)) { h.data_offset=static_cast<std::uint32_t>(begin);h.data_size=length;break; }
        if(length>bytes.size()-begin) return false;
        if(!std::memcmp(bytes.data()+at,"fmt ",4) && length>=16) {
            const auto tag=u16(bytes,begin);if(tag!=0xFFFE && tag!=0x270) return false;
            const auto channels=u16(bytes,begin+2);if(channels!=1 && channels!=2) return false;
            h.rate=u32(bytes,begin+4);h.block=u16(bytes,begin+12);h.frame_samples=tag==0x270?1024:2048;
            h.sample_offset=tag==0x270?69:368;
        } else if(!std::memcmp(bytes.data()+at,"fact",4) && length>=4) {
            h.samples=u32(bytes,begin);
            if(length>=8) encoder_offset=u32(bytes,begin+4);
            loop_offset=length>=12?u32(bytes,begin+8):encoder_offset;
        }
        else if(!std::memcmp(bytes.data()+at,"smpl",4) && length>=60 && u32(bytes,begin+28)) {
            h.loop_start=static_cast<std::int32_t>(u32(bytes,begin+44));h.loop_end=static_cast<std::int32_t>(u32(bytes,begin+48));
        }
        at=begin+length+(length&1);
    }
    if(!h.block || !h.rate || !h.data_offset || h.data_offset>h.size || h.data_size>h.size-h.data_offset) return false;
    const auto encoded_samples=static_cast<std::uint64_t>(h.data_size/h.block)*h.frame_samples;
    const auto offset=static_cast<std::uint64_t>(h.sample_offset)+encoder_offset;
    if(offset>=encoded_samples || offset>0xFFFFFFFFu) return false;
    h.sample_offset=static_cast<std::uint32_t>(offset);
    if(h.loop_end>=0) {
        // smpl coordinates include the encoder offset, unlike guest playback
        // positions. The extended fact chunk supplies its own loop offset.
        h.loop_start=static_cast<std::int32_t>(static_cast<std::int64_t>(h.loop_start)-loop_offset);
        h.loop_end=static_cast<std::int32_t>(static_cast<std::int64_t>(h.loop_end)-loop_offset);
    }
    if(!h.samples) h.samples=static_cast<std::uint32_t>(encoded_samples-h.sample_offset);
    return h.samples!=0;
}
std::string signature(std::span<const std::uint8_t> bytes) {
    return {reinterpret_cast<const char *>(bytes.data()),std::min<std::size_t>(128,bytes.size())};
}
struct Stream {
    Header header;
    std::uint32_t buffer{},capacity{},file_offset{},available{},write_cursor{};
    std::uint64_t position{},decoded_frames{};
    std::int32_t loops{};
    bool ended{};
    std::filesystem::path source;
    vcs::AudioStreamDecoder decoder;
};
bool restart_decoder(Stream &stream) {
    if(!stream.decoder.open(stream.source,stream.header.rate,2,0)) return false;
    // Decode from the beginning to retain synthesis history and exact sample
    // positioning. Container seek alone lands on an earlier encoded packet.
    std::array<std::uint8_t,8192> priming{};
    for(std::uint64_t left=(stream.header.sample_offset+stream.position)*4;left;) {
        const auto count=static_cast<std::size_t>(std::min<std::uint64_t>(left,priming.size()));
        if(stream.decoder.read(std::span<std::uint8_t>(priming.data(),count))!=count) return false;
        left-=count;
    }
    return true;
}
std::map<std::string,std::filesystem::path> sources;
std::map<std::uint32_t,std::unique_ptr<Stream>> streams;
std::uint32_t next_id=0x600;
bool atrac_trace() {
    static const bool enabled = std::getenv("PSPRECOMP_MOTORSTORM_TRACE_ATRAC") != nullptr;
    return enabled;
}
void atrac_line(const std::string &text) {
    static std::uint64_t count = 0;
    if (count++ < 4000u) log_line("ATRAC TRACE", text);
}
constexpr std::uint32_t bad_data=0x80630002,bad_id=0x80630003,empty=0x80630023,all_decoded=0x80630024;
void output(psprecomp::GuestMemory &memory,std::uint32_t at,std::uint32_t value) { if(at && memory.contains(at,4)) memory.store32(at,value); }
}
void record_atrac_read(const std::filesystem::path &path,std::uint64_t offset,std::span<const std::uint8_t> bytes) {
    Header header;if(!parse(bytes,header) || bytes.size()<128 || sources.contains(signature(bytes))) return;
    if(offset>std::filesystem::file_size(path) || header.size>std::filesystem::file_size(path)-offset) return;
    const auto root=std::filesystem::path("out/motorstorm/atrac-cache");std::filesystem::create_directories(root);
    const auto target=root/(path.stem().string()+"_"+std::to_string(offset)+".at3");
    std::ifstream input(path,std::ios::binary);input.seekg(static_cast<std::streamoff>(offset));
    std::ofstream file(target,std::ios::binary|std::ios::trunc);std::array<char,65536> buffer{};
    for(std::uint64_t copied=0;copied<header.size;) {
        const auto count=std::min<std::uint64_t>(buffer.size(),header.size-copied);
        if(!input.read(buffer.data(),count) || !file.write(buffer.data(),count)) return;copied+=count;
    }
    sources[signature(bytes)]=target;
    log_line("ATRAC","source="+target.string()+" bytes="+std::to_string(header.size)+" samples="+std::to_string(header.samples));
}
void install_atrac_hle(psprecomp::Runtime &runtime) {
    streams.clear();sources.clear();next_id=0x600;
    const auto bind=[&](std::uint32_t nid,psprecomp::Runtime::HleFunction handler){runtime.register_hle("sceAtrac3plus",nid,std::move(handler));};
    bind(0x7A20E7AF,[](auto &r,auto &c){
        if (MOTORSTORM_ENV_FLAG("PSPRECOMP_MOTORSTORM_NO_ATRAC")) { c.set_gpr(2,bad_data); return; }
        const auto buffer=c.gpr[4],capacity=c.gpr[5];
        if(capacity<128 || !r.memory().contains(buffer,capacity)) {c.set_gpr(2,bad_data);return;}
        std::vector<std::uint8_t> bytes(std::min(65536u,capacity));r.memory().copy_out(buffer,bytes);
        Header header;if(!parse(bytes,header)) {c.set_gpr(2,bad_data);return;}
        auto stream=std::make_unique<Stream>();stream->header=header;stream->buffer=buffer;stream->capacity=capacity;
        stream->file_offset=std::min(capacity,header.size);stream->write_cursor=stream->file_offset%capacity;
        stream->available=stream->file_offset-header.data_offset;
        if(auto found=sources.find(signature(bytes));found!=sources.end()) stream->source=found->second;
        else if(header.size<=capacity) {
            const auto root=std::filesystem::path("out/motorstorm/atrac-cache");std::filesystem::create_directories(root);
            stream->source=root/("memory_"+std::to_string(next_id)+".at3");
            bytes.resize(header.size);r.memory().copy_out(buffer,bytes);
            std::ofstream file(stream->source,std::ios::binary);file.write(reinterpret_cast<const char *>(bytes.data()),bytes.size());
        }
        if(stream->source.empty() || !restart_decoder(*stream)) {
            log_line("ATRAC","decoder could not open source for buffer="+psprecomp::hex32(buffer));c.set_gpr(2,bad_data);return;
        }
        const auto id=next_id++;streams[id]=std::move(stream);c.set_gpr(2,id);
        log_line("ATRAC","id="+std::to_string(id)+" real ATRAC decoder rate="+std::to_string(header.rate)+" frame_samples="+std::to_string(header.frame_samples));
        if (atrac_trace())
            atrac_line("set_data id="+std::to_string(id)+" buffer="+psprecomp::hex32(buffer)+" capacity="+
                       std::to_string(capacity)+" size="+std::to_string(header.size)+" data_offset="+
                       std::to_string(header.data_offset)+" samples="+std::to_string(header.samples)+
                       " frame_samples="+std::to_string(header.frame_samples)+" file_offset="+
                       std::to_string(streams[id]->file_offset)+" source="+streams[id]->source.string());
    });
    bind(0x868120B5,[](auto &,auto &c){auto it=streams.find(c.gpr[4]);if(it==streams.end()){c.set_gpr(2,bad_id);return;}it->second->loops=static_cast<std::int32_t>(c.gpr[5]);c.set_gpr(2,0);});
    bind(0x5D268707,[](auto &r,auto &c){
        auto it=streams.find(c.gpr[4]);if(it==streams.end()){c.set_gpr(2,bad_id);return;}auto &s=*it->second;
        const auto remaining=s.header.size-s.file_offset;
        // The complete encoded asset is owned by the native decoder backing
        // file. Guest staging chunks can be released as soon as supplied.
        const auto writable=std::min(s.capacity,remaining);
        if (atrac_trace())
            atrac_line("stream_info id="+std::to_string(c.gpr[4])+" buffer="+psprecomp::hex32(s.buffer)+
                       " writable="+std::to_string(writable)+" offset="+std::to_string(s.file_offset)+
                       " remaining="+std::to_string(remaining));
        output(r.memory(),c.gpr[5],s.buffer);output(r.memory(),c.gpr[6],writable);output(r.memory(),c.gpr[7],s.file_offset);c.set_gpr(2,0);
    });
    bind(0x7DB31251,[](auto &,auto &c){
        auto it=streams.find(c.gpr[4]);if(it==streams.end()){c.set_gpr(2,bad_id);return;}auto &s=*it->second;
        const auto count=c.gpr[5];if(count>s.capacity || count>s.header.size-s.file_offset){c.set_gpr(2,bad_data);return;}
        if (atrac_trace())
            atrac_line("add_stream id="+std::to_string(c.gpr[4])+" count="+std::to_string(count)+
                       " file_offset="+std::to_string(s.file_offset)+"->"+std::to_string(s.file_offset+count));
        s.file_offset+=count;c.set_gpr(2,0);
    });
    bind(0x6A8C3CD5,[](auto &r,auto &c){
        auto it=streams.find(c.gpr[4]);if(it==streams.end()){c.set_gpr(2,bad_id);return;}auto &s=*it->second;
        output(r.memory(),c.gpr[6],0);output(r.memory(),c.gpr[7],0);
        if(s.ended){output(r.memory(),c.gpr[7],1);c.set_gpr(2,all_decoded);return;}
        if(!r.memory().contains(c.gpr[5],s.header.frame_samples*4)){c.set_gpr(2,bad_data);return;}
        if (atrac_trace())
            atrac_line("decode id="+std::to_string(c.gpr[4])+" position="+std::to_string(s.position)+
                       " samples="+std::to_string(s.header.samples)+" loops="+std::to_string(s.loops)+
                       " ended="+std::to_string(s.ended)+" file_offset="+std::to_string(s.file_offset));
        const auto boundary=s.loops && s.header.loop_end>=0?std::min(s.header.samples,static_cast<std::uint32_t>(s.header.loop_end)+1):s.header.samples;
        const auto available=boundary>s.position?boundary-s.position:0ull;
        // DecodeData returns only the remainder of an encoded frame after
        // delay trimming (1680 samples initially for this ATRAC3+ soundtrack).
        // Returning 2048 here aligns MotorStorm's ring writes with its 8192-byte
        // read windows and strands its inclusive overlap check at 0x08929330.
        const auto frame_left=s.header.frame_samples-
            (s.header.sample_offset+s.position)%s.header.frame_samples;
        const auto samples=std::min<std::uint64_t>(frame_left,available);
        if (!samples) {s.ended=true;output(r.memory(),c.gpr[7],1);c.set_gpr(2,0);return;}
        std::vector<std::uint8_t> pcm(static_cast<std::size_t>(samples)*4);
        // Diagnostic kill switch: emulate the old silence shim while keeping the
        // stream object and bookkeeping fully active.
        std::size_t decoded = MOTORSTORM_ENV_FLAG("PSPRECOMP_MOTORSTORM_ATRAC_SILENT")
                                  ? pcm.size()
                                  : s.decoder.read(pcm);
        r.memory().copy_in(c.gpr[5],std::span<const std::uint8_t>(pcm.data(),decoded));
        const auto count=static_cast<std::uint32_t>(decoded/4);s.position+=count;++s.decoded_frames;
        s.available-=std::min(s.available,s.header.block);
        output(r.memory(),c.gpr[6],count);
        if(s.position>=boundary || count<samples) {
            if(s.loops) {
                if(s.loops>0)--s.loops;s.position=static_cast<std::uint32_t>(std::max(0,s.header.loop_start));
                if(!restart_decoder(s)) {c.set_gpr(2,bad_data);return;}
                s.file_offset=s.header.data_offset+static_cast<std::uint32_t>((s.header.sample_offset+s.position)/s.header.frame_samples)*s.header.block;
                s.available=0;s.write_cursor=0;
            } else {s.ended=true;output(r.memory(),c.gpr[7],1);}
        }
        // The fifth argument (t0) is the remaining-frame output.  The guest
        // uses it to decide whether to request more stream data (0..199) and
        // treats -1 as "no more frames", so it must report the real count.
        const auto remaining = boundary > s.position ? (boundary - s.position) / s.header.frame_samples : 0u;
        output(r.memory(),c.gpr[8],static_cast<std::uint32_t>(remaining));c.set_gpr(2,0);
        if (atrac_trace())
            atrac_line("decode_done id="+std::to_string(c.gpr[4])+" count="+std::to_string(count)+
                       " position="+std::to_string(s.position)+" ended="+std::to_string(s.ended));
        if(s.decoded_frames==1 || s.decoded_frames%256==0) {
            std::int32_t peak=0;
            for(std::size_t i=0;i+1<decoded;i+=2) {
                const auto sample=static_cast<std::int16_t>(pcm[i]|(pcm[i+1]<<8));
                const auto magnitude=static_cast<std::int32_t>(sample<0?-sample:sample);
                if(magnitude>peak) peak=magnitude;
            }
            log_line("ATRAC","id="+std::to_string(c.gpr[4])+" decoded_frames="+std::to_string(s.decoded_frames)+" position="+std::to_string(s.position)+" peak="+std::to_string(peak)+" output="+psprecomp::hex32(c.gpr[5]));
        }
    });
    bind(0xE88F759B,[](auto &r,auto &c){
        auto it=streams.find(c.gpr[4]);if(it==streams.end()){c.set_gpr(2,bad_id);return;}auto &s=*it->second;
        const auto remaining=static_cast<std::uint32_t>(
            (s.header.samples>s.position?s.header.samples-s.position:0)/s.header.frame_samples);
        if (atrac_trace()) atrac_line("remain_frame id="+std::to_string(c.gpr[4])+" -> "+std::to_string(remaining));
        output(r.memory(),c.gpr[5],remaining);c.set_gpr(2,0);
    });
    bind(0x61EB33F5,[](auto &,auto &c){
        if (atrac_trace()) atrac_line("release id="+std::to_string(c.gpr[4]));
        streams.erase(c.gpr[4]);c.set_gpr(2,0);
    });
}
} // namespace motorstorm
