#pragma once

// Game-neutral PSP sceSasCore HLE.
//
// This is the shared SAS core extracted from the VCS profile: a small software
// PSX-ADPCM (VAG) decoder, a per-voice ADSR envelope, dry/effect mixing and the
// full sceSasCore API surface.  MotorStorm needs it for its audio bring-up and
// any other title with SAS audio can reuse it; profiles only call
// install_sce_sas_core_hle() and never carry their own copy.
//
// Output is a deterministic host-side software mix.  When no voice is active
// (or nothing has been configured yet) the output buffers are deterministic
// silence, never uninitialized guest memory.

#include <array>
#include <cstdint>
#include <vector>

namespace psprecomp {

class Runtime;
struct AllegrexContext;

enum class SasVoiceType : std::uint8_t {
    Off,
    Vag,
    Noise,
    Pcm,
};

enum class SasEnvelopePhase : std::uint8_t {
    Attack,
    Decay,
    Sustain,
    Release,
    Off,
};

struct SasVoiceState {
    SasVoiceType type{SasVoiceType::Off};
    std::uint32_t data_address{};
    std::int32_t data_size{};
    bool loop{};
    std::int32_t noise_frequency{};
    std::int32_t pitch{0x1000};
    std::int32_t left_volume{};
    std::int32_t right_volume{};
    std::int32_t effect_left_volume{};
    std::int32_t effect_right_volume{};
    std::array<std::int32_t, 4> adsr_rates{};
    // Attack rises, everything else falls -- the same parity rule that
    // __sceSasSetADSRmode enforces on the game (even for attack, odd for decay
    // and release).  Defaulting all four to zero broke that rule: zero is
    // "linear increase", so a voice configured through __sceSasSetADSR alone,
    // which sets rates and never touches the modes, walked its release phase
    // *upward*.  The envelope pinned at maximum, `height <= 0` never happened,
    // and a keyed-off voice never retired.
    std::array<std::int32_t, 4> adsr_modes{0, 1, 1, 1};
    std::int32_t sustain_level{};
    std::uint32_t simple_adsr1{};
    std::uint32_t simple_adsr2{};
    bool adsr_configured{};
    SasEnvelopePhase envelope_phase{SasEnvelopePhase::Off};
    std::uint32_t key_on_delay_samples{};
    bool on{};
    bool playing{};
    bool paused{};
    std::uint32_t envelope_height{};
    std::uint64_t total_samples{};
    std::uint64_t remaining_samples{};

    // Stateful VAG decoder.  A voice is frequently re-used, so a KeyOn must
    // rewind all of these fields rather than resuming at the end of the
    // previous sound.
    std::uint32_t decode_offset{};
    std::int32_t history1{};
    std::int32_t history2{};
    std::array<std::int16_t, 28> block_samples{};
    std::uint32_t block_position{28u};
    std::uint32_t loop_start_offset{};
    std::int32_t loop_start_history1{};
    std::int32_t loop_start_history2{};
    bool loop_start_valid{};
    bool finished{};

    // Pitch interpolation keeps a source sample pair alive across grain
    // boundaries, so pitched effects do not click at grain edges.
    std::int16_t current_sample{};
    std::int16_t next_sample{};
    bool current_sample_valid{};
    bool next_sample_valid{};
    std::uint32_t pitch_accumulator{}; // 12-bit fraction, 0x1000 == one sample

    // Deterministic noise generator for the SAS noise-voice path.
    std::uint32_t noise_lfsr{0x13579BDFu};
    std::uint32_t noise_phase{};
    std::int16_t noise_sample{};

    // Raw 16-bit signed PCM voice state (sceSasSetVoicePCM).  `data_size` holds
    // the sample count for PCM voices, `pcm_cursor` the next sample index.
    std::uint32_t pcm_cursor{};
    std::uint32_t pcm_loop_position{};
};

struct SasReverbState {
    std::int32_t type{-1};
    std::int32_t delay{};
    std::int32_t feedback{};
    std::uint32_t left_volume{};
    std::uint32_t right_volume{};
    // PSP SAS starts with the dry bus enabled.  Wet processing is opt-in.
    bool dry{true};
    bool wet{};
    // Persistent effect history, owned by the SAS core rather than rebuilt per
    // grain so effect-only voices do not disappear at grain boundaries and
    // delay tails remain continuous.
    std::vector<std::int32_t> history_left;
    std::vector<std::int32_t> history_right;
    std::size_t history_cursor{};
};

struct SasState {
    bool initialized{};
    std::uint32_t core_address{};
    std::uint32_t grain_size{};
    std::uint32_t max_voices{32u};
    std::uint32_t output_mode{};
    std::uint32_t sample_rate{44100u};
    std::array<SasVoiceState, 32> voices{};
    SasReverbState reverb{};
};

// PSP SAS error codes (sceSasCore.h).
inline constexpr std::uint32_t kSasErrorInvalidGrain = 0x80420001u;
inline constexpr std::uint32_t kSasErrorInvalidMaxVoices = 0x80420002u;
inline constexpr std::uint32_t kSasErrorInvalidOutputMode = 0x80420003u;
inline constexpr std::uint32_t kSasErrorInvalidSampleRate = 0x80420004u;
inline constexpr std::uint32_t kSasErrorBadAddress = 0x80420005u;
inline constexpr std::uint32_t kSasErrorInvalidVoice = 0x80420010u;
inline constexpr std::uint32_t kSasErrorInvalidNoiseFrequency = 0x80420011u;
inline constexpr std::uint32_t kSasErrorInvalidPitch = 0x80420012u;
inline constexpr std::uint32_t kSasErrorInvalidAdsrMode = 0x80420013u;
inline constexpr std::uint32_t kSasErrorInvalidParameter = 0x80420014u;
inline constexpr std::uint32_t kSasErrorInvalidLoop = 0x80420015u;
inline constexpr std::uint32_t kSasErrorVoicePaused = 0x80420016u;
inline constexpr std::uint32_t kSasErrorInvalidVolume = 0x80420018u;
inline constexpr std::uint32_t kSasErrorInvalidAdsrRate = 0x80420019u;
inline constexpr std::uint32_t kSasErrorInvalidPcmSize = 0x8042001Au;
inline constexpr std::uint32_t kSasErrorReverbType = 0x80420020u;
inline constexpr std::uint32_t kSasErrorReverbFeedback = 0x80420021u;
inline constexpr std::uint32_t kSasErrorReverbDelay = 0x80420022u;
inline constexpr std::uint32_t kSasErrorReverbVolume = 0x80420023u;
inline constexpr std::uint32_t kSasErrorBusy = 0x80420030u;
inline constexpr std::uint32_t kSasErrorAtrAC3AlreadySet = 0x80420040u;
inline constexpr std::uint32_t kSasErrorNotInitialized = 0x80420100u;
inline constexpr std::uint32_t kSasEnvelopeMaximum = 0x40000000u;

// Installs the complete sceSasCore HLE family (21 NIDs) on `runtime`.
// Calls are logged as "[SAS] init ..." on every successful/failed
// sceSasInit and per-call as "[AUDIO] ..." when PSPRECOMP_AUDIO_TRACE is set.
void install_sce_sas_core_hle(Runtime &runtime);

// Clears all SAS state.  Profiles call this from their reset() path and tests
// use it to isolate cases.
void reset_sas_hle_state() noexcept;

// Direct access to the shared state (tests and profile diagnostics).
SasState &sas_hle_state() noexcept;

// Advances a voice envelope by one output frame and returns the new height.
// Exposed because the envelope rules are worth testing in isolation.
std::uint32_t sas_step_envelope(SasVoiceState &voice) noexcept;

// Prints the "[SAS SUMMARY]" block (contexts, voice usage, call counters).
void report_sas_hle_summary();

} // namespace psprecomp
