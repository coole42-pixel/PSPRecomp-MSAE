#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0625[1016] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 37, 38, 0, 39, 0, 0, 40, 0,
    0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0,
    0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0,
    0, 58, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 67, 0, 0, 0, 0, 0, 68, 0,
    0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81,
    0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93,
};
void recomp_unit_0625_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A75000u;
        entry_id = (entry_delta < 4064u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0625[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A75000;
    case 2u: goto L_08A7504C;
    case 3u: goto L_08A750A4;
    case 4u: goto L_08A750D0;
    case 5u: goto L_08A75134;
    case 6u: goto L_08A751DC;
    case 7u: goto L_08A75230;
    case 8u: goto L_08A75238;
    case 9u: goto L_08A75240;
    case 10u: goto L_08A7524C;
    case 11u: goto L_08A75250;
    case 12u: goto L_08A7527C;
    case 13u: goto L_08A752E4;
    case 14u: goto L_08A7533C;
    case 15u: goto L_08A75358;
    case 16u: goto L_08A75564;
    case 17u: goto L_08A755A4;
    case 18u: goto L_08A755F8;
    case 19u: goto L_08A75630;
    case 20u: goto L_08A7564C;
    case 21u: goto L_08A75744;
    case 22u: goto L_08A75754;
    case 23u: goto L_08A75760;
    case 24u: goto L_08A757A0;
    case 25u: goto L_08A75810;
    case 26u: goto L_08A7581C;
    case 27u: goto L_08A75854;
    case 28u: goto L_08A75860;
    case 29u: goto L_08A75870;
    case 30u: goto L_08A7588C;
    case 31u: goto L_08A75898;
    case 32u: goto L_08A758A4;
    case 33u: goto L_08A758B0;
    case 34u: goto L_08A758BC;
    case 35u: goto L_08A758C8;
    case 36u: goto L_08A758D4;
    case 37u: goto L_08A758E0;
    case 38u: goto L_08A758E4;
    case 39u: goto L_08A758EC;
    case 40u: goto L_08A758F8;
    case 41u: goto L_08A75904;
    case 42u: goto L_08A75910;
    case 43u: goto L_08A7591C;
    case 44u: goto L_08A75928;
    case 45u: goto L_08A759B0;
    case 46u: goto L_08A759D0;
    case 47u: goto L_08A759D8;
    case 48u: goto L_08A759F0;
    case 49u: goto L_08A75A28;
    case 50u: goto L_08A75A54;
    case 51u: goto L_08A75A74;
    case 52u: goto L_08A75A94;
    case 53u: goto L_08A75AE0;
    case 54u: goto L_08A75B08;
    case 55u: goto L_08A75B14;
    case 56u: goto L_08A75B58;
    case 57u: goto L_08A75B64;
    case 58u: goto L_08A75B84;
    case 59u: goto L_08A75B88;
    case 60u: goto L_08A75BA4;
    case 61u: goto L_08A75BC4;
    case 62u: goto L_08A75C1C;
    case 63u: goto L_08A75C88;
    case 64u: goto L_08A75CA4;
    case 65u: goto L_08A75CC0;
    case 66u: goto L_08A75CDC;
    case 67u: goto L_08A75CE0;
    case 68u: goto L_08A75CF8;
    case 69u: goto L_08A75D14;
    case 70u: goto L_08A75D2C;
    case 71u: goto L_08A75D4C;
    case 72u: goto L_08A75D54;
    case 73u: goto L_08A75D6C;
    case 74u: goto L_08A75D90;
    case 75u: goto L_08A75DB0;
    case 76u: goto L_08A75DC8;
    case 77u: goto L_08A75DE8;
    case 78u: goto L_08A75E0C;
    case 79u: goto L_08A75E30;
    case 80u: goto L_08A75E4C;
    case 81u: goto L_08A75E7C;
    case 82u: goto L_08A75E8C;
    case 83u: goto L_08A75EC4;
    case 84u: goto L_08A75ED8;
    case 85u: goto L_08A75EF0;
    case 86u: goto L_08A75F84;
    case 87u: goto L_08A75F90;
    case 88u: goto L_08A75F9C;
    case 89u: goto L_08A75FA8;
    case 90u: goto L_08A75FB4;
    case 91u: goto L_08A75FC4;
    case 92u: goto L_08A75FD0;
    case 93u: goto L_08A75FDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A75000:
    // nop
    aot_gpr[16] = (0u << 16u);
    { const std::uint32_t sc_address = 0u + static_cast<std::uint32_t>(0);
      const bool sc_reserved = ctx.ll_reserved && ctx.ll_address == sc_address;
      if (sc_reserved) PSPRECOMP_AOT_STORE32(sc_address, aot_gpr[0]);
      ctx.ll_reserved = false;
      (void)(sc_reserved ? 1u : 0u); }
    rt.unsupported(0x08A7500Cu, 0x47EFFFFFu, "cop1? not lowered yet"); return;
L_08A7504C:
    (void)(0u << 16u);
    aot_gpr[2] = (aot_gpr[29] & 8552u);
    aot_gpr[9] = (4058u << 16u);
    (void)(0u << 16u);
    { const std::uint32_t ll_address = 0u + static_cast<std::uint32_t>(0);
      ctx.ll_address = ll_address;
      ctx.ll_reserved = true;
      (void)(PSPRECOMP_AOT_LOAD32(ll_address)); }
    rt.unsupported(0x08A75060u, 0x40490FDAu, "unknown not lowered yet"); return;
L_08A750A4:
    { const std::uint32_t ll_address = 0u + static_cast<std::uint32_t>(0);
      ctx.ll_address = ll_address;
      ctx.ll_reserved = true;
      (void)(PSPRECOMP_AOT_LOAD32(ll_address)); }
    aot_gpr[9] = (4059u << 16u);
    rt.unsupported(0x08A750ACu, 0x40490FDAu, "unknown not lowered yet"); return;
L_08A750D0:
    aot_gpr[9] = (4060u << 16u);
    aot_gpr[2] = (aot_gpr[1] | 8552u);
    (void)(0u << 16u);
    (void)((aot_gpr[28] >> 0u) & 0x00000001u);
    aot_gpr[24] = (43520u << 16u);
    aot_gpr[12] = (aot_gpr[23] | 42352u);
    // PSP CACHE is a no-op in coherent host memory.
    aot_gpr[10] = (43691u << 16u);
    (void)(0u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    rt.unsupported(0x08A750F8u, 0x4B800000u, "cop2/vfpu not lowered yet"); return;
L_08A75134:
    aot_gpr[17] = (29208u << 16u);
    aot_gpr[31] = (aot_gpr[13] | 48780u);
    aot_gpr[17] = (aot_gpr[25] & 47948u);
    aot_gpr[29] = (aot_gpr[14] | 59918u);
    aot_gpr[10] = (aot_gpr[4] ^ 45909u);
    aot_gpr[22] = (aot_gpr[25] ^ 2913u);
    aot_gpr[10] = (43691u << 16u);
    rt.unsupported(0x08A75150u, 0x40000000u, "unknown not lowered yet"); return;
L_08A751DC:
    (void)(0u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    aot_gpr[9] = (4058u << 16u);
    aot_gpr[2] = (aot_gpr[25] & 8552u);
    rt.unsupported(0x08A751ECu, 0xB79BAE5Fu, "unknown not lowered yet"); return;
L_08A75230:
    (void)(aot_gpr[24] & 0u);
    // nop
    goto L_08A75238;
L_08A75238:
    // nop
    { const std::uint32_t ll_address = aot_gpr[15] + static_cast<std::uint32_t>(0);
      ctx.ll_address = ll_address;
      ctx.ll_reserved = true;
      (void)(PSPRECOMP_AOT_LOAD32(ll_address)); }
    goto L_08A75240;
L_08A75240:
    rt.unsupported(0x08A75240u, 0x62733C00u, "vfpu0 not lowered yet"); return;
L_08A7524C:
    rt.unsupported(0x08A7524Cu, 0x62410A0Au, "vfpu0 not lowered yet"); return;
L_08A75250:
    ctx.execute_vfpu_vscl_ct<111u, 114u, 116u, 1u>();
    rt.unsupported(0x08A75254u, 0x75462064u, "unknown not lowered yet"); return;
L_08A7527C:
    rt.unsupported(0x08A7527Cu, 0x426D654Du, "unknown not lowered yet"); return;
L_08A752E4:
    // nop
    rt.unsupported(0x08A752ECu, 0x08804E94u, "control flow in delay slot"); return;
L_08A7533C:
    rt.memory().aot_store_word_right(aot_gpr[23] + static_cast<std::uint32_t>(-19269), aot_gpr[1]);
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    goto L_08A75358;
L_08A75358:
    // nop
    // nop
    // nop
    // nop
    aot_gpr[16] = (48436u << 16u);
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    rt.unsupported(0x08A75378u, 0x00000001u, "special? not lowered yet"); return;
L_08A75564:
    // nop
    // nop
    // nop
    rt.unsupported(0x08A75570u, 0x00000001u, "special? not lowered yet"); return;
L_08A755A4:
    // nop
    (void)(0u >> (0u & 31u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    // nop
    jump_target = 0u;
    (void)(0u >> (0u & 31u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A755F8:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    rt.unsupported(0x08A755FCu, 0x00000001u, "special? not lowered yet"); return;
L_08A75630:
    rt.unsupported(0x08A75630u, 0x0000000Du, "special? not lowered yet"); return;
L_08A7564C:
    rt.unsupported(0x08A7564Cu, 0x0000000Eu, "special? not lowered yet"); return;
L_08A75744:
    // nop
    // nop
    // nop
    // nop
    goto L_08A75754;
L_08A75754:
    // nop
    aot_gpr[3] = (55050u << 16u);
    aot_gpr[24] = (20972u << 16u);
    goto L_08A75760;
L_08A75760:
    aot_gpr[12] = (52429u << 16u);
    aot_gpr[19] = (13107u << 16u);
    (void)(0u << 16u);
    aot_gpr[6] = (26214u << 16u);
    aot_gpr[12] = (52429u << 16u);
    aot_gpr[8] = (62915u << 16u);
    aot_gpr[26] = (57672u << 16u);
    (void)(0u << 16u);
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A757A0;
L_08A757A0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A75810;
L_08A75810:
    // nop
    // nop
    // nop
    goto L_08A7581C;
L_08A7581C:
    rt.unsupported(0x08A75820u, 0x08A5C5E0u, "control flow in delay slot"); return;
L_08A75854:
    // nop
    rt.unsupported(0x08A7585Cu, 0x08927680u, "control flow in delay slot"); return;
L_08A75860:
    // nop
    rt.unsupported(0x08A75868u, 0x08927680u, "control flow in delay slot"); return;
L_08A75870:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A7588C;
L_08A7588C:
    // nop
    rt.unsupported(0x08A75894u, 0x08825AC0u, "control flow in delay slot"); return;
L_08A75898:
    // nop
    rt.unsupported(0x08A758A0u, 0x0882479Cu, "control flow in delay slot"); return;
L_08A758A4:
    // nop
    rt.unsupported(0x08A758ACu, 0x08825520u, "control flow in delay slot"); return;
L_08A758B0:
    // nop
    rt.unsupported(0x08A758B8u, 0x08825348u, "control flow in delay slot"); return;
L_08A758BC:
    // nop
    rt.unsupported(0x08A758C4u, 0x08825100u, "control flow in delay slot"); return;
L_08A758C8:
    // nop
    rt.unsupported(0x08A758D0u, 0x088259B0u, "control flow in delay slot"); return;
L_08A758D4:
    // nop
    rt.unsupported(0x08A758DCu, 0x08825790u, "control flow in delay slot"); return;
L_08A758E0:
    // nop
    goto L_08A758E4;
L_08A758E4:
    rt.unsupported(0x08A758E8u, 0x088258A0u, "control flow in delay slot"); return;
L_08A758EC:
    // nop
    rt.unsupported(0x08A758F4u, 0x0882493Cu, "control flow in delay slot"); return;
L_08A758F8:
    // nop
    rt.unsupported(0x08A75900u, 0x08824A98u, "control flow in delay slot"); return;
L_08A75904:
    // nop
    rt.unsupported(0x08A7590Cu, 0x088249B0u, "control flow in delay slot"); return;
L_08A75910:
    // nop
    rt.unsupported(0x08A75918u, 0x08824B80u, "control flow in delay slot"); return;
L_08A7591C:
    // nop
    rt.unsupported(0x08A75924u, 0x08824A24u, "control flow in delay slot"); return;
L_08A75928:
    // nop
    rt.unsupported(0x08A75930u, 0x08824B0Cu, "control flow in delay slot"); return;
L_08A759B0:
    // nop
    // nop
    // nop
    // nop
    // nop
    (void)(0u << (0u & 31u));
    // nop
    // nop
    goto L_08A759D0;
L_08A759D0:
    // nop
    // nop
    goto L_08A759D8;
L_08A759D8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A759F0;
L_08A759F0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A75A28;
L_08A75A28:
    // nop
    // nop
    rt.unsupported(0x08A75A30u, 0x00FFFFFFu, "special? not lowered yet"); return;
L_08A75A54:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A75A74;
L_08A75A74:
    if (0u != 0u) (void)(0u);
    rt.unsupported(0x08A75A78u, 0x00000001u, "special? not lowered yet"); return;
L_08A75A94:
    rt.unsupported(0x08A75A94u, 0x0000000Eu, "special? not lowered yet"); return;
L_08A75AE0:
    // nop
    rt.unsupported(0x08A75AE8u, 0x089356ACu, "control flow in delay slot"); return;
L_08A75B08:
    // nop
    // nop
    // nop
    goto L_08A75B14;
L_08A75B14:
    rt.unsupported(0x08A75B18u, 0x08A5CF0Cu, "control flow in delay slot"); return;
L_08A75B58:
    // nop
    // nop
    // nop
    goto L_08A75B64;
L_08A75B64:
    rt.unsupported(0x08A75B68u, 0x08A5D19Cu, "control flow in delay slot"); return;
L_08A75B84:
    // nop
    goto L_08A75B88;
L_08A75B88:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A75BA4;
L_08A75BA4:
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    goto L_08A75BC4;
L_08A75BC4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A75C1C;
L_08A75C1C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A75C88;
L_08A75C88:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A75CA4;
L_08A75CA4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A75CC0;
L_08A75CC0:
    // nop
    // nop
    // nop
    // nop
    // nop
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    rt.unsupported(0x08A75CDCu, 0x00000008u, "control flow in delay slot"); return;
L_08A75CDC:
    jump_target = 0u;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A75CE0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A75CF8;
L_08A75CF8:
    // nop
    // nop
    // nop
    aot_gpr[6] = (26214u << 16u);
    (void)(0u << 16u);
    aot_gpr[12] = (52429u << 16u);
    aot_gpr[12] = (52429u << 16u);
    goto L_08A75D14;
L_08A75D14:
    (void)(0u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    // nop
    // nop
    // nop
    goto L_08A75D2C;
L_08A75D2C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A75D4C;
L_08A75D4C:
    // nop
    // nop
    goto L_08A75D54;
L_08A75D54:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A75D6C;
L_08A75D6C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A75D90;
L_08A75D90:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A75DB0;
L_08A75DB0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A75DC8;
L_08A75DC8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A75DE8;
L_08A75DE8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A75E0C;
L_08A75E0C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A75E30;
L_08A75E30:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A75E4C;
L_08A75E4C:
    // nop
    // nop
    aot_gpr[19] = (13107u << 16u);
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A75E7C;
L_08A75E7C:
    // nop
    // nop
    // nop
    // nop
    goto L_08A75E8C;
L_08A75E8C:
    aot_gpr[31] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(-1))))));
    rt.unsupported(0x08A75E90u, 0x40408080u, "unknown not lowered yet"); return;
L_08A75EC4:
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<44u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(24u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (18u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(123u, 2u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<45u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[27] + static_cast<std::uint32_t>(9488);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[6] ^ 64430u);
    if (aot_gpr[8] == aot_gpr[4]) {
    aot_gpr[24] = (0u << 3u);
        ctx.pc = 0x08A8A58Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A75ED8;
L_08A75ED8:
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A75EF0;
L_08A75EF0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    rt.unsupported(0x08A75F40u, 0x41200000u, "unknown not lowered yet"); return;
L_08A75F84:
    // nop
    // nop
    // nop
    goto L_08A75F90;
L_08A75F90:
    // nop
    // nop
    // nop
    goto L_08A75F9C;
L_08A75F9C:
    // nop
    // nop
    // nop
    goto L_08A75FA8;
L_08A75FA8:
    // nop
    // nop
    // nop
    goto L_08A75FB4;
L_08A75FB4:
    // nop
    // nop
    // nop
    // nop
    goto L_08A75FC4;
L_08A75FC4:
    // nop
    // nop
    // nop
    goto L_08A75FD0;
L_08A75FD0:
    // nop
    // nop
    // nop
    goto L_08A75FDC;
L_08A75FDC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x08A76000u; return;
}

void recomp_unit_0625(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0625_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_625(Runtime &runtime) {
    runtime.register_generated_unit(625u, 0x08A75000u, 4096u, &recomp_unit_0625, &recomp_unit_0625_entry);
    runtime.register_function(0x08A75000u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A7504Cu, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A750A4u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A750D0u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75134u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A751DCu, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75230u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75238u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75240u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A7524Cu, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75250u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A7527Cu, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A752E4u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A7533Cu, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75358u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75564u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A755A4u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A755F8u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75630u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A7564Cu, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75744u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75754u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75760u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A757A0u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75810u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A7581Cu, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75854u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75860u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75870u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A7588Cu, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75898u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A758A4u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A758B0u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A758BCu, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A758C8u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A758D4u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A758E0u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A758E4u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A758ECu, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A758F8u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75904u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75910u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A7591Cu, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75928u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A759B0u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A759D0u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A759D8u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A759F0u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75A28u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75A54u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75A74u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75A94u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75AE0u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75B08u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75B14u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75B58u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75B64u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75B84u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75B88u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75BA4u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75BC4u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75C1Cu, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75C88u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75CA4u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75CC0u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75CDCu, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75CE0u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75CF8u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75D14u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75D2Cu, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75D4Cu, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75D54u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75D6Cu, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75D90u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75DB0u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75DC8u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75DE8u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75E0Cu, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75E30u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75E4Cu, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75E7Cu, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75E8Cu, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75EC4u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75ED8u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75EF0u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75F84u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75F90u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75F9Cu, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75FA8u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75FB4u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75FC4u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75FD0u, &recomp_unit_0625, "recomp_unit_0625");
    runtime.register_function(0x08A75FDCu, &recomp_unit_0625, "recomp_unit_0625");
}
} // namespace psprecomp
