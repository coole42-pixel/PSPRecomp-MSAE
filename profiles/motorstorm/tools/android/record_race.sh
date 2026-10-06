#!/usr/bin/env bash
# Starts the scripted race, records 8 s of screen once racing, and counts flashes.
#   record_race.sh <label> [resolution 0-4] [extra am-start args...]
set -euo pipefail
export MSYS_NO_PATHCONV=1
label=${1:?label}; resolution=${2:-1}; shift $(( $# < 2 ? $# : 2 ))
package=org.psprecomp.motorstorm
files=/sdcard/Android/data/$package/files
repo=$(cd "$(dirname "$0")/../../../.." && pwd)
out=$repo/out/android/flicker; mkdir -p "$out"
adb shell am force-stop $package
sleep 1
adb shell am start -W -n $package/.GameActivity --ei bench_seconds 90 --ei resolution "$resolution" "$@" >/dev/null
for _ in $(seq 1 120); do
    sleep 5
    guest=$(adb shell "grep HEARTBEAT $files/MotorStormAndroid.log | tail -1" | sed -n 's/.*guest_us=\([0-9]*\).*/\1/p')
    if [ -n "$guest" ] && [ "$guest" -ge 122000000 ]; then break; fi
done
adb shell screenrecord --time-limit 8 --size 1280x800 --bit-rate 16000000 /sdcard/flicker.mp4
adb pull /sdcard/flicker.mp4 "$(cygpath -m "$out")/$label.mp4" >/dev/null
adb shell am force-stop $package
python "$(cygpath -m "$repo/profiles/motorstorm/tools/android/flicker.py")" "$(cygpath -m "$out")/$label.mp4"
