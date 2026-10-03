#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0472[1021] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 7, 0, 8, 0, 9, 0, 10, 0, 0, 0, 11, 0, 12, 0,
    13, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 21, 22, 0, 0, 0, 23, 0, 0, 0, 0, 24,
    25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 42, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 47, 0, 48, 0, 49, 0, 50, 0, 0, 0, 51, 0, 52,
    0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0, 0, 58, 0, 59, 0, 60, 61, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70,
    0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 76, 0, 0, 77, 0, 78, 0, 79, 0, 0, 80, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 82, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0,
    0, 0, 85, 0, 0, 86, 0, 87, 0, 0, 88, 0, 89, 0, 90, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    94, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 100, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 103, 0, 0, 104, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 112, 0, 0, 0, 0, 0, 113,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 115, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118,
    0, 119, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 124, 0, 0, 125, 0, 126, 127, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 134, 0,
    0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 142, 0, 143, 144, 145, 0, 0, 0, 0, 146, 147, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 0, 156, 0, 0, 0, 0, 157,
    0, 158, 0, 0, 0, 159, 0, 160, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 165, 0, 0, 0, 166, 167, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 171, 172, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 174, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 182, 183, 0, 184,
    0, 185, 186, 0, 187, 188, 0, 189, 0, 190, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 195, 0, 0, 0, 196, 0, 197, 0, 198, 0, 199, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0,
    0, 0, 202, 0, 0, 203, 204, 0, 205, 0, 206, 0, 0, 207, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214,
    0, 215, 216, 0, 217, 0, 0, 0, 218, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 222, 0,
    0, 223, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 227,
};
void recomp_unit_0472_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089DC004u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0472[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089DC004;
    case 2u: goto L_089DC014;
    case 3u: goto L_089DC020;
    case 4u: goto L_089DC02C;
    case 5u: goto L_089DC034;
    case 6u: goto L_089DC040;
    case 7u: goto L_089DC04C;
    case 8u: goto L_089DC054;
    case 9u: goto L_089DC05C;
    case 10u: goto L_089DC064;
    case 11u: goto L_089DC074;
    case 12u: goto L_089DC07C;
    case 13u: goto L_089DC084;
    case 14u: goto L_089DC08C;
    case 15u: goto L_089DC094;
    case 16u: goto L_089DC09C;
    case 17u: goto L_089DC0A4;
    case 18u: goto L_089DC0AC;
    case 19u: goto L_089DC0B4;
    case 20u: goto L_089DC0BC;
    case 21u: goto L_089DC0D8;
    case 22u: goto L_089DC0DC;
    case 23u: goto L_089DC0EC;
    case 24u: goto L_089DC100;
    case 25u: goto L_089DC104;
    case 26u: goto L_089DC10C;
    case 27u: goto L_089DC114;
    case 28u: goto L_089DC11C;
    case 29u: goto L_089DC124;
    case 30u: goto L_089DC12C;
    case 31u: goto L_089DC134;
    case 32u: goto L_089DC140;
    case 33u: goto L_089DC148;
    case 34u: goto L_089DC168;
    case 35u: goto L_089DC170;
    case 36u: goto L_089DC1A4;
    case 37u: goto L_089DC1B4;
    case 38u: goto L_089DC1C4;
    case 39u: goto L_089DC1D0;
    case 40u: goto L_089DC1E0;
    case 41u: goto L_089DC1EC;
    case 42u: goto L_089DC1F0;
    case 43u: goto L_089DC214;
    case 44u: goto L_089DC218;
    case 45u: goto L_089DC238;
    case 46u: goto L_089DC240;
    case 47u: goto L_089DC250;
    case 48u: goto L_089DC258;
    case 49u: goto L_089DC260;
    case 50u: goto L_089DC268;
    case 51u: goto L_089DC278;
    case 52u: goto L_089DC280;
    case 53u: goto L_089DC288;
    case 54u: goto L_089DC290;
    case 55u: goto L_089DC298;
    case 56u: goto L_089DC2A0;
    case 57u: goto L_089DC2A8;
    case 58u: goto L_089DC2B4;
    case 59u: goto L_089DC2BC;
    case 60u: goto L_089DC2C4;
    case 61u: goto L_089DC2C8;
    case 62u: goto L_089DC2D0;
    case 63u: goto L_089DC2DC;
    case 64u: goto L_089DC2FC;
    case 65u: goto L_089DC304;
    case 66u: goto L_089DC30C;
    case 67u: goto L_089DC32C;
    case 68u: goto L_089DC368;
    case 69u: goto L_089DC374;
    case 70u: goto L_089DC380;
    case 71u: goto L_089DC38C;
    case 72u: goto L_089DC394;
    case 73u: goto L_089DC3AC;
    case 74u: goto L_089DC3BC;
    case 75u: goto L_089DC3C4;
    case 76u: goto L_089DC3CC;
    case 77u: goto L_089DC3D8;
    case 78u: goto L_089DC3E0;
    case 79u: goto L_089DC3E8;
    case 80u: goto L_089DC3F4;
    case 81u: goto L_089DC404;
    case 82u: goto L_089DC4A4;
    case 83u: goto L_089DC4A8;
    case 84u: goto L_089DC4F8;
    case 85u: goto L_089DC50C;
    case 86u: goto L_089DC518;
    case 87u: goto L_089DC520;
    case 88u: goto L_089DC52C;
    case 89u: goto L_089DC534;
    case 90u: goto L_089DC53C;
    case 91u: goto L_089DC540;
    case 92u: goto L_089DC548;
    case 93u: goto L_089DC57C;
    case 94u: goto L_089DC584;
    case 95u: goto L_089DC598;
    case 96u: goto L_089DC5A8;
    case 97u: goto L_089DC5B0;
    case 98u: goto L_089DC5B8;
    case 99u: goto L_089DC5EC;
    case 100u: goto L_089DC5F0;
    case 101u: goto L_089DC624;
    case 102u: goto L_089DC630;
    case 103u: goto L_089DC638;
    case 104u: goto L_089DC644;
    case 105u: goto L_089DC64C;
    case 106u: goto L_089DC658;
    case 107u: goto L_089DC664;
    case 108u: goto L_089DC6A0;
    case 109u: goto L_089DC6AC;
    case 110u: goto L_089DC6B4;
    case 111u: goto L_089DC764;
    case 112u: goto L_089DC768;
    case 113u: goto L_089DC780;
    case 114u: goto L_089DC84C;
    case 115u: goto L_089DC850;
    case 116u: goto L_089DC864;
    case 117u: goto L_089DC870;
    case 118u: goto L_089DC880;
    case 119u: goto L_089DC888;
    case 120u: goto L_089DC890;
    case 121u: goto L_089DC8A4;
    case 122u: goto L_089DC92C;
    case 123u: goto L_089DC940;
    case 124u: goto L_089DC948;
    case 125u: goto L_089DC954;
    case 126u: goto L_089DC95C;
    case 127u: goto L_089DC960;
    case 128u: goto L_089DC9B8;
    case 129u: goto L_089DC9C4;
    case 130u: goto L_089DC9D0;
    case 131u: goto L_089DC9DC;
    case 132u: goto L_089DC9E4;
    case 133u: goto L_089DC9F4;
    case 134u: goto L_089DC9FC;
    case 135u: goto L_089DCA18;
    case 136u: goto L_089DCA20;
    case 137u: goto L_089DCA38;
    case 138u: goto L_089DCA40;
    case 139u: goto L_089DCA60;
    case 140u: goto L_089DCA68;
    case 141u: goto L_089DCA94;
    case 142u: goto L_089DCAA0;
    case 143u: goto L_089DCAA8;
    case 144u: goto L_089DCAAC;
    case 145u: goto L_089DCAB0;
    case 146u: goto L_089DCAC4;
    case 147u: goto L_089DCAC8;
    case 148u: goto L_089DCAD0;
    case 149u: goto L_089DCADC;
    case 150u: goto L_089DCB14;
    case 151u: goto L_089DCB1C;
    case 152u: goto L_089DCB30;
    case 153u: goto L_089DCB50;
    case 154u: goto L_089DCB58;
    case 155u: goto L_089DCB60;
    case 156u: goto L_089DCB6C;
    case 157u: goto L_089DCB80;
    case 158u: goto L_089DCB88;
    case 159u: goto L_089DCB98;
    case 160u: goto L_089DCBA0;
    case 161u: goto L_089DCBA8;
    case 162u: goto L_089DCBBC;
    case 163u: goto L_089DCBD4;
    case 164u: goto L_089DCBE4;
    case 165u: goto L_089DCC10;
    case 166u: goto L_089DCC20;
    case 167u: goto L_089DCC24;
    case 168u: goto L_089DCC28;
    case 169u: goto L_089DCC48;
    case 170u: goto L_089DCC50;
    case 171u: goto L_089DCC5C;
    case 172u: goto L_089DCC60;
    case 173u: goto L_089DCC84;
    case 174u: goto L_089DCC88;
    case 175u: goto L_089DCC90;
    case 176u: goto L_089DCC9C;
    case 177u: goto L_089DCCA8;
    case 178u: goto L_089DCCBC;
    case 179u: goto L_089DCCC4;
    case 180u: goto L_089DCCD8;
    case 181u: goto L_089DCCE4;
    case 182u: goto L_089DCCF4;
    case 183u: goto L_089DCCF8;
    case 184u: goto L_089DCD00;
    case 185u: goto L_089DCD08;
    case 186u: goto L_089DCD0C;
    case 187u: goto L_089DCD14;
    case 188u: goto L_089DCD18;
    case 189u: goto L_089DCD20;
    case 190u: goto L_089DCD28;
    case 191u: goto L_089DCD40;
    case 192u: goto L_089DCD48;
    case 193u: goto L_089DCD9C;
    case 194u: goto L_089DCDA4;
    case 195u: goto L_089DCDAC;
    case 196u: goto L_089DCDBC;
    case 197u: goto L_089DCDC4;
    case 198u: goto L_089DCDCC;
    case 199u: goto L_089DCDD4;
    case 200u: goto L_089DCDE0;
    case 201u: goto L_089DCDF0;
    case 202u: goto L_089DCE0C;
    case 203u: goto L_089DCE18;
    case 204u: goto L_089DCE1C;
    case 205u: goto L_089DCE24;
    case 206u: goto L_089DCE2C;
    case 207u: goto L_089DCE38;
    case 208u: goto L_089DCE3C;
    case 209u: goto L_089DCE5C;
    case 210u: goto L_089DCE6C;
    case 211u: goto L_089DCE7C;
    case 212u: goto L_089DCEB8;
    case 213u: goto L_089DCED4;
    case 214u: goto L_089DCF00;
    case 215u: goto L_089DCF08;
    case 216u: goto L_089DCF0C;
    case 217u: goto L_089DCF14;
    case 218u: goto L_089DCF24;
    case 219u: goto L_089DCF28;
    case 220u: goto L_089DCF5C;
    case 221u: goto L_089DCF68;
    case 222u: goto L_089DCF7C;
    case 223u: goto L_089DCF88;
    case 224u: goto L_089DCF8C;
    case 225u: goto L_089DCFB8;
    case 226u: goto L_089DCFEC;
    case 227u: goto L_089DCFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089DC004:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[8] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC014:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u | 54002u);
      if (branch_taken) {
          goto L_089DC02C;
      }
      goto L_089DC020;
    }
L_089DC020:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(132)));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089DC02C;
L_089DC02C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC034:
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u | 54003u);
      if (branch_taken) {
          goto L_089DC04C;
      }
      goto L_089DC040;
    }
L_089DC040:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089DC04C;
L_089DC04C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC054:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u | 54002u);
      if (branch_taken) {
          goto L_089DC074;
      }
      goto L_089DC05C;
    }
L_089DC05C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (0u | 54003u);
      if (branch_taken) {
          goto L_089DC074;
      }
      goto L_089DC064;
    }
L_089DC064:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(27));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[3] = (0u | 54003u);
      if (branch_taken) {
          goto L_089DC07C;
      }
      goto L_089DC074;
    }
L_089DC074:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC07C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089DC10C;
      }
      goto L_089DC084;
    }
L_089DC084:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[2];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DC074;
      }
      goto L_089DC08C;
    }
L_089DC08C:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC09C;
      }
      goto L_089DC094;
    }
L_089DC094:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089DC09C;
L_089DC09C:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC0AC;
      }
      goto L_089DC0A4;
    }
L_089DC0A4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089DC0AC;
L_089DC0AC:
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089DC104;
      }
      goto L_089DC0B4;
    }
L_089DC0B4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    goto L_089DC0BC;
L_089DC0BC:
    aot_gpr[4] = (aot_gpr[2] << 4u);
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089DC0DC;
      }
      goto L_089DC0D8;
    }
L_089DC0D8:
    rt.unsupported(0x089DC0D8u, 0x000001CDu, "special? not lowered yet"); return;
L_089DC0DC:
    aot_gpr[2] = (ctx.lo);
    aot_gpr[3] = (aot_gpr[2] < static_cast<std::uint32_t>(101) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089DC100;
      }
      goto L_089DC0EC;
    }
L_089DC0EC:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(100));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC100:
    aot_gpr[3] = (0u + 0u);
    goto L_089DC104;
L_089DC104:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC10C:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC11C;
      }
      goto L_089DC114;
    }
L_089DC114:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089DC11C;
L_089DC11C:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC12C;
      }
      goto L_089DC124;
    }
L_089DC124:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089DC12C;
L_089DC12C:
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089DC104;
      }
      goto L_089DC134;
    }
L_089DC134:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    goto L_089DC0BC;
L_089DC140:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u | 54002u);
      if (branch_taken) {
          goto L_089DC168;
      }
      goto L_089DC148;
    }
L_089DC148:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(180)));
    aot_gpr[7] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_089DC168;
L_089DC168:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[7] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC170:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (0u | 54002u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
      if (branch_taken) {
          goto L_089DC214;
      }
      goto L_089DC1A4;
    }
L_089DC1A4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089DC1F0;
      }
      goto L_089DC1B4;
    }
L_089DC1B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089DC1C4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0486_entry, 486u, 257u, 0x089EADCCu>(ctx, &aot_mem) && ctx.pc == 0x089DC1C4u) goto L_089DC1C4;
    return;
L_089DC1C4:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089DC1D0u);
    aot_gpr[20] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 104u, 0x0898F644u>(ctx, &aot_mem) && ctx.pc == 0x089DC1D0u) goto L_089DC1D0;
    return;
L_089DC1D0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089DC1EC;
      }
      goto L_089DC1E0;
    }
L_089DC1E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[20] + 0u);
      if (branch_taken) {
          goto L_089DC218;
      }
      goto L_089DC1EC;
    }
L_089DC1EC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_089DC1F0;
L_089DC1F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    goto L_089DC140;
L_089DC214:
    aot_gpr[2] = (aot_gpr[20] + 0u);
    goto L_089DC218;
L_089DC218:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC238:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u | 54002u);
      if (branch_taken) {
          goto L_089DC258;
      }
      goto L_089DC240;
    }
L_089DC240:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DC258;
      }
      goto L_089DC250;
    }
L_089DC250:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0486_entry, 486u, 257u, 0x089EADCCu>(ctx, &aot_mem); return;
L_089DC258:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC260:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u | 54002u);
      if (branch_taken) {
          goto L_089DC280;
      }
      goto L_089DC268;
    }
L_089DC268:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DC280;
      }
      goto L_089DC278;
    }
L_089DC278:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 112u, 0x089E75ACu>(ctx, &aot_mem); return;
L_089DC280:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC288:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (0u | 54002u);
      if (branch_taken) {
          goto L_089DC2FC;
      }
      goto L_089DC290;
    }
L_089DC290:
    if (aot_gpr[6] == 0u) {
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(3));
        goto L_089DC304;
    }
    goto L_089DC298;
L_089DC298:
    if (aot_gpr[7] == 0u) {
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(3));
        goto L_089DC304;
    }
    goto L_089DC2A0;
L_089DC2A0:
    if (aot_gpr[5] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
        goto L_089DC30C;
    }
    goto L_089DC2A8;
L_089DC2A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
        goto L_089DC2C8;
    }
    goto L_089DC2B4;
L_089DC2B4:
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(3));
    goto L_089DC304;
L_089DC2BC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089DC304;
      }
      goto L_089DC2C4;
    }
L_089DC2C4:
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    goto L_089DC2C8;
L_089DC2C8:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
        goto L_089DC2BC;
    }
    goto L_089DC2D0;
L_089DC2D0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
        goto L_089DC2BC;
    }
    goto L_089DC2DC;
L_089DC2DC:
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(12));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089DC2FC;
L_089DC2FC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[8] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC304:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[8] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC30C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[8] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC32C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
      if (branch_taken) {
          goto L_089DC5EC;
      }
      goto L_089DC368;
    }
L_089DC368:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (0u | 54002u);
      if (branch_taken) {
          goto L_089DC548;
      }
      goto L_089DC374;
    }
L_089DC374:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089DC5F0;
      }
      goto L_089DC380;
    }
L_089DC380:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089DC5F0;
      }
      goto L_089DC38C;
    }
L_089DC38C:
    aot_gpr[31] = (0x089DC394u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 103u, 0x0898F630u>(ctx, &aot_mem) && ctx.pc == 0x089DC394u) goto L_089DC394;
    return;
L_089DC394:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089DC3ACu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_089DC170;
L_089DC3AC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089DC3CC;
      }
      goto L_089DC3BC;
    }
L_089DC3BC:
    aot_gpr[31] = (0x089DC3C4u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 106u, 0x0898F67Cu>(ctx, &aot_mem) && ctx.pc == 0x089DC3C4u) goto L_089DC3C4;
    return;
L_089DC3C4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089DC5B8;
      }
      goto L_089DC3CC;
    }
L_089DC3CC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC57C;
      }
      goto L_089DC3D8;
    }
L_089DC3D8:
    aot_gpr[31] = (0x089DC3E0u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(260));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 117u, 0x089927DCu>(ctx, &aot_mem) && ctx.pc == 0x089DC3E0u) goto L_089DC3E0;
    return;
L_089DC3E0:
    aot_gpr[31] = (0x089DC3E8u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 173u, 0x089DB8BCu>(ctx, &aot_mem) && ctx.pc == 0x089DC3E8u) goto L_089DC3E8;
    return;
L_089DC3E8:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u | 54007u);
      if (branch_taken) {
          goto L_089DC548;
      }
      goto L_089DC3F4;
    }
L_089DC3F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089DC404u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 153u, 0x089DF984u>(ctx, &aot_mem) && ctx.pc == 0x089DC404u) goto L_089DC404;
    return;
L_089DC404:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(10)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(14)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(11)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(15)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(9)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(13)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(17)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(116)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089DC4A8;
      }
      goto L_089DC4A4;
    }
L_089DC4A4:
    rt.unsupported(0x089DC4A4u, 0x000001CDu, "special? not lowered yet"); return;
L_089DC4A8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(9));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(13));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[30] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(17));
    aot_gpr[21] = (aot_gpr[16] + static_cast<std::uint32_t>(10));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(14));
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(11));
    aot_gpr[22] = (aot_gpr[16] + static_cast<std::uint32_t>(15));
    aot_gpr[23] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (ctx.hi);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[31] = (0x089DC4F8u);
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 163u, 0x089DF9F0u>(ctx, &aot_mem) && ctx.pc == 0x089DC4F8u) goto L_089DC4F8;
    return;
L_089DC4F8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[6] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
        goto L_089DC518;
    }
    goto L_089DC50C;
L_089DC50C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    goto L_089DC518;
L_089DC518:
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(72)));
        goto L_089DC52C;
    }
    goto L_089DC520;
L_089DC520:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(124)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(72)));
    goto L_089DC52C;
L_089DC52C:
    aot_gpr[31] = (0x089DC534u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 116u, 0x08A43614u>(ctx, &aot_mem) && ctx.pc == 0x089DC534u) goto L_089DC534;
    return;
L_089DC534:
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(72)));
        goto L_089DC624;
    }
    goto L_089DC53C;
L_089DC53C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    goto L_089DC540;
L_089DC540:
    aot_gpr[3] = (0u | 54007u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089DC548;
L_089DC548:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC57C:
    aot_gpr[31] = (0x089DC584u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 103u, 0x0898F630u>(ctx, &aot_mem) && ctx.pc == 0x089DC584u) goto L_089DC584;
    return;
L_089DC584:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[6] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089DC598u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_089DC140;
L_089DC598:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089DC3D8;
      }
      goto L_089DC5A8;
    }
L_089DC5A8:
    aot_gpr[31] = (0x089DC5B0u);
    aot_gpr[5] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 106u, 0x0898F67Cu>(ctx, &aot_mem) && ctx.pc == 0x089DC5B0u) goto L_089DC5B0;
    return;
L_089DC5B0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089DC3D8;
      }
      goto L_089DC5B8;
    }
L_089DC5B8:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[3] = (0u | 54021u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC5EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_089DC5F0;
L_089DC5F0:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC624:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (0x089DC630u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 116u, 0x08A43614u>(ctx, &aot_mem) && ctx.pc == 0x089DC630u) goto L_089DC630;
    return;
L_089DC630:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_089DC540;
      }
      goto L_089DC638;
    }
L_089DC638:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(280));
    aot_gpr[31] = (0x089DC644u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1026));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x089DC644u) goto L_089DC644;
    return;
L_089DC644:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_089DC540;
      }
      goto L_089DC64C;
    }
L_089DC64C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_089DC540;
      }
      goto L_089DC658;
    }
L_089DC658:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(140)));
        goto L_089DC9FC;
    }
    goto L_089DC664;
L_089DC664:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(140)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(144)));
    aot_gpr[4] = (0u | 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = ((aot_gpr[2] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    aot_gpr[3] = (16384u << 16u);
    aot_gpr[5] = (aot_gpr[2] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(140), aot_gpr[5]);
    aot_gpr[3] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(204), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(208), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089DC6AC;
      }
      goto L_089DC6A0;
    }
L_089DC6A0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(104)));
        goto L_089DCA18;
    }
    goto L_089DC6AC;
L_089DC6AC:
    aot_gpr[31] = (0x089DC6B4u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 233u, 0x089DFE30u>(ctx, &aot_mem) && ctx.pc == 0x089DC6B4u) goto L_089DC6B4;
    return;
L_089DC6B4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(116)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089DC768;
      }
      goto L_089DC764;
    }
L_089DC764:
    rt.unsupported(0x089DC764u, 0x000001CDu, "special? not lowered yet"); return;
L_089DC768:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (ctx.hi);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[31] = (0x089DC780u);
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 165u, 0x089DFA10u>(ctx, &aot_mem) && ctx.pc == 0x089DC780u) goto L_089DC780;
    return;
L_089DC780:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[2] << 5u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(116)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] << 5u);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089DC850;
      }
      goto L_089DC84C;
    }
L_089DC84C:
    rt.unsupported(0x089DC84Cu, 0x000001CDu, "special? not lowered yet"); return;
L_089DC850:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (ctx.hi);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[31] = (0x089DC864u);
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 163u, 0x089DF9F0u>(ctx, &aot_mem) && ctx.pc == 0x089DC864u) goto L_089DC864;
    return;
L_089DC864:
    aot_gpr[4] = (0u | 65535u);
    aot_gpr[31] = (0x089DC870u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 167u, 0x089DAA24u>(ctx, &aot_mem) && ctx.pc == 0x089DC870u) goto L_089DC870;
    return;
L_089DC870:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[4] = (0u | 65535u);
    aot_gpr[31] = (0x089DC880u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 167u, 0x089DAA24u>(ctx, &aot_mem) && ctx.pc == 0x089DC880u) goto L_089DC880;
    return;
L_089DC880:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1023));
    goto L_089DC888;
L_089DC888:
    aot_gpr[31] = (0x089DC890u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 167u, 0x089DAA24u>(ctx, &aot_mem) && ctx.pc == 0x089DC890u) goto L_089DC890;
    return;
L_089DC890:
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(110), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1023));
      if (branch_taken) {
          goto L_089DC888;
      }
      goto L_089DC8A4;
    }
L_089DC8A4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (7u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 41248u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(272), aot_gpr[2]);
    aot_gpr[7] = (0u | 65534u);
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(268), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(72)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(276), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(284), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(260)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(264)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(264)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(260)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(264), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(260), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(104), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(96), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(252), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(256), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x089DC92Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(136), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 81u, 0x089DA524u>(ctx, &aot_mem) && ctx.pc == 0x089DC92Cu) goto L_089DC92C;
    return;
L_089DC92C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
      if (branch_taken) {
          goto L_089DC948;
      }
      goto L_089DC940;
    }
L_089DC940:
    aot_gpr[31] = (0x089DC948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 164u, 0x089DAA04u>(ctx, &aot_mem) && ctx.pc == 0x089DC948u) goto L_089DC948;
    return;
L_089DC948:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (aot_gpr[19] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_089DC960;
      }
      goto L_089DC954;
    }
L_089DC954:
    aot_gpr[31] = (0x089DC95Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 164u, 0x089DAA04u>(ctx, &aot_mem) && ctx.pc == 0x089DC95Cu) goto L_089DC95C;
    return;
L_089DC95C:
    aot_gpr[3] = (aot_gpr[19] + static_cast<std::uint32_t>(36));
    goto L_089DC960;
L_089DC960:
    aot_gpr[4] = (rt.memory().aot_load_word_left(aot_gpr[3] + static_cast<std::uint32_t>(3), aot_gpr[4]));
    aot_gpr[5] = (rt.memory().aot_load_word_left(aot_gpr[3] + static_cast<std::uint32_t>(7), aot_gpr[5]));
    aot_gpr[6] = (rt.memory().aot_load_word_left(aot_gpr[3] + static_cast<std::uint32_t>(11), aot_gpr[6]));
    aot_gpr[4] = (rt.memory().aot_load_word_right(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[4]));
    aot_gpr[7] = (rt.memory().aot_load_word_left(aot_gpr[3] + static_cast<std::uint32_t>(15), aot_gpr[7]));
    aot_gpr[5] = (rt.memory().aot_load_word_right(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]));
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(152));
    aot_gpr[6] = (rt.memory().aot_load_word_right(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[6]));
    aot_gpr[7] = (rt.memory().aot_load_word_right(aot_gpr[3] + static_cast<std::uint32_t>(12), aot_gpr[7]));
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(3), aot_gpr[4]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(7), aot_gpr[5]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(11), aot_gpr[6]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    rt.memory().aot_store_word_left(aot_gpr[2] + static_cast<std::uint32_t>(15), aot_gpr[7]);
    rt.memory().aot_store_word_right(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          goto L_089DC9C4;
      }
      goto L_089DC9B8;
    }
L_089DC9B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089DC9F4;
      }
      goto L_089DC9C4;
    }
L_089DC9C4:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089DC9D0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0477_entry, 477u, 45u, 0x089E1478u>(ctx, &aot_mem) && ctx.pc == 0x089DC9D0u) goto L_089DC9D0;
    return;
L_089DC9D0:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089DC9DCu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 156u, 0x089E0AF4u>(ctx, &aot_mem) && ctx.pc == 0x089DC9DCu) goto L_089DC9DC;
    return;
L_089DC9DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089DC548;
      }
      goto L_089DC9E4;
    }
L_089DC9E4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[3] = (0u | 54007u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089DC548;
L_089DC9F4:
    aot_gpr[6] = (0u + 0u);
    goto L_089DC9C4;
L_089DC9FC:
    aot_gpr[3] = (16384u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(204), 0u);
    aot_gpr[2] = ((aot_gpr[2] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(140), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(208), 0u);
    goto L_089DC6AC;
L_089DCA18:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089DCA20u);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DCA20u) goto L_089DCA20;
    return;
L_089DCA20:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(140)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089DCA38u);
    aot_gpr[5] = (0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DCA38u) goto L_089DCA38;
    return;
L_089DCA38:
    // nop
    goto L_089DC6AC;
L_089DCA40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
      if (branch_taken) {
          goto L_089DCAAC;
      }
      goto L_089DCA60;
    }
L_089DCA60:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DCAAC;
      }
      goto L_089DCA68;
    }
L_089DCA68:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(27));
    aot_gpr[8] = (aot_gpr[18] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(16384));
    aot_gpr[7] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(272), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(268), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(276), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(284), 0u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(112), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089DCAC4;
      }
      goto L_089DCA94;
    }
L_089DCA94:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_089DCAC8;
      }
      goto L_089DCAA0;
    }
L_089DCAA0:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089DCAAC;
      }
      goto L_089DCAA8;
    }
L_089DCAA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089DCAAC;
L_089DCAAC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    goto L_089DCAB0;
L_089DCAB0:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DCAC4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    goto L_089DCAC8;
L_089DCAC8:
    aot_gpr[31] = (0x089DCAD0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 237u, 0x089DFE88u>(ctx, &aot_mem) && ctx.pc == 0x089DCAD0u) goto L_089DCAD0;
    return;
L_089DCAD0:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (0x089DCADCu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 112u, 0x089DF600u>(ctx, &aot_mem) && ctx.pc == 0x089DCADCu) goto L_089DCADC;
    return;
L_089DCADC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(8192));
    aot_gpr[8] = (0u + 0u);
    aot_gpr[9] = (0u + 0u);
    aot_gpr[10] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    aot_gpr[31] = (0x089DCB14u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 178u, 0x089DB964u>(ctx, &aot_mem) && ctx.pc == 0x089DCB14u) goto L_089DCB14;
    return;
L_089DCB14:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_089DCAB0;
      }
      goto L_089DCB1C;
    }
L_089DCB1C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(118)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089DCAAC;
      }
      goto L_089DCB30;
    }
L_089DCB30:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DCB50:
    if (aot_gpr[4] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(136), aot_gpr[5]);
        goto L_089DCB58;
    }
    goto L_089DCB58;
L_089DCB58:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DCB60:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    (void)rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 204u, 0x0898DE3Cu>(ctx, &aot_mem); return;
L_089DCB6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
      if (branch_taken) {
          goto L_089DCBBC;
      }
      goto L_089DCB80;
    }
L_089DCB80:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089DCBBC;
      }
      goto L_089DCB88;
    }
L_089DCB88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089DCB98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DCB98u) goto L_089DCB98;
    return;
L_089DCB98:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DCBA8;
      }
      goto L_089DCBA0;
    }
L_089DCBA0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089DCBA8;
L_089DCBA8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DCBBC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DCBD4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DCBE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_089DCC20;
      }
      goto L_089DCC10;
    }
L_089DCC10:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(27));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089DCC48;
      }
      goto L_089DCC20;
    }
L_089DCC20:
    aot_gpr[2] = (0u | 54003u);
    goto L_089DCC24;
L_089DCC24:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_089DCC28;
L_089DCC28:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DCC48:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_089DCC60;
      }
      goto L_089DCC50;
    }
L_089DCC50:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[21] = (0u + 0u);
      if (branch_taken) {
          goto L_089DCC84;
      }
      goto L_089DCC5C;
    }
L_089DCC5C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_089DCC60;
L_089DCC60:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(301));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DCC84:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089DCC88;
L_089DCC88:
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089DCD0C;
    }
    goto L_089DCC90;
L_089DCC90:
    aot_gpr[16] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    if (aot_gpr[16] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089DCD0C;
    }
    goto L_089DCC9C;
L_089DCC9C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_089DCCBC;
      }
      goto L_089DCCA8;
    }
L_089DCCA8:
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(88));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[16]);
    if (aot_gpr[4] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089DCD0C;
    }
    goto L_089DCCBC;
L_089DCCBC:
    aot_gpr[31] = (0x089DCCC4u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DCCC4u) goto L_089DCCC4;
    return;
L_089DCCC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] & 63488u);
    aot_gpr[3] = (aot_gpr[4] & 16384u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089DCD08;
      }
      goto L_089DCCD8;
    }
L_089DCCD8:
    aot_gpr[2] = (aot_gpr[4] & 8192u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089DCD0C;
    }
    goto L_089DCCE4;
L_089DCCE4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(14)));
    aot_gpr[2] = (aot_gpr[19] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089DCD28;
    }
    goto L_089DCCF4;
L_089DCCF4:
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[21] ? 1u : 0u);
    goto L_089DCCF8;
L_089DCCF8:
    if (aot_gpr[2] != 0u) {
    aot_gpr[2] = (0u + 0u);
        goto L_089DCC24;
    }
    goto L_089DCD00;
L_089DCD00:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[21] ? 1u : 0u);
      if (branch_taken) {
          goto L_089DCD18;
      }
      goto L_089DCD08;
    }
L_089DCD08:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089DCD0C;
L_089DCD0C:
    if (aot_gpr[17] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089DCC88;
    }
    goto L_089DCD14;
L_089DCD14:
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[21] ? 1u : 0u);
    goto L_089DCD18;
L_089DCD18:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089DCC5C;
      }
      goto L_089DCD20;
    }
L_089DCD20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_089DCC28;
L_089DCD28:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[2]);
    aot_gpr[31] = (0x089DCD40u);
    aot_gpr[17] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 121u, 0x08A4364Cu>(ctx, &aot_mem) && ctx.pc == 0x089DCD40u) goto L_089DCD40;
    return;
L_089DCD40:
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[21] ? 1u : 0u);
    goto L_089DCCF8;
L_089DCD48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    aot_gpr[7] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[23]);
    aot_gpr[3] = (0u | 54002u);
    aot_gpr[23] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[6] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[7]);
      if (branch_taken) {
          goto L_089DCF28;
      }
      goto L_089DCD9C;
    }
L_089DCD9C:
    if (aot_gpr[5] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_089DCFB8;
    }
    goto L_089DCDA4;
L_089DCDA4:
    if (aot_gpr[10] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), 0u);
        goto L_089DCDAC;
    }
    goto L_089DCDAC;
L_089DCDAC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089DCF24;
      }
      goto L_089DCDBC;
    }
L_089DCDBC:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(27));
      if (branch_taken) {
          goto L_089DCF24;
      }
      goto L_089DCDC4;
    }
L_089DCDC4:
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_089DCFB8;
      }
      goto L_089DCDCC;
    }
L_089DCDCC:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_089DCF88;
      }
      goto L_089DCDD4;
    }
L_089DCDD4:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
    if (aot_gpr[21] == 0u) {
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_089DCF8C;
    }
    goto L_089DCDE0;
L_089DCDE0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(128)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[21] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (aot_gpr[22] & 32767u);
      if (branch_taken) {
          goto L_089DCF88;
      }
      goto L_089DCDF0;
    }
L_089DCDF0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[30] = (aot_gpr[20] + static_cast<std::uint32_t>(28));
    aot_gpr[2] = (aot_gpr[2] ^ 1u);
    if (aot_gpr[2] != 0u) aot_gpr[22] = (aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[22] & 65535u);
    { const bool branch_taken = aot_gpr[30] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[2]);
      if (branch_taken) {
          goto L_089DCE38;
      }
      goto L_089DCE0C;
    }
L_089DCE0C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DCE3C;
      }
      goto L_089DCE18;
    }
L_089DCE18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089DCE1C;
L_089DCE1C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089DCE2C;
      }
      goto L_089DCE24;
    }
L_089DCE24:
    if (aot_gpr[17] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_089DCFEC;
    }
    goto L_089DCE2C;
L_089DCE2C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[16] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089DCE1C;
    }
    goto L_089DCE38;
L_089DCE38:
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    goto L_089DCE3C;
L_089DCE3C:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (aot_gpr[21] + 0u);
    aot_gpr[6] = (aot_gpr[22] + 0u);
    aot_gpr[8] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089DCE5Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[9]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 237u, 0x089DFE88u>(ctx, &aot_mem) && ctx.pc == 0x089DCE5Cu) goto L_089DCE5C;
    return;
L_089DCE5C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x089DCE6Cu);
    aot_gpr[5] = (aot_gpr[9] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 112u, 0x089DF600u>(ctx, &aot_mem) && ctx.pc == 0x089DCE6Cu) goto L_089DCE6C;
    return;
L_089DCE6C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089DCEB8;
      }
      goto L_089DCE7C;
    }
L_089DCE7C:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    aot_gpr[21] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(64), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_089DCEB8;
L_089DCEB8:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[30] + 0u);
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[7] = (0u | 32768u);
    aot_gpr[31] = (0x089DCED4u);
    aot_gpr[8] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0471_entry, 471u, 178u, 0x089DB964u>(ctx, &aot_mem) && ctx.pc == 0x089DCED4u) goto L_089DCED4;
    return;
L_089DCED4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[3] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[3]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(64), aot_gpr[4]);
      if (branch_taken) {
          goto L_089DCF5C;
      }
      goto L_089DCF00;
    }
L_089DCF00:
    if (aot_gpr[23] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(0), aot_gpr[4]);
        goto L_089DCF08;
    }
    goto L_089DCF08;
L_089DCF08:
    aot_gpr[2] = (aot_gpr[22] & 4096u);
    goto L_089DCF0C;
L_089DCF0C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089DCF24;
      }
      goto L_089DCF14;
    }
L_089DCF14:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(132)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(132), aot_gpr[2]);
    goto L_089DCF28;
L_089DCF24:
    aot_gpr[3] = (0u + 0u);
    goto L_089DCF28;
L_089DCF28:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DCF5C:
    aot_gpr[2] = (aot_gpr[22] & 16384u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_089DCF24;
      }
      goto L_089DCF68;
    }
L_089DCF68:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(118)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089DCF28;
      }
      goto L_089DCF7C;
    }
L_089DCF7C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(118), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089DCF28;
L_089DCF88:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_089DCF8C;
L_089DCF8C:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DCFB8:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[3] = (0u | 54003u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DCFEC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DCE3C;
      }
      goto L_089DCFF4;
    }
L_089DCFF4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0473_entry, 473u, 2u, 0x089DD008u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0473_entry, 473u, 1u, 0x089DD000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0472(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0472_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_472(Runtime &runtime) {
    runtime.register_generated_unit(472u, 0x089DC000u, 4096u, &recomp_unit_0472, &recomp_unit_0472_entry);
    runtime.register_function(0x089DC004u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC014u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC020u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC02Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC034u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC040u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC04Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC054u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC05Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC064u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC074u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC07Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC084u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC08Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC094u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC09Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC0A4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC0ACu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC0B4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC0BCu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC0D8u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC0DCu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC0ECu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC100u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC104u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC10Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC114u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC11Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC124u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC12Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC134u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC140u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC148u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC168u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC170u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC1A4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC1B4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC1C4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC1D0u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC1E0u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC1ECu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC1F0u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC214u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC218u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC238u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC240u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC250u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC258u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC260u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC268u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC278u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC280u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC288u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC290u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC298u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC2A0u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC2A8u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC2B4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC2BCu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC2C4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC2C8u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC2D0u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC2DCu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC2FCu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC304u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC30Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC32Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC368u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC374u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC380u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC38Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC394u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC3ACu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC3BCu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC3C4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC3CCu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC3D8u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC3E0u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC3E8u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC3F4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC404u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC4A4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC4A8u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC4F8u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC50Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC518u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC520u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC52Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC534u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC53Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC540u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC548u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC57Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC584u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC598u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC5A8u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC5B0u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC5B8u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC5ECu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC5F0u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC624u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC630u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC638u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC644u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC64Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC658u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC664u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC6A0u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC6ACu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC6B4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC764u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC768u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC780u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC84Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC850u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC864u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC870u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC880u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC888u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC890u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC8A4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC92Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC940u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC948u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC954u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC95Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC960u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC9B8u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC9C4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC9D0u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC9DCu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC9E4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC9F4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DC9FCu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCA18u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCA20u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCA38u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCA40u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCA60u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCA68u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCA94u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCAA0u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCAA8u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCAACu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCAB0u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCAC4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCAC8u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCAD0u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCADCu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCB14u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCB1Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCB30u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCB50u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCB58u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCB60u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCB6Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCB80u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCB88u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCB98u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCBA0u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCBA8u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCBBCu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCBD4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCBE4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCC10u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCC20u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCC24u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCC28u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCC48u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCC50u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCC5Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCC60u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCC84u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCC88u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCC90u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCC9Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCCA8u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCCBCu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCCC4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCCD8u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCCE4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCCF4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCCF8u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCD00u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCD08u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCD0Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCD14u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCD18u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCD20u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCD28u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCD40u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCD48u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCD9Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCDA4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCDACu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCDBCu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCDC4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCDCCu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCDD4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCDE0u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCDF0u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCE0Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCE18u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCE1Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCE24u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCE2Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCE38u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCE3Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCE5Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCE6Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCE7Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCEB8u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCED4u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCF00u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCF08u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCF0Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCF14u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCF24u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCF28u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCF5Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCF68u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCF7Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCF88u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCF8Cu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCFB8u, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCFECu, &recomp_unit_0472, "recomp_unit_0472");
    runtime.register_function(0x089DCFF4u, &recomp_unit_0472, "recomp_unit_0472");
}
} // namespace psprecomp
