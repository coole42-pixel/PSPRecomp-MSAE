#!/usr/bin/env python3
"""Compare complete recovery images, raw depth and guest-frame metadata.

Reference replays can vary in brightness. Each candidate must match one entire
reference color image; pixels from different references are never combined.
"""
import argparse
import json
from pathlib import Path

from PIL import Image


def compare(candidate, references, first=0):
    frames = []
    for color in sorted(candidate.glob("*_base.png"), key=lambda p: int(p.name.split("_")[0])):
        frame = color.name.split("_")[0]
        if int(frame) < first:
            continue
        with Image.open(color) as image:
            rgba = image.convert("RGBA").tobytes()
            size = image.size
        matches = []
        for reference in references:
            with Image.open(reference / color.name) as image:
                if image.size == size and image.convert("RGBA").tobytes() == rgba:
                    matches.append(str(reference))
        depth = candidate / f"{frame}_depth.bin"
        metadata = candidate / f"{frame}_frame.txt"
        frames.append({
            "race_frame": int(frame),
            "whole_color_reference_matches": matches,
            "color_pixels": len(rgba) // 4,
            "depth_exact_all_references": all(depth.read_bytes() == (r / depth.name).read_bytes() for r in references),
            "metadata_exact_all_references": all(metadata.read_bytes() == (r / metadata.name).read_bytes() for r in references),
        })
    passed = bool(frames) and all(f["whole_color_reference_matches"] and f["depth_exact_all_references"] and
                                  f["metadata_exact_all_references"] for f in frames)
    return {"passed": passed, "first_race_frame": first, "frames": frames}


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("candidate", type=Path)
    parser.add_argument("references", nargs="+", type=Path)
    parser.add_argument("--output", type=Path)
    parser.add_argument("--first", type=int, default=0, help="First race frame included in the comparison")
    args = parser.parse_args()
    result = compare(args.candidate, args.references, args.first)
    rendered = json.dumps(result, indent=2) + "\n"
    if args.output:
        args.output.write_text(rendered)
    print(rendered)
    raise SystemExit(0 if result["passed"] else 1)
