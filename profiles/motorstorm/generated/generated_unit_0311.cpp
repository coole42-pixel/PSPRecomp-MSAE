#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0311[1023] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 9, 10, 0, 11, 0, 0, 12, 13, 0, 0, 0, 0, 14, 0, 0, 15,
    0, 0, 0, 16, 17, 0, 0, 18, 0, 0, 0, 19, 20, 0, 0, 0, 0, 21, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0,
    0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0,
    0, 0, 40, 0, 41, 0, 0, 42, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46,
    0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 53, 0, 0, 0, 54, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 59, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 67, 0, 0, 0, 0, 0, 0,
    0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 74, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 79, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0,
    93, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108,
    0, 109, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 123, 0, 124, 0, 125, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 129, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 133, 0,
    0, 0, 0, 134, 0, 135, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 0, 139, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 143, 0,
    0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0,
    0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 161, 0, 0, 0,
    0, 0, 0, 162, 0, 0, 163, 164, 0, 165, 166, 0, 167, 0, 168, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0,
    0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 175, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 186,
    187, 0, 188, 0, 189, 0, 0, 0, 0, 190, 0, 0, 191, 0, 192, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195,
};
void recomp_unit_0311_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0893B004u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0311[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0893B004;
    case 2u: goto L_0893B01C;
    case 3u: goto L_0893B02C;
    case 4u: goto L_0893B038;
    case 5u: goto L_0893B04C;
    case 6u: goto L_0893B088;
    case 7u: goto L_0893B0A4;
    case 8u: goto L_0893B0BC;
    case 9u: goto L_0893B0C4;
    case 10u: goto L_0893B0C8;
    case 11u: goto L_0893B0D0;
    case 12u: goto L_0893B0DC;
    case 13u: goto L_0893B0E0;
    case 14u: goto L_0893B0F4;
    case 15u: goto L_0893B100;
    case 16u: goto L_0893B110;
    case 17u: goto L_0893B114;
    case 18u: goto L_0893B120;
    case 19u: goto L_0893B130;
    case 20u: goto L_0893B134;
    case 21u: goto L_0893B148;
    case 22u: goto L_0893B154;
    case 23u: goto L_0893B15C;
    case 24u: goto L_0893B174;
    case 25u: goto L_0893B18C;
    case 26u: goto L_0893B1C0;
    case 27u: goto L_0893B1E8;
    case 28u: goto L_0893B24C;
    case 29u: goto L_0893B290;
    case 30u: goto L_0893B2A0;
    case 31u: goto L_0893B2A8;
    case 32u: goto L_0893B2C8;
    case 33u: goto L_0893B2FC;
    case 34u: goto L_0893B308;
    case 35u: goto L_0893B310;
    case 36u: goto L_0893B348;
    case 37u: goto L_0893B350;
    case 38u: goto L_0893B36C;
    case 39u: goto L_0893B374;
    case 40u: goto L_0893B38C;
    case 41u: goto L_0893B394;
    case 42u: goto L_0893B3A0;
    case 43u: goto L_0893B3A4;
    case 44u: goto L_0893B3B8;
    case 45u: goto L_0893B3E0;
    case 46u: goto L_0893B400;
    case 47u: goto L_0893B408;
    case 48u: goto L_0893B420;
    case 49u: goto L_0893B42C;
    case 50u: goto L_0893B448;
    case 51u: goto L_0893B454;
    case 52u: goto L_0893B474;
    case 53u: goto L_0893B488;
    case 54u: goto L_0893B498;
    case 55u: goto L_0893B49C;
    case 56u: goto L_0893B4B0;
    case 57u: goto L_0893B4CC;
    case 58u: goto L_0893B4DC;
    case 59u: goto L_0893B4E0;
    case 60u: goto L_0893B544;
    case 61u: goto L_0893B574;
    case 62u: goto L_0893B590;
    case 63u: goto L_0893B5A8;
    case 64u: goto L_0893B5BC;
    case 65u: goto L_0893B5D4;
    case 66u: goto L_0893B5E4;
    case 67u: goto L_0893B5E8;
    case 68u: goto L_0893B608;
    case 69u: goto L_0893B624;
    case 70u: goto L_0893B640;
    case 71u: goto L_0893B658;
    case 72u: goto L_0893B664;
    case 73u: goto L_0893B674;
    case 74u: goto L_0893B690;
    case 75u: goto L_0893B698;
    case 76u: goto L_0893B6A0;
    case 77u: goto L_0893B6B4;
    case 78u: goto L_0893B734;
    case 79u: goto L_0893B790;
    case 80u: goto L_0893B798;
    case 81u: goto L_0893B7A4;
    case 82u: goto L_0893B7B0;
    case 83u: goto L_0893B7C4;
    case 84u: goto L_0893B7E0;
    case 85u: goto L_0893B7F0;
    case 86u: goto L_0893B7F8;
    case 87u: goto L_0893B814;
    case 88u: goto L_0893B824;
    case 89u: goto L_0893B864;
    case 90u: goto L_0893B86C;
    case 91u: goto L_0893B8D8;
    case 92u: goto L_0893B8E8;
    case 93u: goto L_0893B904;
    case 94u: goto L_0893B910;
    case 95u: goto L_0893B91C;
    case 96u: goto L_0893B928;
    case 97u: goto L_0893B944;
    case 98u: goto L_0893B94C;
    case 99u: goto L_0893B954;
    case 100u: goto L_0893B964;
    case 101u: goto L_0893B984;
    case 102u: goto L_0893B9A0;
    case 103u: goto L_0893B9AC;
    case 104u: goto L_0893B9CC;
    case 105u: goto L_0893B9D8;
    case 106u: goto L_0893B9F0;
    case 107u: goto L_0893B9F8;
    case 108u: goto L_0893BA00;
    case 109u: goto L_0893BA08;
    case 110u: goto L_0893BA10;
    case 111u: goto L_0893BA24;
    case 112u: goto L_0893BA4C;
    case 113u: goto L_0893BA7C;
    case 114u: goto L_0893BAA0;
    case 115u: goto L_0893BACC;
    case 116u: goto L_0893BAD0;
    case 117u: goto L_0893BADC;
    case 118u: goto L_0893BB1C;
    case 119u: goto L_0893BB38;
    case 120u: goto L_0893BB48;
    case 121u: goto L_0893BB54;
    case 122u: goto L_0893BB5C;
    case 123u: goto L_0893BB64;
    case 124u: goto L_0893BB6C;
    case 125u: goto L_0893BB74;
    case 126u: goto L_0893BBB4;
    case 127u: goto L_0893BBBC;
    case 128u: goto L_0893BBC4;
    case 129u: goto L_0893BBD0;
    case 130u: goto L_0893BBD8;
    case 131u: goto L_0893BBE4;
    case 132u: goto L_0893BBF4;
    case 133u: goto L_0893BBFC;
    case 134u: goto L_0893BC10;
    case 135u: goto L_0893BC18;
    case 136u: goto L_0893BC20;
    case 137u: goto L_0893BC2C;
    case 138u: goto L_0893BC38;
    case 139u: goto L_0893BC48;
    case 140u: goto L_0893BC4C;
    case 141u: goto L_0893BC5C;
    case 142u: goto L_0893BC74;
    case 143u: goto L_0893BC7C;
    case 144u: goto L_0893BC88;
    case 145u: goto L_0893BC94;
    case 146u: goto L_0893BCA4;
    case 147u: goto L_0893BCB0;
    case 148u: goto L_0893BCB8;
    case 149u: goto L_0893BCD8;
    case 150u: goto L_0893BCE0;
    case 151u: goto L_0893BCF0;
    case 152u: goto L_0893BD44;
    case 153u: goto L_0893BD50;
    case 154u: goto L_0893BD6C;
    case 155u: goto L_0893BD90;
    case 156u: goto L_0893BD9C;
    case 157u: goto L_0893BDAC;
    case 158u: goto L_0893BDB8;
    case 159u: goto L_0893BDE0;
    case 160u: goto L_0893BDEC;
    case 161u: goto L_0893BDF4;
    case 162u: goto L_0893BE10;
    case 163u: goto L_0893BE1C;
    case 164u: goto L_0893BE20;
    case 165u: goto L_0893BE28;
    case 166u: goto L_0893BE2C;
    case 167u: goto L_0893BE34;
    case 168u: goto L_0893BE3C;
    case 169u: goto L_0893BE40;
    case 170u: goto L_0893BE68;
    case 171u: goto L_0893BE8C;
    case 172u: goto L_0893BE98;
    case 173u: goto L_0893BEA4;
    case 174u: goto L_0893BEB0;
    case 175u: goto L_0893BEB8;
    case 176u: goto L_0893BEC0;
    case 177u: goto L_0893BEC8;
    case 178u: goto L_0893BEE4;
    case 179u: goto L_0893BF28;
    case 180u: goto L_0893BF30;
    case 181u: goto L_0893BF38;
    case 182u: goto L_0893BF40;
    case 183u: goto L_0893BF48;
    case 184u: goto L_0893BF64;
    case 185u: goto L_0893BF70;
    case 186u: goto L_0893BF80;
    case 187u: goto L_0893BF84;
    case 188u: goto L_0893BF8C;
    case 189u: goto L_0893BF94;
    case 190u: goto L_0893BFA8;
    case 191u: goto L_0893BFB4;
    case 192u: goto L_0893BFBC;
    case 193u: goto L_0893BFC0;
    case 194u: goto L_0893BFF4;
    case 195u: goto L_0893BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0893B004:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[19]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B038;
      }
      goto L_0893B01C;
    }
L_0893B01C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0893B02Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0306_entry, 306u, 23u, 0x08936150u>(ctx, &aot_mem) && ctx.pc == 0x0893B02Cu) goto L_0893B02C;
    return;
L_0893B02C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0893B038u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0309_entry, 309u, 81u, 0x08939A20u>(ctx, &aot_mem) && ctx.pc == 0x0893B038u) goto L_0893B038;
    return;
L_0893B038:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0310_entry, 310u, 164u, 0x0893AFE0u>(ctx, &aot_mem); return;
      }
      goto L_0893B04C;
    }
L_0893B04C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2816u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B088:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0893B0A4u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x0893B0A4u) goto L_0893B0A4;
    return;
L_0893B0A4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1904));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0893B0C8;
      }
      goto L_0893B0BC;
    }
L_0893B0BC:
    aot_gpr[31] = (0x0893B0C4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 94u, 0x08A58670u>(ctx, &aot_mem) && ctx.pc == 0x0893B0C4u) goto L_0893B0C4;
    return;
L_0893B0C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    goto L_0893B0C8;
L_0893B0C8:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B0E0;
      }
      goto L_0893B0D0;
    }
L_0893B0D0:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x0893B0DCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 95u, 0x08A58678u>(ctx, &aot_mem) && ctx.pc == 0x0893B0DCu) goto L_0893B0DC;
    return;
L_0893B0DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_0893B0E0;
L_0893B0E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0893B148;
      }
      goto L_0893B0F4;
    }
L_0893B0F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B114;
      }
      goto L_0893B100;
    }
L_0893B100:
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0893B110u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 96u, 0x08A58680u>(ctx, &aot_mem) && ctx.pc == 0x0893B110u) goto L_0893B110;
    return;
L_0893B110:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_0893B114;
L_0893B114:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B134;
      }
      goto L_0893B120;
    }
L_0893B120:
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0893B130u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 97u, 0x08A58688u>(ctx, &aot_mem) && ctx.pc == 0x0893B130u) goto L_0893B130;
    return;
L_0893B130:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_0893B134;
L_0893B134:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893B0F4;
      }
      goto L_0893B148;
    }
L_0893B148:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B174;
      }
      goto L_0893B154;
    }
L_0893B154:
    aot_gpr[31] = (0x0893B15Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 75u, 0x08A4B424u>(ctx, &aot_mem) && ctx.pc == 0x0893B15Cu) goto L_0893B15C;
    return;
L_0893B15C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(68));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0893B174u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0310_entry, 310u, 162u, 0x0893AF98u>(ctx, &aot_mem) && ctx.pc == 0x0893B174u) goto L_0893B174;
    return;
L_0893B174:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B18C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0893B1C0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x0893B1C0u) goto L_0893B1C0;
    return;
L_0893B1C0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1904));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(76));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x0893B1E8u);
    aot_gpr[6] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0893B1E8u) goto L_0893B1E8;
    return;
L_0893B1E8:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(72), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0893B290;
      }
      goto L_0893B24C;
    }
L_0893B24C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893B24C;
      }
      goto L_0893B290;
    }
L_0893B290:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
      if (branch_taken) {
          goto L_0893B2A8;
      }
      goto L_0893B2A0;
    }
L_0893B2A0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0893B2A8;
L_0893B2A8:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B2C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(76));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_0893B308;
      }
      goto L_0893B2FC;
    }
L_0893B2FC:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0893B308;
L_0893B308:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B310:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0893B3B8;
      }
      goto L_0893B348;
    }
L_0893B348:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (16384u << 16u);
    goto L_0893B350;
L_0893B350:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0893B3A4;
      }
      goto L_0893B36C;
    }
L_0893B36C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B3A4;
      }
      goto L_0893B374;
    }
L_0893B374:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[17]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B3A4;
      }
      goto L_0893B38C;
    }
L_0893B38C:
    aot_gpr[31] = (0x0893B394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0306_entry, 306u, 14u, 0x089360F0u>(ctx, &aot_mem) && ctx.pc == 0x0893B394u) goto L_0893B394;
    return;
L_0893B394:
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[2]);
    aot_gpr[31] = (0x0893B3A0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0309_entry, 309u, 80u, 0x08939A18u>(ctx, &aot_mem) && ctx.pc == 0x0893B3A0u) goto L_0893B3A0;
    return;
L_0893B3A0:
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[2]);
    goto L_0893B3A4;
L_0893B3A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893B350;
      }
      goto L_0893B3B8;
    }
L_0893B3B8:
    aot_gpr[2] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B3E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0893B49C;
      }
      goto L_0893B400;
    }
L_0893B400:
    aot_gpr[31] = (0x0893B408u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0893B310;
L_0893B408:
    aot_gpr[6] = (aot_gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[4] = (0u | 16u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0893B420u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 152u, 0x08931F20u>(ctx, &aot_mem) && ctx.pc == 0x0893B420u) goto L_0893B420;
    return;
L_0893B420:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[2]);
      if (branch_taken) {
          goto L_0893B49C;
      }
      goto L_0893B42C;
    }
L_0893B42C:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(68));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0893B448u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0310_entry, 310u, 162u, 0x0893AF98u>(ctx, &aot_mem) && ctx.pc == 0x0893B448u) goto L_0893B448;
    return;
L_0893B448:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[31] = (0x0893B454u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0893B310;
L_0893B454:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[17] = (aot_gpr[17] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[17] ^ aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B49C;
      }
      goto L_0893B474;
    }
L_0893B474:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0893B488u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24236));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x0893B488u) goto L_0893B488;
    return;
L_0893B488:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0893B498u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0893B498u) goto L_0893B498;
    return;
L_0893B498:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), 0u);
    goto L_0893B49C;
L_0893B49C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B4B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0893B4E0;
      }
      goto L_0893B4CC;
    }
L_0893B4CC:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0893B4DCu);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 119u, 0x08A58834u>(ctx, &aot_mem) && ctx.pc == 0x0893B4DCu) goto L_0893B4DC;
    return;
L_0893B4DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    goto L_0893B4E0;
L_0893B4E0:
    aot_gpr[4] = (15333u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] | 24642u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_fpr[14] = aot_fpr[14] - aot_fpr[13];
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_fpr[15] = aot_fpr[15] - aot_fpr[13];
    aot_fpr[18] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_fpr[16] = aot_fpr[16] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = aot_fpr[17] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[16]));
    aot_gpr[2] = (aot_gpr[6] | 0u);
    aot_fpr[13] = aot_fpr[18] + aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B544:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0893B574u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x0893B574u) goto L_0893B574;
    return;
L_0893B574:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2136));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0893B590u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 117u, 0x08A58824u>(ctx, &aot_mem) && ctx.pc == 0x0893B590u) goto L_0893B590;
    return;
L_0893B590:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_0893B608;
      }
      goto L_0893B5A8;
    }
L_0893B5A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[10]);
    aot_gpr[31] = (0x0893B5BCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 118u, 0x08A5882Cu>(ctx, &aot_mem) && ctx.pc == 0x0893B5BCu) goto L_0893B5BC;
    return;
L_0893B5BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[10]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0893B5E8;
      }
      goto L_0893B5D4;
    }
L_0893B5D4:
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0893B5E4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_0893B4B0;
L_0893B5E4:
    aot_gpr[4] = (aot_gpr[9] | 0u);
    goto L_0893B5E8;
L_0893B5E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893B5A8;
      }
      goto L_0893B608;
    }
L_0893B608:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B624:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0893B6A0;
      }
      goto L_0893B640;
    }
L_0893B640:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2136));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0893B658u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x0893B658u) goto L_0893B658;
    return;
L_0893B658:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0893B6A0;
      }
      goto L_0893B664;
    }
L_0893B664:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B698;
      }
      goto L_0893B674;
    }
L_0893B674:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0893B690u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893B690u) goto L_0893B690;
    return;
L_0893B690:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B6A0;
      }
      goto L_0893B698;
    }
L_0893B698:
    aot_gpr[31] = (0x0893B6A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0893B6A0u) goto L_0893B6A0;
    return;
L_0893B6A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B6B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<5u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<6u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<7u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<36u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<34u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<36u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<35u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<6u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<36u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<35u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<4u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<5u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<6u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<7u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (0u | 0u);
    goto L_0893B734;
L_0893B734:
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 52u, 4u);
      ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
      constexpr std::uint32_t vfpu_input_length = 4u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 1u, vfpu_side); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 24u, 4u);
      ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
      constexpr std::uint32_t vfpu_input_length = 4u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 2u, vfpu_side); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 28u, 4u);
      ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
      constexpr std::uint32_t vfpu_input_length = 4u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 3u, vfpu_side); }
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    ctx.execute_vfpu_compare3(2u, 59u, 2u, 4u, 6u);
    ctx.execute_vfpu_compare3(3u, 63u, 3u, 4u, 6u);
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(24u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (19u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(2u, 4u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(24u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (19u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(3u, 4u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    ctx.execute_vfpu_vi2x(1u, 2u, 4u, 0u);
    ctx.execute_vfpu_vi2x(33u, 3u, 4u, 0u);
    aot_gpr[8] = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_gpr[9] = (ctx.vfpu_scalar_bits_ct<33u>());
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[10] | aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B734;
      }
      goto L_0893B790;
    }
L_0893B790:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B798:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B864;
      }
      goto L_0893B7A4;
    }
L_0893B7A4:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B864;
      }
      goto L_0893B7B0;
    }
L_0893B7B0:
    aot_gpr[10] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[7] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_0893B864;
      }
      goto L_0893B7C4;
    }
L_0893B7C4:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[10] & 128u);
    aot_gpr[3] = (aot_gpr[10] & 64u);
    aot_gpr[10] = (aot_gpr[10] & 63u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[11] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0893B7F0;
      }
      goto L_0893B7E0;
    }
L_0893B7E0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[11] | 0u);
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[3]);
    aot_gpr[11] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    goto L_0893B7F0;
L_0893B7F0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B814;
      }
      goto L_0893B7F8;
    }
L_0893B7F8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] << 8u);
    aot_gpr[9] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[8] + aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[10] + aot_gpr[11]);
      if (branch_taken) {
          goto L_0893B824;
      }
      goto L_0893B814;
    }
L_0893B814:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[11] | 0u);
    aot_gpr[11] = (aot_gpr[8] + aot_gpr[2]);
    aot_gpr[8] = (aot_gpr[10] + aot_gpr[11]);
    goto L_0893B824;
L_0893B824:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[11]));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (aot_gpr[11] << 2u);
    aot_gpr[11] = (aot_gpr[6] + aot_gpr[11]);
    PSPRECOMP_AOT_STORE16(aot_gpr[11] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[10] = (aot_gpr[7] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B7C4;
      }
      goto L_0893B864;
    }
L_0893B864:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B86C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    aot_gpr[31] = (0x0893B8D8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_0893B6B4;
L_0893B8D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_0893B904;
      }
      goto L_0893B8E8;
    }
L_0893B8E8:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0893B904u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_0893B86C;
L_0893B904:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B964;
      }
      goto L_0893B910;
    }
L_0893B910:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893B964;
      }
      goto L_0893B91C;
    }
L_0893B91C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_0893B94C;
      }
      goto L_0893B928;
    }
L_0893B928:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0893B944u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_0893B86C;
L_0893B944:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B964;
      }
      goto L_0893B94C;
    }
L_0893B94C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893B964;
      }
      goto L_0893B954;
    }
L_0893B954:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0893B964u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_0893B798;
L_0893B964:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B984:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0893B9A0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_0893B86C;
L_0893B9A0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B9AC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0893B9CCu);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5B1F4u;
    return;
L_0893B9CC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893BA00;
      }
      goto L_0893B9D8;
    }
L_0893B9D8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0893B9F0u);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = 0x08A5B1E4u;
    return;
L_0893B9F0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0893BA08;
      }
      goto L_0893B9F8;
    }
L_0893B9F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 69u);
      if (branch_taken) {
          goto L_0893BA10;
      }
      goto L_0893BA00;
    }
L_0893BA00:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893BA10;
      }
      goto L_0893BA08;
    }
L_0893BA08:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[2] = (0u | 0u);
    goto L_0893BA10;
L_0893BA10:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BA24:
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23180), 0u);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23184), 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(23188), aot_gpr[4]);
    aot_gpr[4] = (2219u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23192), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BA4C:
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(23180)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] << 7u);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[9] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(22768));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[4]);
    aot_gpr[6] = (0u | 17u);
    aot_gpr[4] = (2219u << 16u);
    goto L_0893BA7C;
L_0893BA7C:
    aot_gpr[10] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[10]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0893BA7C;
      }
      goto L_0893BAA0;
    }
L_0893BAA0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(23180)));
    aot_gpr[8] = (2219u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(23176));
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(23180), aot_gpr[6]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(23192)));
      if (branch_taken) {
          goto L_0893BAD0;
      }
      goto L_0893BACC;
    }
L_0893BACC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(23180), 0u);
    goto L_0893BAD0;
L_0893BAD0:
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23192), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BADC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-24164)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-24168)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    aot_gpr[5] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(44), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BB1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-176));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[31]);
    aot_gpr[31] = (0x0893BB38u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 136u, 0x08978734u>(ctx, &aot_mem) && ctx.pc == 0x0893BB38u) goto L_0893BB38;
    return;
L_0893BB38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
      if (branch_taken) {
          goto L_0893BB6C;
      }
      goto L_0893BB48;
    }
L_0893BB48:
    aot_gpr[5] = (0u | 4u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893BB64;
      }
      goto L_0893BB54;
    }
L_0893BB54:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (2215u << 16u);
        goto L_0893BB74;
    }
    goto L_0893BB5C;
L_0893BB5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BBD8;
      }
      goto L_0893BB64;
    }
L_0893BB64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893BC4C;
      }
      goto L_0893BB6C;
    }
L_0893BB6C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0893BC4C;
      }
      goto L_0893BB74;
    }
L_0893BB74:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-24164)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-24168)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    aot_gpr[6] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x0893BBB4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 13u, 0x08975088u>(ctx, &aot_mem) && ctx.pc == 0x0893BBB4u) goto L_0893BBB4;
    return;
L_0893BBB4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_0893BBC4;
      }
      goto L_0893BBBC;
    }
L_0893BBBC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0893BC4C;
      }
      goto L_0893BBC4;
    }
L_0893BBC4:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x0893BBD0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0893BA4C;
L_0893BBD0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1026u);
      if (branch_taken) {
          goto L_0893BC4C;
      }
      goto L_0893BBD8;
    }
L_0893BBD8:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893BC48;
      }
      goto L_0893BBE4;
    }
L_0893BBE4:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(148));
    aot_gpr[31] = (0x0893BBF4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 25u, 0x0897513Cu>(ctx, &aot_mem) && ctx.pc == 0x0893BBF4u) goto L_0893BBF4;
    return;
L_0893BBF4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_0893BC48;
      }
      goto L_0893BBFC;
    }
L_0893BBFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(22752)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0893BC2C;
      }
      goto L_0893BC10;
    }
L_0893BC10:
    aot_gpr[31] = (0x0893BC18u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.pc = 0x08A5AB6Cu;
    return;
L_0893BC18:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893BC2C;
      }
      goto L_0893BC20;
    }
L_0893BC20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(22752), aot_gpr[4]);
    goto L_0893BC2C;
L_0893BC2C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[31] = (0x0893BC38u);
    aot_gpr[4] = (0u | 32768u);
    ctx.pc = 0x08A5AB74u;
    return;
L_0893BC38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[31] = (0x0893BC48u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0369_entry, 369u, 29u, 0x08975178u>(ctx, &aot_mem) && ctx.pc == 0x0893BC48u) goto L_0893BC48;
    return;
L_0893BC48:
    aot_gpr[2] = (0u | 0u);
    goto L_0893BC4C;
L_0893BC4C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BC5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0893BC88;
      }
      goto L_0893BC74;
    }
L_0893BC74:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893BCE0;
      }
      goto L_0893BC7C;
    }
L_0893BC7C:
    aot_gpr[4] = (2219u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(22758), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0893BCE0;
      }
      goto L_0893BC88;
    }
L_0893BC88:
    aot_gpr[6] = (0u | 2u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0893BCE0;
      }
      goto L_0893BC94;
    }
L_0893BC94:
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(22757)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893BCB8;
      }
      goto L_0893BCA4;
    }
L_0893BCA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0893BCB0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 172u, 0x089788ECu>(ctx, &aot_mem) && ctx.pc == 0x0893BCB0u) goto L_0893BCB0;
    return;
L_0893BCB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BCD8;
      }
      goto L_0893BCB8;
    }
L_0893BCB8:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(23179), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(23176), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(23176));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_0893BCD8;
L_0893BCD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BCE0;
      }
      goto L_0893BCE0;
    }
L_0893BCE0:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BCF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-352));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(328), aot_gpr[18]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(332), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(22728));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(22728), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(340), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[21] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(22744)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(336), aot_gpr[20]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(344), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0893BD90;
      }
      goto L_0893BD44;
    }
L_0893BD44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (0x0893BD50u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 193u, 0x08933BA8u>(ctx, &aot_mem) && ctx.pc == 0x0893BD50u) goto L_0893BD50;
    return;
L_0893BD50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(22744)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(22728), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0893BD6Cu);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0288_entry, 288u, 4u, 0x08924058u>(ctx, &aot_mem) && ctx.pc == 0x0893BD6Cu) goto L_0893BD6C;
    return;
L_0893BD6C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_0893BE34;
      }
      goto L_0893BD90;
    }
L_0893BD90:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[31] = (0x0893BD9Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 170u, 0x08932DDCu>(ctx, &aot_mem) && ctx.pc == 0x0893BD9Cu) goto L_0893BD9C;
    return;
L_0893BD9C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x0893BDACu);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5B294u;
    return;
L_0893BDAC:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893BE28;
      }
      goto L_0893BDB8;
    }
L_0893BDB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(22728), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-24164)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-24168)));
    aot_gpr[8] = (0u | 2u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0893BDE0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = 0x08A5B29Cu;
    return;
L_0893BDE0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0893BDF4;
      }
      goto L_0893BDEC;
    }
L_0893BDEC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 16u);
      if (branch_taken) {
          goto L_0893BE20;
      }
      goto L_0893BDF4;
    }
L_0893BDF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(22728)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0893BE10u);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = 0x08A5B29Cu;
    return;
L_0893BE10:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0893BE20;
      }
      goto L_0893BE1C;
    }
L_0893BE1C:
    aot_gpr[17] = (0u | 16u);
    goto L_0893BE20;
L_0893BE20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BE2C;
      }
      goto L_0893BE28;
    }
L_0893BE28:
    aot_gpr[17] = (0u | 16u);
    goto L_0893BE2C;
L_0893BE2C:
    aot_gpr[31] = (0x0893BE34u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 186u, 0x08932EB0u>(ctx, &aot_mem) && ctx.pc == 0x0893BE34u) goto L_0893BE34;
    return;
L_0893BE34:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BE40;
      }
      goto L_0893BE3C;
    }
L_0893BE3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    goto L_0893BE40;
L_0893BE40:
    aot_gpr[2] = (aot_gpr[19] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(328)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(332)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(336)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(340)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(344)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BE68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(22744)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0893BEC8;
      }
      goto L_0893BE8C;
    }
L_0893BE8C:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[31] = (0x0893BE98u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 170u, 0x08932DDCu>(ctx, &aot_mem) && ctx.pc == 0x0893BE98u) goto L_0893BE98;
    return;
L_0893BE98:
    aot_gpr[16] = (2219u << 16u);
    aot_gpr[31] = (0x0893BEA4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(22728)));
    ctx.pc = 0x08A5B254u;
    return;
L_0893BEA4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0893BEB0u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 186u, 0x08932EB0u>(ctx, &aot_mem) && ctx.pc == 0x0893BEB0u) goto L_0893BEB0;
    return;
L_0893BEB0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0893BEC0;
      }
      goto L_0893BEB8;
    }
L_0893BEB8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 17u);
      if (branch_taken) {
          goto L_0893BEC8;
      }
      goto L_0893BEC0;
    }
L_0893BEC0:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(22728), aot_gpr[4]);
    goto L_0893BEC8;
L_0893BEC8:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BEE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[8] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[22] = (aot_gpr[21] + static_cast<std::uint32_t>(22728));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    goto L_0893BF28;
L_0893BF28:
    aot_gpr[31] = (0x0893BF30u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 28u, 0x08933124u>(ctx, &aot_mem) && ctx.pc == 0x0893BF30u) goto L_0893BF30;
    return;
L_0893BF30:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893BF48;
      }
      goto L_0893BF38;
    }
L_0893BF38:
    aot_gpr[31] = (0x0893BF40u);
    aot_gpr[4] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 162u, 0x08943B48u>(ctx, &aot_mem) && ctx.pc == 0x0893BF40u) goto L_0893BF40;
    return;
L_0893BF40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BF28;
      }
      goto L_0893BF48;
    }
L_0893BF48:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(22728)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[31] = (0x0893BF64u);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = 0x08A5B29Cu;
    return;
L_0893BF64:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[23]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893BF84;
      }
      goto L_0893BF70;
    }
L_0893BF70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(22728)));
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0893BF80u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = 0x08A5B23Cu;
    return;
L_0893BF80:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    goto L_0893BF84;
L_0893BF84:
    aot_gpr[31] = (0x0893BF8Cu);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0302_entry, 302u, 186u, 0x08932EB0u>(ctx, &aot_mem) && ctx.pc == 0x0893BF8Cu) goto L_0893BF8C;
    return;
L_0893BF8C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[23]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0893BFA8;
      }
      goto L_0893BF94;
    }
L_0893BF94:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-24164)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-24168)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (0u | 18u);
      if (branch_taken) {
          goto L_0893BFB4;
      }
      goto L_0893BFA8;
    }
L_0893BFA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    goto L_0893BFB4;
L_0893BFB4:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BFC0;
      }
      goto L_0893BFBC;
    }
L_0893BFBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    goto L_0893BFC0;
L_0893BFC0:
    aot_gpr[3] = (aot_gpr[19] | 0u);
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BFF4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0312_entry, 312u, 1u, 0x0893C000u>(ctx, &aot_mem); return;
      }
      goto L_0893BFFC;
    }
L_0893BFFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.pc = 0x0893C000u; return;
}

void recomp_unit_0311(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0311_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_311(Runtime &runtime) {
    runtime.register_generated_unit(311u, 0x0893B000u, 4096u, &recomp_unit_0311, &recomp_unit_0311_entry);
    runtime.register_function(0x0893B004u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B01Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B02Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B038u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B04Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B088u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B0A4u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B0BCu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B0C4u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B0C8u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B0D0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B0DCu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B0E0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B0F4u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B100u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B110u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B114u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B120u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B130u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B134u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B148u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B154u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B15Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B174u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B18Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B1C0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B1E8u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B24Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B290u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B2A0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B2A8u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B2C8u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B2FCu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B308u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B310u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B348u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B350u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B36Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B374u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B38Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B394u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B3A0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B3A4u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B3B8u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B3E0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B400u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B408u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B420u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B42Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B448u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B454u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B474u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B488u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B498u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B49Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B4B0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B4CCu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B4DCu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B4E0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B544u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B574u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B590u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B5A8u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B5BCu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B5D4u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B5E4u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B5E8u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B608u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B624u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B640u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B658u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B664u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B674u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B690u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B698u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B6A0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B6B4u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B734u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B790u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B798u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B7A4u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B7B0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B7C4u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B7E0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B7F0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B7F8u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B814u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B824u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B864u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B86Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B8D8u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B8E8u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B904u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B910u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B91Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B928u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B944u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B94Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B954u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B964u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B984u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B9A0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B9ACu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B9CCu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B9D8u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B9F0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893B9F8u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BA00u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BA08u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BA10u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BA24u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BA4Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BA7Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BAA0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BACCu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BAD0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BADCu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BB1Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BB38u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BB48u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BB54u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BB5Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BB64u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BB6Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BB74u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BBB4u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BBBCu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BBC4u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BBD0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BBD8u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BBE4u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BBF4u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BBFCu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BC10u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BC18u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BC20u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BC2Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BC38u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BC48u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BC4Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BC5Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BC74u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BC7Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BC88u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BC94u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BCA4u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BCB0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BCB8u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BCD8u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BCE0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BCF0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BD44u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BD50u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BD6Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BD90u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BD9Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BDACu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BDB8u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BDE0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BDECu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BDF4u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BE10u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BE1Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BE20u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BE28u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BE2Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BE34u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BE3Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BE40u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BE68u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BE8Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BE98u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BEA4u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BEB0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BEB8u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BEC0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BEC8u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BEE4u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BF28u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BF30u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BF38u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BF40u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BF48u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BF64u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BF70u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BF80u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BF84u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BF8Cu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BF94u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BFA8u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BFB4u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BFBCu, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BFC0u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BFF4u, &recomp_unit_0311, "recomp_unit_0311");
    runtime.register_function(0x0893BFFCu, &recomp_unit_0311, "recomp_unit_0311");
}
} // namespace psprecomp
