#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0586[1023] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 9, 0, 0,
    10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 14, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0,
    0, 18, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 26, 0, 0,
    0, 27, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 31, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 35, 0, 36, 0, 0,
    37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 46, 0,
    47, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 54,
    0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 61, 0,
    0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68,
    0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0,
    0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 96,
    0, 0, 0, 0, 97, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0,
    0, 0, 105, 106, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0,
    114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 120,
    0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0,
    142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 148, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 155,
    0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159, 160, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0,
    0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 174, 0,
    0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0,
    0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189,
    0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194, 0, 0, 195, 0, 196, 0, 0, 197,
    0, 198, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 207, 0, 0, 0,
    0, 208, 0, 209, 0, 0, 210, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 0,
    0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231,
};
void recomp_unit_0586_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A4E000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0586[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A4E000;
    case 2u: goto L_08A4E010;
    case 3u: goto L_08A4E024;
    case 4u: goto L_08A4E03C;
    case 5u: goto L_08A4E044;
    case 6u: goto L_08A4E04C;
    case 7u: goto L_08A4E058;
    case 8u: goto L_08A4E068;
    case 9u: goto L_08A4E074;
    case 10u: goto L_08A4E080;
    case 11u: goto L_08A4E08C;
    case 12u: goto L_08A4E09C;
    case 13u: goto L_08A4E0B4;
    case 14u: goto L_08A4E0BC;
    case 15u: goto L_08A4E0C4;
    case 16u: goto L_08A4E0D0;
    case 17u: goto L_08A4E0EC;
    case 18u: goto L_08A4E104;
    case 19u: goto L_08A4E10C;
    case 20u: goto L_08A4E11C;
    case 21u: goto L_08A4E124;
    case 22u: goto L_08A4E134;
    case 23u: goto L_08A4E150;
    case 24u: goto L_08A4E158;
    case 25u: goto L_08A4E160;
    case 26u: goto L_08A4E174;
    case 27u: goto L_08A4E184;
    case 28u: goto L_08A4E198;
    case 29u: goto L_08A4E1A0;
    case 30u: goto L_08A4E1A8;
    case 31u: goto L_08A4E1B0;
    case 32u: goto L_08A4E1BC;
    case 33u: goto L_08A4E1CC;
    case 34u: goto L_08A4E1E4;
    case 35u: goto L_08A4E1EC;
    case 36u: goto L_08A4E1F4;
    case 37u: goto L_08A4E200;
    case 38u: goto L_08A4E210;
    case 39u: goto L_08A4E21C;
    case 40u: goto L_08A4E228;
    case 41u: goto L_08A4E234;
    case 42u: goto L_08A4E244;
    case 43u: goto L_08A4E25C;
    case 44u: goto L_08A4E264;
    case 45u: goto L_08A4E26C;
    case 46u: goto L_08A4E278;
    case 47u: goto L_08A4E280;
    case 48u: goto L_08A4E288;
    case 49u: goto L_08A4E2A4;
    case 50u: goto L_08A4E2BC;
    case 51u: goto L_08A4E2C8;
    case 52u: goto L_08A4E2D8;
    case 53u: goto L_08A4E2F4;
    case 54u: goto L_08A4E2FC;
    case 55u: goto L_08A4E304;
    case 56u: goto L_08A4E318;
    case 57u: goto L_08A4E334;
    case 58u: goto L_08A4E344;
    case 59u: goto L_08A4E35C;
    case 60u: goto L_08A4E368;
    case 61u: goto L_08A4E378;
    case 62u: goto L_08A4E394;
    case 63u: goto L_08A4E39C;
    case 64u: goto L_08A4E3A4;
    case 65u: goto L_08A4E3B8;
    case 66u: goto L_08A4E3D4;
    case 67u: goto L_08A4E3E4;
    case 68u: goto L_08A4E3FC;
    case 69u: goto L_08A4E408;
    case 70u: goto L_08A4E418;
    case 71u: goto L_08A4E434;
    case 72u: goto L_08A4E43C;
    case 73u: goto L_08A4E444;
    case 74u: goto L_08A4E458;
    case 75u: goto L_08A4E474;
    case 76u: goto L_08A4E48C;
    case 77u: goto L_08A4E498;
    case 78u: goto L_08A4E4A8;
    case 79u: goto L_08A4E4C4;
    case 80u: goto L_08A4E4CC;
    case 81u: goto L_08A4E4D4;
    case 82u: goto L_08A4E4E8;
    case 83u: goto L_08A4E504;
    case 84u: goto L_08A4E514;
    case 85u: goto L_08A4E52C;
    case 86u: goto L_08A4E538;
    case 87u: goto L_08A4E548;
    case 88u: goto L_08A4E564;
    case 89u: goto L_08A4E56C;
    case 90u: goto L_08A4E574;
    case 91u: goto L_08A4E588;
    case 92u: goto L_08A4E5B0;
    case 93u: goto L_08A4E5D0;
    case 94u: goto L_08A4E5E0;
    case 95u: goto L_08A4E5F4;
    case 96u: goto L_08A4E5FC;
    case 97u: goto L_08A4E610;
    case 98u: goto L_08A4E618;
    case 99u: goto L_08A4E624;
    case 100u: goto L_08A4E63C;
    case 101u: goto L_08A4E644;
    case 102u: goto L_08A4E650;
    case 103u: goto L_08A4E668;
    case 104u: goto L_08A4E670;
    case 105u: goto L_08A4E688;
    case 106u: goto L_08A4E68C;
    case 107u: goto L_08A4E694;
    case 108u: goto L_08A4E6A4;
    case 109u: goto L_08A4E6C0;
    case 110u: goto L_08A4E6C8;
    case 111u: goto L_08A4E6D0;
    case 112u: goto L_08A4E6F0;
    case 113u: goto L_08A4E6F8;
    case 114u: goto L_08A4E700;
    case 115u: goto L_08A4E71C;
    case 116u: goto L_08A4E72C;
    case 117u: goto L_08A4E748;
    case 118u: goto L_08A4E75C;
    case 119u: goto L_08A4E774;
    case 120u: goto L_08A4E77C;
    case 121u: goto L_08A4E784;
    case 122u: goto L_08A4E790;
    case 123u: goto L_08A4E7AC;
    case 124u: goto L_08A4E7CC;
    case 125u: goto L_08A4E7DC;
    case 126u: goto L_08A4E7F8;
    case 127u: goto L_08A4E818;
    case 128u: goto L_08A4E828;
    case 129u: goto L_08A4E844;
    case 130u: goto L_08A4E864;
    case 131u: goto L_08A4E874;
    case 132u: goto L_08A4E890;
    case 133u: goto L_08A4E8A8;
    case 134u: goto L_08A4E8B4;
    case 135u: goto L_08A4E8BC;
    case 136u: goto L_08A4E8D0;
    case 137u: goto L_08A4E8D8;
    case 138u: goto L_08A4E8E0;
    case 139u: goto L_08A4E8E8;
    case 140u: goto L_08A4E8F0;
    case 141u: goto L_08A4E8F8;
    case 142u: goto L_08A4E900;
    case 143u: goto L_08A4E908;
    case 144u: goto L_08A4E910;
    case 145u: goto L_08A4E918;
    case 146u: goto L_08A4E920;
    case 147u: goto L_08A4E928;
    case 148u: goto L_08A4E930;
    case 149u: goto L_08A4E938;
    case 150u: goto L_08A4E944;
    case 151u: goto L_08A4E950;
    case 152u: goto L_08A4E95C;
    case 153u: goto L_08A4E968;
    case 154u: goto L_08A4E974;
    case 155u: goto L_08A4E97C;
    case 156u: goto L_08A4E984;
    case 157u: goto L_08A4E9D0;
    case 158u: goto L_08A4E9E4;
    case 159u: goto L_08A4E9EC;
    case 160u: goto L_08A4E9F0;
    case 161u: goto L_08A4EA20;
    case 162u: goto L_08A4EA28;
    case 163u: goto L_08A4EA44;
    case 164u: goto L_08A4EA6C;
    case 165u: goto L_08A4EA74;
    case 166u: goto L_08A4EA84;
    case 167u: goto L_08A4EA8C;
    case 168u: goto L_08A4EABC;
    case 169u: goto L_08A4EAE8;
    case 170u: goto L_08A4EB28;
    case 171u: goto L_08A4EB4C;
    case 172u: goto L_08A4EB64;
    case 173u: goto L_08A4EB6C;
    case 174u: goto L_08A4EB78;
    case 175u: goto L_08A4EB98;
    case 176u: goto L_08A4EBD4;
    case 177u: goto L_08A4EBE0;
    case 178u: goto L_08A4EC20;
    case 179u: goto L_08A4EC30;
    case 180u: goto L_08A4EC40;
    case 181u: goto L_08A4EC4C;
    case 182u: goto L_08A4EC54;
    case 183u: goto L_08A4EC74;
    case 184u: goto L_08A4EC84;
    case 185u: goto L_08A4ECA4;
    case 186u: goto L_08A4ECA8;
    case 187u: goto L_08A4ECB8;
    case 188u: goto L_08A4ECD8;
    case 189u: goto L_08A4ECFC;
    case 190u: goto L_08A4ED10;
    case 191u: goto L_08A4ED1C;
    case 192u: goto L_08A4ED4C;
    case 193u: goto L_08A4ED54;
    case 194u: goto L_08A4ED5C;
    case 195u: goto L_08A4ED68;
    case 196u: goto L_08A4ED70;
    case 197u: goto L_08A4ED7C;
    case 198u: goto L_08A4ED84;
    case 199u: goto L_08A4ED94;
    case 200u: goto L_08A4EDA0;
    case 201u: goto L_08A4EDC0;
    case 202u: goto L_08A4EDE4;
    case 203u: goto L_08A4EE30;
    case 204u: goto L_08A4EE38;
    case 205u: goto L_08A4EE60;
    case 206u: goto L_08A4EE68;
    case 207u: goto L_08A4EE70;
    case 208u: goto L_08A4EE84;
    case 209u: goto L_08A4EE8C;
    case 210u: goto L_08A4EE98;
    case 211u: goto L_08A4EEA0;
    case 212u: goto L_08A4EEA8;
    case 213u: goto L_08A4EEB0;
    case 214u: goto L_08A4EEB8;
    case 215u: goto L_08A4EEC0;
    case 216u: goto L_08A4EEC8;
    case 217u: goto L_08A4EED0;
    case 218u: goto L_08A4EED8;
    case 219u: goto L_08A4EEE0;
    case 220u: goto L_08A4EEE8;
    case 221u: goto L_08A4EEF0;
    case 222u: goto L_08A4EEF8;
    case 223u: goto L_08A4EF0C;
    case 224u: goto L_08A4EF28;
    case 225u: goto L_08A4EF4C;
    case 226u: goto L_08A4EF70;
    case 227u: goto L_08A4EFA4;
    case 228u: goto L_08A4EFB0;
    case 229u: goto L_08A4EFB8;
    case 230u: goto L_08A4EFD4;
    case 231u: goto L_08A4EFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A4E000:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6196));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4E04C;
      }
      goto L_08A4E010;
    }
L_08A4E010:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E044;
      }
      goto L_08A4E024;
    }
L_08A4E024:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4E03Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4E03Cu) goto L_08A4E03C;
    return;
L_08A4E03C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E04C;
      }
      goto L_08A4E044;
    }
L_08A4E044:
    aot_gpr[31] = (0x08A4E04Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4E04Cu) goto L_08A4E04C;
    return;
L_08A4E04C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E058:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4E0C4;
      }
      goto L_08A4E068;
    }
L_08A4E068:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6164));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4E080;
      }
      goto L_08A4E074;
    }
L_08A4E074:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6196));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    goto L_08A4E080;
L_08A4E080:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A4E0C4;
      }
      goto L_08A4E08C;
    }
L_08A4E08C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E0BC;
      }
      goto L_08A4E09C;
    }
L_08A4E09C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4E0B4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4E0B4u) goto L_08A4E0B4;
    return;
L_08A4E0B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E0C4;
      }
      goto L_08A4E0BC;
    }
L_08A4E0BC:
    aot_gpr[31] = (0x08A4E0C4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4E0C4u) goto L_08A4E0C4;
    return;
L_08A4E0C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E0D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A4E160;
      }
      goto L_08A4E0EC;
    }
L_08A4E0EC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6132));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr[31] = (0x08A4E104u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 36u, 0x0889F2D8u>(ctx, &aot_mem) && ctx.pc == 0x08A4E104u) goto L_08A4E104;
    return;
L_08A4E104:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[17] & 1u);
      if (branch_taken) {
          goto L_08A4E11C;
      }
      goto L_08A4E10C;
    }
L_08A4E10C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6196));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] & 1u);
    goto L_08A4E11C;
L_08A4E11C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A4E160;
      }
      goto L_08A4E124;
    }
L_08A4E124:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E158;
      }
      goto L_08A4E134;
    }
L_08A4E134:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A4E150u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4E150u) goto L_08A4E150;
    return;
L_08A4E150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E160;
      }
      goto L_08A4E158;
    }
L_08A4E158:
    aot_gpr[31] = (0x08A4E160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4E160u) goto L_08A4E160;
    return;
L_08A4E160:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E174:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4E1F4;
      }
      goto L_08A4E184;
    }
L_08A4E184:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6100));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4E1A0;
      }
      goto L_08A4E198;
    }
L_08A4E198:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24776));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), aot_gpr[6]);
    goto L_08A4E1A0;
L_08A4E1A0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4E1B0;
      }
      goto L_08A4E1A8;
    }
L_08A4E1A8:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6196));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    goto L_08A4E1B0;
L_08A4E1B0:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A4E1F4;
      }
      goto L_08A4E1BC;
    }
L_08A4E1BC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E1EC;
      }
      goto L_08A4E1CC;
    }
L_08A4E1CC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4E1E4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4E1E4u) goto L_08A4E1E4;
    return;
L_08A4E1E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E1F4;
      }
      goto L_08A4E1EC;
    }
L_08A4E1EC:
    aot_gpr[31] = (0x08A4E1F4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4E1F4u) goto L_08A4E1F4;
    return;
L_08A4E1F4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E200:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4E26C;
      }
      goto L_08A4E210;
    }
L_08A4E210:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6068));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A4E228;
      }
      goto L_08A4E21C;
    }
L_08A4E21C:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-6196));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    goto L_08A4E228;
L_08A4E228:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A4E26C;
      }
      goto L_08A4E234;
    }
L_08A4E234:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E264;
      }
      goto L_08A4E244;
    }
L_08A4E244:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4E25Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4E25Cu) goto L_08A4E25C;
    return;
L_08A4E25C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E26C;
      }
      goto L_08A4E264;
    }
L_08A4E264:
    aot_gpr[31] = (0x08A4E26Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4E26Cu) goto L_08A4E26C;
    return;
L_08A4E26C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E278:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E280:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E288:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A4E304;
      }
      goto L_08A4E2A4;
    }
L_08A4E2A4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(25192));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A4E2BCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 134u, 0x088A6940u>(ctx, &aot_mem) && ctx.pc == 0x08A4E2BCu) goto L_08A4E2BC;
    return;
L_08A4E2BC:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A4E304;
      }
      goto L_08A4E2C8;
    }
L_08A4E2C8:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E2FC;
      }
      goto L_08A4E2D8;
    }
L_08A4E2D8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A4E2F4u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4E2F4u) goto L_08A4E2F4;
    return;
L_08A4E2F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E304;
      }
      goto L_08A4E2FC;
    }
L_08A4E2FC:
    aot_gpr[31] = (0x08A4E304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4E304u) goto L_08A4E304;
    return;
L_08A4E304:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E318:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A4E3A4;
      }
      goto L_08A4E334;
    }
L_08A4E334:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5248));
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A4E35C;
      }
      goto L_08A4E344;
    }
L_08A4E344:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(25192));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A4E35Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 134u, 0x088A6940u>(ctx, &aot_mem) && ctx.pc == 0x08A4E35Cu) goto L_08A4E35C;
    return;
L_08A4E35C:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A4E3A4;
      }
      goto L_08A4E368;
    }
L_08A4E368:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E39C;
      }
      goto L_08A4E378;
    }
L_08A4E378:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A4E394u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4E394u) goto L_08A4E394;
    return;
L_08A4E394:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E3A4;
      }
      goto L_08A4E39C;
    }
L_08A4E39C:
    aot_gpr[31] = (0x08A4E3A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4E3A4u) goto L_08A4E3A4;
    return;
L_08A4E3A4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E3B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A4E444;
      }
      goto L_08A4E3D4;
    }
L_08A4E3D4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5200));
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A4E3FC;
      }
      goto L_08A4E3E4;
    }
L_08A4E3E4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(25192));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A4E3FCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 134u, 0x088A6940u>(ctx, &aot_mem) && ctx.pc == 0x08A4E3FCu) goto L_08A4E3FC;
    return;
L_08A4E3FC:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A4E444;
      }
      goto L_08A4E408;
    }
L_08A4E408:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E43C;
      }
      goto L_08A4E418;
    }
L_08A4E418:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A4E434u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4E434u) goto L_08A4E434;
    return;
L_08A4E434:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E444;
      }
      goto L_08A4E43C;
    }
L_08A4E43C:
    aot_gpr[31] = (0x08A4E444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4E444u) goto L_08A4E444;
    return;
L_08A4E444:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E458:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A4E4D4;
      }
      goto L_08A4E474;
    }
L_08A4E474:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5152));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A4E48Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 134u, 0x088A6940u>(ctx, &aot_mem) && ctx.pc == 0x08A4E48Cu) goto L_08A4E48C;
    return;
L_08A4E48C:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A4E4D4;
      }
      goto L_08A4E498;
    }
L_08A4E498:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E4CC;
      }
      goto L_08A4E4A8;
    }
L_08A4E4A8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A4E4C4u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4E4C4u) goto L_08A4E4C4;
    return;
L_08A4E4C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E4D4;
      }
      goto L_08A4E4CC;
    }
L_08A4E4CC:
    aot_gpr[31] = (0x08A4E4D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4E4D4u) goto L_08A4E4D4;
    return;
L_08A4E4D4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E4E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A4E574;
      }
      goto L_08A4E504;
    }
L_08A4E504:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5104));
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A4E52C;
      }
      goto L_08A4E514;
    }
L_08A4E514:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(25192));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A4E52Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 134u, 0x088A6940u>(ctx, &aot_mem) && ctx.pc == 0x08A4E52Cu) goto L_08A4E52C;
    return;
L_08A4E52C:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A4E574;
      }
      goto L_08A4E538;
    }
L_08A4E538:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E56C;
      }
      goto L_08A4E548;
    }
L_08A4E548:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A4E564u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4E564u) goto L_08A4E564;
    return;
L_08A4E564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E574;
      }
      goto L_08A4E56C;
    }
L_08A4E56C:
    aot_gpr[31] = (0x08A4E574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4E574u) goto L_08A4E574;
    return;
L_08A4E574:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E588:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A4E6D0;
      }
      goto L_08A4E5B0;
    }
L_08A4E5B0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5056));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A4E5F4;
      }
      goto L_08A4E5D0;
    }
L_08A4E5D0:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5104));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A4E5F4;
      }
      goto L_08A4E5E0;
    }
L_08A4E5E0:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(25192));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[5]);
    aot_gpr[31] = (0x08A4E5F4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 134u, 0x088A6940u>(ctx, &aot_mem) && ctx.pc == 0x08A4E5F4u) goto L_08A4E5F4;
    return;
L_08A4E5F4:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4E610;
      }
      goto L_08A4E5FC;
    }
L_08A4E5FC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5152));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A4E610u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 134u, 0x088A6940u>(ctx, &aot_mem) && ctx.pc == 0x08A4E610u) goto L_08A4E610;
    return;
L_08A4E610:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4E63C;
      }
      goto L_08A4E618;
    }
L_08A4E618:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5200));
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A4E63C;
      }
      goto L_08A4E624;
    }
L_08A4E624:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(25192));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A4E63Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 134u, 0x088A6940u>(ctx, &aot_mem) && ctx.pc == 0x08A4E63Cu) goto L_08A4E63C;
    return;
L_08A4E63C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A4E668;
      }
      goto L_08A4E644;
    }
L_08A4E644:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5248));
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A4E668;
      }
      goto L_08A4E650;
    }
L_08A4E650:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(25192));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4E668u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 134u, 0x088A6940u>(ctx, &aot_mem) && ctx.pc == 0x08A4E668u) goto L_08A4E668;
    return;
L_08A4E668:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[17] & 1u);
      if (branch_taken) {
          goto L_08A4E68C;
      }
      goto L_08A4E670;
    }
L_08A4E670:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(25192));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A4E688u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 134u, 0x088A6940u>(ctx, &aot_mem) && ctx.pc == 0x08A4E688u) goto L_08A4E688;
    return;
L_08A4E688:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    goto L_08A4E68C;
L_08A4E68C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A4E6D0;
      }
      goto L_08A4E694;
    }
L_08A4E694:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E6C8;
      }
      goto L_08A4E6A4;
    }
L_08A4E6A4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A4E6C0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4E6C0u) goto L_08A4E6C0;
    return;
L_08A4E6C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E6D0;
      }
      goto L_08A4E6C8;
    }
L_08A4E6C8:
    aot_gpr[31] = (0x08A4E6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4E6D0u) goto L_08A4E6D0;
    return;
L_08A4E6D0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E6F0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E6F8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E700:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(25240));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-5816), aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E71C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E784;
      }
      goto L_08A4E72C;
    }
L_08A4E72C:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25240));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-5816), 0u);
      if (branch_taken) {
          goto L_08A4E784;
      }
      goto L_08A4E748;
    }
L_08A4E748:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E77C;
      }
      goto L_08A4E75C;
    }
L_08A4E75C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A4E774u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4E774u) goto L_08A4E774;
    return;
L_08A4E774:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E784;
      }
      goto L_08A4E77C;
    }
L_08A4E77C:
    aot_gpr[31] = (0x08A4E784u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A4E784u) goto L_08A4E784;
    return;
L_08A4E784:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E790:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-5816)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A4E7CC;
      }
      goto L_08A4E7AC;
    }
L_08A4E7AC:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[8]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A4E7CCu);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4E7CCu) goto L_08A4E7CC;
    return;
L_08A4E7CC:
    aot_gpr[2] = (0u | 8u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E7DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7760)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A4E818;
      }
      goto L_08A4E7F8;
    }
L_08A4E7F8:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[8]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A4E818u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4E818u) goto L_08A4E818;
    return;
L_08A4E818:
    aot_gpr[2] = (0u | 20u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E828:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7764)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A4E864;
      }
      goto L_08A4E844;
    }
L_08A4E844:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[8]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A4E864u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4E864u) goto L_08A4E864;
    return;
L_08A4E864:
    aot_gpr[2] = (0u | 12u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E874:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A4E8BC;
      }
      goto L_08A4E890;
    }
L_08A4E890:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5776));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4E8A8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 71u, 0x089F139Cu>(ctx, &aot_mem) && ctx.pc == 0x08A4E8A8u) goto L_08A4E8A8;
    return;
L_08A4E8A8:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E8BC;
      }
      goto L_08A4E8B4;
    }
L_08A4E8B4:
    aot_gpr[31] = (0x08A4E8BCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 63u, 0x088A4424u>(ctx, &aot_mem) && ctx.pc == 0x08A4E8BCu) goto L_08A4E8BC;
    return;
L_08A4E8BC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E8D0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E8D8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E8E0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E8E8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E8F0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E8F8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E900:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E908:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E910:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E918:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E920:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E928:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E930:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E938:
    aot_gpr[2] = (2214u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(28656));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E944:
    aot_gpr[2] = (2214u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(28724));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E950:
    aot_gpr[2] = (2214u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(28836));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E95C:
    aot_gpr[2] = (2214u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(28880));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E968:
    aot_gpr[2] = (2214u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(28888));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E974:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E97C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4E984:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[20] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A4EA20;
      }
      goto L_08A4E9D0;
    }
L_08A4E9D0:
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x08A4E9E4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4E9E4u) goto L_08A4E9E4;
    return;
L_08A4E9E4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E9F0;
      }
      goto L_08A4E9EC;
    }
L_08A4E9EC:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08A4E9F0;
L_08A4E9F0:
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4E9D0;
      }
      goto L_08A4EA20;
    }
L_08A4EA20:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A4EA44;
      }
      goto L_08A4EA28;
    }
L_08A4EA28:
    aot_gpr[4] = (aot_gpr[22] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08A4EA44;
L_08A4EA44:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[4] << 2u);
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 1u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
    goto L_08A4EA6C;
L_08A4EA6C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (aot_gpr[17] << 2u);
      if (branch_taken) {
          goto L_08A4EABC;
      }
      goto L_08A4EA74;
    }
L_08A4EA74:
    aot_gpr[22] = (aot_gpr[16] + aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[20];
    aot_gpr[31] = (0x08A4EA84u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4EA84u) goto L_08A4EA84;
    return;
L_08A4EA84:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A4EABC;
      }
      goto L_08A4EA8C;
    }
L_08A4EA8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[18] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 1u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
      if (branch_taken) {
          goto L_08A4EA6C;
      }
      goto L_08A4EABC;
    }
L_08A4EABC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[19]);
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
L_08A4EAE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    aot_gpr[7] = (aot_gpr[7] >> 30u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < 2 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A4EB78;
      }
      goto L_08A4EB28;
    }
L_08A4EB28:
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[4] = (aot_gpr[4] >> 31u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[19]) >> 1u));
    aot_gpr[18] = (aot_gpr[19] << 2u);
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A4EB4C;
L_08A4EB4C:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A4EB64u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A4E984;
L_08A4EB64:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A4EB78;
      }
      goto L_08A4EB6C;
    }
L_08A4EB6C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4EB4C;
      }
      goto L_08A4EB78;
    }
L_08A4EB78:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4EB98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4)));
    aot_gpr[7] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[7] - aot_gpr[4]);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[10] >> 30u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A4EBD4u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    goto L_08A4E984;
L_08A4EBD4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4EBE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4EC20u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4EAE8;
L_08A4EC20:
    aot_gpr[21] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
      if (branch_taken) {
          goto L_08A4EC84;
      }
      goto L_08A4EC30;
    }
L_08A4EC30:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    goto L_08A4EC40;
L_08A4EC40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4EC4Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4EC4Cu) goto L_08A4EC4C;
    return;
L_08A4EC4C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EC74;
      }
      goto L_08A4EC54;
    }
L_08A4EC54:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A4EC74u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A4E984;
L_08A4EC74:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EC40;
      }
      goto L_08A4EC84;
    }
L_08A4EC84:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4ECD8;
      }
      goto L_08A4ECA4;
    }
L_08A4ECA4:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A4ECA8;
L_08A4ECA8:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4ECB8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A4EB98;
L_08A4ECB8:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A4ECA8;
      }
      goto L_08A4ECD8;
    }
L_08A4ECD8:
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
L_08A4ECFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A4ED10u);
    aot_gpr[7] = (0u | 0u);
    goto L_08A4EBE0;
L_08A4ED10:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4ED1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[20] = (aot_gpr[5] + static_cast<std::uint32_t>(-4));
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A4ED4C;
L_08A4ED4C:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4ED54u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4ED54u) goto L_08A4ED54;
    return;
L_08A4ED54:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4ED68;
      }
      goto L_08A4ED5C;
    }
L_08A4ED5C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4ED4C;
      }
      goto L_08A4ED68;
    }
L_08A4ED68:
    aot_gpr[18] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A4ED70;
L_08A4ED70:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4ED7Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4ED7Cu) goto L_08A4ED7C;
    return;
L_08A4ED7C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4ED94;
      }
      goto L_08A4ED84;
    }
L_08A4ED84:
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
    aot_gpr[18] = (aot_gpr[20] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4ED70;
      }
      goto L_08A4ED94;
    }
L_08A4ED94:
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EDC0;
      }
      goto L_08A4EDA0;
    }
L_08A4EDA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A4ED4C;
      }
      goto L_08A4EDC0;
    }
L_08A4EDC0:
    aot_gpr[2] = (aot_gpr[19] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4EDE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] - aot_gpr[16]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    aot_gpr[4] = (aot_gpr[4] >> 30u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 17 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[19] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A4EF4C;
      }
      goto L_08A4EE30;
    }
L_08A4EE30:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 3u));
      if (branch_taken) {
          goto L_08A4EE70;
      }
      goto L_08A4EE38;
    }
L_08A4EE38:
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[20] = (aot_gpr[4] << 2u);
    aot_gpr[20] = (aot_gpr[16] + aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A4EE60u);
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4EE60u) goto L_08A4EE60;
    return;
L_08A4EE60:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4EE8C;
      }
      goto L_08A4EE68;
    }
L_08A4EE68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A4EEC8;
      }
      goto L_08A4EE70;
    }
L_08A4EE70:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4EE84u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_08A4ECFC;
L_08A4EE84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EF4C;
      }
      goto L_08A4EE8C;
    }
L_08A4EE8C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A4EE98u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4EE98u) goto L_08A4EE98;
    return;
L_08A4EE98:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08A4EEA8;
    }
    goto L_08A4EEA0;
L_08A4EEA0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4EEF8;
      }
      goto L_08A4EEA8;
    }
L_08A4EEA8:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A4EEB0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4EEB0u) goto L_08A4EEB0;
    return;
L_08A4EEB0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EEC0;
      }
      goto L_08A4EEB8;
    }
L_08A4EEB8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4EEF8;
      }
      goto L_08A4EEC0;
    }
L_08A4EEC0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4EEF8;
      }
      goto L_08A4EEC8;
    }
L_08A4EEC8:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A4EED0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4EED0u) goto L_08A4EED0;
    return;
L_08A4EED0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A4EEE0;
    }
    goto L_08A4EED8;
L_08A4EED8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4EEF8;
      }
      goto L_08A4EEE0;
    }
L_08A4EEE0:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A4EEE8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4EEE8u) goto L_08A4EEE8;
    return;
L_08A4EEE8:
    if (aot_gpr[2] == 0u) {
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A4EEF8;
    }
    goto L_08A4EEF0;
L_08A4EEF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4EEF8;
      }
      goto L_08A4EEF8;
    }
L_08A4EEF8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A4EF0Cu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_08A4ED1C;
L_08A4EF0C:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A4EF28u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    goto L_08A4EDE4;
L_08A4EF28:
    aot_gpr[4] = (aot_gpr[20] - aot_gpr[16]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[17] = (aot_gpr[20] | 0u);
    aot_gpr[20] = (aot_gpr[5] >> 30u);
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EE30;
      }
      goto L_08A4EF4C;
    }
L_08A4EF4C:
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
L_08A4EF70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A4EFA4;
L_08A4EFA4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A4EFB0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A4EFB0u) goto L_08A4EFB0;
    return;
L_08A4EFB0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4EFD4;
      }
      goto L_08A4EFB8;
    }
L_08A4EFB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[19] | 0u);
    aot_gpr[19] = (aot_gpr[20] + static_cast<std::uint32_t>(-4));
    aot_gpr[20] = (aot_gpr[19] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A4EFA4;
      }
      goto L_08A4EFD4;
    }
L_08A4EFD4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4EFF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    ctx.pc = 0x08A4F000u; return;
}

void recomp_unit_0586(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0586_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_586(Runtime &runtime) {
    runtime.register_generated_unit(586u, 0x08A4E000u, 4096u, &recomp_unit_0586, &recomp_unit_0586_entry);
    runtime.register_function(0x08A4E000u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E010u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E024u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E03Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E044u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E04Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E058u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E068u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E074u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E080u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E08Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E09Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E0B4u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E0BCu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E0C4u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E0D0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E0ECu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E104u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E10Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E11Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E124u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E134u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E150u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E158u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E160u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E174u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E184u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E198u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E1A0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E1A8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E1B0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E1BCu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E1CCu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E1E4u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E1ECu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E1F4u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E200u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E210u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E21Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E228u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E234u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E244u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E25Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E264u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E26Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E278u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E280u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E288u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E2A4u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E2BCu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E2C8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E2D8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E2F4u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E2FCu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E304u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E318u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E334u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E344u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E35Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E368u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E378u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E394u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E39Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E3A4u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E3B8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E3D4u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E3E4u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E3FCu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E408u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E418u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E434u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E43Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E444u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E458u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E474u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E48Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E498u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E4A8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E4C4u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E4CCu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E4D4u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E4E8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E504u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E514u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E52Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E538u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E548u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E564u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E56Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E574u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E588u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E5B0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E5D0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E5E0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E5F4u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E5FCu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E610u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E618u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E624u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E63Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E644u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E650u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E668u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E670u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E688u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E68Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E694u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E6A4u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E6C0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E6C8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E6D0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E6F0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E6F8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E700u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E71Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E72Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E748u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E75Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E774u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E77Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E784u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E790u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E7ACu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E7CCu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E7DCu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E7F8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E818u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E828u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E844u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E864u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E874u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E890u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E8A8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E8B4u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E8BCu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E8D0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E8D8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E8E0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E8E8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E8F0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E8F8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E900u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E908u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E910u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E918u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E920u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E928u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E930u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E938u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E944u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E950u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E95Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E968u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E974u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E97Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E984u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E9D0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E9E4u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E9ECu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4E9F0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EA20u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EA28u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EA44u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EA6Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EA74u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EA84u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EA8Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EABCu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EAE8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EB28u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EB4Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EB64u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EB6Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EB78u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EB98u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EBD4u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EBE0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EC20u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EC30u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EC40u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EC4Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EC54u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EC74u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EC84u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4ECA4u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4ECA8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4ECB8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4ECD8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4ECFCu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4ED10u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4ED1Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4ED4Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4ED54u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4ED5Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4ED68u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4ED70u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4ED7Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4ED84u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4ED94u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EDA0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EDC0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EDE4u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EE30u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EE38u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EE60u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EE68u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EE70u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EE84u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EE8Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EE98u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EEA0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EEA8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EEB0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EEB8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EEC0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EEC8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EED0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EED8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EEE0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EEE8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EEF0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EEF8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EF0Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EF28u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EF4Cu, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EF70u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EFA4u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EFB0u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EFB8u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EFD4u, &recomp_unit_0586, "recomp_unit_0586");
    runtime.register_function(0x08A4EFF8u, &recomp_unit_0586, "recomp_unit_0586");
}
} // namespace psprecomp
