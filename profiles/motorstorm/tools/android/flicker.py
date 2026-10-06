"""Counts one-frame flashes in a device screen recording.

usage: flicker.py recording.mp4

A frame flickers when it differs strongly from both neighbours while the
neighbours resemble each other (the image jumps away and comes back). Normal
motion changes every frame gradually and does not match that pattern.
"""
import sys

import cv2
import numpy as np


def main(path):
    video = cv2.VideoCapture(path)
    frames = []
    while True:
        ok, frame = video.read()
        if not ok:
            break
        small = cv2.resize(frame, (320, 200), interpolation=cv2.INTER_AREA).astype(np.int16)
        frames.append(small)
    if len(frames) < 3:
        print("frames=%d (too few)" % len(frames))
        return 1
    flashes = []
    for i in range(1, len(frames) - 1):
        before = np.abs(frames[i] - frames[i - 1]).mean()
        after = np.abs(frames[i] - frames[i + 1]).mean()
        around = np.abs(frames[i + 1] - frames[i - 1]).mean()
        if min(before, after) > 12 and around < 0.5 * min(before, after):
            flashes.append((i, round(float(before), 1), round(float(around), 1)))
    print("frames=%d flashes=%d" % (len(frames), len(flashes)))
    for flash in flashes[:15]:
        print("  frame %d diff=%.1f neighbours=%.1f" % flash)
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1]))
