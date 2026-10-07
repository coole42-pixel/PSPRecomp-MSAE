#!/usr/bin/env bash
# bench.sh <label> [resolution 0-5] [guest race seconds] [extra am-start args...]
# Default: fixed scale, 60 FPS, paced/audio-on. --es bench_mode throughput measures headroom.
set -euo pipefail
export MSYS_NO_PATHCONV=1
label=${1:?label}; resolution=${2:-2}; seconds=${3:-40}; shift $(( $# < 3 ? $# : 3 ))
[[ "$label" =~ ^[A-Za-z0-9][A-Za-z0-9_.-]*$ ]] || { echo 'Invalid output label' >&2; exit 2; }
[[ "$resolution" =~ ^[0-5]$ ]] || { echo 'Resolution must be 0 through 5' >&2; exit 2; }
[[ "$seconds" =~ ^[0-9]+$ ]] && (( seconds >= 1 && seconds <= 3600 )) || { echo 'Seconds must be 1 through 3600' >&2; exit 2; }
# Prefer the working SDK binary without letting another PATH entry kill its server.
if [[ -n "${MOTORSTORM_ADB:-}" ]]; then
    adb_bin=$MOTORSTORM_ADB
elif [[ -f /c/platform-tools/adb.exe ]]; then
    adb_bin=/c/platform-tools/adb.exe
elif [[ -n "${ANDROID_HOME:-}" && -f "$ANDROID_HOME/platform-tools/adb" ]]; then
    adb_bin=$ANDROID_HOME/platform-tools/adb
else
    adb_bin=$(command -v adb)
fi
device=()
[[ -z "${ANDROID_SERIAL:-}" ]] || device=(-s "$ANDROID_SERIAL")
adb() { "$adb_bin" "${device[@]}" "$@"; }
adb get-state >/dev/null
package=org.psprecomp.motorstorm
files=/sdcard/Android/data/$package/files
repo=$(cd "$(dirname "$0")/../../../.." && pwd)
run_id="$(date +%s)-$$"
out=$repo/out/android/bench/$label/$run_id
mkdir -p "$out"
host_path() { if command -v cygpath >/dev/null; then cygpath -m "$1"; else printf '%s' "$1"; fi; }
report="race-benchmark-$run_id.txt"
printf 'run_id=%s\nresolution=%s\nseconds=%s\nadb=%s\n' "$run_id" "$resolution" "$seconds" "$adb_bin" > "$out/run.txt"
adb shell dumpsys thermalservice > "$out/thermal-before.txt"
adb shell am force-stop "$package"
adb shell rm -f "$files/MotorStormAndroid.log" "$files/audio-capture.wav"
adb shell am start -W -n "$package/.GameActivity" --ei bench_seconds "$seconds" --ei resolution "$resolution" \
    --ei bench_fps 60 --es scale_mode off --es bench_mode paced --es bench_run_id "$run_id" "$@" > "$out/launch.txt"
start=$(date +%s)
timeout=${BENCH_TIMEOUT_SECONDS:-$(( 300 + seconds * 6 ))}
complete=0
while (( $(date +%s) - start < timeout )); do
    if adb shell test -s "$files/$report"; then complete=1; break; fi
    if [[ -z "$(adb shell pidof "$package:game" || true)" ]]; then
        echo 'Game exited before this run produced its report' >&2; break
    fi
    sleep 10
done
# Wait for clean native shutdown to drain all final GPU/display timing events.
if (( complete )); then
    for attempt in {1..20}; do
        if adb shell tail -n 1 "$files/${report%.txt}-gpu-frame-times.csv" 2>/dev/null | grep -q ',session_end,'; then break; fi
        [[ -n "$(adb shell pidof "$package:game" || true)" ]] || break
        sleep 1
    done
fi
# Collect artifacts on success and failure; never accept a report from an older session.
if ! adb pull "$files/$report" "$(host_path "$out/race-benchmark.txt")" > "$out/pull-report.txt" 2>&1; then complete=0; fi
for suffix in frame-times.csv gpu-frame-times.csv; do
    adb pull "$files/${report%.txt}-$suffix" "$(host_path "$out/$suffix")" >/dev/null 2>&1 || true
done
for f in MotorStormAndroid.log audio-capture.wav; do
    adb pull "$files/$f" "$(host_path "$out/$f")" >/dev/null 2>&1 || true
done
adb shell dumpsys thermalservice > "$out/thermal-after.txt" || true
adb shell am force-stop "$package" || true
if (( !complete )); then echo "Benchmark failed or timed out; artifacts: $out" >&2; exit 1; fi
[[ -s "$out/race-benchmark.txt" ]] || { echo 'Could not retrieve this run report' >&2; exit 1; }
echo "== $label ($(( $(date +%s) - start ))s)"
echo "Artifacts: $out"
grep -E '^(mode|target_fps|resolution_scale|min_raster_half|max_raster_half|frames|wall_ms|guest_ms|guest_per_wall|wall_fps|frame_p95_ms|frame_p99_ms|gpu_skipped_frames|gpu_superseded_frames|gpu_ordered_draws|gpu_pack_color|gpu_pack_depth|reject_target_size_mismatch|audio_underruns)=' "$out/race-benchmark.txt"
