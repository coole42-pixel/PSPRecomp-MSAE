import csv
import importlib.util
from pathlib import Path
import tempfile
import unittest

spec = importlib.util.spec_from_file_location("pulse", Path(__file__).parents[1] / "tools/android/analyze_pulse.py")
pulse = importlib.util.module_from_spec(spec)
spec.loader.exec_module(pulse)


class PulseAnalysisTests(unittest.TestCase):
    def test_frame_join_and_capture_exclusion(self):
        with tempfile.TemporaryDirectory() as folder:
            root = Path(folder)
            keys = ["frame", "hardware", "stencil_test", "stencil_ops", "blend_factors", "stencil_enable", "depth_test", "depth_mask"]
            with (root / "draw-state.csv").open("w", newline="") as stream:
                writer = csv.DictWriter(stream, keys); writer.writeheader()
                for frame, test in [(100, 0xFF8002), (101, 1), (102, 0xFF8002)]:
                    writer.writerow(dict(zip(keys, [frame, 0, test, 0x20000, 26, 1, 0, 1])))
            with (root / "gpu-frame-times.csv").open("w", newline="") as stream:
                writer = csv.writer(stream)
                writer.writerow(["frame_id", "guest_us", "event", "start_ns", "end_ns", "raster_half", "racing"])
                # Completion order is deliberately different from frame order.
                for frame, duration in [(102, 9000000), (100, 2000000), (101, 1000000)]:
                    writer.writerow([frame, 0, "pack_depth_gpu", 0, duration, 6, 1])
                    writer.writerow([frame, 0, "ge", 0, duration * 3, 6, 1])
            result = pulse.analyze(root, 100, 102, {102})
            self.assertEqual(result["translucent"]["frames"], 1)
            self.assertEqual(result["translucent"]["pack_depth_gpu_ms"], 2)
            self.assertEqual(result["translucent"]["ge_ms"], 6)
            self.assertEqual(result["opaque"]["frames"], 1)
            self.assertEqual(result["opaque"]["pack_depth_gpu_ms"], 1)
            self.assertEqual(len(list(csv.DictReader((root / "pulse-frame-costs.csv").open()))), 2)


if __name__ == "__main__":
    unittest.main()
