#!/usr/bin/env bash
# Runs the scripted race benchmark on the connected device and pulls the results.
#   bench.sh <label> [resolution 0-4] [bench seconds] [extra am-start args...]
# resolution 0 = full (display), 1-4 = fixed. Results land in out/android/bench/<label>/.
set -euo pipefail
export MSYS_NO_PATHCONV=1
# An old adb earlier on PATH kills the SDK's server and drops shell exit codes.
sdk=${ANDROID_HOME:-${LOCALAPPDATA:+$(cygpath -u "$LOCALAPPDATA")/Android/Sdk}}
[ -n "$sdk" ] && [ -d "$sdk/platform-tools" ] && export PATH="$sdk/platform-tools:$PATH"
label=${1:?label}; resolution=${2:-1}; seconds=${3:-40}; shift $(( $# < 3 ? $# : 3 ))
package=org.psprecomp.motorstorm
files=/sdcard/Android/data/$package/files
repo=$(cd "$(dirname "$0")/../../../.." && pwd)
out=$repo/out/android/bench/$label
mkdir -p "$out"
adb shell am force-stop $package
adb shell rm -f $files/race-benchmark.txt $files/frame-times.csv $files/audio-capture.wav
adb shell am start -n $package/.GameActivity --ei bench_seconds "$seconds" --ei resolution "$resolution" "$@" >/dev/null
start=$(date +%s)
while :; do
    sleep 10
    if adb shell test -s $files/race-benchmark.txt; then break; fi
    if [ -z "$(adb shell pidof $package:game || true)" ]; then echo "game process exited without a report"; break; fi
    if [ $(( $(date +%s) - start )) -gt 900 ]; then echo "timeout"; break; fi
done
sleep 3
adb shell am force-stop $package
for f in race-benchmark.txt frame-times.csv MotorStormAndroid.log audio-capture.wav; do
    adb pull $files/$f "$(cygpath -m "$out")/$f" >/dev/null 2>&1 || true
done
adb shell dumpsys thermalservice | grep -m1 "Thermal Status" > "$out/thermal.txt" || true
echo "== $label ($(( $(date +%s) - start ))s)"
grep -E "^(frames|wall_ms|guest_per_wall|wall_fps|frame_p50_ms|frame_p95_ms|frame_p99_ms|frame_max_ms|ge_submit_ms|gpu_sync_ms|gpu_readback_ms|present_ms|texture_ms|other_ms|audio_underruns)=" "$out/race-benchmark.txt" 2>/dev/null | tr '\n' ' '; echo
