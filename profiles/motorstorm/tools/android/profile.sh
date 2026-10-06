#!/usr/bin/env bash
# Starts the race benchmark and records a simpleperf profile once guest time
# passes the start of the race window.
#   profile.sh <label> [resolution 0-4] [seconds to record]
# Output: out/android/perf/<label>.data plus a text report.
set -euo pipefail
export MSYS_NO_PATHCONV=1
# An old adb earlier on PATH kills the SDK's server and drops shell exit codes.
sdk=${ANDROID_HOME:-${LOCALAPPDATA:+$(cygpath -u "$LOCALAPPDATA")/Android/Sdk}}
[ -n "$sdk" ] && [ -d "$sdk/platform-tools" ] && export PATH="$sdk/platform-tools:$PATH"
label=${1:?label}; resolution=${2:-1}; duration=${3:-15}
package=org.psprecomp.motorstorm
files=/sdcard/Android/data/$package/files
repo=$(cd "$(dirname "$0")/../../../.." && pwd)
out=$repo/out/android/perf; mkdir -p "$out"
adb shell am force-stop $package
adb shell rm -f $files/race-benchmark.txt
adb shell am start -n $package/.GameActivity --ei bench_seconds 90 --ei resolution "$resolution" --es scale_mode off >/dev/null
for _ in $(seq 1 120); do
    sleep 5
    guest=$(adb shell "grep HEARTBEAT $files/MotorStormAndroid.log | tail -1" | sed -n 's/.*guest_us=\([0-9]*\).*/\1/p')
    if [ -n "$guest" ] && [ "$guest" -ge 125000000 ]; then echo "guest ${guest}us, recording"; break; fi
done
adb shell simpleperf record --app $package -g --duration "$duration" -f 2000 -e cpu-clock ${PERF_EXTRA:-} -o /data/local/tmp/perf.data 2>&1 | tail -1
adb pull /data/local/tmp/perf.data "$(cygpath -m "$out")/$label.data" >/dev/null
adb shell am force-stop $package
symfs=$(cygpath -m "$repo/profiles/motorstorm/android/app/build/intermediates/cxx/RelWithDebInfo")
simpleperf=$(cygpath -m "$LOCALAPPDATA/Android/Sdk/ndk/28.2.13676358/simpleperf/bin/windows/x86_64/simpleperf.exe")
lib=$(dirname "$(ls "$repo"/profiles/motorstorm/android/app/build/intermediates/cxx/RelWithDebInfo/*/obj/arm64-v8a/libmain.so | head -1)")
"$simpleperf" report -i "$(cygpath -m "$out")/$label.data" --symdir "$(cygpath -m "$lib")" --sort comm,symbol -n --percent-limit 0.5 \
    > "$out/$label.txt" 2>/dev/null || true
head -60 "$out/$label.txt"
