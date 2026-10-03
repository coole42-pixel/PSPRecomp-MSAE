#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0622[1020] = {
    1, 0, 2, 0, 3, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 9, 10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0,
    0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0,
    0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40,
    0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 48, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 56,
    57, 0, 0, 0, 58, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63,
    0, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 90, 91, 0, 0, 92, 93, 0, 0, 0, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 111,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0,
    0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117,
};
void recomp_unit_0622_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A72000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0622[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A72000;
    case 2u: goto L_08A72008;
    case 3u: goto L_08A72010;
    case 4u: goto L_08A72014;
    case 5u: goto L_08A72020;
    case 6u: goto L_08A72044;
    case 7u: goto L_08A72064;
    case 8u: goto L_08A720E8;
    case 9u: goto L_08A720EC;
    case 10u: goto L_08A720F0;
    case 11u: goto L_08A72148;
    case 12u: goto L_08A72178;
    case 13u: goto L_08A72184;
    case 14u: goto L_08A72190;
    case 15u: goto L_08A721B8;
    case 16u: goto L_08A721C0;
    case 17u: goto L_08A721C8;
    case 18u: goto L_08A721E0;
    case 19u: goto L_08A721F0;
    case 20u: goto L_08A721F8;
    case 21u: goto L_08A72470;
    case 22u: goto L_08A72478;
    case 23u: goto L_08A72484;
    case 24u: goto L_08A724C8;
    case 25u: goto L_08A724DC;
    case 26u: goto L_08A725A8;
    case 27u: goto L_08A725C8;
    case 28u: goto L_08A72608;
    case 29u: goto L_08A72610;
    case 30u: goto L_08A72658;
    case 31u: goto L_08A726CC;
    case 32u: goto L_08A726D0;
    case 33u: goto L_08A72720;
    case 34u: goto L_08A72744;
    case 35u: goto L_08A72748;
    case 36u: goto L_08A72770;
    case 37u: goto L_08A72780;
    case 38u: goto L_08A72798;
    case 39u: goto L_08A728E8;
    case 40u: goto L_08A728FC;
    case 41u: goto L_08A7290C;
    case 42u: goto L_08A7291C;
    case 43u: goto L_08A7292C;
    case 44u: goto L_08A72974;
    case 45u: goto L_08A72A2C;
    case 46u: goto L_08A72A3C;
    case 47u: goto L_08A72A64;
    case 48u: goto L_08A72A68;
    case 49u: goto L_08A72A80;
    case 50u: goto L_08A72AA0;
    case 51u: goto L_08A72AB4;
    case 52u: goto L_08A72AB8;
    case 53u: goto L_08A72AC8;
    case 54u: goto L_08A72AD8;
    case 55u: goto L_08A72AE8;
    case 56u: goto L_08A72AFC;
    case 57u: goto L_08A72B00;
    case 58u: goto L_08A72B10;
    case 59u: goto L_08A72B14;
    case 60u: goto L_08A72B30;
    case 61u: goto L_08A72B48;
    case 62u: goto L_08A72B68;
    case 63u: goto L_08A72B7C;
    case 64u: goto L_08A72B90;
    case 65u: goto L_08A72B9C;
    case 66u: goto L_08A72BA4;
    case 67u: goto L_08A72BAC;
    case 68u: goto L_08A72BD0;
    case 69u: goto L_08A72BDC;
    case 70u: goto L_08A72BE8;
    case 71u: goto L_08A72BF4;
    case 72u: goto L_08A72C08;
    case 73u: goto L_08A72C1C;
    case 74u: goto L_08A72C38;
    case 75u: goto L_08A72C48;
    case 76u: goto L_08A72C4C;
    case 77u: goto L_08A72C50;
    case 78u: goto L_08A72C54;
    case 79u: goto L_08A72C58;
    case 80u: goto L_08A72C5C;
    case 81u: goto L_08A72C60;
    case 82u: goto L_08A72C64;
    case 83u: goto L_08A72C68;
    case 84u: goto L_08A72C6C;
    case 85u: goto L_08A72C70;
    case 86u: goto L_08A72C74;
    case 87u: goto L_08A72C78;
    case 88u: goto L_08A72C7C;
    case 89u: goto L_08A72C80;
    case 90u: goto L_08A72D04;
    case 91u: goto L_08A72D08;
    case 92u: goto L_08A72D14;
    case 93u: goto L_08A72D18;
    case 94u: goto L_08A72D28;
    case 95u: goto L_08A72D2C;
    case 96u: goto L_08A72D30;
    case 97u: goto L_08A72D34;
    case 98u: goto L_08A72D38;
    case 99u: goto L_08A72D3C;
    case 100u: goto L_08A72D40;
    case 101u: goto L_08A72D44;
    case 102u: goto L_08A72D48;
    case 103u: goto L_08A72D4C;
    case 104u: goto L_08A72D50;
    case 105u: goto L_08A72D54;
    case 106u: goto L_08A72D58;
    case 107u: goto L_08A72D5C;
    case 108u: goto L_08A72DD0;
    case 109u: goto L_08A72EE8;
    case 110u: goto L_08A72EF8;
    case 111u: goto L_08A72EFC;
    case 112u: goto L_08A72F24;
    case 113u: goto L_08A72F64;
    case 114u: goto L_08A72F88;
    case 115u: goto L_08A72FA0;
    case 116u: goto L_08A72FDC;
    case 117u: goto L_08A72FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A72000:
    rt.unsupported(0x08A72004u, 0x10101010u, "control flow in delay slot"); return;
L_08A72008:
    rt.unsupported(0x08A7200Cu, 0x10101010u, "control flow in delay slot"); return;
L_08A72010:
    rt.unsupported(0x08A72010u, 0x04040410u, "regimm? not lowered yet"); return;
L_08A72014:
    rt.unsupported(0x08A72014u, 0x04040404u, "regimm? not lowered yet"); return;
L_08A72020:
    rt.unsupported(0x08A72020u, 0x41411010u, "unknown not lowered yet"); return;
L_08A72044:
    rt.unsupported(0x08A72044u, 0x42424242u, "unknown not lowered yet"); return;
L_08A72064:
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
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A720E8;
L_08A720E8:
    rt.unsupported(0x08A720E8u, 0x0000002Eu, "special? not lowered yet"); return;
L_08A720EC:
    // nop
    goto L_08A720F0;
L_08A720F0:
    rt.unsupported(0x08A720F4u, 0x08A720ECu, "control flow in delay slot"); return;
L_08A72148:
    // nop
    // nop
    // nop
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(0u + static_cast<std::uint32_t>(0))))));
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    aot_gpr[6] = (11842u << 16u);
    aot_gpr[25] = (aot_gpr[11] | 15478u);
    aot_gpr[10] = (14831u << 16u);
    // nop
    rt.unsupported(0x08A7216Cu, 0x43500000u, "unknown not lowered yet"); return;
L_08A72178:
    aot_gpr[23] = (rt.memory().aot_load_word_right(aot_gpr[12] + static_cast<std::uint32_t>(-1532), aot_gpr[23]));
    aot_gpr[25] = (39321u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[1] + static_cast<std::uint32_t>(-27815)));
    goto L_08A72184;
L_08A72184:
    aot_gpr[18] = (18724u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[12]) > 0;
    aot_gpr[12] = (29125u << 16u);
      if (branch_taken) {
          ctx.pc = 0x08A90448u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
      }
      goto L_08A72190;
    }
L_08A72190:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(990)));
    aot_gpr[7] = (18020u << 16u);
    { const float vfpu_constant = __builtin_bit_cast(float, 0x00000000u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<31u, 4u>(vfpu_value); }
    aot_gpr[3] = (39433u << 16u);
    { const float vfpu_value[1]{static_cast<float>(21060)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<62u, 1u>(vfpu_value); }
    aot_gpr[2] = (61714u << 16u);
    // nop
    // nop
    { const bool branch_taken = aot_gpr[9] != aot_gpr[6];
    aot_gpr[27] = (52091u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0615_entry, 615u, 60u, 0x08A6B5ECu>(ctx, &aot_mem); return;
      }
      goto L_08A721B8;
    }
L_08A721B8:
    if (aot_gpr[4] == aot_gpr[31]) {
    aot_gpr[19] = (17427u << 16u);
        ctx.pc = 0x08A8A1BCu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A721C0;
L_08A721C0:
    { const bool branch_taken = aot_gpr[15] == aot_gpr[17];
    aot_gpr[25] = (65267u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0632_entry, 632u, 196u, 0x08A7CE9Cu>(ctx, &aot_mem); return;
      }
      goto L_08A721C8;
    }
L_08A721C8:
    // nop
    aot_gpr[16] = ((aot_gpr[31] >> 0u) & 0x00000001u);
    // nop
    { const std::uint32_t ll_address = aot_gpr[26] + static_cast<std::uint32_t>(0);
      ctx.ll_address = ll_address;
      ctx.ll_reserved = true;
      aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(ll_address)); }
    if (aot_gpr[10] != aot_gpr[21]) {
    aot_gpr[21] = (21845u << 16u);
        ctx.pc = 0x08A87730u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A721E0;
L_08A721E0:
    // nop
    (void)(0u << 16u);
    // nop
    rt.unsupported(0x08A721ECu, 0x40000000u, "unknown not lowered yet"); return;
L_08A721F0:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 1u));
    // nop
    goto L_08A721F8;
L_08A721F8:
    if (aot_gpr[1] == 0u) (void)(0u);
    (void)(aot_gpr[3] >> 0u);
    (void)(aot_gpr[5] << (0u & 31u));
    (void)(aot_gpr[7] >> (0u & 31u));
    jump_target = 0u;
    if (aot_gpr[11] == 0u) (void)(0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72470:
    rt.unsupported(0x08A72474u, 0x08A38E18u, "control flow in delay slot"); return;
L_08A72478:
    rt.unsupported(0x08A72478u, 0x4A532D43u, "cop2/vfpu not lowered yet"); return;
L_08A72484:
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[16]) >> 9u));
    rt.unsupported(0x08A72488u, 0x494A2D43u, "cop2/vfpu not lowered yet"); return;
L_08A724C8:
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    (void)(0u << 16u);
    (void)(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(13717)));
    goto L_08A724DC;
L_08A724DC:
    aot_gpr[31] = (65535u << 16u);
    aot_gpr[15] = (aot_gpr[13] | 58677u);
    (void)(0u << 16u);
    (void)(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(13717)));
    aot_gpr[15] = (65535u << 16u);
    rt.unsupported(0x08A724F4u, 0x08A3AF54u, "control flow in delay slot"); return;
L_08A725A8:
    rt.unsupported(0x08A725A8u, 0x0000001Fu, "special? not lowered yet"); return;
L_08A725C8:
    rt.unsupported(0x08A725C8u, 0x0000001Eu, "special? not lowered yet"); return;
L_08A72608:
    (void)(static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    rt.unsupported(0x08A7260Cu, 0x0000016Eu, "special? not lowered yet"); return;
L_08A72610:
    rt.unsupported(0x08A72610u, 0x676E750Au, "vfpu1 not lowered yet"); return;
L_08A72658:
    // nop
    aot_gpr[16] = (0u << 16u);
    // nop
    rt.unsupported(0x08A72664u, 0x40240000u, "unknown not lowered yet"); return;
L_08A726CC:
    rt.unsupported(0x08A726CCu, 0x42D6BCC4u, "unknown not lowered yet"); return;
L_08A726D0:
    aot_gpr[20] = (aot_gpr[17] + static_cast<std::uint32_t>(0));
    rt.unsupported(0x08A726D4u, 0x430C6BF5u, "unknown not lowered yet"); return;
L_08A72720:
    (void)(aot_gpr[31] | 32768u);
    rt.unsupported(0x08A72724u, 0x4341C379u, "unknown not lowered yet"); return;
L_08A72744:
    rt.unsupported(0x08A72744u, 0x75154FDDu, "unknown not lowered yet"); return;
L_08A72748:
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(-30276)));
    aot_gpr[28] = (53938u << 16u);
    rt.unsupported(0x08A72750u, 0xD5A8A733u, "vfpu not lowered yet"); return;
L_08A72770:
    rt.unsupported(0x08A72770u, 0x00000005u, "special? not lowered yet"); return;
L_08A72780:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08A72798;
L_08A72798:
    (void)(aot_gpr[2] << 4u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[3]) >> 12u));
    rt.unsupported(0x08A727A0u, 0x04040404u, "regimm? not lowered yet"); return;
L_08A728E8:
    aot_gpr[3] = (aot_gpr[27] < static_cast<std::uint32_t>(29299) ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[27] < static_cast<std::uint32_t>(29552) ? 1u : 0u);
    rt.unsupported(0x08A728F0u, 0x72687470u, "unknown not lowered yet"); return;
L_08A728FC:
    rt.unsupported(0x08A728FCu, 0x72687470u, "unknown not lowered yet"); return;
L_08A7290C:
    aot_gpr[18] = (aot_gpr[25] & 12592u);
    aot_gpr[22] = (aot_gpr[25] | 13620u);
    rt.unsupported(0x08A72914u, 0x42413938u, "unknown not lowered yet"); return;
L_08A7291C:
    rt.unsupported(0x08A7291Cu, 0x74696157u, "unknown not lowered yet"); return;
L_08A7292C:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(aot_gpr[2] << 4u);
    rt.unsupported(0x08A72960u, 0x07060504u, "regimm? not lowered yet"); return;
L_08A72974:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08A72A2C;
L_08A72A2C:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08A72A30u, 0x70203A72u, "unknown not lowered yet"); return;
L_08A72A3C:
    rt.unsupported(0x08A72A3Cu, 0x63204950u, "vfpu0 not lowered yet"); return;
L_08A72A64:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    goto L_08A72A68;
L_08A72A68:
    (void)(aot_gpr[9] + static_cast<std::uint32_t>(14962));
    rt.unsupported(0x08A72A6Cu, 0x69252873u, "unknown not lowered yet"); return;
L_08A72A80:
    ctx.execute_vfpu_compare3(69u, 114u, 114u, 1u, 6u);
    (void)(aot_gpr[9] + static_cast<std::uint32_t>(14962));
    rt.unsupported(0x08A72A88u, 0x69252873u, "unknown not lowered yet"); return;
L_08A72AA0:
    aot_gpr[3] = (aot_gpr[27] < static_cast<std::uint32_t>(29299) ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[27] < static_cast<std::uint32_t>(29552) ? 1u : 0u);
    rt.unsupported(0x08A72AA8u, 0x72687470u, "unknown not lowered yet"); return;
L_08A72AB4:
    rt.unsupported(0x08A72AB4u, 0x0000632Eu, "special? not lowered yet"); return;
L_08A72AB8:
    rt.unsupported(0x08A72AB8u, 0x72687470u, "unknown not lowered yet"); return;
L_08A72AC8:
    rt.unsupported(0x08A72AC8u, 0x72687470u, "unknown not lowered yet"); return;
L_08A72AD8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<99u, 97u, 1u, 0u>();
    rt.unsupported(0x08A72AE0u, 0x6361626Cu, "vfpu0 not lowered yet"); return;
L_08A72AE8:
    aot_gpr[3] = (aot_gpr[27] < static_cast<std::uint32_t>(29299) ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[27] < static_cast<std::uint32_t>(29552) ? 1u : 0u);
    rt.unsupported(0x08A72AF0u, 0x72687470u, "unknown not lowered yet"); return;
L_08A72AFC:
    rt.unsupported(0x08A72AFCu, 0x00632E78u, "special? not lowered yet"); return;
L_08A72B00:
    rt.unsupported(0x08A72B00u, 0x72687470u, "unknown not lowered yet"); return;
L_08A72B10:
    // nop
    goto L_08A72B14;
L_08A72B14:
    ctx.execute_vfpu_vminmax(114u, 116u, 95u, 1u, false);
    ctx.execute_vfpu_compare3(101u, 109u, 112u, 1u, 6u);
    rt.unsupported(0x08A72B1Cu, 0x635F6C6Fu, "vfpu0 not lowered yet"); return;
L_08A72B30:
    aot_gpr[18] = (aot_gpr[25] & 12592u);
    aot_gpr[22] = (aot_gpr[25] | 13620u);
    rt.unsupported(0x08A72B38u, 0x62613938u, "vfpu0 not lowered yet"); return;
L_08A72B48:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A72B54u, 0x4356532Fu, "unknown not lowered yet"); return;
L_08A72B68:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    if (aot_gpr[2] != aot_gpr[22]) {
    ctx.execute_vfpu_compare3(97u, 103u, 77u, 1u, 6u);
        ctx.pc = 0x08A87834u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08A72B7C;
L_08A72B7C:
    ctx.execute_vfpu_vscl_ct<100u, 117u, 108u, 1u>();
    rt.unsupported(0x08A72B80u, 0x7473694Cu, "unknown not lowered yet"); return;
L_08A72B90:
    rt.unsupported(0x08A72B90u, 0x6B6E696Cu, "unknown not lowered yet"); return;
L_08A72B9C:
    ctx.execute_vfpu_vscl_ct<110u, 97u, 109u, 1u>();
    // nop
    goto L_08A72BA4;
L_08A72BA4:
    ctx.execute_vfpu_vhdp(104u, 114u, 101u, 1u);
    // nop
    goto L_08A72BAC;
L_08A72BAC:
    aot_gpr[15] = (aot_gpr[17] < static_cast<std::uint32_t>(11822) ? 1u : 0u);
    ctx.execute_vfpu_compare3(46u, 47u, 115u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<117u, 114u, 99u, 1u>();
    rt.unsupported(0x08A72BB8u, 0x6761542Fu, "vfpu1 not lowered yet"); return;
L_08A72BD0:
    ctx.execute_vfpu_vcmp_ct<105u, 108u, 1u, 6u>();
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08A72BD8u, 0x00000072u, "special? not lowered yet"); return;
L_08A72BDC:
    ctx.execute_vfpu_vscl_ct<108u, 105u, 110u, 1u>();
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08A72BE4u, 0x00000072u, "special? not lowered yet"); return;
L_08A72BE8:
    rt.unsupported(0x08A72BE8u, 0x74786574u, "unknown not lowered yet"); return;
L_08A72BF4:
    rt.unsupported(0x08A72BF4u, 0x68676968u, "unknown not lowered yet"); return;
L_08A72C08:
    rt.unsupported(0x08A72C08u, 0x68676968u, "unknown not lowered yet"); return;
L_08A72C1C:
    rt.unsupported(0x08A72C1Cu, 0x68676968u, "unknown not lowered yet"); return;
L_08A72C38:
    // nop
    (void)(0u << 0u);
    (void)(0u << 0u);
    rt.unsupported(0x08A72C48u, 0x12000000u, "control flow in delay slot"); return;
L_08A72C48:
    rt.unsupported(0x08A72C4Cu, 0x13000000u, "control flow in delay slot"); return;
L_08A72C4C:
    rt.unsupported(0x08A72C50u, 0x15000000u, "control flow in delay slot"); return;
L_08A72C50:
    rt.unsupported(0x08A72C54u, 0x16000000u, "control flow in delay slot"); return;
L_08A72C54:
    rt.unsupported(0x08A72C58u, 0x17000000u, "control flow in delay slot"); return;
L_08A72C58:
    rt.unsupported(0x08A72C5Cu, 0x18000000u, "control flow in delay slot"); return;
L_08A72C5C:
    rt.unsupported(0x08A72C60u, 0x19000000u, "control flow in delay slot"); return;
L_08A72C60:
    rt.unsupported(0x08A72C64u, 0x1A000000u, "control flow in delay slot"); return;
L_08A72C64:
    rt.unsupported(0x08A72C68u, 0x1B000000u, "control flow in delay slot"); return;
L_08A72C68:
    rt.unsupported(0x08A72C6Cu, 0x1C000000u, "control flow in delay slot"); return;
L_08A72C6C:
    rt.unsupported(0x08A72C70u, 0x1D000000u, "control flow in delay slot"); return;
L_08A72C70:
    rt.unsupported(0x08A72C74u, 0x1E000000u, "control flow in delay slot"); return;
L_08A72C74:
    rt.unsupported(0x08A72C78u, 0x1F000000u, "control flow in delay slot"); return;
L_08A72C78:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[24]) > 0;
    rt.unsupported(0x08A72C7Cu, 0x20000000u, "unknown not lowered yet"); return;
      if (branch_taken) {
          goto L_08A72C7C;
      }
      goto L_08A72C80;
    }
L_08A72C7C:
    rt.unsupported(0x08A72C7Cu, 0x20000000u, "unknown not lowered yet"); return;
L_08A72C80:
    rt.unsupported(0x08A72C80u, 0x21000000u, "unknown not lowered yet"); return;
L_08A72D04:
    aot_fpr[0] = aot_fpr[0] + aot_fpr[0];
    goto L_08A72D08;
L_08A72D08:
    rt.unsupported(0x08A72D08u, 0x47000000u, "cop1? not lowered yet"); return;
L_08A72D14:
    rt.unsupported(0x08A72D14u, 0x4A000000u, "cop2/vfpu not lowered yet"); return;
L_08A72D18:
    rt.unsupported(0x08A72D18u, 0x4B000000u, "cop2/vfpu not lowered yet"); return;
L_08A72D28:
    rt.unsupported(0x08A72D2Cu, 0x53000000u, "control flow in delay slot"); return;
L_08A72D2C:
    rt.unsupported(0x08A72D30u, 0x54000000u, "control flow in delay slot"); return;
L_08A72D30:
    rt.unsupported(0x08A72D34u, 0x55000000u, "control flow in delay slot"); return;
L_08A72D34:
    rt.unsupported(0x08A72D38u, 0x56000000u, "control flow in delay slot"); return;
L_08A72D38:
    rt.unsupported(0x08A72D3Cu, 0x57000000u, "control flow in delay slot"); return;
L_08A72D3C:
    rt.unsupported(0x08A72D40u, 0x58000000u, "control flow in delay slot"); return;
L_08A72D40:
    rt.unsupported(0x08A72D44u, 0x5B000000u, "control flow in delay slot"); return;
L_08A72D44:
    rt.unsupported(0x08A72D48u, 0x5C000000u, "control flow in delay slot"); return;
L_08A72D48:
    rt.unsupported(0x08A72D4Cu, 0x5D000000u, "control flow in delay slot"); return;
L_08A72D4C:
    rt.unsupported(0x08A72D50u, 0x5E000000u, "control flow in delay slot"); return;
L_08A72D50:
    rt.unsupported(0x08A72D54u, 0x5F000000u, "control flow in delay slot"); return;
L_08A72D54:
    if (static_cast<std::int32_t>(aot_gpr[24]) > 0) {
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
        goto L_08A72D58;
    }
    goto L_08A72D5C;
L_08A72D58:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    goto L_08A72D5C;
L_08A72D5C:
    rt.unsupported(0x08A72D5Cu, 0x61000000u, "vfpu0 not lowered yet"); return;
L_08A72DD0:
    (void)((aot_gpr[16] >> 0u) & 0x00000001u);
    (void)((aot_gpr[24] >> 0u) & 0x00000001u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(0u + static_cast<std::uint32_t>(0))))));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[24] + static_cast<std::uint32_t>(0))))));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(0u + static_cast<std::uint32_t>(0))))));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(0))))));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[24] + static_cast<std::uint32_t>(0))))));
    (void)(rt.memory().aot_load_word_left(0u + static_cast<std::uint32_t>(0), 0u));
    (void)(rt.memory().aot_load_word_left(aot_gpr[8] + static_cast<std::uint32_t>(0), 0u));
    (void)(rt.memory().aot_load_word_left(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u));
    (void)(rt.memory().aot_load_word_left(aot_gpr[24] + static_cast<std::uint32_t>(0), 0u));
    (void)(PSPRECOMP_AOT_LOAD32(0u + static_cast<std::uint32_t>(0)));
    (void)(PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    (void)(PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    (void)(PSPRECOMP_AOT_LOAD32(aot_gpr[24] + static_cast<std::uint32_t>(0)));
    (void)(PSPRECOMP_AOT_LOAD8(0u + static_cast<std::uint32_t>(0)));
    (void)(PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    (void)(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    (void)(PSPRECOMP_AOT_LOAD8(aot_gpr[24] + static_cast<std::uint32_t>(0)));
    (void)(PSPRECOMP_AOT_LOAD16(0u + static_cast<std::uint32_t>(0)));
    (void)(PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    (void)(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    (void)(PSPRECOMP_AOT_LOAD16(aot_gpr[24] + static_cast<std::uint32_t>(0)));
    (void)(rt.memory().aot_load_word_right(0u + static_cast<std::uint32_t>(0), 0u));
    (void)(rt.memory().aot_load_word_right(aot_gpr[8] + static_cast<std::uint32_t>(0), 0u));
    (void)(rt.memory().aot_load_word_right(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u));
    (void)(rt.memory().aot_load_word_right(aot_gpr[24] + static_cast<std::uint32_t>(0), 0u));
    rt.unsupported(0x08A72E48u, 0x9C000000u, "unknown not lowered yet"); return;
L_08A72EE8:
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_fpr[0] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[24] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<0u>(PSPRECOMP_AOT_LOAD32(0u + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<0u>(PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_08A72EF8;
L_08A72EF8:
    ctx.set_vfpu_scalar_bits_ct<0u>(PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A72EFC;
L_08A72EFC:
    ctx.set_vfpu_scalar_bits_ct<0u>(PSPRECOMP_AOT_LOAD32(aot_gpr[24] + static_cast<std::uint32_t>(0)));
    rt.unsupported(0x08A72F00u, 0xCC000000u, "unknown not lowered yet"); return;
L_08A72F24:
    rt.unsupported(0x08A72F24u, 0xD6000000u, "vfpu not lowered yet"); return;
L_08A72F64:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    PSPRECOMP_AOT_STORE32(aot_gpr[24] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    PSPRECOMP_AOT_STORE32(0u + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<0u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<0u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[24] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<0u>());
    rt.unsupported(0x08A72F78u, 0xEC000000u, "unknown not lowered yet"); return;
L_08A72F88:
    (void)(ctx.hi);
    // nop
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A72F90u, 0x00000020u); return; } }
    // nop
    ctx.pc = 0x02A6F420u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08A72FA0:
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    rt.unsupported(0x08A72FACu, 0x00000001u, "special? not lowered yet"); return;
L_08A72FDC:
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u << 16u);
    rt.unsupported(0x08A72FE4u, 0x41800000u, "unknown not lowered yet"); return;
L_08A72FEC:
    rt.unsupported(0x08A72FF0u, 0x08A47730u, "control flow in delay slot"); return;
}

void recomp_unit_0622(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0622_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_622(Runtime &runtime) {
    runtime.register_generated_unit(622u, 0x08A72000u, 4096u, &recomp_unit_0622, &recomp_unit_0622_entry);
    runtime.register_function(0x08A72000u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72008u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72010u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72014u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72020u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72044u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72064u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A720E8u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A720ECu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A720F0u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72148u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72178u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72184u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72190u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A721B8u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A721C0u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A721C8u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A721E0u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A721F0u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A721F8u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72470u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72478u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72484u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A724C8u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A724DCu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A725A8u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A725C8u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72608u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72610u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72658u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A726CCu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A726D0u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72720u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72744u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72748u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72770u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72780u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72798u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A728E8u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A728FCu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A7290Cu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A7291Cu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A7292Cu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72974u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72A2Cu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72A3Cu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72A64u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72A68u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72A80u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72AA0u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72AB4u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72AB8u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72AC8u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72AD8u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72AE8u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72AFCu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72B00u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72B10u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72B14u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72B30u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72B48u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72B68u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72B7Cu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72B90u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72B9Cu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72BA4u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72BACu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72BD0u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72BDCu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72BE8u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72BF4u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72C08u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72C1Cu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72C38u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72C48u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72C4Cu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72C50u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72C54u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72C58u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72C5Cu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72C60u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72C64u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72C68u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72C6Cu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72C70u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72C74u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72C78u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72C7Cu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72C80u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72D04u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72D08u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72D14u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72D18u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72D28u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72D2Cu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72D30u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72D34u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72D38u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72D3Cu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72D40u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72D44u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72D48u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72D4Cu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72D50u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72D54u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72D58u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72D5Cu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72DD0u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72EE8u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72EF8u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72EFCu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72F24u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72F64u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72F88u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72FA0u, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72FDCu, &recomp_unit_0622, "recomp_unit_0622");
    runtime.register_function(0x08A72FECu, &recomp_unit_0622, "recomp_unit_0622");
}
} // namespace psprecomp
