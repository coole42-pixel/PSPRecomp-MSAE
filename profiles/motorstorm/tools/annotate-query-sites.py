"""Restore exact instruction metadata after regenerating MotorStorm's AOT corpus."""
from pathlib import Path

root = Path(__file__).resolve().parents[1] / "generated"
sites = (
    ("generated_unit_0038.cpp", "L_0882A614:",
     "aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));",
     "aot_gpr[6] = aot_mem.aot_load32_at(aot_gpr[10], 0x0882A614u, aot_gpr[31]);"),
    ("generated_unit_0318.cpp", "L_089425A0:",
     "aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));",
     "aot_gpr[2] = aot_mem.aot_load32_at(aot_gpr[4], 0x089425A4u, aot_gpr[31]);"),
)
for filename, label, before, after in sites:
    path = root / filename
    text = path.read_text()
    start = text.index(label)
    end = text.find("\nL_", start + len(label))
    block = text[start:end]
    if after in block:
        continue
    if block.count(before) != 1:
        raise RuntimeError(f"Guest query instruction changed: {filename} {label}")
    text = text[:start] + block.replace(before, after) + text[end:]
    path.write_text(text)
print("MotorStorm query instruction metadata is present.")
