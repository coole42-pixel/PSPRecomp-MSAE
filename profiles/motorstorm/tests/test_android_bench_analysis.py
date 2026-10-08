"""Check that benchmark acceptance cannot mistake queued/low-res/stale data for 5x/60."""
import importlib.util
from pathlib import Path
import tempfile
import unittest

MODULE = Path(__file__).resolve().parents[1] / "tools/android/analyze_bench.py"
SPEC = importlib.util.spec_from_file_location("android_bench_analysis", MODULE)
ANALYZER = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(ANALYZER)


class BenchmarkAcceptance(unittest.TestCase):
    def setUp(self):
        self.directory = tempfile.TemporaryDirectory()
        self.addCleanup(self.directory.cleanup)
        self.root = Path(self.directory.name)
        self.report = dict(name="race-benchmark-test", completed="1", start_us="115000000", end_us="116000000",
                           frames="60", resolution_scale="5", display_timing_supported="1", mode="paced",
                           target_fps="60", guest_per_wall="1.0", fps="59.9988", audio_underruns="0", audio_device_dry="0")
        self.rows = []
        for index in range(60):
            origin = [index + 1, 115000000 + index * 16667]
            gpu = 1000000000000 + index * 16667000
            for kind, start, end in (("frame", index * 16667000, (index + 1) * 16667000),
                                     ("vertex", gpu, gpu + 500000), ("ge", gpu + 500000, gpu + 7000000),
                                     ("present_gpu", gpu + 8000000, gpu + 11000000),
                                     ("present_request", 0, 0), ("display", 5000000000000 + index * 16667000,
                                                               5000000000000 + index * 16667000)):
                self.rows.append(origin + [kind, start, end, 10, 1])
        self.rows.append([0, 0, "session_end", 0, 0, 0, 0])
        (self.root / "run.txt").write_text("run_id=test\nresolution=5\n")

    def result(self):
        (self.root / "race-benchmark.txt").write_text("".join(f"{k}={v}\n" for k, v in self.report.items()))
        with (self.root / "gpu-frame-times.csv").open("w", newline="") as file:
            file.write("frame_id,guest_us,event,start_ns,end_ns,raster_half,racing\n")
            file.write("".join(",".join(map(str, row)) + "\n" for row in self.rows))
        return ANALYZER.analyze(self.root, require_60=True)

    def test_valid_separate_clock_domains(self):
        result = self.result()
        self.assertTrue(result["passed"], result)
        self.assertAlmostEqual(result["gpu_work_ms"]["mean"], 10)
        self.assertGreater(result["actual_display_fps"], 59)

    def test_stale_report(self):
        self.report["name"] = "race-benchmark-old-session"
        self.assertFalse(self.result()["passed"])

    def test_tiny_query_work_is_included(self):
        for index in range(60):
            gpu = 1000000000000 + index * 16667000
            self.rows.append([index + 1, 115000000 + index * 16667, "tiny_query",
                              gpu + 7000000, gpu + 7500000, 10, 1])
        result = self.result()
        self.assertTrue(result["passed"], result)
        self.assertAlmostEqual(result["gpu_work_ms"]["mean"], 10.5)

    def test_scaled_down_frame(self):
        next(row for row in self.rows if row[2] == "frame")[5] = 8
        self.assertFalse(self.result()["passed"])

    def test_queued_frames_are_not_displayed_frames(self):
        self.rows = [row for row in self.rows if row[2] != "display" or row[0] < 30]
        self.assertFalse(self.result()["passed"])

    def test_gpu_phase_coverage(self):
        self.rows = [row for row in self.rows if row[2] != "ge" or row[0] < 30]
        self.assertFalse(self.result()["passed"])

    def test_wrong_game_rate(self):
        self.report["fps"] = "30"
        self.assertFalse(self.result()["passed"])

    def test_unclean_shutdown(self):
        self.rows = [row for row in self.rows if row[2] != "session_end"]
        self.assertFalse(self.result()["passed"])

    def test_incomplete_report(self):
        self.report["completed"] = "0"
        self.assertFalse(self.result()["passed"])

    def test_no_display_feedback(self):
        self.report["display_timing_supported"] = "0"
        self.assertFalse(self.result()["passed"])


if __name__ == "__main__":
    unittest.main()
