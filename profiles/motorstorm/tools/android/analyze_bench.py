#!/usr/bin/env python3
"""Analyze originating-frame GPU/CPU work and actual Android display feedback."""
from __future__ import annotations
import argparse
import csv
import json
from pathlib import Path
import statistics

GPU_EVENTS = {"ge", "vertex", "present_gpu", "post_resolve", "post_deband", "post_color"}


def percentiles(values):
    if not values:
        return {"samples": 0}
    values = sorted(values)
    return {"samples": len(values), "mean": statistics.fmean(values),
            **{name: values[min(len(values) - 1, int(fraction * len(values)))]
               for name, fraction in (("p50", .5), ("p95", .95), ("p99", .99))},
            "max": values[-1]}


def analyze(directory: Path, require_60=False):
    report = {}
    for line in (directory / "race-benchmark.txt").read_text().splitlines():
        if "=" in line and not line.startswith(("#", "[")):
            key, value = line.split("=", 1)
            report[key] = value
    errors = []
    if report.get("completed") != "1":
        errors.append("Missing atomic benchmark completion marker")
    start, end = int(report["start_us"]), int(report["end_us"])
    expected_frames = int(report["frames"])
    resolution = int(report["resolution_scale"])
    if "run.txt" in {p.name for p in directory.iterdir()}:
        run = dict(line.split("=", 1) for line in (directory / "run.txt").read_text().splitlines() if "=" in line)
        if report.get("name") != "race-benchmark-" + run["run_id"]:
            errors.append("Report belongs to a different benchmark session")
        if int(run["resolution"]) and resolution != int(run["resolution"]):
            errors.append("Actual internal resolution differs from requested resolution")
    frames = {}
    clean_shutdown = False
    with (directory / "gpu-frame-times.csv").open(newline="") as source:
        for row in csv.DictReader(source):
            frame_id = int(row["frame_id"])
            if row["event"] == "session_end":
                clean_shutdown = True
                continue
            frame = frames.setdefault(frame_id, {"events": []})
            event = {"kind": row["event"], "start": int(row["start_ns"]), "end": int(row["end_ns"])}
            frame["events"].append(event)
            if row["event"] == "frame":
                if "guest_us" in frame:
                    errors.append(f"Duplicate game frame metadata: {frame_id}")
                frame.update(guest_us=int(row["guest_us"]), raster_half=int(row["raster_half"]),
                             racing=row["racing"] == "1")
    selected = [frame for frame in frames.values() if start <= frame.get("guest_us", -1) < end]
    if not clean_shutdown:
        errors.append("Missing clean GPU/display telemetry shutdown marker")
    if abs(len(selected) - expected_frames) > 1:
        errors.append("Frame metadata does not cover the reported race window")
    if not selected or any(not frame["racing"] for frame in selected):
        errors.append("Benchmark window includes frames outside an active race")
    if any(frame["raster_half"] != resolution * 2 for frame in selected):
        errors.append("The race was downscaled or used additional supersampling")
    work, span, guest_cpu, ge_cpu, prepare, record = [], [], [], [], [], []
    displayed_times = set()
    submitted = displayed = gpu_complete = 0
    for frame in selected:
        events = frame["events"]
        gpu = [event for event in events if event["kind"] in GPU_EVENTS]
        if any(event["end"] < event["start"] for event in events):
            errors.append("Invalid or wrapped timing interval")
        if any(event["kind"] == "ge" for event in gpu) and any(event["kind"] == "present_gpu" for event in gpu):
            gpu_complete += 1
            work.append(sum(event["end"] - event["start"] for event in gpu) / 1e6)
            span.append((max(event["end"] for event in gpu) - min(event["start"] for event in gpu)) / 1e6)
        for kind, target in (("cpu_guest", guest_cpu), ("cpu_ge", ge_cpu),
                             ("prepare_wall", prepare), ("record_wall", record)):
            values = [event["end"] - event["start"] for event in events if event["kind"] == kind]
            if values:
                target.append(sum(values) / 1e6)
        submitted += any(event["kind"] == "present_request" for event in events)
        times = [event["start"] for event in events if event["kind"] == "display" and event["start"]]
        if times:
            displayed += 1
            displayed_times.update(times)
    times = sorted(displayed_times)
    intervals = [(right - left) / 1e6 for left, right in zip(times, times[1:])]
    shown_fps = (len(times) - 1) * 1e9 / (times[-1] - times[0]) if len(times) > 1 else 0
    if report.get("display_timing_supported") != "1" or len(times) < 2:
        errors.append("Actual display feedback is unavailable; queued-frame FPS is insufficient")
    if gpu_complete < max(1, len(selected) - 2):
        errors.append("GPU phase timestamps are incomplete for the race window")
    acceptance = []
    if require_60:
        if report.get("mode") != "paced" or report.get("target_fps") != "60":
            acceptance.append("Acceptance requires paced 60 FPS with audio")
        if not .99 <= float(report["guest_per_wall"]) <= 1.01:
            acceptance.append("Guest simulation is not progressing in real time")
        if not 59 <= float(report["fps"]) <= 61:
            acceptance.append("The game is not producing approximately 60 distinct frames per guest second")
        if shown_fps < 59 or displayed < .98 * len(selected):
            acceptance.append("Fewer than 98% of game frames were displayed at approximately 60 FPS")
        if intervals and percentiles(intervals)["p95"] > 18.5:
            acceptance.append("Displayed frame p95 exceeds 18.5 ms")
        if int(report["audio_underruns"]) or int(report["audio_device_dry"]):
            acceptance.append("Audio underrun/device starvation occurred")
    result = {"report": report, "integrity_errors": sorted(set(errors)), "acceptance_errors": acceptance,
              "frames_in_window": len(selected), "present_requests": submitted, "displayed_game_frames": displayed,
              "unique_display_times": len(times), "actual_display_fps": shown_fps,
              "display_interval_ms": percentiles(intervals), "gpu_work_ms": percentiles(work),
              "gpu_span_ms": percentiles(span), "cpu_guest_execution_ms": percentiles(guest_cpu),
              "cpu_ge_execution_ms": percentiles(ge_cpu), "prepare_wall_ms": percentiles(prepare),
              "record_wall_ms": percentiles(record), "passed": not errors and not acceptance}
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("directory", type=Path)
    parser.add_argument("--accept-60", action="store_true")
    args = parser.parse_args()
    try:
        result = analyze(args.directory, args.accept_60)
    except (OSError, KeyError, ValueError, csv.Error) as error:
        result = {"passed": False, "integrity_errors": [str(error)]}
    (args.directory / "analysis.json").write_text(json.dumps(result, indent=2) + "\n")
    for key in ("frames_in_window", "actual_display_fps", "gpu_work_ms", "display_interval_ms", "integrity_errors", "acceptance_errors"):
        if key in result:
            print(f"{key}: {result[key]}")
    return 0 if result["passed"] else 1


if __name__ == "__main__":
    raise SystemExit(main())
