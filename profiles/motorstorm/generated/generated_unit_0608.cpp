#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0608[934] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 0,
    5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0,
    13, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 17, 0, 0, 18, 19, 0, 20, 0, 21, 22, 23, 0, 0, 0, 24, 0, 0, 0, 0,
    0, 0, 25, 0, 0, 0, 26, 27, 28, 0, 29, 0, 30, 0, 0, 0, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 0, 45,
    46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64,
    65, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 71, 72, 73,
    0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 0, 84,
    0, 0, 85, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0,
    97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 108,
};
void recomp_unit_0608_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    static_assert(std::endian::native == std::endian::little);
    std::uint32_t *const aot_gpr = ctx.gpr.data();
    float *const aot_fpr = ctx.fpr.data();
    const GuestMemory::AotFastView::Raw aot_raw = aot_mem.raw();
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A64014u;
        entry_id = (entry_delta < 3736u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0608[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A64014;
    case 2u: goto L_08A6409C;
    case 3u: goto L_08A64108;
    case 4u: goto L_08A6410C;
    case 5u: goto L_08A64114;
    case 6u: goto L_08A64120;
    case 7u: goto L_08A64144;
    case 8u: goto L_08A64154;
    case 9u: goto L_08A6415C;
    case 10u: goto L_08A64164;
    case 11u: goto L_08A64170;
    case 12u: goto L_08A64180;
    case 13u: goto L_08A64194;
    case 14u: goto L_08A641A8;
    case 15u: goto L_08A641B4;
    case 16u: goto L_08A641C0;
    case 17u: goto L_08A641C8;
    case 18u: goto L_08A641D4;
    case 19u: goto L_08A641D8;
    case 20u: goto L_08A641E0;
    case 21u: goto L_08A641E8;
    case 22u: goto L_08A641EC;
    case 23u: goto L_08A641F0;
    case 24u: goto L_08A64200;
    case 25u: goto L_08A6421C;
    case 26u: goto L_08A6422C;
    case 27u: goto L_08A64230;
    case 28u: goto L_08A64234;
    case 29u: goto L_08A6423C;
    case 30u: goto L_08A64244;
    case 31u: goto L_08A64254;
    case 32u: goto L_08A64258;
    case 33u: goto L_08A6425C;
    case 34u: goto L_08A64260;
    case 35u: goto L_08A64264;
    case 36u: goto L_08A64268;
    case 37u: goto L_08A6426C;
    case 38u: goto L_08A64270;
    case 39u: goto L_08A64274;
    case 40u: goto L_08A64278;
    case 41u: goto L_08A6427C;
    case 42u: goto L_08A64280;
    case 43u: goto L_08A64284;
    case 44u: goto L_08A64288;
    case 45u: goto L_08A64290;
    case 46u: goto L_08A64294;
    case 47u: goto L_08A64298;
    case 48u: goto L_08A6429C;
    case 49u: goto L_08A642A0;
    case 50u: goto L_08A642A4;
    case 51u: goto L_08A642A8;
    case 52u: goto L_08A642AC;
    case 53u: goto L_08A642B0;
    case 54u: goto L_08A642B4;
    case 55u: goto L_08A642B8;
    case 56u: goto L_08A642BC;
    case 57u: goto L_08A642C0;
    case 58u: goto L_08A642C4;
    case 59u: goto L_08A642C8;
    case 60u: goto L_08A642CC;
    case 61u: goto L_08A642D0;
    case 62u: goto L_08A642D4;
    case 63u: goto L_08A64360;
    case 64u: goto L_08A64390;
    case 65u: goto L_08A64394;
    case 66u: goto L_08A6439C;
    case 67u: goto L_08A643B0;
    case 68u: goto L_08A643E8;
    case 69u: goto L_08A643F4;
    case 70u: goto L_08A64400;
    case 71u: goto L_08A64408;
    case 72u: goto L_08A6440C;
    case 73u: goto L_08A64410;
    case 74u: goto L_08A64418;
    case 75u: goto L_08A64420;
    case 76u: goto L_08A64428;
    case 77u: goto L_08A64430;
    case 78u: goto L_08A64440;
    case 79u: goto L_08A64454;
    case 80u: goto L_08A6446C;
    case 81u: goto L_08A64474;
    case 82u: goto L_08A6447C;
    case 83u: goto L_08A64484;
    case 84u: goto L_08A64490;
    case 85u: goto L_08A6449C;
    case 86u: goto L_08A644A4;
    case 87u: goto L_08A644B0;
    case 88u: goto L_08A644C4;
    case 89u: goto L_08A644D8;
    case 90u: goto L_08A644E8;
    case 91u: goto L_08A64794;
    case 92u: goto L_08A647AC;
    case 93u: goto L_08A647C0;
    case 94u: goto L_08A647D0;
    case 95u: goto L_08A647E0;
    case 96u: goto L_08A64A84;
    case 97u: goto L_08A64A94;
    case 98u: goto L_08A64AB0;
    case 99u: goto L_08A64ABC;
    case 100u: goto L_08A64ACC;
    case 101u: goto L_08A64D70;
    case 102u: goto L_08A64DF4;
    case 103u: goto L_08A64E04;
    case 104u: goto L_08A64E20;
    case 105u: goto L_08A64E2C;
    case 106u: goto L_08A64E3C;
    case 107u: goto L_08A64E68;
    case 108u: goto L_08A64EA8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A64014:
    rt.unsupported(0x08A64018u, 0x0889DA28u, "control flow in delay slot"); return;
L_08A6409C:
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    (void)(0u < 0u ? 1u : 0u);
    goto L_08A64108;
L_08A64108:
    aot_gpr[12] = (0u | 0u);
    goto L_08A6410C;
L_08A6410C:
    rt.unsupported(0x08A6410Cu, 0x616C7565u, "vfpu0 not lowered yet"); return;
L_08A64114:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    ctx.execute_vfpu_compare3(101u, 114u, 98u, 1u, 6u);
    aot_gpr[14] = (aot_gpr[3] + aot_gpr[4]);
    goto L_08A64120;
L_08A64120:
    rt.unsupported(0x08A64120u, 0x72756F53u, "unknown not lowered yet"); return;
L_08A64144:
    rt.unsupported(0x08A64144u, 0x61636F6Cu, "vfpu0 not lowered yet"); return;
L_08A64154:
    ctx.execute_vfpu_vscl_ct<102u, 114u, 105u, 1u>();
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[19]))); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A6415C;
L_08A6415C:
    ctx.execute_vfpu_vscl_ct<116u, 114u, 117u, 1u>();
    // nop
    goto L_08A64164;
L_08A64164:
    ctx.execute_vfpu_compare3(109u, 121u, 80u, 1u, 6u);
    rt.unsupported(0x08A64168u, 0x69746973u, "unknown not lowered yet"); return;
L_08A64170:
    rt.unsupported(0x08A64170u, 0x61636F6Cu, "vfpu0 not lowered yet"); return;
L_08A64180:
    rt.unsupported(0x08A64180u, 0x61636F6Cu, "vfpu0 not lowered yet"); return;
L_08A64194:
    rt.unsupported(0x08A64194u, 0x61636F6Cu, "vfpu0 not lowered yet"); return;
L_08A641A8:
    rt.unsupported(0x08A641A8u, 0x74726F73u, "unknown not lowered yet"); return;
L_08A641B4:
    rt.unsupported(0x08A641B4u, 0x74736562u, "unknown not lowered yet"); return;
L_08A641C0:
    rt.unsupported(0x08A641C0u, 0x726F6373u, "unknown not lowered yet"); return;
L_08A641C8:
    rt.unsupported(0x08A641C8u, 0x74726F73u, "unknown not lowered yet"); return;
L_08A641D4:
    rt.unsupported(0x08A641D4u, 0x00000031u, "special? not lowered yet"); return;
L_08A641D8:
    rt.unsupported(0x08A641D8u, 0x74617473u, "unknown not lowered yet"); return;
L_08A641E0:
    if (aot_gpr[27] == aot_gpr[4]) {
    ctx.execute_vfpu_vscl_ct<116u, 97u, 116u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0635_entry, 635u, 83u, 0x08A7FB78u>(ctx, &aot_mem); return;
    }
    goto L_08A641E8;
L_08A641E8:
    // nop
    goto L_08A641EC;
L_08A641EC:
    rt.unsupported(0x08A641ECu, 0x00000039u, "special? not lowered yet"); return;
L_08A641F0:
    rt.unsupported(0x08A641F0u, 0x736F6867u, "unknown not lowered yet"); return;
L_08A64200:
    ctx.execute_vfpu_vcmp_ct<112u, 112u, 1u, 1u>();
    rt.unsupported(0x08A64204u, 0x74616369u, "unknown not lowered yet"); return;
L_08A6421C:
    ctx.execute_vfpu_vscl_ct<103u, 97u, 109u, 1u>();
    rt.unsupported(0x08A64220u, 0x696E6946u, "unknown not lowered yet"); return;
L_08A6422C:
    rt.unsupported(0x08A6422Cu, 0x00000032u, "special? not lowered yet"); return;
L_08A64230:
    rt.unsupported(0x08A64230u, 0x00000033u, "special? not lowered yet"); return;
L_08A64234:
    rt.unsupported(0x08A64234u, 0x736F6867u, "unknown not lowered yet"); return;
L_08A6423C:
    ctx.execute_vfpu_compare3(97u, 99u, 99u, 1u, 6u);
    rt.unsupported(0x08A64240u, 0x00746E75u, "special? not lowered yet"); return;
L_08A64244:
    rt.unsupported(0x08A64244u, 0x676E616Cu, "vfpu1 not lowered yet"); return;
L_08A64254:
    rt.unsupported(0x08A64254u, 0x00000038u, "special? not lowered yet"); return;
L_08A64258:
    rt.unsupported(0x08A64258u, 0x00000035u, "special? not lowered yet"); return;
L_08A6425C:
    rt.unsupported(0x08A6425Cu, 0x00000037u, "special? not lowered yet"); return;
L_08A64260:
    rt.unsupported(0x08A64260u, 0x00000036u, "special? not lowered yet"); return;
L_08A64264:
    rt.unsupported(0x08A64264u, 0x00003531u, "special? not lowered yet"); return;
L_08A64268:
    rt.unsupported(0x08A64268u, 0x00003631u, "special? not lowered yet"); return;
L_08A6426C:
    rt.unsupported(0x08A6426Cu, 0x00003331u, "special? not lowered yet"); return;
L_08A64270:
    rt.unsupported(0x08A64270u, 0x00003431u, "special? not lowered yet"); return;
L_08A64274:
    rt.unsupported(0x08A64274u, 0x00003731u, "special? not lowered yet"); return;
L_08A64278:
    rt.unsupported(0x08A64278u, 0x00003831u, "special? not lowered yet"); return;
L_08A6427C:
    rt.unsupported(0x08A6427Cu, 0x00003031u, "special? not lowered yet"); return;
L_08A64280:
    rt.unsupported(0x08A64280u, 0x00003131u, "special? not lowered yet"); return;
L_08A64284:
    rt.unsupported(0x08A64284u, 0x00000034u, "special? not lowered yet"); return;
L_08A64288:
    rt.unsupported(0x08A64288u, 0x6E756F63u, "vfpu3 not lowered yet"); return;
L_08A64290:
    rt.unsupported(0x08A64290u, 0x00007375u, "special? not lowered yet"); return;
L_08A64294:
    aot_gpr[14] = (0u ^ 0u);
    goto L_08A64298;
L_08A64298:
    rt.unsupported(0x08A64298u, 0x00007469u, "special? not lowered yet"); return;
L_08A6429C:
    aot_gpr[12] = (0u & 0u);
    goto L_08A642A0;
L_08A642A0:
    aot_gpr[14] = (0u | 0u);
    goto L_08A642A4;
L_08A642A4:
    aot_gpr[13] = (0u & 0u);
    goto L_08A642A8;
L_08A642A8:
    rt.unsupported(0x08A642A8u, 0x00006573u, "special? not lowered yet"); return;
L_08A642AC:
    aot_gpr[13] = (0u ^ 0u);
    goto L_08A642B0;
L_08A642B0:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u))); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A642B4;
L_08A642B4:
    rt.unsupported(0x08A642B4u, 0x00007572u, "special? not lowered yet"); return;
L_08A642B8:
    rt.unsupported(0x08A642B8u, 0x00006C70u, "special? not lowered yet"); return;
L_08A642BC:
    rt.unsupported(0x08A642BCu, 0x00007470u, "special? not lowered yet"); return;
L_08A642C0:
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u))); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A642C4;
L_08A642C4:
    aot_gpr[14] = (~(0u | 0u));
    goto L_08A642C8;
L_08A642C8:
    aot_gpr[14] = (0u < 0u ? 1u : 0u);
    goto L_08A642CC;
L_08A642CC:
    aot_gpr[14] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    goto L_08A642D0;
L_08A642D0:
    aot_gpr[12] = (~(0u | 0u));
    goto L_08A642D4;
L_08A642D4:
    rt.unsupported(0x08A642D4u, 0x616C7565u, "vfpu0 not lowered yet"); return;
L_08A64360:
    rt.unsupported(0x08A64360u, 0x72756F53u, "unknown not lowered yet"); return;
L_08A64390:
    aot_gpr[14] = (0u | 0u);
    goto L_08A64394;
L_08A64394:
    rt.unsupported(0x08A64394u, 0x73257325u, "unknown not lowered yet"); return;
L_08A6439C:
    rt.unsupported(0x08A6439Cu, 0x79616C70u, "unknown not lowered yet"); return;
L_08A643B0:
    rt.unsupported(0x08A643B0u, 0x79616C70u, "unknown not lowered yet"); return;
L_08A643E8:
    aot_gpr[1] = (aot_gpr[18] < static_cast<std::uint32_t>(20531) ? 1u : 0u);
    ctx.execute_vfpu_vcmp_ct<118u, 109u, 1u, 3u>();
    // nop
    goto L_08A643F4;
L_08A643F4:
    rt.unsupported(0x08A643F4u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A64400:
    if (aot_gpr[18] != aot_gpr[19]) {
    aot_gpr[28] = (aot_gpr[10] + static_cast<std::uint32_t>(19533));
        (void)rt.invoke_chained_direct<&recomp_unit_0632_entry, 632u, 4u, 0x08A7C154u>(ctx, &aot_mem); return;
    }
    goto L_08A64408;
L_08A64408:
    rt.unsupported(0x08A64408u, 0x00000073u, "special? not lowered yet"); return;
L_08A6440C:
    // nop
    goto L_08A64410;
L_08A64410:
    ctx.execute_vfpu_vminmax(46u, 115u, 118u, 1u, false);
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A64418;
L_08A64418:
    ctx.execute_vfpu_vcmp_ct<120u, 109u, 1u, 14u>();
    // nop
    goto L_08A64420;
L_08A64420:
    rt.unsupported(0x08A64420u, 0x786D612Eu, "unknown not lowered yet"); return;
L_08A64428:
    aot_gpr[13] = (aot_gpr[19] & 29742u);
    // nop
    goto L_08A64430;
L_08A64430:
    ctx.execute_vfpu_vscl_ct<102u, 105u, 108u, 1u>();
    // nop
    rt.unsupported(0x08A64438u, 0x43480000u, "unknown not lowered yet"); return;
L_08A64440:
    rt.unsupported(0x08A64440u, 0x72756F53u, "unknown not lowered yet"); return;
L_08A64454:
    rt.unsupported(0x08A64454u, 0x4373676Eu, "unknown not lowered yet"); return;
L_08A6446C:
    if (aot_gpr[19] == aot_gpr[20]) {
    ctx.execute_vfpu_vscl_ct<97u, 110u, 107u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0633_entry, 633u, 66u, 0x08A7D98Cu>(ctx, &aot_mem); return;
    }
    goto L_08A64474;
L_08A64474:
    rt.unsupported(0x08A64474u, 0x6E6F4364u, "vfpu3 not lowered yet"); return;
L_08A6447C:
    rt.unsupported(0x08A6447Cu, 0x6B6E6172u, "unknown not lowered yet"); return;
L_08A64484:
    ctx.execute_vfpu_vcmp_ct<97u, 120u, 1u, 13u>();
    ctx.execute_vfpu_vcmp_ct<118u, 101u, 1u, 5u>();
    rt.unsupported(0x08A6448Cu, 0x00000073u, "special? not lowered yet"); return;
L_08A64490:
    rt.unsupported(0x08A64490u, 0x7078616Du, "unknown not lowered yet"); return;
L_08A6449C:
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
    (void)(0u | 0u);
    goto L_08A644A4;
L_08A644A4:
    rt.unsupported(0x08A644A4u, 0x706E696Du, "unknown not lowered yet"); return;
L_08A644B0:
    rt.unsupported(0x08A644B0u, 0x75716552u, "unknown not lowered yet"); return;
L_08A644C4:
    rt.unsupported(0x08A644C4u, 0x4D56533Cu, "unknown not lowered yet"); return;
L_08A644D8:
    rt.unsupported(0x08A644D8u, 0x7974204Eu, "unknown not lowered yet"); return;
L_08A644E8:
    rt.unsupported(0x08A644E8u, 0x22524F52u, "unknown not lowered yet"); return;
L_08A64794:
    ctx.execute_vfpu_compare3(82u, 101u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A6479Cu, 0x46746F4Eu, "cop1? not lowered yet"); return;
L_08A647AC:
    rt.unsupported(0x08A647ACu, 0x4D56533Cu, "unknown not lowered yet"); return;
L_08A647C0:
    rt.unsupported(0x08A647C0u, 0x7974204Eu, "unknown not lowered yet"); return;
L_08A647D0:
    rt.unsupported(0x08A647D0u, 0x22524F52u, "unknown not lowered yet"); return;
L_08A647E0:
    rt.unsupported(0x08A647E0u, 0x4E656372u, "unknown not lowered yet"); return;
L_08A64A84:
    ctx.execute_vfpu_vscl_ct<78u, 97u, 109u, 1u>();
    rt.unsupported(0x08A64A88u, 0x6B6F6F4Cu, "unknown not lowered yet"); return;
L_08A64A94:
    ctx.execute_vfpu_vminmax(60u, 63u, 120u, 1u, false);
    ctx.execute_vfpu_vscl_ct<108u, 32u, 118u, 1u>();
    ctx.execute_vfpu_compare3(114u, 115u, 105u, 1u, 6u);
    aot_gpr[2] = (aot_gpr[9] & 15726u);
    aot_gpr[2] = (12334u << 16u);
    if (aot_gpr[25] == aot_gpr[28]) {
    aot_gpr[12] = (19798u << 16u);
        (void)rt.invoke_chained_direct<&recomp_unit_0611_entry, 611u, 51u, 0x08A673A4u>(ctx, &aot_mem); return;
    }
    goto L_08A64AB0;
L_08A64AB0:
    rt.unsupported(0x08A64AB0u, 0x2020200Au, "unknown not lowered yet"); return;
L_08A64ABC:
    rt.unsupported(0x08A64ABCu, 0x204E4947u, "unknown not lowered yet"); return;
L_08A64ACC:
    rt.unsupported(0x08A64ACCu, 0x4F525245u, "unknown not lowered yet"); return;
L_08A64D70:
    ctx.execute_vfpu_vhdp(102u, 102u, 102u, 1u);
    rt.unsupported(0x08A64D74u, 0x73202266u, "unknown not lowered yet"); return;
L_08A64DF4:
    rt.unsupported(0x08A64DF4u, 0x6E6E6F43u, "vfpu3 not lowered yet"); return;
L_08A64E04:
    ctx.execute_vfpu_vminmax(60u, 63u, 120u, 1u, false);
    ctx.execute_vfpu_vscl_ct<108u, 32u, 118u, 1u>();
    ctx.execute_vfpu_compare3(114u, 115u, 105u, 1u, 6u);
    aot_gpr[2] = (aot_gpr[9] & 15726u);
    aot_gpr[2] = (12334u << 16u);
    if (aot_gpr[25] == aot_gpr[28]) {
    aot_gpr[12] = (19798u << 16u);
        (void)rt.invoke_chained_direct<&recomp_unit_0611_entry, 611u, 106u, 0x08A67714u>(ctx, &aot_mem); return;
    }
    goto L_08A64E20;
L_08A64E20:
    rt.unsupported(0x08A64E20u, 0x2020200Au, "unknown not lowered yet"); return;
L_08A64E2C:
    rt.unsupported(0x08A64E2Cu, 0x204E4947u, "unknown not lowered yet"); return;
L_08A64E3C:
    rt.unsupported(0x08A64E3Cu, 0x4F525245u, "unknown not lowered yet"); return;
L_08A64E68:
    ctx.execute_vfpu_vscl_ct<110u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<61u, 34u, 119u, 1u>();
    ctx.execute_vfpu_vminmax(108u, 99u, 111u, 1u, false);
    rt.unsupported(0x08A64E74u, 0x78202265u, "unknown not lowered yet"); return;
L_08A64EA8:
    rt.unsupported(0x08A64EA8u, 0x22303222u, "unknown not lowered yet"); return;
}

void recomp_unit_0608(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0608_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_608(Runtime &runtime) {
    runtime.register_generated_unit(608u, 0x08A64000u, 4096u, &recomp_unit_0608, &recomp_unit_0608_entry);
    runtime.register_function(0x08A64014u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A6409Cu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64108u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A6410Cu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64114u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64120u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64144u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64154u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A6415Cu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64164u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64170u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64180u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64194u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A641A8u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A641B4u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A641C0u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A641C8u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A641D4u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A641D8u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A641E0u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A641E8u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A641ECu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A641F0u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64200u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A6421Cu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A6422Cu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64230u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64234u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A6423Cu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64244u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64254u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64258u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A6425Cu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64260u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64264u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64268u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A6426Cu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64270u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64274u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64278u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A6427Cu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64280u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64284u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64288u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64290u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64294u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64298u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A6429Cu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A642A0u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A642A4u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A642A8u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A642ACu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A642B0u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A642B4u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A642B8u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A642BCu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A642C0u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A642C4u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A642C8u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A642CCu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A642D0u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A642D4u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64360u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64390u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64394u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A6439Cu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A643B0u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A643E8u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A643F4u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64400u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64408u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A6440Cu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64410u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64418u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64420u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64428u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64430u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64440u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64454u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A6446Cu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64474u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A6447Cu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64484u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64490u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A6449Cu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A644A4u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A644B0u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A644C4u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A644D8u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A644E8u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64794u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A647ACu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A647C0u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A647D0u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A647E0u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64A84u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64A94u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64AB0u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64ABCu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64ACCu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64D70u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64DF4u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64E04u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64E20u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64E2Cu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64E3Cu, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64E68u, &recomp_unit_0608, "recomp_unit_0608");
    runtime.register_function(0x08A64EA8u, &recomp_unit_0608, "recomp_unit_0608");
}
} // namespace psprecomp
