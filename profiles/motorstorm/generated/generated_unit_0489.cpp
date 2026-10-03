#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0489[1020] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 7, 8, 0, 9, 0, 0, 10,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 25, 26, 0, 27, 0, 0, 0, 28, 0, 29,
    0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0,
    0, 35, 36, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0,
    0, 0, 47, 0, 48, 0, 49, 50, 0, 51, 0, 0, 0, 52, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 0, 63, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 68, 69, 0, 70, 0,
    0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 0, 0, 75, 0, 76, 0, 77, 0, 0, 78, 79, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 82, 83, 0, 84, 0, 0,
    0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 89, 90, 0, 91, 0, 0, 0, 92, 0, 93, 94, 0, 0, 0, 0, 0, 0, 0, 95,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 100, 0, 0, 101, 102, 0,
    103, 0, 0, 104, 105, 0, 0, 0, 0, 0, 0, 0, 106, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0,
    0, 110, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 0, 118,
    0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 125, 126, 0, 0, 0, 127, 0, 128, 0, 0, 129, 0,
    0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 136, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0,
    140, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 143, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 0,
    0, 150, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 154, 0, 155, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 0,
    160, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 163, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 169,
    0, 0, 0, 0, 170, 0, 171, 0, 0, 172, 0, 0, 0, 0, 173, 0, 174, 0, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 0,
    0, 0, 179, 0, 180, 0, 181, 0, 0, 0, 0, 182, 0, 183, 0, 0, 184, 0, 0, 0, 0, 185, 0, 186, 0, 0, 187, 0, 0, 0, 0, 188,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 192, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0,
    0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 201, 0, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0,
    0, 207, 0, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    215, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0,
    221, 0, 222, 223, 0, 224, 225, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 230, 0, 231, 0, 0, 232, 0, 0, 0, 233, 0, 234, 0, 235, 0, 0, 236, 0, 0, 237, 238, 0, 239, 240, 0, 241, 242,
};
void recomp_unit_0489_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089ED000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0489[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089ED000;
    case 2u: goto L_089ED028;
    case 3u: goto L_089ED038;
    case 4u: goto L_089ED040;
    case 5u: goto L_089ED048;
    case 6u: goto L_089ED054;
    case 7u: goto L_089ED064;
    case 8u: goto L_089ED068;
    case 9u: goto L_089ED070;
    case 10u: goto L_089ED07C;
    case 11u: goto L_089ED080;
    case 12u: goto L_089ED0B0;
    case 13u: goto L_089ED0E0;
    case 14u: goto L_089ED110;
    case 15u: goto L_089ED11C;
    case 16u: goto L_089ED128;
    case 17u: goto L_089ED134;
    case 18u: goto L_089ED13C;
    case 19u: goto L_089ED144;
    case 20u: goto L_089ED170;
    case 21u: goto L_089ED178;
    case 22u: goto L_089ED1B0;
    case 23u: goto L_089ED1C0;
    case 24u: goto L_089ED1D0;
    case 25u: goto L_089ED1D8;
    case 26u: goto L_089ED1DC;
    case 27u: goto L_089ED1E4;
    case 28u: goto L_089ED1F4;
    case 29u: goto L_089ED1FC;
    case 30u: goto L_089ED208;
    case 31u: goto L_089ED210;
    case 32u: goto L_089ED22C;
    case 33u: goto L_089ED24C;
    case 34u: goto L_089ED278;
    case 35u: goto L_089ED284;
    case 36u: goto L_089ED288;
    case 37u: goto L_089ED28C;
    case 38u: goto L_089ED2A8;
    case 39u: goto L_089ED2D0;
    case 40u: goto L_089ED2DC;
    case 41u: goto L_089ED2F0;
    case 42u: goto L_089ED328;
    case 43u: goto L_089ED330;
    case 44u: goto L_089ED33C;
    case 45u: goto L_089ED370;
    case 46u: goto L_089ED378;
    case 47u: goto L_089ED388;
    case 48u: goto L_089ED390;
    case 49u: goto L_089ED398;
    case 50u: goto L_089ED39C;
    case 51u: goto L_089ED3A4;
    case 52u: goto L_089ED3B4;
    case 53u: goto L_089ED3BC;
    case 54u: goto L_089ED3C8;
    case 55u: goto L_089ED3D0;
    case 56u: goto L_089ED3F4;
    case 57u: goto L_089ED3FC;
    case 58u: goto L_089ED440;
    case 59u: goto L_089ED450;
    case 60u: goto L_089ED458;
    case 61u: goto L_089ED460;
    case 62u: goto L_089ED468;
    case 63u: goto L_089ED478;
    case 64u: goto L_089ED484;
    case 65u: goto L_089ED4A4;
    case 66u: goto L_089ED4DC;
    case 67u: goto L_089ED4E4;
    case 68u: goto L_089ED4EC;
    case 69u: goto L_089ED4F0;
    case 70u: goto L_089ED4F8;
    case 71u: goto L_089ED504;
    case 72u: goto L_089ED534;
    case 73u: goto L_089ED568;
    case 74u: goto L_089ED58C;
    case 75u: goto L_089ED59C;
    case 76u: goto L_089ED5A4;
    case 77u: goto L_089ED5AC;
    case 78u: goto L_089ED5B8;
    case 79u: goto L_089ED5BC;
    case 80u: goto L_089ED5C4;
    case 81u: goto L_089ED5DC;
    case 82u: goto L_089ED5E8;
    case 83u: goto L_089ED5EC;
    case 84u: goto L_089ED5F4;
    case 85u: goto L_089ED610;
    case 86u: goto L_089ED68C;
    case 87u: goto L_089ED69C;
    case 88u: goto L_089ED6AC;
    case 89u: goto L_089ED6B4;
    case 90u: goto L_089ED6B8;
    case 91u: goto L_089ED6C0;
    case 92u: goto L_089ED6D0;
    case 93u: goto L_089ED6D8;
    case 94u: goto L_089ED6DC;
    case 95u: goto L_089ED6FC;
    case 96u: goto L_089ED73C;
    case 97u: goto L_089ED74C;
    case 98u: goto L_089ED754;
    case 99u: goto L_089ED75C;
    case 100u: goto L_089ED768;
    case 101u: goto L_089ED774;
    case 102u: goto L_089ED778;
    case 103u: goto L_089ED780;
    case 104u: goto L_089ED78C;
    case 105u: goto L_089ED790;
    case 106u: goto L_089ED7B0;
    case 107u: goto L_089ED7B4;
    case 108u: goto L_089ED7D4;
    case 109u: goto L_089ED7F8;
    case 110u: goto L_089ED804;
    case 111u: goto L_089ED810;
    case 112u: goto L_089ED818;
    case 113u: goto L_089ED830;
    case 114u: goto L_089ED844;
    case 115u: goto L_089ED854;
    case 116u: goto L_089ED864;
    case 117u: goto L_089ED870;
    case 118u: goto L_089ED87C;
    case 119u: goto L_089ED888;
    case 120u: goto L_089ED894;
    case 121u: goto L_089ED8A0;
    case 122u: goto L_089ED8AC;
    case 123u: goto L_089ED8B8;
    case 124u: goto L_089ED8C4;
    case 125u: goto L_089ED8D0;
    case 126u: goto L_089ED8D4;
    case 127u: goto L_089ED8E4;
    case 128u: goto L_089ED8EC;
    case 129u: goto L_089ED8F8;
    case 130u: goto L_089ED904;
    case 131u: goto L_089ED910;
    case 132u: goto L_089ED91C;
    case 133u: goto L_089ED928;
    case 134u: goto L_089ED934;
    case 135u: goto L_089ED940;
    case 136u: goto L_089ED954;
    case 137u: goto L_089ED95C;
    case 138u: goto L_089ED968;
    case 139u: goto L_089ED974;
    case 140u: goto L_089ED980;
    case 141u: goto L_089ED98C;
    case 142u: goto L_089ED998;
    case 143u: goto L_089ED9AC;
    case 144u: goto L_089ED9B4;
    case 145u: goto L_089ED9C0;
    case 146u: goto L_089ED9CC;
    case 147u: goto L_089ED9D8;
    case 148u: goto L_089ED9E4;
    case 149u: goto L_089ED9F0;
    case 150u: goto L_089EDA04;
    case 151u: goto L_089EDA0C;
    case 152u: goto L_089EDA18;
    case 153u: goto L_089EDA24;
    case 154u: goto L_089EDA38;
    case 155u: goto L_089EDA40;
    case 156u: goto L_089EDA48;
    case 157u: goto L_089EDA58;
    case 158u: goto L_089EDA6C;
    case 159u: goto L_089EDA74;
    case 160u: goto L_089EDA80;
    case 161u: goto L_089EDA8C;
    case 162u: goto L_089EDA98;
    case 163u: goto L_089EDAAC;
    case 164u: goto L_089EDAB4;
    case 165u: goto L_089EDAC0;
    case 166u: goto L_089EDACC;
    case 167u: goto L_089EDAD8;
    case 168u: goto L_089EDAEC;
    case 169u: goto L_089EDAFC;
    case 170u: goto L_089EDB10;
    case 171u: goto L_089EDB18;
    case 172u: goto L_089EDB24;
    case 173u: goto L_089EDB38;
    case 174u: goto L_089EDB40;
    case 175u: goto L_089EDB4C;
    case 176u: goto L_089EDB60;
    case 177u: goto L_089EDB68;
    case 178u: goto L_089EDB74;
    case 179u: goto L_089EDB88;
    case 180u: goto L_089EDB90;
    case 181u: goto L_089EDB98;
    case 182u: goto L_089EDBAC;
    case 183u: goto L_089EDBB4;
    case 184u: goto L_089EDBC0;
    case 185u: goto L_089EDBD4;
    case 186u: goto L_089EDBDC;
    case 187u: goto L_089EDBE8;
    case 188u: goto L_089EDBFC;
    case 189u: goto L_089EDC24;
    case 190u: goto L_089EDC40;
    case 191u: goto L_089EDC4C;
    case 192u: goto L_089EDC54;
    case 193u: goto L_089EDC5C;
    case 194u: goto L_089EDC68;
    case 195u: goto L_089EDC70;
    case 196u: goto L_089EDC8C;
    case 197u: goto L_089EDC94;
    case 198u: goto L_089EDCB4;
    case 199u: goto L_089EDCE0;
    case 200u: goto L_089EDCE8;
    case 201u: goto L_089EDCF4;
    case 202u: goto L_089EDD10;
    case 203u: goto L_089EDD34;
    case 204u: goto L_089EDDC8;
    case 205u: goto L_089EDDD0;
    case 206u: goto L_089EDDF4;
    case 207u: goto L_089EDE04;
    case 208u: goto L_089EDE1C;
    case 209u: goto L_089EDE24;
    case 210u: goto L_089EDE2C;
    case 211u: goto L_089EDE34;
    case 212u: goto L_089EDE50;
    case 213u: goto L_089EDE58;
    case 214u: goto L_089EDE78;
    case 215u: goto L_089EDE80;
    case 216u: goto L_089EDE88;
    case 217u: goto L_089EDEB0;
    case 218u: goto L_089EDEC0;
    case 219u: goto L_089EDEE4;
    case 220u: goto L_089EDEF4;
    case 221u: goto L_089EDF00;
    case 222u: goto L_089EDF08;
    case 223u: goto L_089EDF0C;
    case 224u: goto L_089EDF14;
    case 225u: goto L_089EDF18;
    case 226u: goto L_089EDF20;
    case 227u: goto L_089EDF2C;
    case 228u: goto L_089EDF38;
    case 229u: goto L_089EDF44;
    case 230u: goto L_089EDF84;
    case 231u: goto L_089EDF8C;
    case 232u: goto L_089EDF98;
    case 233u: goto L_089EDFA8;
    case 234u: goto L_089EDFB0;
    case 235u: goto L_089EDFB8;
    case 236u: goto L_089EDFC4;
    case 237u: goto L_089EDFD0;
    case 238u: goto L_089EDFD4;
    case 239u: goto L_089EDFDC;
    case 240u: goto L_089EDFE0;
    case 241u: goto L_089EDFE8;
    case 242u: goto L_089EDFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089ED000:
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_gpr[31] = (0x089ED028u);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 64u, 0x089EB3CCu>(ctx, &aot_mem) && ctx.pc == 0x089ED028u) goto L_089ED028;
    return;
L_089ED028:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089ED038u);
    aot_gpr[20] = (aot_gpr[2] + 0u);
    ctx.pc = 0x08A5B06Cu;
    return;
L_089ED038:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089ED0B0;
      }
      goto L_089ED040;
    }
L_089ED040:
    if (aot_gpr[23] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_089ED068;
    }
    goto L_089ED048;
L_089ED048:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089ED064;
      }
      goto L_089ED054;
    }
L_089ED054:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089ED0E0;
      }
      goto L_089ED064;
    }
L_089ED064:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_089ED068;
L_089ED068:
    aot_gpr[31] = (0x089ED070u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089ED070:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089ED0B0;
      }
      goto L_089ED07C;
    }
L_089ED07C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(52)));
    goto L_089ED080;
L_089ED080:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED0B0:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED0E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE16(aot_gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(10)));
    aot_gpr[3] = (aot_gpr[30] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[3] != 0u) aot_gpr[2] = (aot_gpr[30]);
    aot_gpr[6] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089ED110u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089ED110u) goto L_089ED110;
    return;
L_089ED110:
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[31] = (0x089ED11Cu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 121u, 0x08A4364Cu>(ctx, &aot_mem) && ctx.pc == 0x089ED11Cu) goto L_089ED11C;
    return;
L_089ED11C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089ED128u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089ED128:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(52)));
        goto L_089ED080;
    }
    goto L_089ED134;
L_089ED134:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089ED0B0;
L_089ED13C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED144:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089ED208;
      }
      goto L_089ED170;
    }
L_089ED170:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[3] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089ED208;
      }
      goto L_089ED178;
    }
L_089ED178:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[29]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[31] = (0x089ED1B0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 64u, 0x089EB3CCu>(ctx, &aot_mem) && ctx.pc == 0x089ED1B0u) goto L_089ED1B0;
    return;
L_089ED1B0:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089ED1C0u);
    aot_gpr[18] = (aot_gpr[2] + 0u);
    ctx.pc = 0x08A5B06Cu;
    return;
L_089ED1C0:
    aot_gpr[3] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089ED208;
      }
      goto L_089ED1D0;
    }
L_089ED1D0:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089ED1DC;
      }
      goto L_089ED1D8;
    }
L_089ED1D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089ED1DC;
L_089ED1DC:
    aot_gpr[31] = (0x089ED1E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 152u, 0x08A437CCu>(ctx, &aot_mem) && ctx.pc == 0x089ED1E4u) goto L_089ED1E4;
    return;
L_089ED1E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089ED1F4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089ED1F4:
    if (aot_gpr[16] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[17]);
        goto L_089ED22C;
    }
    goto L_089ED1FC;
L_089ED1FC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(301));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[2] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089ED210;
      }
      goto L_089ED208;
    }
L_089ED208:
    aot_gpr[16] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089ED210;
L_089ED210:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED22C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED24C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_089ED284;
      }
      goto L_089ED278;
    }
L_089ED278:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(64)));
    if (aot_gpr[3] != 0u) {
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
        goto L_089ED2A8;
    }
    goto L_089ED284;
L_089ED284:
    aot_gpr[16] = (0u + 0u);
    goto L_089ED288;
L_089ED288:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    goto L_089ED28C;
L_089ED28C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED2A8:
    aot_gpr[4] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[2] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), 0u);
      if (branch_taken) {
          goto L_089ED3F4;
      }
      goto L_089ED2D0;
    }
L_089ED2D0:
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[7] = (0u + 0u);
    goto L_089ED2DC;
L_089ED2DC:
    aot_gpr[2] = (aot_gpr[4] << 3u);
    aot_gpr[6] = (aot_gpr[2] + aot_gpr[29]);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089ED328;
      }
      goto L_089ED2F0;
    }
L_089ED2F0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[4]);
    goto L_089ED328;
L_089ED328:
    { const bool branch_taken = aot_gpr[8] != aot_gpr[7];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_089ED2DC;
      }
      goto L_089ED330;
    }
L_089ED330:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[4] << 3u);
      if (branch_taken) {
          goto L_089ED370;
      }
      goto L_089ED33C;
    }
L_089ED33C:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[29]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[3] = (aot_gpr[3] << 3u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    goto L_089ED370;
L_089ED370:
    aot_gpr[31] = (0x089ED378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 64u, 0x089EB3CCu>(ctx, &aot_mem) && ctx.pc == 0x089ED378u) goto L_089ED378;
    return;
L_089ED378:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089ED388u);
    aot_gpr[18] = (aot_gpr[2] + 0u);
    ctx.pc = 0x08A5B06Cu;
    return;
L_089ED388:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089ED284;
      }
      goto L_089ED390;
    }
L_089ED390:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089ED39C;
      }
      goto L_089ED398;
    }
L_089ED398:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089ED39C;
L_089ED39C:
    aot_gpr[31] = (0x089ED3A4u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 152u, 0x08A437CCu>(ctx, &aot_mem) && ctx.pc == 0x089ED3A4u) goto L_089ED3A4;
    return;
L_089ED3A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089ED3B4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089ED3B4:
    if (aot_gpr[16] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
        goto L_089ED3D0;
    }
    goto L_089ED3BC;
L_089ED3BC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(301));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[2] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089ED28C;
      }
      goto L_089ED3C8;
    }
L_089ED3C8:
    aot_gpr[16] = (0u + 0u);
    goto L_089ED288;
L_089ED3D0:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED3F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_089ED330;
L_089ED3FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[31] = (0x089ED440u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 64u, 0x089EB3CCu>(ctx, &aot_mem) && ctx.pc == 0x089ED440u) goto L_089ED440;
    return;
L_089ED440:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089ED450u);
    aot_gpr[30] = (aot_gpr[2] + 0u);
    ctx.pc = 0x08A5B06Cu;
    return;
L_089ED450:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[20] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089ED534;
      }
      goto L_089ED458;
    }
L_089ED458:
    aot_gpr[19] = (aot_gpr[17] + 0u);
    aot_gpr[22] = (aot_gpr[23] + static_cast<std::uint32_t>(32));
    goto L_089ED460;
L_089ED460:
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (aot_gpr[20] + 0u);
      if (branch_taken) {
          goto L_089ED4EC;
      }
      goto L_089ED468;
    }
L_089ED468:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_089ED4EC;
      }
      goto L_089ED478;
    }
L_089ED478:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
        goto L_089ED4F0;
    }
    goto L_089ED484;
L_089ED484:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(10)));
    aot_gpr[16] = (aot_gpr[16] - aot_gpr[5]);
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[19] ? 1u : 0u);
    if (aot_gpr[2] == 0u) aot_gpr[16] = (aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[3] + aot_gpr[5]);
    aot_gpr[31] = (0x089ED4A4u);
    aot_gpr[6] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089ED4A4u) goto L_089ED4A4;
    return;
L_089ED4A4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[19] - aot_gpr[16]);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[16]);
    aot_gpr[3] = (aot_gpr[16] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(10)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[3]);
    aot_gpr[16] = (aot_gpr[16] & 65535u);
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[16]));
      if (branch_taken) {
          goto L_089ED4EC;
      }
      goto L_089ED4DC;
    }
L_089ED4DC:
    aot_gpr[31] = (0x089ED4E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 121u, 0x08A4364Cu>(ctx, &aot_mem) && ctx.pc == 0x089ED4E4u) goto L_089ED4E4;
    return;
L_089ED4E4:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ED460;
      }
      goto L_089ED4EC;
    }
L_089ED4EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    goto L_089ED4F0;
L_089ED4F0:
    aot_gpr[31] = (0x089ED4F8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089ED4F8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089ED534;
      }
      goto L_089ED504;
    }
L_089ED504:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED534:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED568:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089ED58Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 64u, 0x089EB3CCu>(ctx, &aot_mem) && ctx.pc == 0x089ED58Cu) goto L_089ED58C;
    return;
L_089ED58C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089ED59Cu);
    aot_gpr[18] = (aot_gpr[2] + 0u);
    ctx.pc = 0x08A5B06Cu;
    return;
L_089ED59C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089ED5F4;
      }
      goto L_089ED5A4;
    }
L_089ED5A4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_089ED5EC;
    }
    goto L_089ED5AC;
L_089ED5AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_089ED5EC;
    }
    goto L_089ED5B8;
L_089ED5B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089ED5BC;
L_089ED5BC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[5] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089ED5DC;
      }
      goto L_089ED5C4;
    }
L_089ED5C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(10)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_089ED5DC;
L_089ED5DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[5] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_089ED5BC;
    }
    goto L_089ED5E8;
L_089ED5E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_089ED5EC;
L_089ED5EC:
    aot_gpr[31] = (0x089ED5F4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089ED5F4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED610:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[17]);
    aot_gpr[17] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[29]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[31] = (0x089ED68Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 64u, 0x089EB3CCu>(ctx, &aot_mem) && ctx.pc == 0x089ED68Cu) goto L_089ED68C;
    return;
L_089ED68C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089ED69Cu);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    ctx.pc = 0x08A5B06Cu;
    return;
L_089ED69C:
    aot_gpr[3] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089ED6DC;
      }
      goto L_089ED6AC;
    }
L_089ED6AC:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089ED6B8;
      }
      goto L_089ED6B4;
    }
L_089ED6B4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    goto L_089ED6B8;
L_089ED6B8:
    aot_gpr[31] = (0x089ED6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 152u, 0x08A437CCu>(ctx, &aot_mem) && ctx.pc == 0x089ED6C0u) goto L_089ED6C0;
    return;
L_089ED6C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089ED6D0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089ED6D0:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089ED6DC;
      }
      goto L_089ED6D8;
    }
L_089ED6D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089ED6DC;
L_089ED6DC:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED6FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x089ED73Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 64u, 0x089EB3CCu>(ctx, &aot_mem) && ctx.pc == 0x089ED73Cu) goto L_089ED73C;
    return;
L_089ED73C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089ED74Cu);
    aot_gpr[19] = (aot_gpr[2] + 0u);
    ctx.pc = 0x08A5B06Cu;
    return;
L_089ED74C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089ED7B0;
      }
      goto L_089ED754;
    }
L_089ED754:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_089ED778;
    }
    goto L_089ED75C;
L_089ED75C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    if (aot_gpr[7] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_089ED778;
    }
    goto L_089ED768;
L_089ED768:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[7] + 0u);
      if (branch_taken) {
          goto L_089ED7D4;
      }
      goto L_089ED774;
    }
L_089ED774:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_089ED778;
L_089ED778:
    aot_gpr[31] = (0x089ED780u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089ED780:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089ED7B4;
      }
      goto L_089ED78C;
    }
L_089ED78C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    goto L_089ED790;
L_089ED790:
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
L_089ED7B0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089ED7B4;
L_089ED7B4:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED7D4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x089ED7F8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 121u, 0x08A4364Cu>(ctx, &aot_mem) && ctx.pc == 0x089ED7F8u) goto L_089ED7F8;
    return;
L_089ED7F8:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089ED804u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089ED804:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[3] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
        goto L_089ED790;
    }
    goto L_089ED810;
L_089ED810:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089ED7B4;
L_089ED818:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    aot_gpr[31] = (0x089ED830u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08A5A914u;
    return;
L_089ED830:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 123u, 0x089EB790u>(ctx, &aot_mem); return;
L_089ED844:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089ED854u);
    // nop
    ctx.pc = 0x08A5A944u;
    return;
L_089ED854:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(111));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53032u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089ED864;
    }
L_089ED864:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 112 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(91));
      if (branch_taken) {
          goto L_089ED8E4;
      }
      goto L_089ED870;
    }
L_089ED870:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(122));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53011u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089ED87C;
    }
L_089ED87C:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 123 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(116));
      if (branch_taken) {
          goto L_089ED954;
      }
      goto L_089ED888;
    }
L_089ED888:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(127));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53027u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089ED894;
    }
L_089ED894:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 128 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(124));
      if (branch_taken) {
          goto L_089EDA6C;
      }
      goto L_089ED8A0;
    }
L_089ED8A0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(131));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53039u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089ED8AC;
    }
L_089ED8AC:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 132 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(132));
      if (branch_taken) {
          goto L_089EDB60;
      }
      goto L_089ED8B8;
    }
L_089ED8B8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53028u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089ED8C4;
    }
L_089ED8C4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(129));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089EDAEC;
      }
      goto L_089ED8D0;
    }
L_089ED8D0:
    aot_gpr[4] = (0u | 53003u);
    goto L_089ED8D4;
L_089ED8D4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED8E4:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53034u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089ED8EC;
    }
L_089ED8EC:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 92 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(23));
      if (branch_taken) {
          goto L_089ED9AC;
      }
      goto L_089ED8F8;
    }
L_089ED8F8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(105));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53026u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089ED904;
    }
L_089ED904:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 106 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(95));
      if (branch_taken) {
          goto L_089EDA04;
      }
      goto L_089ED910;
    }
L_089ED910:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(108));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53009u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089ED91C;
    }
L_089ED91C:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 109 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(109));
      if (branch_taken) {
          goto L_089EDB10;
      }
      goto L_089ED928;
    }
L_089ED928:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(106));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53018u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089ED934;
    }
L_089ED934:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(107));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[4] = (0u | 53003u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089ED940;
    }
L_089ED940:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 53012u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED954:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53031u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089ED95C;
    }
L_089ED95C:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 117 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(113));
      if (branch_taken) {
          goto L_089EDAAC;
      }
      goto L_089ED968;
    }
L_089ED968:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(119));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53007u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089ED974;
    }
L_089ED974:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 120 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(120));
      if (branch_taken) {
          goto L_089EDBD4;
      }
      goto L_089ED980;
    }
L_089ED980:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(117));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53035u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089ED98C;
    }
L_089ED98C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(118));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[4] = (0u | 53003u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089ED998;
    }
L_089ED998:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 53036u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED9AC:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53043u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089ED9B4;
    }
L_089ED9B4:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 24 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EDA38;
      }
      goto L_089ED9C0;
    }
L_089ED9C0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(66));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53042u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089ED9CC;
    }
L_089ED9CC:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 67 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(81));
      if (branch_taken) {
          goto L_089EDB38;
      }
      goto L_089ED9D8;
    }
L_089ED9D8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(24));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53044u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089ED9E4;
    }
L_089ED9E4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[4] = (0u | 53003u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089ED9F0;
    }
L_089ED9F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 53046u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDA04:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53016u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089EDA0C;
    }
L_089EDA0C:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 96 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089EDBAC;
      }
      goto L_089EDA18;
    }
L_089EDA18:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(92));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[4] = (0u | 53003u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089EDA24;
    }
L_089EDA24:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 53033u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDA38:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EDAFC;
      }
      goto L_089EDA40;
    }
L_089EDA40:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(11));
      if (branch_taken) {
          goto L_089EDB88;
      }
      goto L_089EDA48;
    }
L_089EDA48:
    aot_gpr[2] = (32833u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 5u);
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[4] = (0u | 53003u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089EDA58;
    }
L_089EDA58:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 53048u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDA6C:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53015u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089EDA74;
    }
L_089EDA74:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 124 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u | 53014u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089EDA80;
    }
L_089EDA80:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(125));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53020u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089EDA8C;
    }
L_089EDA8C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(126));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[4] = (0u | 53003u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089EDA98;
    }
L_089EDA98:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 53023u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDAAC:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53024u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089EDAB4;
    }
L_089EDAB4:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 113 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u | 53019u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089EDAC0;
    }
L_089EDAC0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(114));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53022u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089EDACC;
    }
L_089EDACC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(115));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[4] = (0u | 53003u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089EDAD8;
    }
L_089EDAD8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 53021u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDAEC:
    aot_gpr[4] = (0u | 53030u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDAFC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 53006u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDB10:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53013u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089EDB18;
    }
L_089EDB18:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(110));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[4] = (0u | 53003u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089EDB24;
    }
L_089EDB24:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 53029u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDB38:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53047u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089EDB40;
    }
L_089EDB40:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(90));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[4] = (0u | 53003u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089EDB4C;
    }
L_089EDB4C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 53037u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDB60:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53040u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089EDB68;
    }
L_089EDB68:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(133));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[4] = (0u | 53003u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089EDB74;
    }
L_089EDB74:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 53041u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDB88:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(22));
      if (branch_taken) {
          goto L_089EDAFC;
      }
      goto L_089EDB90;
    }
L_089EDB90:
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[4] = (0u | 53003u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089EDB98;
    }
L_089EDB98:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 53045u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDBAC:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53017u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089EDBB4;
    }
L_089EDBB4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(104));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[4] = (0u | 53003u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089EDBC0;
    }
L_089EDBC0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 53025u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDBD4:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (0u | 53008u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089EDBDC;
    }
L_089EDBDC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(121));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[4] = (0u | 53003u);
      if (branch_taken) {
          goto L_089ED8D4;
      }
      goto L_089EDBE8;
    }
L_089EDBE8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 53010u);
    aot_gpr[2] = (aot_gpr[4] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDBFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x089EDC24u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    ctx.pc = 0x08A5A90Cu;
    return;
L_089EDC24:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (0u | 65535u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4105));
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    aot_gpr[4] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089EDC8C;
      }
      goto L_089EDC40;
    }
L_089EDC40:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089EDC4Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    ctx.pc = 0x08A5A8E4u;
    return;
L_089EDC4C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089EDCE0;
      }
      goto L_089EDC54;
    }
L_089EDC54:
    aot_gpr[31] = (0x089EDC5Cu);
    aot_gpr[17] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 110u, 0x089EB6ACu>(ctx, &aot_mem) && ctx.pc == 0x089EDC5Cu) goto L_089EDC5C;
    return;
L_089EDC5C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089EDCB4;
      }
      goto L_089EDC68;
    }
L_089EDC68:
    aot_gpr[31] = (0x089EDC70u);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(3));
    ctx.pc = 0x08A5A914u;
    return;
L_089EDC70:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDC8C:
    aot_gpr[31] = (0x089EDC94u);
    // nop
    goto L_089ED844;
L_089EDC94:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDCB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDCE0:
    aot_gpr[31] = (0x089EDCE8u);
    // nop
    goto L_089ED844;
L_089EDCE8:
    aot_gpr[17] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089EDCF4u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = 0x08A5A914u;
    return;
L_089EDCF4:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDD10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
      if (branch_taken) {
          goto L_089EDE34;
      }
      goto L_089EDD34;
    }
L_089EDD34:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 5u));
    aot_gpr[9] = (aot_gpr[9] << 2u);
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[10] = (aot_gpr[18] << (aot_gpr[4] & 31u));
    aot_gpr[7] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[10]);
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(48), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(16), aot_gpr[3]);
    aot_gpr[31] = (0x089EDDC8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.pc = 0x08A5A8FCu;
    return;
L_089EDDC8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089EDE50;
      }
      goto L_089EDDD0;
    }
L_089EDDD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 5u));
    aot_gpr[2] = (aot_gpr[2] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (aot_gpr[18] << (aot_gpr[4] & 31u));
    aot_gpr[3] = (aot_gpr[3] & aot_gpr[5]);
    if (aot_gpr[3] != 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
        goto L_089EDE04;
    }
    goto L_089EDDF4;
L_089EDDF4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] & aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EDE58;
      }
      goto L_089EDE04;
    }
L_089EDE04:
    aot_gpr[5] = (0u | 65535u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(4103));
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x089EDE1Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    ctx.pc = 0x08A5A8F4u;
    return;
L_089EDE1C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089EDE78;
      }
      goto L_089EDE24;
    }
L_089EDE24:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u | 53032u);
      if (branch_taken) {
          goto L_089EDE34;
      }
      goto L_089EDE2C;
    }
L_089EDE2C:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    goto L_089EDE34;
L_089EDE34:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDE50:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EDE78;
      }
      goto L_089EDE58;
    }
L_089EDE58:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDE78:
    aot_gpr[31] = (0x089EDE80u);
    // nop
    goto L_089ED844;
L_089EDE80:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_089EDE34;
L_089EDE88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    aot_gpr[21] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    aot_gpr[31] = (0x089EDEB0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0487_entry, 487u, 64u, 0x089EB3CCu>(ctx, &aot_mem) && ctx.pc == 0x089EDEB0u) goto L_089EDEB0;
    return;
L_089EDEB0:
    aot_gpr[19] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089EDEE4;
      }
      goto L_089EDEC0;
    }
L_089EDEC0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDEE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089EDEF4u);
    aot_gpr[6] = (0u + 0u);
    ctx.pc = 0x08A5B0ECu;
    return;
L_089EDEF4:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[20] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089EDF18;
      }
      goto L_089EDF00;
    }
L_089EDF00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    (void)rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 14u, 0x089EE0D0u>(ctx, &aot_mem); return;
L_089EDF08:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089EDF0C;
L_089EDF0C:
    if (aot_gpr[17] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_089EDFE0;
    }
    goto L_089EDF14;
L_089EDF14:
    aot_gpr[20] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    goto L_089EDF18;
L_089EDF18:
    if (aot_gpr[20] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089EDF0C;
    }
    goto L_089EDF20;
L_089EDF20:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[16] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089EDF0C;
    }
    goto L_089EDF2C;
L_089EDF2C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089EDF0C;
    }
    goto L_089EDF38;
L_089EDF38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089EDF44u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EDF44:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[3] >> 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[2]));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[3]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (((aot_gpr[2] & 0x00FF00FFu) << 8u) | ((aot_gpr[2] & 0xFF00FF00u) >> 8u));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(10)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 10u, 0x089EE0ACu>(ctx, &aot_mem); return;
      }
      goto L_089EDF84;
    }
L_089EDF84:
    if (aot_gpr[3] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        (void)rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 6u, 0x089EE084u>(ctx, &aot_mem); return;
    }
    goto L_089EDF8C;
L_089EDF8C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 2u, 0x089EE010u>(ctx, &aot_mem); return;
      }
      goto L_089EDF98;
    }
L_089EDF98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089EDFA8u);
    aot_gpr[6] = (0u + 0u);
    ctx.pc = 0x08A5B0ECu;
    return;
L_089EDFA8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089EDF08;
      }
      goto L_089EDFB0;
    }
L_089EDFB0:
    aot_gpr[31] = (0x089EDFB8u);
    aot_gpr[4] = (aot_gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 121u, 0x08A4364Cu>(ctx, &aot_mem) && ctx.pc == 0x089EDFB8u) goto L_089EDFB8;
    return;
L_089EDFB8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    if (aot_gpr[16] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089EDFD4;
    }
    goto L_089EDFC4;
L_089EDFC4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089EDF38;
      }
      goto L_089EDFD0;
    }
L_089EDFD0:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089EDFD4;
L_089EDFD4:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[21] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089EDF14;
      }
      goto L_089EDFDC;
    }
L_089EDFDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_089EDFE0;
L_089EDFE0:
    aot_gpr[31] = (0x089EDFE8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08A5B09Cu;
    return;
L_089EDFE8:
    aot_gpr[2] = (aot_gpr[21] + 0u);
    goto L_089EDFEC;
L_089EDFEC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.pc = 0x089EE000u; return;
}

void recomp_unit_0489(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0489_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_489(Runtime &runtime) {
    runtime.register_generated_unit(489u, 0x089ED000u, 4096u, &recomp_unit_0489, &recomp_unit_0489_entry);
    runtime.register_function(0x089ED000u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED028u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED038u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED040u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED048u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED054u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED064u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED068u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED070u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED07Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED080u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED0B0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED0E0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED110u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED11Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED128u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED134u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED13Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED144u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED170u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED178u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED1B0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED1C0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED1D0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED1D8u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED1DCu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED1E4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED1F4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED1FCu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED208u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED210u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED22Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED24Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED278u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED284u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED288u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED28Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED2A8u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED2D0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED2DCu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED2F0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED328u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED330u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED33Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED370u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED378u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED388u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED390u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED398u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED39Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED3A4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED3B4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED3BCu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED3C8u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED3D0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED3F4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED3FCu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED440u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED450u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED458u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED460u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED468u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED478u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED484u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED4A4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED4DCu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED4E4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED4ECu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED4F0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED4F8u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED504u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED534u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED568u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED58Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED59Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED5A4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED5ACu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED5B8u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED5BCu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED5C4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED5DCu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED5E8u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED5ECu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED5F4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED610u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED68Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED69Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED6ACu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED6B4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED6B8u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED6C0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED6D0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED6D8u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED6DCu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED6FCu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED73Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED74Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED754u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED75Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED768u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED774u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED778u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED780u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED78Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED790u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED7B0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED7B4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED7D4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED7F8u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED804u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED810u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED818u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED830u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED844u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED854u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED864u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED870u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED87Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED888u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED894u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED8A0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED8ACu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED8B8u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED8C4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED8D0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED8D4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED8E4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED8ECu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED8F8u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED904u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED910u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED91Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED928u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED934u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED940u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED954u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED95Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED968u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED974u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED980u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED98Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED998u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED9ACu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED9B4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED9C0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED9CCu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED9D8u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED9E4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089ED9F0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDA04u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDA0Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDA18u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDA24u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDA38u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDA40u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDA48u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDA58u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDA6Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDA74u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDA80u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDA8Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDA98u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDAACu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDAB4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDAC0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDACCu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDAD8u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDAECu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDAFCu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDB10u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDB18u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDB24u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDB38u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDB40u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDB4Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDB60u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDB68u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDB74u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDB88u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDB90u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDB98u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDBACu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDBB4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDBC0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDBD4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDBDCu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDBE8u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDBFCu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDC24u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDC40u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDC4Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDC54u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDC5Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDC68u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDC70u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDC8Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDC94u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDCB4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDCE0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDCE8u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDCF4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDD10u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDD34u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDDC8u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDDD0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDDF4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDE04u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDE1Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDE24u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDE2Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDE34u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDE50u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDE58u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDE78u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDE80u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDE88u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDEB0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDEC0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDEE4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDEF4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDF00u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDF08u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDF0Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDF14u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDF18u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDF20u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDF2Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDF38u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDF44u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDF84u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDF8Cu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDF98u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDFA8u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDFB0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDFB8u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDFC4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDFD0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDFD4u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDFDCu, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDFE0u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDFE8u, &recomp_unit_0489, "recomp_unit_0489");
    runtime.register_function(0x089EDFECu, &recomp_unit_0489, "recomp_unit_0489");
}
} // namespace psprecomp
