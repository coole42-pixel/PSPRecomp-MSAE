#include "vcs_media_decoder.hpp"

#include <algorithm>
#include <cerrno>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <vector>
#include <mutex>

extern "C" {
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libavutil/imgutils.h>
#include <libavutil/opt.h>
#include <libswresample/swresample.h>
#include <libswscale/swscale.h>
}

#if defined(PSPRECOMP_AT3_STANDALONE)
#include <array>
#include <cmath>
#include "at3_decoders.h"
#endif

namespace vcs {
namespace {

#if defined(PSPRECOMP_AT3_STANDALONE)
// Builds whose FFmpeg has no atrac3/atrac3p decoder (the Android arm64 archive)
// decode ATRAC with FFmpeg's own decoders, extracted to stand alone
// (third_party/at3_standalone). Output matches what the FFmpeg path produces:
// every frame from the first data block, converted to interleaved S16.
class StandaloneAtrac {
public:
    ~StandaloneAtrac() { close(); }
    void close() noexcept {
        if (plus_ != nullptr) atrac3p_free(plus_);
        if (classic_ != nullptr) atrac3_free(classic_);
        plus_ = nullptr;
        classic_ = nullptr;
    }
    [[nodiscard]] bool open_plus(int channels, int block_align) {
        close();
        channels_ = channels;
        block_align_ = block_align;
        plus_ = atrac3p_alloc(channels, &block_align_);
        return plus_ != nullptr;
    }
    [[nodiscard]] bool open_classic(int channels, int block_align, const std::uint8_t *extra, int extra_size) {
        close();
        channels_ = channels;
        block_align_ = block_align;
        classic_ = atrac3_alloc(channels, &block_align_, extra, extra_size);
        return classic_ != nullptr;
    }
    [[nodiscard]] bool is_open() const noexcept { return plus_ != nullptr || classic_ != nullptr; }
    [[nodiscard]] int block_align() const noexcept { return block_align_; }
    [[nodiscard]] int channels() const noexcept { return channels_; }
    // Decodes one block into left()/right(); returns the sample count (0: bad block).
    int decode(const std::uint8_t *data, int size) {
        float *out[2]{left_, right_};
        int samples = 0;
        const int used = plus_ != nullptr ? atrac3p_decode_frame(plus_, out, &samples, data, size)
                                          : atrac3_decode_frame(classic_, out, &samples, data, size);
        if (used < 0 || samples <= 0) return 0;
        if (channels_ < 2) std::copy_n(left_, samples, right_);
        return samples;
    }
    [[nodiscard]] const float *left() const noexcept { return left_; }
    [[nodiscard]] const float *right() const noexcept { return right_; }

private:
    ATRAC3PContext *plus_{};
    ATRAC3Context *classic_{};
    int channels_{2};
    int block_align_{};
    float left_[4096]{};
    float right_[4096]{};
};

// swresample's float -> S16 conversion (round to nearest, clip).
std::int16_t float_to_s16(float value) {
    return static_cast<std::int16_t>(std::clamp(std::lrintf(value * 32768.0f), -32768L, 32767L));
}

// RIFF/WAVE .at3 layout: the codec (0x0270 ATRAC3, 0xFFFE + ATRAC3+ GUID),
// channels, rate, block size, ATRAC3 extradata and the data chunk range.
struct At3File {
    bool plus{};
    int channels{}, rate{}, block_align{};
    std::vector<std::uint8_t> extra;
    std::size_t data_begin{}, data_end{};
};
bool parse_at3(const std::vector<std::uint8_t> &file, At3File &out) {
    const auto u16 = [&](std::size_t at) { return static_cast<unsigned>(file[at] | (file[at + 1] << 8)); };
    const auto u32 = [&](std::size_t at) {
        return static_cast<std::uint32_t>(file[at] | (file[at + 1] << 8) | (file[at + 2] << 16)) |
               (static_cast<std::uint32_t>(file[at + 3]) << 24);
    };
    if (file.size() < 12 || std::memcmp(file.data(), "RIFF", 4) != 0 || std::memcmp(file.data() + 8, "WAVE", 4) != 0)
        return false;
    bool have_format = false;
    for (std::size_t at = 12; at + 8 <= file.size();) {
        const std::uint32_t size = u32(at + 4);
        const std::size_t body = at + 8;
        const std::size_t end = std::min<std::size_t>(file.size(), body + size);
        if (std::memcmp(file.data() + at, "fmt ", 4) == 0 && size >= 16 && body + 16 <= file.size()) {
            const unsigned tag = u16(body);
            out.channels = static_cast<int>(u16(body + 2));
            out.rate = static_cast<int>(u32(body + 4));
            out.block_align = static_cast<int>(u16(body + 12));
            const unsigned extension = size >= 18 && body + 18 <= file.size() ? u16(body + 16) : 0u;
            if (tag == 0x0270u) {
                out.plus = false;
                if (body + 18 + extension <= end)
                    out.extra.assign(file.begin() + static_cast<std::ptrdiff_t>(body + 18),
                                     file.begin() + static_cast<std::ptrdiff_t>(body + 18 + extension));
            } else if (tag == 0xFFFEu && extension >= 22 && body + 28 <= end) {
                static constexpr std::uint8_t kAtrac3Plus[4]{0xBF, 0xAA, 0x23, 0xE9};
                if (std::memcmp(file.data() + body + 24, kAtrac3Plus, 4) != 0) return false;
                out.plus = true;
            } else {
                return false;
            }
            have_format = true;
        } else if (std::memcmp(file.data() + at, "data", 4) == 0) {
            out.data_begin = body;
            out.data_end = end;
            break;
        }
        at = body + size + (size & 1u);
    }
    return have_format && out.data_end > out.data_begin && out.channels >= 1 && out.channels <= 2 &&
           out.rate > 0 && out.block_align > 0;
}
#endif

// Both decoders pull one packet at a time and keep whatever the decoder hands
// back in a buffer, because the caller asks for byte counts that have nothing
// to do with frame boundaries -- it is draining a stream, exactly as it did
// from the pipe.
struct DecodeCommon {
    AVFormatContext *format{};
    AVCodecContext *codec{};
    AVPacket *packet{};
    AVFrame *frame{};
    int stream_index{-1};
    bool eof{};
    int packet_consumed{};
    std::vector<std::uint8_t> pending;
    std::size_t pending_read{};
    // Custom AVIO for FFmpeg builds that ship without the file protocol
    // (the Android arm64 library is one). The bytes outlive format->pb.
    struct MemoryIo {
        const std::uint8_t *data{};
        std::size_t size{};
        std::size_t pos{};
    };
    std::vector<std::uint8_t> file_bytes;
    MemoryIo memory{};
    AVIOContext *io{};

    ~DecodeCommon() { release(); }

    void release() noexcept {
        if (frame != nullptr) av_frame_free(&frame);
        if (packet != nullptr) av_packet_free(&packet);
        if (codec != nullptr) avcodec_free_context(&codec);
        if (format != nullptr) {
            // Custom IO is not freed by avformat_close_input.
            format->pb = nullptr;
            avformat_close_input(&format);
        }
        if (io != nullptr) {
            av_freep(&io->buffer);
            av_freep(&io);
        }
        file_bytes.clear();
        memory = {};
        stream_index = -1;
        eof = false;
        packet_consumed = 0;
        pending.clear();
        pending_read = 0u;
    }

    static int read_memory(void *opaque, std::uint8_t *buf, int buf_size) {
        auto *reader = static_cast<MemoryIo *>(opaque);
        if (reader->pos >= reader->size)
            return AVERROR_EOF;
        const int count = std::min(buf_size, static_cast<int>(reader->size - reader->pos));
        std::memcpy(buf, reader->data + reader->pos, static_cast<std::size_t>(count));
        reader->pos += static_cast<std::size_t>(count);
        return count;
    }
    static std::int64_t seek_memory(void *opaque, std::int64_t offset, int whence) {
        auto *reader = static_cast<MemoryIo *>(opaque);
        if (whence == AVSEEK_SIZE)
            return static_cast<std::int64_t>(reader->size);
        whence &= ~AVSEEK_FORCE;
        std::int64_t next = offset;
        if (whence == SEEK_CUR)
            next = static_cast<std::int64_t>(reader->pos) + offset;
        else if (whence == SEEK_END)
            next = static_cast<std::int64_t>(reader->size) + offset;
        else if (whence != SEEK_SET)
            return AVERROR(EINVAL);
        if (next < 0 || static_cast<std::size_t>(next) > reader->size)
            return AVERROR(EINVAL);
        reader->pos = static_cast<std::size_t>(next);
        return next;
    }
    [[nodiscard]] bool open_memory(const std::filesystem::path &path) {
        std::ifstream in(path, std::ios::binary);
        if (!in)
            return false;
        in.seekg(0, std::ios::end);
        const auto length = in.tellg();
        in.seekg(0);
        if (length <= 0)
            return false;
        file_bytes.resize(static_cast<std::size_t>(length));
        if (!in.read(reinterpret_cast<char *>(file_bytes.data()), length))
            return false;
        memory = MemoryIo{file_bytes.data(), file_bytes.size(), 0};
        constexpr int kBuffer = 32 * 1024;
        auto *buffer = static_cast<unsigned char *>(av_malloc(kBuffer));
        if (buffer == nullptr)
            return false;
        io = avio_alloc_context(buffer, kBuffer, 0, &memory, &read_memory, nullptr, &seek_memory);
        if (io == nullptr) {
            av_free(buffer);
            return false;
        }
        format = avformat_alloc_context();
        if (format == nullptr)
            return false;
        format->pb = io;
        format->flags |= AVFMT_FLAG_CUSTOM_IO;
        format->probesize = 8 * 1024 * 1024;
        // PSMF starts with a 2048-byte header. Name the MPEG-PS demuxer so a
        // short probe does not reject the file before the pack start code.
        auto *mpeg = av_find_input_format("mpeg");
        if (avformat_open_input(&format, nullptr, mpeg, nullptr) < 0) {
            format = nullptr;
            return false;
        }
        return true;
    }

    [[nodiscard]] bool open_stream(const std::filesystem::path &path, AVMediaType type) {
        release();
#if LIBAVCODEC_VERSION_INT < AV_VERSION_INT(57, 37, 100)
        static std::once_flag registered;
        std::call_once(registered, [] { av_register_all(); });
#endif
#if defined(__ANDROID__)
        // The arm64 FFmpeg used here is built with --disable-protocols, so a
        // path open cannot see the file. Read it ourselves.
        if (!open_memory(path)) return false;
#else
        if (avformat_open_input(&format, path.string().c_str(), nullptr, nullptr) < 0 && !open_memory(path))
            return false;
#endif
        if (avformat_find_stream_info(format, nullptr) < 0) return false;
#if LIBAVCODEC_VERSION_INT < AV_VERSION_INT(57, 37, 100)
        AVCodec *decoder = nullptr;
#else
        const AVCodec *decoder = nullptr;
#endif
        stream_index = av_find_best_stream(format, type, -1, -1, &decoder, 0);
        if (stream_index < 0 || decoder == nullptr) return false;
        codec = avcodec_alloc_context3(decoder);
        if (codec == nullptr) return false;
#if LIBAVCODEC_VERSION_INT < AV_VERSION_INT(57, 37, 100)
        if (avcodec_copy_context(codec, format->streams[stream_index]->codec) < 0)
#else
        if (avcodec_parameters_to_context(codec, format->streams[stream_index]->codecpar) < 0)
#endif
            return false;
        if (avcodec_open2(codec, decoder, nullptr) < 0) return false;
        packet = av_packet_alloc();
        frame = av_frame_alloc();
        return packet != nullptr && frame != nullptr;
    }

    // Hands the next decoded frame to `consume`, which appends its bytes to
    // `pending`. Returns false once the file and the decoder are both drained.
    template <typename Consume>
    bool decode_one(Consume &&consume) {
#if LIBAVCODEC_VERSION_INT < AV_VERSION_INT(57, 37, 100)
        for (;;) {
            if (packet_consumed >= packet->size && !eof) {
                av_packet_unref(packet);
                do {
                    if (av_read_frame(format, packet) < 0) { eof = true; break; }
                    if (packet->stream_index == stream_index) break;
                    av_packet_unref(packet);
                } while (true);
                packet_consumed = 0;
            }
            AVPacket input = *packet;
            if (eof) { input.data = nullptr; input.size = 0; }
            else { input.data += packet_consumed; input.size -= packet_consumed; }
            int got = 0;
            const int consumed = codec->codec_type == AVMEDIA_TYPE_VIDEO
                ? avcodec_decode_video2(codec, frame, &got, &input)
                : avcodec_decode_audio4(codec, frame, &got, &input);
            if (consumed < 0) return false;
            packet_consumed += consumed;
            if (got) { consume(frame); av_frame_unref(frame); return true; }
            if (eof) return false;
            if (consumed == 0) packet_consumed = packet->size;
        }
#else
        for (;;) {
            const int received = avcodec_receive_frame(codec, frame);
            if (received == 0) {
                consume(frame);
                av_frame_unref(frame);
                return true;
            }
            if (received != AVERROR(EAGAIN) && received != AVERROR_EOF) return false;
            if (received == AVERROR_EOF) return false;
            if (eof) {
                // Flush: a decoder can be holding frames after the last packet.
                if (avcodec_send_packet(codec, nullptr) < 0) return false;
                const int flushed = avcodec_receive_frame(codec, frame);
                if (flushed < 0) return false;
                consume(frame);
                av_frame_unref(frame);
                return true;
            }
            const int read = av_read_frame(format, packet);
            if (read < 0) {
                eof = true;
                continue;
            }
            if (packet->stream_index != stream_index) {
                av_packet_unref(packet);
                continue;
            }
            const int sent = avcodec_send_packet(codec, packet);
            av_packet_unref(packet);
            if (sent < 0 && sent != AVERROR(EAGAIN)) return false;
        }
#endif
    }

    // Serves `output` out of `pending`, refilling through `refill` as needed.
    template <typename Refill>
    std::size_t drain(std::span<std::uint8_t> output, Refill &&refill) {
        std::size_t written = 0u;
        while (written < output.size()) {
            if (pending_read >= pending.size()) {
                pending.clear();
                pending_read = 0u;
                if (!refill()) break;
                if (pending.empty()) break;
            }
            const std::size_t available = pending.size() - pending_read;
            const std::size_t take = std::min(available, output.size() - written);
            std::copy_n(pending.begin() + static_cast<std::ptrdiff_t>(pending_read), take,
                        output.begin() + static_cast<std::ptrdiff_t>(written));
            pending_read += take;
            written += take;
        }
        return written;
    }
};

} // namespace

// ---------------------------------------------------------------------------

struct AudioStreamDecoder::State {
    DecodeCommon common;
    SwrContext *resampler{};
    std::uint32_t sample_rate{};
    std::uint32_t channels{};
#if defined(PSPRECOMP_AT3_STANDALONE)
    std::unique_ptr<StandaloneAtrac> atrac;
    std::vector<std::uint8_t> file;
    At3File layout;
    std::size_t cursor{};
    double resample_phase{};
    // Last decoded frame, interleaved stereo float, for rate conversion.
    std::vector<float> history;

    // Decodes the next block into common.pending as interleaved S16.
    bool refill_standalone() {
        while (cursor + static_cast<std::size_t>(layout.block_align) <= layout.data_end) {
            const int samples = atrac->decode(file.data() + cursor, layout.block_align);
            cursor += static_cast<std::size_t>(layout.block_align);
            if (samples <= 0) continue;
            const float *channels_in[2]{atrac->left(), atrac->right()};
            auto &out = common.pending;
            out.clear();
            if (static_cast<int>(sample_rate) == layout.rate) {
                out.resize(static_cast<std::size_t>(samples) * channels * sizeof(std::int16_t));
                auto *pcm = reinterpret_cast<std::int16_t *>(out.data());
                for (int i = 0; i < samples; ++i)
                    for (std::uint32_t c = 0; c < channels; ++c)
                        *pcm++ = float_to_s16(channels_in[std::min<std::uint32_t>(c, 1u)][i]);
                return true;
            }
            // Linear rate conversion across frame boundaries.
            for (int i = 0; i < samples; ++i) {
                history.push_back(channels_in[0][i]);
                history.push_back(channels_in[1][i]);
            }
            const double step = static_cast<double>(layout.rate) / static_cast<double>(sample_rate);
            const std::size_t frames = history.size() / 2;
            while (resample_phase + 1.0 < static_cast<double>(frames)) {
                const auto index = static_cast<std::size_t>(resample_phase);
                const float t = static_cast<float>(resample_phase - static_cast<double>(index));
                for (std::uint32_t c = 0; c < channels; ++c) {
                    const std::size_t lane = std::min<std::uint32_t>(c, 1u);
                    const float value = history[index * 2 + lane] * (1.0f - t) + history[(index + 1) * 2 + lane] * t;
                    const std::int16_t sample = float_to_s16(value);
                    const auto *bytes = reinterpret_cast<const std::uint8_t *>(&sample);
                    out.insert(out.end(), bytes, bytes + sizeof(sample));
                }
                resample_phase += step;
            }
            const auto consumed = std::min(static_cast<std::size_t>(resample_phase), frames - 1);
            history.erase(history.begin(), history.begin() + static_cast<std::ptrdiff_t>(consumed * 2));
            resample_phase -= static_cast<double>(consumed);
            if (!out.empty()) return true;
        }
        return false;
    }
#endif

    ~State() {
        if (resampler != nullptr) swr_free(&resampler);
    }
};

AudioStreamDecoder::AudioStreamDecoder() : state_(std::make_unique<State>()) {}
AudioStreamDecoder::~AudioStreamDecoder() = default;
AudioStreamDecoder::AudioStreamDecoder(AudioStreamDecoder &&) noexcept = default;
AudioStreamDecoder &AudioStreamDecoder::operator=(AudioStreamDecoder &&) noexcept = default;

bool AudioStreamDecoder::is_open() const noexcept {
#if defined(PSPRECOMP_AT3_STANDALONE)
    if (state_->atrac != nullptr && state_->atrac->is_open()) return true;
#endif
    return state_->common.codec != nullptr;
}

void AudioStreamDecoder::close() noexcept {
    if (state_->resampler != nullptr) swr_free(&state_->resampler);
    state_->common.release();
#if defined(PSPRECOMP_AT3_STANDALONE)
    state_->atrac.reset();
    state_->file.clear();
    state_->file.shrink_to_fit();
    state_->history.clear();
    state_->cursor = 0u;
    state_->resample_phase = 0.0;
#endif
}

bool AudioStreamDecoder::open(const std::filesystem::path &path, std::uint32_t sample_rate,
                              std::uint32_t channels, std::uint64_t start_sample) {
    close();
    if (sample_rate == 0u || channels == 0u) return false;
#if defined(PSPRECOMP_AT3_STANDALONE)
    {
        State &state = *state_;
        std::ifstream in(path, std::ios::binary);
        if (in) {
            in.seekg(0, std::ios::end);
            const auto length = in.tellg();
            in.seekg(0);
            if (length > 0) {
                state.file.resize(static_cast<std::size_t>(length));
                if (!in.read(reinterpret_cast<char *>(state.file.data()), length)) state.file.clear();
            }
        }
        if (parse_at3(state.file, state.layout)) {
            state.atrac = std::make_unique<StandaloneAtrac>();
            const bool opened = state.layout.plus
                ? state.atrac->open_plus(state.layout.channels, state.layout.block_align)
                : state.atrac->open_classic(state.layout.channels, state.layout.block_align,
                                            state.layout.extra.empty() ? nullptr : state.layout.extra.data(),
                                            static_cast<int>(state.layout.extra.size()));
            if (!opened) {
                close();
                return false;
            }
            state.sample_rate = sample_rate;
            state.channels = channels;
            state.cursor = state.layout.data_begin;
            // Sample-exact start: decode from the top and discard, as the
            // FFmpeg path's caller does for loop restarts.
            for (std::uint64_t skip = start_sample * channels * sizeof(std::int16_t); skip > 0;) {
                std::array<std::uint8_t, 8192> scratch{};
                const auto count = static_cast<std::size_t>(std::min<std::uint64_t>(skip, scratch.size()));
                const auto got = read(std::span<std::uint8_t>(scratch.data(), count));
                if (got == 0u) break;
                skip -= got;
            }
            return true;
        }
        state.file.clear();
    }
#endif
    if (!state_->common.open_stream(path, AVMEDIA_TYPE_AUDIO)) return false;
    state_->sample_rate = sample_rate;
    state_->channels = channels;

    // Always resample: ATRAC3+ decodes to planar float, and the guest wants
    // interleaved signed 16-bit at the rate its own header declares.
#if LIBAVUTIL_VERSION_MAJOR < 57
    state_->resampler = swr_alloc_set_opts(nullptr, av_get_default_channel_layout(static_cast<int>(channels)),
        AV_SAMPLE_FMT_S16, static_cast<int>(sample_rate),
        state_->common.codec->channel_layout ? state_->common.codec->channel_layout : av_get_default_channel_layout(state_->common.codec->channels),
        state_->common.codec->sample_fmt, state_->common.codec->sample_rate, 0, nullptr);
    if (!state_->resampler) return false;
#else
    AVChannelLayout out_layout{};
    av_channel_layout_default(&out_layout, static_cast<int>(channels));
    if (swr_alloc_set_opts2(&state_->resampler, &out_layout, AV_SAMPLE_FMT_S16,
                            static_cast<int>(sample_rate), &state_->common.codec->ch_layout,
                            state_->common.codec->sample_fmt,
                            state_->common.codec->sample_rate, 0, nullptr) < 0) {
        av_channel_layout_uninit(&out_layout);
        return false;
    }
    av_channel_layout_uninit(&out_layout);
#endif
    if (swr_init(state_->resampler) < 0) return false;

    if (start_sample != 0u) {
        // Seeking is in the stream's time base, not in samples.
        const AVStream *stream = state_->common.format->streams[state_->common.stream_index];
        const std::int64_t timestamp = av_rescale_q(
            static_cast<std::int64_t>(start_sample), AVRational{1, static_cast<int>(sample_rate)},
            stream->time_base);
        if (av_seek_frame(state_->common.format, state_->common.stream_index, timestamp,
                          AVSEEK_FLAG_BACKWARD) >= 0) {
            avcodec_flush_buffers(state_->common.codec);
        }
    }
    return true;
}

std::size_t AudioStreamDecoder::read(std::span<std::uint8_t> output) {
    if (!is_open()) return 0u;
    State &state = *state_;
#if defined(PSPRECOMP_AT3_STANDALONE)
    if (state.atrac != nullptr)
        return state.common.drain(output, [&state]() -> bool { return state.refill_standalone(); });
#endif
    return state.common.drain(output, [&state]() -> bool {
        return state.common.decode_one([&state](AVFrame *frame) {
            const int out_samples = static_cast<int>(av_rescale_rnd(
                swr_get_delay(state.resampler, frame->sample_rate) + frame->nb_samples,
                static_cast<std::int64_t>(state.sample_rate), frame->sample_rate, AV_ROUND_UP));
            const std::size_t bytes =
                static_cast<std::size_t>(out_samples) * state.channels * sizeof(std::int16_t);
            state.common.pending.resize(bytes);
            std::uint8_t *destination = state.common.pending.data();
            const int converted = swr_convert(state.resampler, &destination, out_samples,
                                              const_cast<const std::uint8_t **>(frame->data),
                                              frame->nb_samples);
            state.common.pending.resize(converted <= 0 ? 0u :
                static_cast<std::size_t>(converted) * state.channels * sizeof(std::int16_t));
        });
    });
}

// ---------------------------------------------------------------------------

namespace {

// Every 0xBD PES payload, minus its four-byte PSP substream header.
std::vector<std::uint8_t> extract_pmf_private_stream(const std::filesystem::path &path,std::uint32_t channel) {
    std::vector<std::uint8_t> file;
    {
        std::FILE *handle = std::fopen(path.string().c_str(), "rb");
        if (handle == nullptr) return {};
        std::fseek(handle, 0, SEEK_END);
        const long size = std::ftell(handle);
        std::fseek(handle, 0, SEEK_SET);
        if (size > 0) {
            file.resize(static_cast<std::size_t>(size));
            if (std::fread(file.data(), 1u, file.size(), handle) != file.size()) file.clear();
        }
        std::fclose(handle);
    }
    std::vector<std::uint8_t> elementary;
    for (std::size_t i = 0u; i + 9u < file.size();) {
        if (!(file[i] == 0x00u && file[i + 1u] == 0x00u && file[i + 2u] == 0x01u &&
              file[i + 3u] == 0xBDu)) {
            ++i;
            continue;
        }
        const std::size_t packet_length =
            static_cast<std::size_t>(file[i + 4u]) * 256u + file[i + 5u];
        const std::size_t header_data_length = file[i + 8u];
        const std::size_t payload = i + 9u + header_data_length;
        // The length counts everything after the length field itself.
        if (packet_length < 3u + header_data_length) { ++i; continue; }
        const std::size_t payload_size = packet_length - 3u - header_data_length;
        constexpr std::size_t kSubstreamHeader = 4u;
        if (payload + payload_size > file.size() || payload_size <= kSubstreamHeader) {
            ++i;
            continue;
        }
        // Private stream 1 can carry several languages. Combining their PES
        // payloads corrupts the ATRAC frames at every packet boundary.
        if(file[payload]==channel)
            elementary.insert(elementary.end(), file.begin() + static_cast<std::ptrdiff_t>(payload + kSubstreamHeader),
                              file.begin() + static_cast<std::ptrdiff_t>(payload + payload_size));
        i = payload + payload_size;
    }
    return elementary;
}

// ATRAC3+ frames start with a 0x0FD0 sync. The frame size is not in the PMF in
// any form this code trusts, so it is measured: the distance between the first
// two syncs is the frame size, and the decoder is configured with it.
// Bytes of PSP frame header before the ATRAC3+ payload in a PMF.
constexpr std::size_t kPmfFrameHeader = 8u;

std::size_t measure_atrac3p_frame_size(std::span<const std::uint8_t> stream) {
    const auto sync_at = [&](std::size_t index) {
        return index + 1u < stream.size() && stream[index] == 0x0Fu && stream[index + 1u] == 0xD0u;
    };
    std::size_t first = stream.size();
    for (std::size_t i = 0u; i + 1u < stream.size(); ++i) {
        if (sync_at(i)) { first = i; break; }
    }
    if (first == stream.size()) return 0u;
    for (std::size_t i = first + 2u; i + 1u < stream.size(); ++i) {
        if (sync_at(i)) {
            if(first+8>stream.size()) return 0;
            // The 10-bit size code describes the ATRAC payload in eight-byte
            // units. Do not mistake a sync-like pattern inside coded audio for
            // the next frame boundary.
            return 8u+((((stream[first+2]&3u)<<8u)|stream[first+3])+1u)*8u;
        }
    }
    return 0u;
}

} // namespace

struct PmfAudioDecoder::State {
    AVCodecContext *codec{};
    AVPacket *packet{};
    AVFrame *frame{};
    SwrContext *resampler{};
    std::vector<std::uint8_t> stream;
    std::size_t cursor{};
    std::size_t frame_size{};
    bool diag{};
    // The whole soundtrack, decoded at open. See PmfAudioDecoder::open.
    std::vector<std::uint8_t> pcm;
    std::size_t pcm_read{};
    // Decoded by the standalone ATRAC3+ decoder (no AVCodecContext).
    bool standalone{};

    ~State() { release(); }

    void release() noexcept {
        if (resampler != nullptr) swr_free(&resampler);
        if (frame != nullptr) av_frame_free(&frame);
        if (packet != nullptr) av_packet_free(&packet);
        if (codec != nullptr) avcodec_free_context(&codec);
        stream.clear();
        pcm.clear();
        pcm.shrink_to_fit();
        cursor = 0u;
        pcm_read = 0u;
        frame_size = 0u;
        standalone = false;
    }
};

PmfAudioDecoder::PmfAudioDecoder() : state_(std::make_unique<State>()) {}
PmfAudioDecoder::~PmfAudioDecoder() = default;
PmfAudioDecoder::PmfAudioDecoder(PmfAudioDecoder &&) noexcept = default;
PmfAudioDecoder &PmfAudioDecoder::operator=(PmfAudioDecoder &&) noexcept = default;

bool PmfAudioDecoder::is_open() const noexcept { return state_->codec != nullptr || state_->standalone; }
void PmfAudioDecoder::close() noexcept { state_->release(); }

bool PmfAudioDecoder::open(const std::filesystem::path &path,std::uint32_t channel) {
    close();
    State &state = *state_;
    state.stream = extract_pmf_private_stream(path,channel);
    const bool diag = std::getenv("PSPRECOMP_MPEG_DIAG") != nullptr;
    state.diag = diag;
    if (diag) std::fprintf(stderr, "[pmf-audio] elementary=%zu bytes\n", state.stream.size());
    if (state.stream.empty()) return false;
    state.frame_size = measure_atrac3p_frame_size(state.stream);
    if (diag) std::fprintf(stderr, "[pmf-audio] frame_size=%zu\n", state.frame_size);
    if (state.frame_size == 0u) return false;
    // Skip whatever precedes the first sync.
    for (std::size_t i = 0u; i + 1u < state.stream.size(); ++i) {
        if (state.stream[i] == 0x0Fu && state.stream[i + 1u] == 0xD0u) { state.cursor = i; break; }
    }

#if defined(PSPRECOMP_AT3_STANDALONE)
    {
        // Same block layout as below: 8-byte PSP header, then ATRAC3+.
        StandaloneAtrac atrac;
        if (!atrac.open_plus(2, static_cast<int>(state.frame_size - kPmfFrameHeader))) return false;
        const auto to_pcm = [](float value) {
            return static_cast<std::int16_t>(std::clamp(value, -1.0f, 1.0f) * 32767.0f);
        };
        state.pcm.reserve(static_cast<std::size_t>(state.stream.size() / state.frame_size) *
                          2048u * 2u * sizeof(std::int16_t));
        while (state.cursor + state.frame_size <= state.stream.size()) {
            const std::size_t payload = state.cursor + kPmfFrameHeader;
            state.cursor += state.frame_size;
            const int samples = atrac.decode(state.stream.data() + payload,
                                             static_cast<int>(state.frame_size - kPmfFrameHeader));
            for (int i = 0; i < samples; ++i) {
                const std::int16_t pair[2]{to_pcm(atrac.left()[i]), to_pcm(atrac.right()[i])};
                const auto *bytes = reinterpret_cast<const std::uint8_t *>(pair);
                state.pcm.insert(state.pcm.end(), bytes, bytes + sizeof(pair));
            }
        }
        if (diag) std::fprintf(stderr, "[pmf-audio] standalone pcm=%zu bytes\n", state.pcm.size());
        state.pcm_read = 0u;
        state.standalone = !state.pcm.empty();
        return state.standalone;
    }
#endif
    const AVCodec *decoder = avcodec_find_decoder(AV_CODEC_ID_ATRAC3P);
    if (decoder == nullptr) return false;
    state.codec = avcodec_alloc_context3(decoder);
    if (state.codec == nullptr) return false;
    // PSP video audio is 44100 Hz stereo; the decoder needs the frame size as
    // block_align because there is no container to tell it.
    // Each 752-byte block is an 8-byte PSP frame header -- the 0x0FD0 sync and
    // three more words -- followed by 744 bytes of ATRAC3+. The sync is not
    // part of the frame: the .AT3 files the radio decodes start at 0x39, not at
    // 0x0FD0, and feeding the header through made the decoder reject every
    // packet as invalid data. Measured by wrapping the extracted stream in a
    // known-good AT3 header and walking the skip until it decoded: 8 is the
    // only value that does.
    state.codec->sample_rate = 44100;
    state.codec->block_align = static_cast<int>(state.frame_size - kPmfFrameHeader);
#if LIBAVUTIL_VERSION_MAJOR < 57
    state.codec->channels = 2;
    state.codec->channel_layout = AV_CH_LAYOUT_STEREO;
#else
    av_channel_layout_default(&state.codec->ch_layout, 2);
#endif
    if (avcodec_open2(state.codec, decoder, nullptr) < 0) {
        if (diag) std::fprintf(stderr, "[pmf-audio] avcodec_open2 failed\n");
        return false;
    }
    state.packet = av_packet_alloc();
    state.frame = av_frame_alloc();
    if (state.packet == nullptr || state.frame == nullptr) return false;

    // Decoded whole, here, instead of a frame at a time while the movie plays.
    // A PMF soundtrack is about 1.9 MB of PCM and takes milliseconds, and doing
    // it up front takes the work off the guest's timeline entirely -- the
    // thread that has to keep 60 vblanks a second no longer stops to decode
    // audio between them.
    state.pcm.reserve(static_cast<std::size_t>(state.stream.size() / state.frame_size) *
                      2048u * 2u * sizeof(std::int16_t));
    while (state.cursor + state.frame_size <= state.stream.size()) {
        const std::size_t payload = state.cursor + kPmfFrameHeader;
        const std::size_t payload_size = state.frame_size - kPmfFrameHeader;
        state.cursor += state.frame_size;
        av_packet_unref(state.packet);
        if (av_new_packet(state.packet, static_cast<int>(payload_size)) < 0) break;
        std::copy_n(state.stream.begin() + static_cast<std::ptrdiff_t>(payload),
                    payload_size, state.packet->data);
#if LIBAVCODEC_VERSION_INT < AV_VERSION_INT(57, 37, 100)
        int got = 0;
        const int sent = avcodec_decode_audio4(state.codec, state.frame, &got, state.packet);
#else
        const int sent = avcodec_send_packet(state.codec, state.packet);
#endif
        av_packet_unref(state.packet);
        if (sent < 0) {
            if (diag) std::fprintf(stderr, "[pmf-audio] send_packet=%d\n", sent);
            continue;
        }
#if LIBAVCODEC_VERSION_INT < AV_VERSION_INT(57, 37, 100)
        if (!got) continue;
#else
        if (avcodec_receive_frame(state.codec, state.frame) < 0) continue;
#endif
        const int samples = state.frame->nb_samples;
        const auto *left = reinterpret_cast<const float *>(state.frame->data[0]);
        const auto *right =
#if LIBAVUTIL_VERSION_MAJOR < 57
            state.frame->channels > 1
#else
            state.frame->ch_layout.nb_channels > 1
#endif
            ? reinterpret_cast<const float *>(state.frame->data[1]) : left;
        const auto to_pcm = [](float value) {
            return static_cast<std::int16_t>(std::clamp(value, -1.0f, 1.0f) * 32767.0f);
        };
        for (int i = 0; i < samples; ++i) {
            const std::int16_t pair[2]{to_pcm(left[i]), to_pcm(right[i])};
            const auto *bytes = reinterpret_cast<const std::uint8_t *>(pair);
            state.pcm.insert(state.pcm.end(), bytes, bytes + sizeof(pair));
        }
        av_frame_unref(state.frame);
    }
    if (diag) std::fprintf(stderr, "[pmf-audio] pcm=%zu bytes\n", state.pcm.size());
    state.pcm_read = 0u;
    return !state.pcm.empty();
}

std::size_t PmfAudioDecoder::read(std::span<std::uint8_t> output) {
    if (!is_open()) return 0u;
    State &state = *state_;
    // A copy out of the buffer decoded at open -- no FFmpeg call happens while
    // the movie is on screen.
    //
    // The guest asks for one access unit at a time and an access unit is one
    // ATRAC3+ frame: 2048 samples, 8192 bytes, 46.4 ms, which is also what its
    // pts advances by. Serving exactly what was asked for keeps picture and
    // sound on the same clock. The earlier version decoded here instead, and
    // could hand back a short frame; from then on audio consumed the stream
    // faster than the movie played it.
    const std::size_t available = state.pcm.size() - state.pcm_read;
    const std::size_t take = std::min(available, output.size());
    if (take == 0u) return 0u;
    std::copy_n(state.pcm.begin() + static_cast<std::ptrdiff_t>(state.pcm_read), take,
                output.begin());
    state.pcm_read += take;
    return take;
}

// ---------------------------------------------------------------------------

struct VideoStreamDecoder::State {
    DecodeCommon common;
    SwsContext *scaler{};
    int width{};
    int height{};

    ~State() {
        if (scaler != nullptr) sws_freeContext(scaler);
    }
};

VideoStreamDecoder::VideoStreamDecoder() : state_(std::make_unique<State>()) {}
VideoStreamDecoder::~VideoStreamDecoder() = default;
VideoStreamDecoder::VideoStreamDecoder(VideoStreamDecoder &&) noexcept = default;
VideoStreamDecoder &VideoStreamDecoder::operator=(VideoStreamDecoder &&) noexcept = default;

bool VideoStreamDecoder::is_open() const noexcept { return state_->common.codec != nullptr; }

void VideoStreamDecoder::close() noexcept {
    if (state_->scaler != nullptr) {
        sws_freeContext(state_->scaler);
        state_->scaler = nullptr;
    }
    state_->common.release();
}

bool VideoStreamDecoder::open(const std::filesystem::path &path) {
    close();
    return state_->common.open_stream(path, AVMEDIA_TYPE_VIDEO);
}

std::size_t VideoStreamDecoder::read(std::span<std::uint8_t> output) {
    if (!is_open()) return 0u;
    State &state = *state_;
    return state.common.drain(output, [&state]() -> bool {
        return state.common.decode_one([&state](AVFrame *frame) {
            // The scaler is built on the first frame: the stream header does
            // not always carry the real dimensions, and rebuilding it per frame
            // would be pure waste since they never change afterwards.
            if (state.scaler == nullptr || state.width != frame->width ||
                state.height != frame->height) {
                if (state.scaler != nullptr) sws_freeContext(state.scaler);
                state.width = frame->width;
                state.height = frame->height;
                state.scaler = sws_getContext(
                    frame->width, frame->height, static_cast<AVPixelFormat>(frame->format),
                    frame->width, frame->height, AV_PIX_FMT_RGBA,
                    SWS_BILINEAR, nullptr, nullptr, nullptr);
            }
            if (state.scaler == nullptr) return;
            const std::size_t bytes = static_cast<std::size_t>(frame->width) * frame->height * 4u;
            state.common.pending.resize(bytes);
            std::uint8_t *destination = state.common.pending.data();
            const int stride = frame->width * 4;
            sws_scale(state.scaler, frame->data, frame->linesize, 0, frame->height,
                      &destination, &stride);
        });
    });
}

} // namespace vcs
