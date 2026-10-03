#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0508[1019] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 0, 0, 8, 0, 9, 0,
    10, 0, 0, 11, 0, 0, 12, 0, 13, 0, 14, 0, 0, 15, 0, 0, 16, 0, 17, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0,
    21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0,
    0, 27, 0, 28, 0, 0, 29, 0, 0, 30, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42,
    0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0, 46, 0, 47, 0, 0, 48, 0, 0, 0, 49, 50, 0, 0, 0, 0, 0, 0,
    0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 55, 0, 0, 56, 0, 57, 0, 0, 58, 0,
    59, 0, 0, 60, 0, 61, 0, 0, 62, 0, 63, 0, 0, 64, 0, 65, 0, 0, 66, 0, 67, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0,
    70, 0, 71, 0, 0, 72, 0, 73, 0, 0, 74, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 79, 0, 80, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 89, 0, 90,
    0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 94, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 99,
    0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106,
    0, 0, 107, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 112, 0, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 122, 0, 123, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 133, 0, 0, 134,
    0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0,
    140, 0, 0, 141, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0,
    0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 154, 0, 0, 155, 0, 156, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 161, 0, 162, 0, 163, 0, 0, 164, 0,
    165, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 171, 0, 172, 0, 0, 173, 0,
    0, 0, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0,
    180, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0,
    188, 0, 189, 0, 190, 0, 0, 0, 191, 192, 193, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0,
    0, 0, 198, 0, 199, 0, 0, 200, 0, 201, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 206, 207, 0, 0, 208, 0,
    209, 0, 210, 0, 0, 0, 211, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215,
    0, 216, 0, 0, 217, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 223,
    0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0,
    231, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 240, 0, 241,
};
void recomp_unit_0508_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A00000u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0508[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A00000;
    case 2u: goto L_08A00008;
    case 3u: goto L_08A00040;
    case 4u: goto L_08A00048;
    case 5u: goto L_08A00050;
    case 6u: goto L_08A00058;
    case 7u: goto L_08A00060;
    case 8u: goto L_08A00070;
    case 9u: goto L_08A00078;
    case 10u: goto L_08A00080;
    case 11u: goto L_08A0008C;
    case 12u: goto L_08A00098;
    case 13u: goto L_08A000A0;
    case 14u: goto L_08A000A8;
    case 15u: goto L_08A000B4;
    case 16u: goto L_08A000C0;
    case 17u: goto L_08A000C8;
    case 18u: goto L_08A000D4;
    case 19u: goto L_08A000DC;
    case 20u: goto L_08A000F8;
    case 21u: goto L_08A00100;
    case 22u: goto L_08A0011C;
    case 23u: goto L_08A00130;
    case 24u: goto L_08A00150;
    case 25u: goto L_08A00158;
    case 26u: goto L_08A00178;
    case 27u: goto L_08A00184;
    case 28u: goto L_08A0018C;
    case 29u: goto L_08A00198;
    case 30u: goto L_08A001A4;
    case 31u: goto L_08A001AC;
    case 32u: goto L_08A001B8;
    case 33u: goto L_08A001C4;
    case 34u: goto L_08A001FC;
    case 35u: goto L_08A00224;
    case 36u: goto L_08A00258;
    case 37u: goto L_08A00280;
    case 38u: goto L_08A002A4;
    case 39u: goto L_08A002A8;
    case 40u: goto L_08A002B4;
    case 41u: goto L_08A002E8;
    case 42u: goto L_08A002FC;
    case 43u: goto L_08A0031C;
    case 44u: goto L_08A00324;
    case 45u: goto L_08A00334;
    case 46u: goto L_08A0033C;
    case 47u: goto L_08A00344;
    case 48u: goto L_08A00350;
    case 49u: goto L_08A00360;
    case 50u: goto L_08A00364;
    case 51u: goto L_08A00384;
    case 52u: goto L_08A003A0;
    case 53u: goto L_08A003BC;
    case 54u: goto L_08A003D0;
    case 55u: goto L_08A003D8;
    case 56u: goto L_08A003E4;
    case 57u: goto L_08A003EC;
    case 58u: goto L_08A003F8;
    case 59u: goto L_08A00400;
    case 60u: goto L_08A0040C;
    case 61u: goto L_08A00414;
    case 62u: goto L_08A00420;
    case 63u: goto L_08A00428;
    case 64u: goto L_08A00434;
    case 65u: goto L_08A0043C;
    case 66u: goto L_08A00448;
    case 67u: goto L_08A00450;
    case 68u: goto L_08A0045C;
    case 69u: goto L_08A0046C;
    case 70u: goto L_08A00480;
    case 71u: goto L_08A00488;
    case 72u: goto L_08A00494;
    case 73u: goto L_08A0049C;
    case 74u: goto L_08A004A8;
    case 75u: goto L_08A004B0;
    case 76u: goto L_08A004BC;
    case 77u: goto L_08A004D8;
    case 78u: goto L_08A004E0;
    case 79u: goto L_08A004EC;
    case 80u: goto L_08A004F4;
    case 81u: goto L_08A00500;
    case 82u: goto L_08A0051C;
    case 83u: goto L_08A00524;
    case 84u: goto L_08A00530;
    case 85u: goto L_08A00538;
    case 86u: goto L_08A00544;
    case 87u: goto L_08A00560;
    case 88u: goto L_08A00568;
    case 89u: goto L_08A00574;
    case 90u: goto L_08A0057C;
    case 91u: goto L_08A00588;
    case 92u: goto L_08A005A4;
    case 93u: goto L_08A005AC;
    case 94u: goto L_08A005B8;
    case 95u: goto L_08A005C0;
    case 96u: goto L_08A005CC;
    case 97u: goto L_08A005E8;
    case 98u: goto L_08A005F0;
    case 99u: goto L_08A005FC;
    case 100u: goto L_08A00604;
    case 101u: goto L_08A00610;
    case 102u: goto L_08A0062C;
    case 103u: goto L_08A0063C;
    case 104u: goto L_08A00660;
    case 105u: goto L_08A00670;
    case 106u: goto L_08A0067C;
    case 107u: goto L_08A00688;
    case 108u: goto L_08A00690;
    case 109u: goto L_08A006A0;
    case 110u: goto L_08A006AC;
    case 111u: goto L_08A006B4;
    case 112u: goto L_08A006C0;
    case 113u: goto L_08A006CC;
    case 114u: goto L_08A006D4;
    case 115u: goto L_08A006DC;
    case 116u: goto L_08A006F4;
    case 117u: goto L_08A00710;
    case 118u: goto L_08A0073C;
    case 119u: goto L_08A0074C;
    case 120u: goto L_08A00758;
    case 121u: goto L_08A00768;
    case 122u: goto L_08A00770;
    case 123u: goto L_08A00778;
    case 124u: goto L_08A00804;
    case 125u: goto L_08A00818;
    case 126u: goto L_08A0082C;
    case 127u: goto L_08A00840;
    case 128u: goto L_08A00880;
    case 129u: goto L_08A008A4;
    case 130u: goto L_08A008CC;
    case 131u: goto L_08A008DC;
    case 132u: goto L_08A008E8;
    case 133u: goto L_08A008F0;
    case 134u: goto L_08A008FC;
    case 135u: goto L_08A00904;
    case 136u: goto L_08A00914;
    case 137u: goto L_08A00934;
    case 138u: goto L_08A00954;
    case 139u: goto L_08A00978;
    case 140u: goto L_08A00980;
    case 141u: goto L_08A0098C;
    case 142u: goto L_08A00994;
    case 143u: goto L_08A009A0;
    case 144u: goto L_08A009B8;
    case 145u: goto L_08A009C4;
    case 146u: goto L_08A009CC;
    case 147u: goto L_08A009D4;
    case 148u: goto L_08A009F4;
    case 149u: goto L_08A00A14;
    case 150u: goto L_08A00A48;
    case 151u: goto L_08A00A50;
    case 152u: goto L_08A00A58;
    case 153u: goto L_08A00A80;
    case 154u: goto L_08A00A88;
    case 155u: goto L_08A00A94;
    case 156u: goto L_08A00A9C;
    case 157u: goto L_08A00AA4;
    case 158u: goto L_08A00AB0;
    case 159u: goto L_08A00AC8;
    case 160u: goto L_08A00AD4;
    case 161u: goto L_08A00ADC;
    case 162u: goto L_08A00AE4;
    case 163u: goto L_08A00AEC;
    case 164u: goto L_08A00AF8;
    case 165u: goto L_08A00B00;
    case 166u: goto L_08A00B04;
    case 167u: goto L_08A00B0C;
    case 168u: goto L_08A00B34;
    case 169u: goto L_08A00B50;
    case 170u: goto L_08A00B58;
    case 171u: goto L_08A00B64;
    case 172u: goto L_08A00B6C;
    case 173u: goto L_08A00B78;
    case 174u: goto L_08A00B90;
    case 175u: goto L_08A00B98;
    case 176u: goto L_08A00BA0;
    case 177u: goto L_08A00BBC;
    case 178u: goto L_08A00BD8;
    case 179u: goto L_08A00BEC;
    case 180u: goto L_08A00C00;
    case 181u: goto L_08A00C14;
    case 182u: goto L_08A00C24;
    case 183u: goto L_08A00C34;
    case 184u: goto L_08A00C3C;
    case 185u: goto L_08A00C48;
    case 186u: goto L_08A00C70;
    case 187u: goto L_08A00C78;
    case 188u: goto L_08A00C80;
    case 189u: goto L_08A00C88;
    case 190u: goto L_08A00C90;
    case 191u: goto L_08A00CA0;
    case 192u: goto L_08A00CA4;
    case 193u: goto L_08A00CA8;
    case 194u: goto L_08A00CB0;
    case 195u: goto L_08A00CC4;
    case 196u: goto L_08A00CE4;
    case 197u: goto L_08A00CEC;
    case 198u: goto L_08A00D08;
    case 199u: goto L_08A00D10;
    case 200u: goto L_08A00D1C;
    case 201u: goto L_08A00D24;
    case 202u: goto L_08A00D34;
    case 203u: goto L_08A00D3C;
    case 204u: goto L_08A00D44;
    case 205u: goto L_08A00D54;
    case 206u: goto L_08A00D68;
    case 207u: goto L_08A00D6C;
    case 208u: goto L_08A00D78;
    case 209u: goto L_08A00D80;
    case 210u: goto L_08A00D88;
    case 211u: goto L_08A00D98;
    case 212u: goto L_08A00D9C;
    case 213u: goto L_08A00DA8;
    case 214u: goto L_08A00DC4;
    case 215u: goto L_08A00DFC;
    case 216u: goto L_08A00E04;
    case 217u: goto L_08A00E10;
    case 218u: goto L_08A00E18;
    case 219u: goto L_08A00E2C;
    case 220u: goto L_08A00E44;
    case 221u: goto L_08A00E5C;
    case 222u: goto L_08A00E64;
    case 223u: goto L_08A00E7C;
    case 224u: goto L_08A00E90;
    case 225u: goto L_08A00E9C;
    case 226u: goto L_08A00EB0;
    case 227u: goto L_08A00EB8;
    case 228u: goto L_08A00ED4;
    case 229u: goto L_08A00EE4;
    case 230u: goto L_08A00EF8;
    case 231u: goto L_08A00F00;
    case 232u: goto L_08A00F0C;
    case 233u: goto L_08A00F1C;
    case 234u: goto L_08A00F3C;
    case 235u: goto L_08A00F74;
    case 236u: goto L_08A00F9C;
    case 237u: goto L_08A00FA4;
    case 238u: goto L_08A00FD0;
    case 239u: goto L_08A00FD8;
    case 240u: goto L_08A00FE0;
    case 241u: goto L_08A00FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A00000:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A001A4;
      }
      goto L_08A00008;
    }
L_08A00008:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1852)));
    aot_gpr[21] = (1u << 16u);
    aot_gpr[21] = (aot_gpr[19] + aot_gpr[21]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-27648)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[22] << 5u);
    aot_gpr[5] = (0u + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(516));
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(1184));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[4]);
    goto L_08A00040;
L_08A00040:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[22]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A001A4;
      }
      goto L_08A00048;
    }
L_08A00048:
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[17] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A00224;
      }
      goto L_08A00050;
    }
L_08A00050:
    aot_gpr[31] = (0x08A00058u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 121u, 0x089F06BCu>(ctx, &aot_mem) && ctx.pc == 0x08A00058u) goto L_08A00058;
    return;
L_08A00058:
    aot_gpr[31] = (0x08A00060u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 121u, 0x089F06BCu>(ctx, &aot_mem) && ctx.pc == 0x08A00060u) goto L_08A00060;
    return;
L_08A00060:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08A00070u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 136u, 0x089F07B8u>(ctx, &aot_mem) && ctx.pc == 0x08A00070u) goto L_08A00070;
    return;
L_08A00070:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[30] | 0u);
      if (branch_taken) {
          goto L_08A00184;
      }
      goto L_08A00078;
    }
L_08A00078:
    aot_gpr[31] = (0x08A00080u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 236u, 0x089F0D34u>(ctx, &aot_mem) && ctx.pc == 0x08A00080u) goto L_08A00080;
    return;
L_08A00080:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0008Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 236u, 0x089F0D34u>(ctx, &aot_mem) && ctx.pc == 0x08A0008Cu) goto L_08A0008C;
    return;
L_08A0008C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A00098u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00098u) goto L_08A00098;
    return;
L_08A00098:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[30] | 0u);
      if (branch_taken) {
          goto L_08A00184;
      }
      goto L_08A000A0;
    }
L_08A000A0:
    aot_gpr[31] = (0x08A000A8u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 239u, 0x089F0D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A000A8u) goto L_08A000A8;
    return;
L_08A000A8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A000B4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 239u, 0x089F0D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A000B4u) goto L_08A000B4;
    return;
L_08A000B4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A000C0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A000C0u) goto L_08A000C0;
    return;
L_08A000C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[30] | 0u);
      if (branch_taken) {
          goto L_08A00184;
      }
      goto L_08A000C8;
    }
L_08A000C8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A000D4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x08A000D4u) goto L_08A000D4;
    return;
L_08A000D4:
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[19]);
    goto L_08A000DC;
L_08A000DC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(668))))));
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[20]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(668), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 257 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[19]);
      if (branch_taken) {
          goto L_08A000DC;
      }
      goto L_08A000F8;
    }
L_08A000F8:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[19]);
    goto L_08A00100;
L_08A00100:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(925))))));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(925), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 257 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[19]);
      if (branch_taken) {
          goto L_08A00100;
      }
      goto L_08A0011C;
    }
L_08A0011C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-27648)));
    aot_gpr[18] = (aot_gpr[22] | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[22] << 5u);
      if (branch_taken) {
          goto L_08A00178;
      }
      goto L_08A00130;
    }
L_08A00130:
    aot_gpr[5] = (0u + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1852)));
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    goto L_08A00150;
L_08A00150:
    aot_gpr[31] = (0x08A00158u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 134u, 0x089F0784u>(ctx, &aot_mem) && ctx.pc == 0x08A00158u) goto L_08A00158;
    return;
L_08A00158:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(668), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(925), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-27648)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1184));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1184));
      if (branch_taken) {
          goto L_08A00150;
      }
      goto L_08A00178;
    }
L_08A00178:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-27648), aot_gpr[22]);
    aot_gpr[16] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    goto L_08A00184;
L_08A00184:
    aot_gpr[31] = (0x08A0018Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A0018Cu) goto L_08A0018C;
    return;
L_08A0018C:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x08A00198u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A00198u) goto L_08A00198;
    return;
L_08A00198:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1184));
      if (branch_taken) {
          goto L_08A00040;
      }
      goto L_08A001A4;
    }
L_08A001A4:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00224;
      }
      goto L_08A001AC;
    }
L_08A001AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1852)));
    aot_gpr[31] = (0x08A001B8u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    goto L_08A00258;
L_08A001B8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00224;
      }
      goto L_08A001C4;
    }
L_08A001C4:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1852)));
    aot_gpr[4] = (1u << 16u);
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-27648)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[4] << 5u);
    aot_gpr[6] = (0u + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-27648), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x08A001FCu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 134u, 0x089F0784u>(ctx, &aot_mem) && ctx.pc == 0x08A001FCu) goto L_08A001FC;
    return;
L_08A001FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-27648)));
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[5] = (0u + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(668), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(925), static_cast<std::uint8_t>(0u));
    goto L_08A00224;
L_08A00224:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1856)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1860)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1864)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1868)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1872)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1876)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1880)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1884)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1888)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1892)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1904));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00258:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (1u << 16u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-27648)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[2] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A002A8;
      }
      goto L_08A00280;
    }
L_08A00280:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[6] << 5u);
    aot_gpr[7] = (0u + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] << 3u);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[31] = (0x08A002A4u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 182u, 0x089FFB70u>(ctx, &aot_mem) && ctx.pc == 0x08A002A4u) goto L_08A002A4;
    return;
L_08A002A4:
    aot_gpr[2] = (0u | 1u);
    goto L_08A002A8;
L_08A002A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A002B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A00364;
      }
      goto L_08A002E8;
    }
L_08A002E8:
    aot_gpr[4] = (0u | 37888u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A002FCu);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A002FCu) goto L_08A002FC;
    return;
L_08A002FC:
    aot_gpr[19] = (1u << 16u);
    aot_gpr[19] = (aot_gpr[18] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-27648)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A00360;
      }
      goto L_08A0031C;
    }
L_08A0031C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[4]);
    goto L_08A00324;
L_08A00324:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A00334u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 188u, 0x089FFBECu>(ctx, &aot_mem) && ctx.pc == 0x08A00334u) goto L_08A00334;
    return;
L_08A00334:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-27648)));
        goto L_08A00350;
    }
    goto L_08A0033C;
L_08A0033C:
    aot_gpr[31] = (0x08A00344u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 186u, 0x089FFBC8u>(ctx, &aot_mem) && ctx.pc == 0x08A00344u) goto L_08A00344;
    return;
L_08A00344:
    aot_gpr[16] = (aot_gpr[16] - aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-27648)));
    goto L_08A00350;
L_08A00350:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1184));
      if (branch_taken) {
          goto L_08A00324;
      }
      goto L_08A00360;
    }
L_08A00360:
    aot_gpr[2] = (0u | 1u);
    goto L_08A00364;
L_08A00364:
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
L_08A00384:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (0u | 37888u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A003A0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A003A0u) goto L_08A003A0;
    return;
L_08A003A0:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-27648), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A003BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A003D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A003D0u) goto L_08A003D0;
    return;
L_08A003D0:
    aot_gpr[31] = (0x08A003D8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 10u, 0x089FF0ACu>(ctx, &aot_mem) && ctx.pc == 0x08A003D8u) goto L_08A003D8;
    return;
L_08A003D8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0045C;
      }
      goto L_08A003E4;
    }
L_08A003E4:
    aot_gpr[31] = (0x08A003ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 245u, 0x08A03EF4u>(ctx, &aot_mem) && ctx.pc == 0x08A003ECu) goto L_08A003EC;
    return;
L_08A003EC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A003F8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 54u, 0x08A46310u>(ctx, &aot_mem) && ctx.pc == 0x08A003F8u) goto L_08A003F8;
    return;
L_08A003F8:
    aot_gpr[31] = (0x08A00400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0512_entry, 512u, 83u, 0x08A04440u>(ctx, &aot_mem) && ctx.pc == 0x08A00400u) goto L_08A00400;
    return;
L_08A00400:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0040Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 54u, 0x08A46310u>(ctx, &aot_mem) && ctx.pc == 0x08A0040Cu) goto L_08A0040C;
    return;
L_08A0040C:
    aot_gpr[31] = (0x08A00414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0510_entry, 510u, 205u, 0x08A02EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A00414u) goto L_08A00414;
    return;
L_08A00414:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A00420u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 54u, 0x08A46310u>(ctx, &aot_mem) && ctx.pc == 0x08A00420u) goto L_08A00420;
    return;
L_08A00420:
    aot_gpr[31] = (0x08A00428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 69u, 0x08A06474u>(ctx, &aot_mem) && ctx.pc == 0x08A00428u) goto L_08A00428;
    return;
L_08A00428:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A00434u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 54u, 0x08A46310u>(ctx, &aot_mem) && ctx.pc == 0x08A00434u) goto L_08A00434;
    return;
L_08A00434:
    aot_gpr[31] = (0x08A0043Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0510_entry, 510u, 65u, 0x08A02550u>(ctx, &aot_mem) && ctx.pc == 0x08A0043Cu) goto L_08A0043C;
    return;
L_08A0043C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A00448u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 54u, 0x08A46310u>(ctx, &aot_mem) && ctx.pc == 0x08A00448u) goto L_08A00448;
    return;
L_08A00448:
    aot_gpr[31] = (0x08A00450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0510_entry, 510u, 110u, 0x08A02868u>(ctx, &aot_mem) && ctx.pc == 0x08A00450u) goto L_08A00450;
    return;
L_08A00450:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A0045Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 54u, 0x08A46310u>(ctx, &aot_mem) && ctx.pc == 0x08A0045Cu) goto L_08A0045C;
    return;
L_08A0045C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0046C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A00480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A00480u) goto L_08A00480;
    return;
L_08A00480:
    aot_gpr[31] = (0x08A00488u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 10u, 0x089FF0ACu>(ctx, &aot_mem) && ctx.pc == 0x08A00488u) goto L_08A00488;
    return;
L_08A00488:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0062C;
      }
      goto L_08A00494;
    }
L_08A00494:
    aot_gpr[31] = (0x08A0049Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 245u, 0x08A03EF4u>(ctx, &aot_mem) && ctx.pc == 0x08A0049Cu) goto L_08A0049C;
    return;
L_08A0049C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A004A8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 61u, 0x08A4637Cu>(ctx, &aot_mem) && ctx.pc == 0x08A004A8u) goto L_08A004A8;
    return;
L_08A004A8:
    aot_gpr[31] = (0x08A004B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 245u, 0x08A03EF4u>(ctx, &aot_mem) && ctx.pc == 0x08A004B0u) goto L_08A004B0;
    return;
L_08A004B0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A004D8;
      }
      goto L_08A004BC;
    }
L_08A004BC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A004D8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A004D8u) goto L_08A004D8;
    return;
L_08A004D8:
    aot_gpr[31] = (0x08A004E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0512_entry, 512u, 83u, 0x08A04440u>(ctx, &aot_mem) && ctx.pc == 0x08A004E0u) goto L_08A004E0;
    return;
L_08A004E0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A004ECu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 61u, 0x08A4637Cu>(ctx, &aot_mem) && ctx.pc == 0x08A004ECu) goto L_08A004EC;
    return;
L_08A004EC:
    aot_gpr[31] = (0x08A004F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0512_entry, 512u, 83u, 0x08A04440u>(ctx, &aot_mem) && ctx.pc == 0x08A004F4u) goto L_08A004F4;
    return;
L_08A004F4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0051C;
      }
      goto L_08A00500;
    }
L_08A00500:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0051Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0051Cu) goto L_08A0051C;
    return;
L_08A0051C:
    aot_gpr[31] = (0x08A00524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0510_entry, 510u, 205u, 0x08A02EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A00524u) goto L_08A00524;
    return;
L_08A00524:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A00530u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 61u, 0x08A4637Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00530u) goto L_08A00530;
    return;
L_08A00530:
    aot_gpr[31] = (0x08A00538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0510_entry, 510u, 205u, 0x08A02EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A00538u) goto L_08A00538;
    return;
L_08A00538:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00560;
      }
      goto L_08A00544;
    }
L_08A00544:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A00560u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A00560u) goto L_08A00560;
    return;
L_08A00560:
    aot_gpr[31] = (0x08A00568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 69u, 0x08A06474u>(ctx, &aot_mem) && ctx.pc == 0x08A00568u) goto L_08A00568;
    return;
L_08A00568:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A00574u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 61u, 0x08A4637Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00574u) goto L_08A00574;
    return;
L_08A00574:
    aot_gpr[31] = (0x08A0057Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 69u, 0x08A06474u>(ctx, &aot_mem) && ctx.pc == 0x08A0057Cu) goto L_08A0057C;
    return;
L_08A0057C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A005A4;
      }
      goto L_08A00588;
    }
L_08A00588:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A005A4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A005A4u) goto L_08A005A4;
    return;
L_08A005A4:
    aot_gpr[31] = (0x08A005ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0510_entry, 510u, 65u, 0x08A02550u>(ctx, &aot_mem) && ctx.pc == 0x08A005ACu) goto L_08A005AC;
    return;
L_08A005AC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A005B8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 61u, 0x08A4637Cu>(ctx, &aot_mem) && ctx.pc == 0x08A005B8u) goto L_08A005B8;
    return;
L_08A005B8:
    aot_gpr[31] = (0x08A005C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0510_entry, 510u, 65u, 0x08A02550u>(ctx, &aot_mem) && ctx.pc == 0x08A005C0u) goto L_08A005C0;
    return;
L_08A005C0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A005E8;
      }
      goto L_08A005CC;
    }
L_08A005CC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A005E8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A005E8u) goto L_08A005E8;
    return;
L_08A005E8:
    aot_gpr[31] = (0x08A005F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0510_entry, 510u, 110u, 0x08A02868u>(ctx, &aot_mem) && ctx.pc == 0x08A005F0u) goto L_08A005F0;
    return;
L_08A005F0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A005FCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 61u, 0x08A4637Cu>(ctx, &aot_mem) && ctx.pc == 0x08A005FCu) goto L_08A005FC;
    return;
L_08A005FC:
    aot_gpr[31] = (0x08A00604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0510_entry, 510u, 110u, 0x08A02868u>(ctx, &aot_mem) && ctx.pc == 0x08A00604u) goto L_08A00604;
    return;
L_08A00604:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0062C;
      }
      goto L_08A00610;
    }
L_08A00610:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A0062Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0062Cu) goto L_08A0062C;
    return;
L_08A0062C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0063C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A00660u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A00660u) goto L_08A00660;
    return;
L_08A00660:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A00670u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A00670u) goto L_08A00670;
    return;
L_08A00670:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A006F4;
      }
      goto L_08A0067C;
    }
L_08A0067C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A00688u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6212));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08A00688u) goto L_08A00688;
    return;
L_08A00688:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A006A0;
      }
      goto L_08A00690;
    }
L_08A00690:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A006DC;
      }
      goto L_08A006A0;
    }
L_08A006A0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A006ACu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6204));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08A006ACu) goto L_08A006AC;
    return;
L_08A006AC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A006C0;
      }
      goto L_08A006B4;
    }
L_08A006B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A006DC;
      }
      goto L_08A006C0;
    }
L_08A006C0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A006CCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6196));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08A006CCu) goto L_08A006CC;
    return;
L_08A006CC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08A006F4;
      }
      goto L_08A006D4;
    }
L_08A006D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (0u | 1u);
    goto L_08A006DC;
L_08A006DC:
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
L_08A006F4:
    aot_gpr[2] = (0u | 0u);
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
L_08A00710:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x08A0073Cu);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0073Cu) goto L_08A0073C;
    return;
L_08A0073C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0074Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0074Cu) goto L_08A0074C;
    return;
L_08A0074C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00880;
      }
      goto L_08A00758;
    }
L_08A00758:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (0u | 35u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A00880;
      }
      goto L_08A00768;
    }
L_08A00768:
    aot_gpr[31] = (0x08A00770u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(1))))));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 75u, 0x089F0470u>(ctx, &aot_mem) && ctx.pc == 0x08A00770u) goto L_08A00770;
    return;
L_08A00770:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00880;
      }
      goto L_08A00778;
    }
L_08A00778:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(1))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(2))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(3))))));
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(4))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(5))))));
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(6))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(7))))));
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(8))))));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[20] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A00804u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 83u, 0x08A3646Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00804u) goto L_08A00804;
    return;
L_08A00804:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A00818u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 83u, 0x08A3646Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00818u) goto L_08A00818;
    return;
L_08A00818:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A0082Cu);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 83u, 0x08A3646Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0082Cu) goto L_08A0082C;
    return;
L_08A0082C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A00840u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 83u, 0x08A3646Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00840u) goto L_08A00840;
    return;
L_08A00840:
    aot_gpr[4] = (aot_gpr[17] << 24u);
    aot_gpr[5] = (aot_gpr[18] << 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[19] << 8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00880:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A008A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A008CCu);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A008CCu) goto L_08A008CC;
    return;
L_08A008CC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A008DCu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A008DCu) goto L_08A008DC;
    return;
L_08A008DC:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[17] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A00914;
      }
      goto L_08A008E8;
    }
L_08A008E8:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-18560));
    goto L_08A008F0;
L_08A008F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A008FCu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08A008FCu) goto L_08A008FC;
    return;
L_08A008FC:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[18]);
        goto L_08A00934;
    }
    goto L_08A00904;
L_08A00904:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A008F0;
      }
      goto L_08A00914;
    }
L_08A00914:
    aot_gpr[2] = (0u | 0u);
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
L_08A00934:
    aot_gpr[2] = (0u | 1u);
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
L_08A00954:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    goto L_08A00978;
L_08A00978:
    aot_gpr[31] = (0x08A00980u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 138u, 0x08A06870u>(ctx, &aot_mem) && ctx.pc == 0x08A00980u) goto L_08A00980;
    return;
L_08A00980:
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A009F4;
      }
      goto L_08A0098C;
    }
L_08A0098C:
    aot_gpr[31] = (0x08A00994u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x08A00994u) goto L_08A00994;
    return;
L_08A00994:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A009CC;
      }
      goto L_08A009A0;
    }
L_08A009A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A009B8u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A009B8u) goto L_08A009B8;
    return;
L_08A009B8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A009C4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08A009C4u) goto L_08A009C4;
    return;
L_08A009C4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A009D4;
      }
      goto L_08A009CC;
    }
L_08A009CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A00978;
      }
      goto L_08A009D4;
    }
L_08A009D4:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_08A009F4:
    aot_gpr[2] = (0u | 0u);
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
L_08A00A14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A00A58;
      }
      goto L_08A00A48;
    }
L_08A00A48:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00A58;
      }
      goto L_08A00A50;
    }
L_08A00A50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A00A80;
      }
      goto L_08A00A58;
    }
L_08A00A58:
    aot_gpr[2] = (0u | 0u);
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
L_08A00A80:
    aot_gpr[31] = (0x08A00A88u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 138u, 0x08A06870u>(ctx, &aot_mem) && ctx.pc == 0x08A00A88u) goto L_08A00A88;
    return;
L_08A00A88:
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00B0C;
      }
      goto L_08A00A94;
    }
L_08A00A94:
    { const bool branch_taken = aot_gpr[21] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A00B0C;
      }
      goto L_08A00A9C;
    }
L_08A00A9C:
    aot_gpr[31] = (0x08A00AA4u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x08A00AA4u) goto L_08A00AA4;
    return;
L_08A00AA4:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00B04;
      }
      goto L_08A00AB0;
    }
L_08A00AB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A00AC8u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A00AC8u) goto L_08A00AC8;
    return;
L_08A00AC8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00B04;
      }
      goto L_08A00AD4;
    }
L_08A00AD4:
    aot_gpr[31] = (0x08A00ADCu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00ADCu) goto L_08A00ADC;
    return;
L_08A00ADC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00B04;
      }
      goto L_08A00AE4;
    }
L_08A00AE4:
    aot_gpr[31] = (0x08A00AECu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A00E64;
L_08A00AEC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A00AF8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00AF8u) goto L_08A00AF8;
    return;
L_08A00AF8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00B04;
      }
      goto L_08A00B00;
    }
L_08A00B00:
    aot_gpr[21] = (aot_gpr[19] | 0u);
    goto L_08A00B04;
L_08A00B04:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A00A80;
      }
      goto L_08A00B0C;
    }
L_08A00B0C:
    aot_gpr[2] = (aot_gpr[21] | 0u);
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
L_08A00B34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    goto L_08A00B50;
L_08A00B50:
    aot_gpr[31] = (0x08A00B58u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 138u, 0x08A06870u>(ctx, &aot_mem) && ctx.pc == 0x08A00B58u) goto L_08A00B58;
    return;
L_08A00B58:
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A00BBC;
      }
      goto L_08A00B64;
    }
L_08A00B64:
    aot_gpr[31] = (0x08A00B6Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x08A00B6Cu) goto L_08A00B6C;
    return;
L_08A00B6C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00B98;
      }
      goto L_08A00B78;
    }
L_08A00B78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A00B90u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A00B90u) goto L_08A00B90;
    return;
L_08A00B90:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00BA0;
      }
      goto L_08A00B98;
    }
L_08A00B98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A00B50;
      }
      goto L_08A00BA0;
    }
L_08A00BA0:
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
L_08A00BBC:
    aot_gpr[2] = (0u | 0u);
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
L_08A00BD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A00BECu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08A00C00;
L_08A00BEC:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00C00:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00C14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A00C3C;
      }
      goto L_08A00C24;
    }
L_08A00C24:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(11296));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(292), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A00C3C;
      }
      goto L_08A00C34;
    }
L_08A00C34:
    aot_gpr[31] = (0x08A00C3Cu);
    // nop
    goto L_08A00EE4;
L_08A00C3C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00C48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A00CB0;
      }
      goto L_08A00C70;
    }
L_08A00C70:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(272)));
      if (branch_taken) {
          goto L_08A00CA4;
      }
      goto L_08A00C78;
    }
L_08A00C78:
    if (aot_gpr[4] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(272), aot_gpr[5]);
        goto L_08A00CA8;
    }
    goto L_08A00C80;
L_08A00C80:
    if (aot_gpr[5] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(272), aot_gpr[5]);
        goto L_08A00CA8;
    }
    goto L_08A00C88;
L_08A00C88:
    aot_gpr[31] = (0x08A00C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 119u, 0x08A03734u>(ctx, &aot_mem) && ctx.pc == 0x08A00C90u) goto L_08A00C90;
    return;
L_08A00C90:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A00CA0u);
    aot_gpr[6] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 139u, 0x08A03874u>(ctx, &aot_mem) && ctx.pc == 0x08A00CA0u) goto L_08A00CA0;
    return;
L_08A00CA0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A00CA4;
L_08A00CA4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(272), aot_gpr[5]);
    goto L_08A00CA8;
L_08A00CA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08A00CB0;
L_08A00CB0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00CC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(120), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(124), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[31]);
    aot_gpr[31] = (0x08A00CE4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A00CE4u) goto L_08A00CE4;
    return;
L_08A00CE4:
    aot_gpr[31] = (0x08A00CECu);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 231u, 0x089FEE74u>(ctx, &aot_mem) && ctx.pc == 0x08A00CECu) goto L_08A00CEC;
    return;
L_08A00CEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A00D08u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A00D08u) goto L_08A00D08;
    return;
L_08A00D08:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00DA8;
      }
      goto L_08A00D10;
    }
L_08A00D10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(272)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
        goto L_08A00D3C;
    }
    goto L_08A00D1C;
L_08A00D1C:
    aot_gpr[31] = (0x08A00D24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 119u, 0x08A03734u>(ctx, &aot_mem) && ctx.pc == 0x08A00D24u) goto L_08A00D24;
    return;
L_08A00D24:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A00D34u);
    aot_gpr[6] = (0u | 27u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 139u, 0x08A03874u>(ctx, &aot_mem) && ctx.pc == 0x08A00D34u) goto L_08A00D34;
    return;
L_08A00D34:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(272), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    goto L_08A00D3C;
L_08A00D3C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A00DA8;
      }
      goto L_08A00D44;
    }
L_08A00D44:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 116u);
    aot_gpr[31] = (0x08A00D54u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-18520));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A00D54u) goto L_08A00D54;
    return;
L_08A00D54:
    aot_gpr[19] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (0u | 28u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A00DA8;
      }
      goto L_08A00D68;
    }
L_08A00D68:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    goto L_08A00D6C;
L_08A00D6C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A00D78u);
    aot_gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A00D78u) goto L_08A00D78;
    return;
L_08A00D78:
    if (aot_gpr[2] == 0u) {
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
        goto L_08A00D9C;
    }
    goto L_08A00D80;
L_08A00D80:
    aot_gpr[31] = (0x08A00D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 119u, 0x08A03734u>(ctx, &aot_mem) && ctx.pc == 0x08A00D88u) goto L_08A00D88;
    return;
L_08A00D88:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A00D98u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 136u, 0x08A03830u>(ctx, &aot_mem) && ctx.pc == 0x08A00D98u) goto L_08A00D98;
    return;
L_08A00D98:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    goto L_08A00D9C;
L_08A00D9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A00D6C;
      }
      goto L_08A00DA8;
    }
L_08A00DA8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00DC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A00DFCu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A00DFCu) goto L_08A00DFC;
    return;
L_08A00DFC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u < aot_gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A00E18;
      }
      goto L_08A00E04;
    }
L_08A00E04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (0u < aot_gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A00E18;
      }
      goto L_08A00E10;
    }
L_08A00E10:
    aot_gpr[18] = (0u | 1u);
    aot_gpr[4] = (0u < aot_gpr[16] ? 1u : 0u);
    goto L_08A00E18;
L_08A00E18:
    aot_gpr[4] = (aot_gpr[18] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A00E2Cu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_08A00C48;
L_08A00E2C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00E44:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(280)));
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00E5C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00E64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(44));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A00E7Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A00E7Cu) goto L_08A00E7C;
    return;
L_08A00E7C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00E90:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00E9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A00EB0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A00EB0u) goto L_08A00EB0;
    return;
L_08A00EB0:
    aot_gpr[31] = (0x08A00EB8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00EB8u) goto L_08A00EB8;
    return;
L_08A00EB8:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 33u);
    aot_gpr[31] = (0x08A00ED4u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-6184));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A00ED4u) goto L_08A00ED4;
    return;
L_08A00ED4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00EE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A00EF8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A00EF8u) goto L_08A00EF8;
    return;
L_08A00EF8:
    aot_gpr[31] = (0x08A00F00u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00F00u) goto L_08A00F00;
    return;
L_08A00F00:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A00F0Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A00F0Cu) goto L_08A00F0C;
    return;
L_08A00F0C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00F1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A00F3Cu);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00F3Cu) goto L_08A00F3C;
    return;
L_08A00F3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(132), 0u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A00F74u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6160));
    goto L_08A00FE8;
L_08A00F74:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(108), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(112), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(120));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A00F9Cu);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A00F9Cu) goto L_08A00F9C;
    return;
L_08A00F9C:
    aot_gpr[31] = (0x08A00FA4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(116));
    goto L_08A00C00;
L_08A00FA4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(136), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(140), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(280), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(272), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(288), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00FD0:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(276), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00FD8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(276)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00FE0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(116));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00FE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    ctx.pc = 0x08A01000u; return;
}

void recomp_unit_0508(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0508_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_508(Runtime &runtime) {
    runtime.register_generated_unit(508u, 0x08A00000u, 4096u, &recomp_unit_0508, &recomp_unit_0508_entry);
    runtime.register_function(0x08A00000u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00008u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00040u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00048u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00050u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00058u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00060u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00070u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00078u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00080u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A0008Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00098u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A000A0u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A000A8u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A000B4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A000C0u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A000C8u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A000D4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A000DCu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A000F8u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00100u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A0011Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00130u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00150u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00158u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00178u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00184u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A0018Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00198u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A001A4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A001ACu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A001B8u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A001C4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A001FCu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00224u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00258u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00280u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A002A4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A002A8u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A002B4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A002E8u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A002FCu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A0031Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00324u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00334u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A0033Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00344u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00350u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00360u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00364u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00384u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A003A0u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A003BCu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A003D0u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A003D8u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A003E4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A003ECu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A003F8u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00400u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A0040Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00414u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00420u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00428u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00434u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A0043Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00448u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00450u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A0045Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A0046Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00480u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00488u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00494u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A0049Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A004A8u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A004B0u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A004BCu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A004D8u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A004E0u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A004ECu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A004F4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00500u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A0051Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00524u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00530u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00538u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00544u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00560u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00568u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00574u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A0057Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00588u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A005A4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A005ACu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A005B8u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A005C0u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A005CCu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A005E8u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A005F0u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A005FCu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00604u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00610u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A0062Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A0063Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00660u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00670u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A0067Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00688u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00690u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A006A0u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A006ACu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A006B4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A006C0u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A006CCu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A006D4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A006DCu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A006F4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00710u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A0073Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A0074Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00758u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00768u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00770u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00778u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00804u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00818u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A0082Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00840u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00880u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A008A4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A008CCu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A008DCu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A008E8u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A008F0u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A008FCu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00904u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00914u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00934u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00954u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00978u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00980u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A0098Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00994u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A009A0u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A009B8u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A009C4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A009CCu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A009D4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A009F4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00A14u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00A48u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00A50u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00A58u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00A80u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00A88u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00A94u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00A9Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00AA4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00AB0u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00AC8u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00AD4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00ADCu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00AE4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00AECu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00AF8u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00B00u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00B04u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00B0Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00B34u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00B50u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00B58u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00B64u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00B6Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00B78u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00B90u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00B98u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00BA0u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00BBCu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00BD8u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00BECu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00C00u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00C14u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00C24u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00C34u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00C3Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00C48u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00C70u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00C78u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00C80u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00C88u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00C90u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00CA0u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00CA4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00CA8u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00CB0u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00CC4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00CE4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00CECu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00D08u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00D10u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00D1Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00D24u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00D34u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00D3Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00D44u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00D54u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00D68u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00D6Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00D78u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00D80u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00D88u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00D98u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00D9Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00DA8u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00DC4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00DFCu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00E04u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00E10u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00E18u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00E2Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00E44u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00E5Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00E64u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00E7Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00E90u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00E9Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00EB0u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00EB8u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00ED4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00EE4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00EF8u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00F00u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00F0Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00F1Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00F3Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00F74u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00F9Cu, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00FA4u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00FD0u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00FD8u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00FE0u, &recomp_unit_0508, "recomp_unit_0508");
    runtime.register_function(0x08A00FE8u, &recomp_unit_0508, "recomp_unit_0508");
}
} // namespace psprecomp
