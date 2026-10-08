#!/usr/bin/env python3
"""Join bounded draw-state diagnostics with frame-tagged GPU/host costs.

Timestamp tracing serializes measured intervals. Use these runs to attribute
costs; use separate untraced, same-APK benchmarks for performance claims.
"""
import argparse
import csv
import json
import statistics
from collections import Counter, defaultdict
from pathlib import Path


def analyze(directory, first=0, last=2**63, exclude=()):
    frames = defaultdict(Counter)
    states = Counter()
    previous = None
    with (directory / "draw-state.csv").open(newline="") as stream:
        for row in csv.DictReader(stream):
            frame = int(row["frame"])
            if not first <= frame <= last or frame in exclude:
                continue
            cost = frames[frame]
            cost["draws"] += 1
            cost["ordered_draws"] += row["hardware"] == "0"
            if previous and previous["frame"] == row["frame"] and previous["hardware"] != row["hardware"]:
                cost["switches"] += 1
            previous = row
            stencil = int(row["stencil_test"])
            ops = int(row["stencil_ops"])
            blend = int(row["blend_factors"])
            if int(row["stencil_enable"]) & 1:
                states[(stencil, ops, blend, int(row["depth_test"]), int(row["depth_mask"]))] += 1
                # Observed recovery pass: EQUAL ref 128 mask 255, pass REPLACE,
                # screen blend FIX white / ONE_MINUS_SRC_COLOR, no depth test.
                if (stencil, ops, blend) == (0xFF8002, 0x20000, 26):
                    cost["recovery_draws"] += 1
    durations = {"ge", "vertex", "tiny_query", "tiny_query_wait", "frame", "pack_color_gpu",
                 "pack_depth_gpu", "restore_color_depth_gpu", "restore_color_gpu"}
    counts = {"pack_color_count", "pack_depth_count", "switch_hw_ordered", "switch_ordered_hw"}
    with (directory / "gpu-frame-times.csv").open(newline="") as stream:
        for row in csv.DictReader(stream):
            frame = int(row["frame_id"])
            if row["racing"] != "1" or frame not in frames:
                continue
            event = row["event"]
            if event in durations:
                frames[frame][event + "_ms"] += (int(row["end_ns"]) - int(row["start_ns"])) / 1e6
            elif event in counts:
                frames[frame][event] += int(row["end_ns"])
    keys = sorted(set().union(*(row.keys() for row in frames.values())))
    with (directory / "pulse-frame-costs.csv").open("w", newline="") as stream:
        writer = csv.DictWriter(stream, fieldnames=["frame", "translucent_state", *keys])
        writer.writeheader()
        for frame, row in sorted(frames.items()):
            writer.writerow({"frame": frame, "translucent_state": bool(row["recovery_draws"]), **dict(row)})
    summary = {"warning": "Tracing perturbs timings; frame state requires visual confirmation.",
               "stencil_states": [{"test": hex(s[0]), "ops": hex(s[1]), "blend": hex(s[2]),
                    "depth_test": s[3], "depth_mask": s[4], "draws": n} for s, n in states.most_common()]}
    for label, pulse in [("translucent", True), ("opaque", False)]:
        group = [row for row in frames.values() if bool(row["recovery_draws"]) == pulse]
        summary[label] = {"frames": len(group), **{key: statistics.mean(row[key] for row in group)
                          for key in keys}} if group else {"frames": 0}
    (directory / "pulse-summary.json").write_text(json.dumps(summary, indent=2) + "\n")
    return summary


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("directory", type=Path)
    parser.add_argument("--first", type=int, default=0)
    parser.add_argument("--last", type=int, default=2**63)
    parser.add_argument("--exclude", default="", help="Comma-separated capture-perturbed frame IDs")
    args = parser.parse_args()
    print(json.dumps(analyze(args.directory, args.first, args.last, {int(x) for x in args.exclude.split(",") if x}), indent=2))
