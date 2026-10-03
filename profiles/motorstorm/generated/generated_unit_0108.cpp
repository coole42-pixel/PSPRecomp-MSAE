#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0108[1020] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0,
    10, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0,
    18, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 0,
    26, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    34, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0,
    43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 49, 0, 50, 0, 0, 0, 51, 0, 52, 0,
    0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0,
    60, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0,
    68, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 75,
    0, 76, 0, 77, 0, 0, 0, 78, 0, 79, 0, 80, 0, 0, 0, 81, 0, 82, 0, 83, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 0, 87,
    0, 88, 0, 89, 0, 0, 0, 90, 0, 91, 0, 92, 0, 0, 0, 93, 0, 94, 0, 95, 0, 0, 0, 96, 0, 97, 0, 98, 0, 99, 0, 0,
    0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0,
    0, 0, 104, 105, 106, 0, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0,
    0, 114, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 119, 120, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 123,
    0, 0, 124, 0, 125, 0, 126, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 136, 0,
    0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0,
    148, 0, 0, 149, 0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 154, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158,
    0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 165, 0, 0, 0, 0, 166,
    0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 170, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 173, 0, 174, 0, 175, 0, 0, 0, 0,
    0, 0, 176, 0, 0, 177, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0, 182, 183, 0, 0, 184, 185, 0, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0,
    194, 0, 0, 0, 195, 0, 196, 197, 0, 198, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202,
    0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 205, 0, 0, 0, 206, 0, 207, 0, 0, 208, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 211, 0,
    0, 0, 0, 0, 212, 213, 0, 0, 0, 214, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 219, 0,
    220, 0, 221, 0, 0, 0, 222, 0, 223, 0, 224, 0, 225, 0, 0, 226, 0, 0, 0, 227, 0, 228, 229, 0, 230, 0, 0, 0, 0, 0, 0, 231,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 234, 0, 235, 0, 0, 236, 0,
    0, 0, 237, 0, 0, 0, 238, 0, 239, 0, 0, 240, 0, 0, 0, 241, 0, 242, 0, 0, 243, 0, 0, 0, 244, 0, 245, 0, 0, 246, 0, 0,
    247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 250, 0, 0, 251, 0, 0, 0, 252, 0, 253, 0, 0, 254, 0, 0, 0, 255, 0, 256,
    257, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 261, 0, 262, 0, 0, 263, 0, 264, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0,
    0, 0, 267, 0, 268, 0, 269, 0, 0, 0, 270, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 275,
};
void recomp_unit_0108_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08870000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0108[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08870000;
    case 2u: goto L_08870008;
    case 3u: goto L_08870010;
    case 4u: goto L_0887002C;
    case 5u: goto L_08870038;
    case 6u: goto L_08870050;
    case 7u: goto L_08870060;
    case 8u: goto L_08870068;
    case 9u: goto L_08870070;
    case 10u: goto L_08870080;
    case 11u: goto L_08870088;
    case 12u: goto L_08870098;
    case 13u: goto L_088700A0;
    case 14u: goto L_088700BC;
    case 15u: goto L_088700C8;
    case 16u: goto L_088700E0;
    case 17u: goto L_088700EC;
    case 18u: goto L_08870100;
    case 19u: goto L_08870108;
    case 20u: goto L_08870124;
    case 21u: goto L_08870130;
    case 22u: goto L_08870148;
    case 23u: goto L_08870158;
    case 24u: goto L_08870160;
    case 25u: goto L_08870170;
    case 26u: goto L_08870180;
    case 27u: goto L_08870188;
    case 28u: goto L_08870198;
    case 29u: goto L_088701A8;
    case 30u: goto L_088701B0;
    case 31u: goto L_088701CC;
    case 32u: goto L_088701D8;
    case 33u: goto L_088701F0;
    case 34u: goto L_08870200;
    case 35u: goto L_08870208;
    case 36u: goto L_08870218;
    case 37u: goto L_08870228;
    case 38u: goto L_08870230;
    case 39u: goto L_08870240;
    case 40u: goto L_08870250;
    case 41u: goto L_08870258;
    case 42u: goto L_08870274;
    case 43u: goto L_08870280;
    case 44u: goto L_08870298;
    case 45u: goto L_088702A8;
    case 46u: goto L_088702B0;
    case 47u: goto L_088702C0;
    case 48u: goto L_088702D0;
    case 49u: goto L_088702D8;
    case 50u: goto L_088702E0;
    case 51u: goto L_088702F0;
    case 52u: goto L_088702F8;
    case 53u: goto L_08870314;
    case 54u: goto L_08870320;
    case 55u: goto L_08870338;
    case 56u: goto L_08870340;
    case 57u: goto L_08870350;
    case 58u: goto L_08870358;
    case 59u: goto L_08870374;
    case 60u: goto L_08870380;
    case 61u: goto L_08870398;
    case 62u: goto L_088703A0;
    case 63u: goto L_088703B0;
    case 64u: goto L_088703B8;
    case 65u: goto L_088703D4;
    case 66u: goto L_088703E0;
    case 67u: goto L_088703F8;
    case 68u: goto L_08870400;
    case 69u: goto L_08870410;
    case 70u: goto L_08870418;
    case 71u: goto L_08870440;
    case 72u: goto L_0887044C;
    case 73u: goto L_08870464;
    case 74u: goto L_0887046C;
    case 75u: goto L_0887047C;
    case 76u: goto L_08870484;
    case 77u: goto L_0887048C;
    case 78u: goto L_0887049C;
    case 79u: goto L_088704A4;
    case 80u: goto L_088704AC;
    case 81u: goto L_088704BC;
    case 82u: goto L_088704C4;
    case 83u: goto L_088704CC;
    case 84u: goto L_088704DC;
    case 85u: goto L_088704E4;
    case 86u: goto L_088704EC;
    case 87u: goto L_088704FC;
    case 88u: goto L_08870504;
    case 89u: goto L_0887050C;
    case 90u: goto L_0887051C;
    case 91u: goto L_08870524;
    case 92u: goto L_0887052C;
    case 93u: goto L_0887053C;
    case 94u: goto L_08870544;
    case 95u: goto L_0887054C;
    case 96u: goto L_0887055C;
    case 97u: goto L_08870564;
    case 98u: goto L_0887056C;
    case 99u: goto L_08870574;
    case 100u: goto L_08870594;
    case 101u: goto L_088705D4;
    case 102u: goto L_088705E8;
    case 103u: goto L_088705F0;
    case 104u: goto L_08870608;
    case 105u: goto L_0887060C;
    case 106u: goto L_08870610;
    case 107u: goto L_08870620;
    case 108u: goto L_08870628;
    case 109u: goto L_08870634;
    case 110u: goto L_08870644;
    case 111u: goto L_08870654;
    case 112u: goto L_08870668;
    case 113u: goto L_08870670;
    case 114u: goto L_08870684;
    case 115u: goto L_08870690;
    case 116u: goto L_08870698;
    case 117u: goto L_088706B8;
    case 118u: goto L_088706C0;
    case 119u: goto L_088706C8;
    case 120u: goto L_088706CC;
    case 121u: goto L_088706DC;
    case 122u: goto L_088706F0;
    case 123u: goto L_088706FC;
    case 124u: goto L_08870708;
    case 125u: goto L_08870710;
    case 126u: goto L_08870718;
    case 127u: goto L_0887071C;
    case 128u: goto L_0887072C;
    case 129u: goto L_0887073C;
    case 130u: goto L_08870754;
    case 131u: goto L_08870764;
    case 132u: goto L_08870794;
    case 133u: goto L_088707D8;
    case 134u: goto L_088707E4;
    case 135u: goto L_088707F0;
    case 136u: goto L_088707F8;
    case 137u: goto L_08870808;
    case 138u: goto L_08870818;
    case 139u: goto L_0887083C;
    case 140u: goto L_08870844;
    case 141u: goto L_0887084C;
    case 142u: goto L_08870874;
    case 143u: goto L_088708A4;
    case 144u: goto L_088708B8;
    case 145u: goto L_088708CC;
    case 146u: goto L_088708E0;
    case 147u: goto L_088708EC;
    case 148u: goto L_08870900;
    case 149u: goto L_0887090C;
    case 150u: goto L_08870914;
    case 151u: goto L_0887091C;
    case 152u: goto L_0887092C;
    case 153u: goto L_0887093C;
    case 154u: goto L_08870940;
    case 155u: goto L_08870948;
    case 156u: goto L_08870954;
    case 157u: goto L_08870964;
    case 158u: goto L_0887097C;
    case 159u: goto L_08870984;
    case 160u: goto L_088709A0;
    case 161u: goto L_088709AC;
    case 162u: goto L_088709B4;
    case 163u: goto L_088709D4;
    case 164u: goto L_088709E0;
    case 165u: goto L_088709E8;
    case 166u: goto L_088709FC;
    case 167u: goto L_08870A04;
    case 168u: goto L_08870A14;
    case 169u: goto L_08870A20;
    case 170u: goto L_08870A28;
    case 171u: goto L_08870A3C;
    case 172u: goto L_08870A44;
    case 173u: goto L_08870A5C;
    case 174u: goto L_08870A64;
    case 175u: goto L_08870A6C;
    case 176u: goto L_08870A88;
    case 177u: goto L_08870A94;
    case 178u: goto L_08870A9C;
    case 179u: goto L_08870AA4;
    case 180u: goto L_08870AB4;
    case 181u: goto L_08870AC0;
    case 182u: goto L_08870AC8;
    case 183u: goto L_08870ACC;
    case 184u: goto L_08870AD8;
    case 185u: goto L_08870ADC;
    case 186u: goto L_08870AF8;
    case 187u: goto L_08870B18;
    case 188u: goto L_08870B28;
    case 189u: goto L_08870B30;
    case 190u: goto L_08870B3C;
    case 191u: goto L_08870B54;
    case 192u: goto L_08870B60;
    case 193u: goto L_08870B68;
    case 194u: goto L_08870B80;
    case 195u: goto L_08870B90;
    case 196u: goto L_08870B98;
    case 197u: goto L_08870B9C;
    case 198u: goto L_08870BA4;
    case 199u: goto L_08870BA8;
    case 200u: goto L_08870BC0;
    case 201u: goto L_08870BE8;
    case 202u: goto L_08870BFC;
    case 203u: goto L_08870C14;
    case 204u: goto L_08870C20;
    case 205u: goto L_08870C28;
    case 206u: goto L_08870C38;
    case 207u: goto L_08870C40;
    case 208u: goto L_08870C4C;
    case 209u: goto L_08870C60;
    case 210u: goto L_08870C68;
    case 211u: goto L_08870C78;
    case 212u: goto L_08870C90;
    case 213u: goto L_08870C94;
    case 214u: goto L_08870CA4;
    case 215u: goto L_08870CAC;
    case 216u: goto L_08870CBC;
    case 217u: goto L_08870CE0;
    case 218u: goto L_08870CE8;
    case 219u: goto L_08870CF8;
    case 220u: goto L_08870D00;
    case 221u: goto L_08870D08;
    case 222u: goto L_08870D18;
    case 223u: goto L_08870D20;
    case 224u: goto L_08870D28;
    case 225u: goto L_08870D30;
    case 226u: goto L_08870D3C;
    case 227u: goto L_08870D4C;
    case 228u: goto L_08870D54;
    case 229u: goto L_08870D58;
    case 230u: goto L_08870D60;
    case 231u: goto L_08870D7C;
    case 232u: goto L_08870DCC;
    case 233u: goto L_08870DD4;
    case 234u: goto L_08870DE4;
    case 235u: goto L_08870DEC;
    case 236u: goto L_08870DF8;
    case 237u: goto L_08870E08;
    case 238u: goto L_08870E18;
    case 239u: goto L_08870E20;
    case 240u: goto L_08870E2C;
    case 241u: goto L_08870E3C;
    case 242u: goto L_08870E44;
    case 243u: goto L_08870E50;
    case 244u: goto L_08870E60;
    case 245u: goto L_08870E68;
    case 246u: goto L_08870E74;
    case 247u: goto L_08870E80;
    case 248u: goto L_08870E9C;
    case 249u: goto L_08870EAC;
    case 250u: goto L_08870EB4;
    case 251u: goto L_08870EC0;
    case 252u: goto L_08870ED0;
    case 253u: goto L_08870ED8;
    case 254u: goto L_08870EE4;
    case 255u: goto L_08870EF4;
    case 256u: goto L_08870EFC;
    case 257u: goto L_08870F00;
    case 258u: goto L_08870F0C;
    case 259u: goto L_08870F1C;
    case 260u: goto L_08870F2C;
    case 261u: goto L_08870F34;
    case 262u: goto L_08870F3C;
    case 263u: goto L_08870F48;
    case 264u: goto L_08870F50;
    case 265u: goto L_08870F64;
    case 266u: goto L_08870F6C;
    case 267u: goto L_08870F88;
    case 268u: goto L_08870F90;
    case 269u: goto L_08870F98;
    case 270u: goto L_08870FA8;
    case 271u: goto L_08870FB0;
    case 272u: goto L_08870FC0;
    case 273u: goto L_08870FD0;
    case 274u: goto L_08870FD8;
    case 275u: goto L_08870FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08870000:
    aot_gpr[31] = (0x08870008u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6708));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08870008u) goto L_08870008;
    return;
L_08870008:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870088;
      }
      goto L_08870010;
    }
L_08870010:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (20224u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08870038;
      }
      goto L_0887002C;
    }
L_0887002C:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08870050;
      }
      goto L_08870038;
    }
L_08870038:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[20] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[20]);
    goto L_08870050;
L_08870050:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08870060u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6720));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x08870060u) goto L_08870060;
    return;
L_08870060:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u | 1000u);
      if (branch_taken) {
          goto L_08870070;
      }
      goto L_08870068;
    }
L_08870068:
    { const std::uint32_t dividend = aot_gpr[20]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[20] = (ctx.lo);
    goto L_08870070;
L_08870070:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08870080u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 94u, 0x08A4D71Cu>(ctx, &aot_mem) && ctx.pc == 0x08870080u) goto L_08870080;
    return;
L_08870080:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870574;
      }
      goto L_08870088;
    }
L_08870088:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08870098u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6724));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08870098u) goto L_08870098;
    return;
L_08870098:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870198;
      }
      goto L_088700A0;
    }
L_088700A0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (20224u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_088700C8;
      }
      goto L_088700BC;
    }
L_088700BC:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088700E0;
      }
      goto L_088700C8;
    }
L_088700C8:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[20] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[20]);
    goto L_088700E0;
L_088700E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870148;
      }
      goto L_088700EC;
    }
L_088700EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08870100u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6732));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08870100u) goto L_08870100;
    return;
L_08870100:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870148;
      }
      goto L_08870108;
    }
L_08870108:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (20224u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08870130;
      }
      goto L_08870124;
    }
L_08870124:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08870148;
      }
      goto L_08870130;
    }
L_08870130:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[20] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[20]);
    goto L_08870148;
L_08870148:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08870158u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6740));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x08870158u) goto L_08870158;
    return;
L_08870158:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u | 60u);
      if (branch_taken) {
          goto L_08870170;
      }
      goto L_08870160;
    }
L_08870160:
    { const std::uint32_t dividend = aot_gpr[20]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[20] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870070;
      }
      goto L_08870170;
    }
L_08870170:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08870180u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6748));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x08870180u) goto L_08870180;
    return;
L_08870180:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u | 3600u);
      if (branch_taken) {
          goto L_08870070;
      }
      goto L_08870188;
    }
L_08870188:
    { const std::uint32_t dividend = aot_gpr[20]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[20] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870070;
      }
      goto L_08870198;
    }
L_08870198:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x088701A8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6756));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x088701A8u) goto L_088701A8;
    return;
L_088701A8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870240;
      }
      goto L_088701B0;
    }
L_088701B0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (20224u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_088701D8;
      }
      goto L_088701CC;
    }
L_088701CC:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088701F0;
      }
      goto L_088701D8;
    }
L_088701D8:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[20] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[20]);
    goto L_088701F0;
L_088701F0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08870200u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6740));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x08870200u) goto L_08870200;
    return;
L_08870200:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u | 60u);
      if (branch_taken) {
          goto L_08870218;
      }
      goto L_08870208;
    }
L_08870208:
    { const std::uint32_t dividend = aot_gpr[20]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[20] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870070;
      }
      goto L_08870218;
    }
L_08870218:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08870228u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6748));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x08870228u) goto L_08870228;
    return;
L_08870228:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u | 3600u);
      if (branch_taken) {
          goto L_08870070;
      }
      goto L_08870230;
    }
L_08870230:
    { const std::uint32_t dividend = aot_gpr[20]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[20] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870070;
      }
      goto L_08870240;
    }
L_08870240:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08870250u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6772));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08870250u) goto L_08870250;
    return;
L_08870250:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088702C0;
      }
      goto L_08870258;
    }
L_08870258:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (20224u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08870280;
      }
      goto L_08870274;
    }
L_08870274:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08870298;
      }
      goto L_08870280;
    }
L_08870280:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[20] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[20]);
    goto L_08870298;
L_08870298:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088702A8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6720));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 276u, 0x08A3AE14u>(ctx, &aot_mem) && ctx.pc == 0x088702A8u) goto L_088702A8;
    return;
L_088702A8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u | 1000u);
      if (branch_taken) {
          goto L_08870070;
      }
      goto L_088702B0;
    }
L_088702B0:
    { const std::uint32_t dividend = aot_gpr[20]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[20] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870070;
      }
      goto L_088702C0;
    }
L_088702C0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x088702D0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6788));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x088702D0u) goto L_088702D0;
    return;
L_088702D0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088702E0;
      }
      goto L_088702D8;
    }
L_088702D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08870070;
      }
      goto L_088702E0;
    }
L_088702E0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x088702F0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6808));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x088702F0u) goto L_088702F0;
    return;
L_088702F0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870340;
      }
      goto L_088702F8;
    }
L_088702F8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (20224u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08870320;
      }
      goto L_08870314;
    }
L_08870314:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08870338;
      }
      goto L_08870320;
    }
L_08870320:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[20] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[20]);
    goto L_08870338;
L_08870338:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870070;
      }
      goto L_08870340;
    }
L_08870340:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08870350u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6832));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08870350u) goto L_08870350;
    return;
L_08870350:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088703A0;
      }
      goto L_08870358;
    }
L_08870358:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (20224u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08870380;
      }
      goto L_08870374;
    }
L_08870374:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08870398;
      }
      goto L_08870380;
    }
L_08870380:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[20] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[20]);
    goto L_08870398;
L_08870398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870070;
      }
      goto L_088703A0;
    }
L_088703A0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x088703B0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6856));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x088703B0u) goto L_088703B0;
    return;
L_088703B0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870400;
      }
      goto L_088703B8;
    }
L_088703B8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (20224u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_088703E0;
      }
      goto L_088703D4;
    }
L_088703D4:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088703F8;
      }
      goto L_088703E0;
    }
L_088703E0:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[20] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[20]);
    goto L_088703F8;
L_088703F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870070;
      }
      goto L_08870400;
    }
L_08870400:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08870410u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6876));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08870410u) goto L_08870410;
    return;
L_08870410:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887046C;
      }
      goto L_08870418;
    }
L_08870418:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6832)));
    aot_gpr[4] = (20224u << 16u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_0887044C;
      }
      goto L_08870440;
    }
L_08870440:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08870464;
      }
      goto L_0887044C;
    }
L_0887044C:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[20] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[20]);
    goto L_08870464;
L_08870464:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870070;
      }
      goto L_0887046C;
    }
L_0887046C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x0887047Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6900));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0887047Cu) goto L_0887047C;
    return;
L_0887047C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887048C;
      }
      goto L_08870484;
    }
L_08870484:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(368)));
      if (branch_taken) {
          goto L_08870070;
      }
      goto L_0887048C;
    }
L_0887048C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x0887049Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6916));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0887049Cu) goto L_0887049C;
    return;
L_0887049C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088704AC;
      }
      goto L_088704A4;
    }
L_088704A4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08870070;
      }
      goto L_088704AC;
    }
L_088704AC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x088704BCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6928));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x088704BCu) goto L_088704BC;
    return;
L_088704BC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088704CC;
      }
      goto L_088704C4;
    }
L_088704C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08870070;
      }
      goto L_088704CC;
    }
L_088704CC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x088704DCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6940));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x088704DCu) goto L_088704DC;
    return;
L_088704DC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088704EC;
      }
      goto L_088704E4;
    }
L_088704E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08870070;
      }
      goto L_088704EC;
    }
L_088704EC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x088704FCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6948));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x088704FCu) goto L_088704FC;
    return;
L_088704FC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887050C;
      }
      goto L_08870504;
    }
L_08870504:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(348)));
      if (branch_taken) {
          goto L_08870070;
      }
      goto L_0887050C;
    }
L_0887050C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x0887051Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6956));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0887051Cu) goto L_0887051C;
    return;
L_0887051C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887052C;
      }
      goto L_08870524;
    }
L_08870524:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(352)));
      if (branch_taken) {
          goto L_08870070;
      }
      goto L_0887052C;
    }
L_0887052C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x0887053Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6964));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0887053Cu) goto L_0887053C;
    return;
L_0887053C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887054C;
      }
      goto L_08870544;
    }
L_08870544:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(356)));
      if (branch_taken) {
          goto L_08870070;
      }
      goto L_0887054C;
    }
L_0887054C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x0887055Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6984));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0887055Cu) goto L_0887055C;
    return;
L_0887055C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887056C;
      }
      goto L_08870564;
    }
L_08870564:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(360)));
      if (branch_taken) {
          goto L_08870070;
      }
      goto L_0887056C;
    }
L_0887056C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 260u, 0x0886FFF0u>(ctx, &aot_mem); return;
      }
      goto L_08870574;
    }
L_08870574:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08870594:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[23] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[31] = (0x088705D4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 215u, 0x0886FD74u>(ctx, &aot_mem) && ctx.pc == 0x088705D4u) goto L_088705D4;
    return;
L_088705D4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088705E8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7004));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x088705E8u) goto L_088705E8;
    return;
L_088705E8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
      if (branch_taken) {
          goto L_08870670;
      }
      goto L_088705F0;
    }
L_088705F0:
    aot_gpr[20] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-4888)));
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08870668;
      }
      goto L_08870608;
    }
L_08870608:
    aot_gpr[17] = (0u | 0u);
    goto L_0887060C;
L_0887060C:
    aot_gpr[18] = (0u | 0u);
    goto L_08870610;
L_08870610:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08870620u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 164u, 0x0881CB70u>(ctx, &aot_mem) && ctx.pc == 0x08870620u) goto L_08870620;
    return;
L_08870620:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08870634;
      }
      goto L_08870628;
    }
L_08870628:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08870634;
L_08870634:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870610;
      }
      goto L_08870644;
    }
L_08870644:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887060C;
      }
      goto L_08870654;
    }
L_08870654:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-4888)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870608;
      }
      goto L_08870668;
    }
L_08870668:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870698;
      }
      goto L_08870670;
    }
L_08870670:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08870684u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6704));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 32u, 0x08A38260u>(ctx, &aot_mem) && ctx.pc == 0x08870684u) goto L_08870684;
    return;
L_08870684:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08870698;
      }
      goto L_08870690;
    }
L_08870690:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08870764;
      }
      goto L_08870698;
    }
L_08870698:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4888)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25244)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(5596));
      if (branch_taken) {
          goto L_08870754;
      }
      goto L_088706B8;
    }
L_088706B8:
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[30] = (0u | 0u);
    goto L_088706C0;
L_088706C0:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[30] + static_cast<std::uint32_t>(15001));
    goto L_088706C8;
L_088706C8:
    aot_gpr[17] = (0u | 0u);
    goto L_088706CC;
L_088706CC:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088706DCu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 164u, 0x0881CB70u>(ctx, &aot_mem) && ctx.pc == 0x088706DCu) goto L_088706DC;
    return;
L_088706DC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088706F0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 145u, 0x08873964u>(ctx, &aot_mem) && ctx.pc == 0x088706F0u) goto L_088706F0;
    return;
L_088706F0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887071C;
      }
      goto L_088706FC;
    }
L_088706FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887071C;
      }
      goto L_08870708;
    }
L_08870708:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[20];
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887071C;
      }
      goto L_08870710;
    }
L_08870710:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887071C;
      }
      goto L_08870718;
    }
L_08870718:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    goto L_0887071C;
L_0887071C:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088706CC;
      }
      goto L_0887072C;
    }
L_0887072C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088706C8;
      }
      goto L_0887073C;
    }
L_0887073C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4888)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088706C0;
      }
      goto L_08870754;
    }
L_08870754:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08870764u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 94u, 0x08A4D71Cu>(ctx, &aot_mem) && ctx.pc == 0x08870764u) goto L_08870764;
    return;
L_08870764:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08870794:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x088707D8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088707D8u) goto L_088707D8;
    return;
L_088707D8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 32u);
      if (branch_taken) {
          goto L_0887084C;
      }
      goto L_088707E4;
    }
L_088707E4:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08870818;
      }
      goto L_088707F0;
    }
L_088707F0:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870808;
      }
      goto L_088707F8;
    }
L_088707F8:
    aot_gpr[6] = (aot_gpr[17] + aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[18] = (0u | 0u);
    goto L_08870808;
L_08870808:
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08870844;
      }
      goto L_08870818;
    }
L_08870818:
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[20]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[20]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08870844;
      }
      goto L_0887083C;
    }
L_0887083C:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (0u | 1u);
    goto L_08870844;
L_08870844:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088707E4;
      }
      goto L_0887084C;
    }
L_0887084C:
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
L_08870874:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-336));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(5532));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(316), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[31]);
    aot_gpr[31] = (0x088708A4u);
    aot_gpr[5] = (0u | 256u);
    goto L_08870794;
L_088708A4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088708E0;
      }
      goto L_088708B8;
    }
L_088708B8:
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[5]);
    aot_gpr[31] = (0x088708CCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(256), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x088708CCu) goto L_088708CC;
    return;
L_088708CC:
    aot_gpr[19] = (aot_gpr[2] + aot_gpr[19]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088708B8;
      }
      goto L_088708E0;
    }
L_088708E0:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[4];
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08870948;
      }
      goto L_088708EC;
    }
L_088708EC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(256)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    aot_gpr[31] = (0x08870900u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6704));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 32u, 0x08A38260u>(ctx, &aot_mem) && ctx.pc == 0x08870900u) goto L_08870900;
    return;
L_08870900:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08870914;
      }
      goto L_0887090C;
    }
L_0887090C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08870ADC;
      }
      goto L_08870914;
    }
L_08870914:
    aot_gpr[31] = (0x0887091Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 199u, 0x0881CE44u>(ctx, &aot_mem) && ctx.pc == 0x0887091Cu) goto L_0887091C;
    return;
L_0887091C:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08870940;
      }
      goto L_0887092C;
    }
L_0887092C:
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870940;
      }
      goto L_0887093C;
    }
L_0887093C:
    aot_gpr[4] = (0u | 1u);
    goto L_08870940;
L_08870940:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_08870ADC;
      }
      goto L_08870948;
    }
L_08870948:
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870AD8;
      }
      goto L_08870954;
    }
L_08870954:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08870A44;
      }
      goto L_08870964;
    }
L_08870964:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(256)));
    aot_gpr[31] = (0x0887097Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7008));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x0887097Cu) goto L_0887097C;
    return;
L_0887097C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870A44;
      }
      goto L_08870984;
    }
L_08870984:
    aot_gpr[4] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(256)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(292));
    aot_gpr[31] = (0x088709A0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6704));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 32u, 0x08A38260u>(ctx, &aot_mem) && ctx.pc == 0x088709A0u) goto L_088709A0;
    return;
L_088709A0:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088709B4;
      }
      goto L_088709AC;
    }
L_088709AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887090C;
      }
      goto L_088709B4;
    }
L_088709B4:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(256)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(296));
    aot_gpr[31] = (0x088709D4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6704));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 32u, 0x08A38260u>(ctx, &aot_mem) && ctx.pc == 0x088709D4u) goto L_088709D4;
    return;
L_088709D4:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088709E8;
      }
      goto L_088709E0;
    }
L_088709E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887090C;
      }
      goto L_088709E8;
    }
L_088709E8:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870A3C;
      }
      goto L_088709FC;
    }
L_088709FC:
    aot_gpr[31] = (0x08870A04u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 199u, 0x0881CE44u>(ctx, &aot_mem) && ctx.pc == 0x08870A04u) goto L_08870A04;
    return;
L_08870A04:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08870A20;
      }
      goto L_08870A14;
    }
L_08870A14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870A28;
      }
      goto L_08870A20;
    }
L_08870A20:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08870ADC;
      }
      goto L_08870A28;
    }
L_08870A28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088709FC;
      }
      goto L_08870A3C;
    }
L_08870A3C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08870ACC;
      }
      goto L_08870A44;
    }
L_08870A44:
    aot_gpr[4] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(256)));
    aot_gpr[31] = (0x08870A5Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7012));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08870A5Cu) goto L_08870A5C;
    return;
L_08870A5C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870A6C;
      }
      goto L_08870A64;
    }
L_08870A64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08870ACC;
      }
      goto L_08870A6C;
    }
L_08870A6C:
    aot_gpr[4] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(256)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(300));
    aot_gpr[31] = (0x08870A88u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6704));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 32u, 0x08A38260u>(ctx, &aot_mem) && ctx.pc == 0x08870A88u) goto L_08870A88;
    return;
L_08870A88:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08870A9C;
      }
      goto L_08870A94;
    }
L_08870A94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887090C;
      }
      goto L_08870A9C;
    }
L_08870A9C:
    aot_gpr[31] = (0x08870AA4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 199u, 0x0881CE44u>(ctx, &aot_mem) && ctx.pc == 0x08870AA4u) goto L_08870AA4;
    return;
L_08870AA4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08870AC0;
      }
      goto L_08870AB4;
    }
L_08870AB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870AC8;
      }
      goto L_08870AC0;
    }
L_08870AC0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08870ADC;
      }
      goto L_08870AC8;
    }
L_08870AC8:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08870ACC;
L_08870ACC:
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870954;
      }
      goto L_08870AD8;
    }
L_08870AD8:
    aot_gpr[2] = (0u | 1u);
    goto L_08870ADC;
L_08870ADC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(312)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(316)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08870AF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08870BA4;
      }
      goto L_08870B18;
    }
L_08870B18:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08870B28u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7016));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08870B28u) goto L_08870B28;
    return;
L_08870B28:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870BA4;
      }
      goto L_08870B30;
    }
L_08870B30:
    aot_gpr[18] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08870B3Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 215u, 0x0886FD74u>(ctx, &aot_mem) && ctx.pc == 0x08870B3Cu) goto L_08870B3C;
    return;
L_08870B3C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08870B54u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6704));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 32u, 0x08A38260u>(ctx, &aot_mem) && ctx.pc == 0x08870B54u) goto L_08870B54;
    return;
L_08870B54:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08870B68;
      }
      goto L_08870B60;
    }
L_08870B60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870BA4;
      }
      goto L_08870B68;
    }
L_08870B68:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(7978)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08870B9C;
      }
      goto L_08870B80;
    }
L_08870B80:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08870B90u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 94u, 0x08A4D71Cu>(ctx, &aot_mem) && ctx.pc == 0x08870B90u) goto L_08870B90;
    return;
L_08870B90:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870B9C;
      }
      goto L_08870B98;
    }
L_08870B98:
    aot_gpr[8] = (0u | 1u);
    goto L_08870B9C;
L_08870B9C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[8] & 255u);
      if (branch_taken) {
          goto L_08870BA8;
      }
      goto L_08870BA4;
    }
L_08870BA4:
    aot_gpr[2] = (0u | 0u);
    goto L_08870BA8;
L_08870BA8:
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
L_08870BC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08870C20;
      }
      goto L_08870BE8;
    }
L_08870BE8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25244)));
    aot_gpr[19] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08870BFCu);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4808));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 215u, 0x0886FD74u>(ctx, &aot_mem) && ctx.pc == 0x08870BFCu) goto L_08870BFC;
    return;
L_08870BFC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08870C14u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6704));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 32u, 0x08A38260u>(ctx, &aot_mem) && ctx.pc == 0x08870C14u) goto L_08870C14;
    return;
L_08870C14:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08870C28;
      }
      goto L_08870C20;
    }
L_08870C20:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08870D60;
      }
      goto L_08870C28;
    }
L_08870C28:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08870C38u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7024));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08870C38u) goto L_08870C38;
    return;
L_08870C38:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870CE8;
      }
      goto L_08870C40;
    }
L_08870C40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870CAC;
      }
      goto L_08870C4C;
    }
L_08870C4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08870C60u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7040));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08870C60u) goto L_08870C60;
    return;
L_08870C60:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870CAC;
      }
      goto L_08870C68;
    }
L_08870C68:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08870CA4;
      }
      goto L_08870C78;
    }
L_08870C78:
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(692));
    aot_gpr[7] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870C94;
      }
      goto L_08870C90;
    }
L_08870C90:
    aot_gpr[4] = (0u | 0u);
    goto L_08870C94;
L_08870C94:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870C78;
      }
      goto L_08870CA4;
    }
L_08870CA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870D30;
      }
      goto L_08870CAC;
    }
L_08870CAC:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08870CE0;
      }
      goto L_08870CBC;
    }
L_08870CBC:
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(692));
    aot_gpr[7] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870CBC;
      }
      goto L_08870CE0;
    }
L_08870CE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870D30;
      }
      goto L_08870CE8;
    }
L_08870CE8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08870CF8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7052));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08870CF8u) goto L_08870CF8;
    return;
L_08870CF8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870D08;
      }
      goto L_08870D00;
    }
L_08870D00:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(684)));
      if (branch_taken) {
          goto L_08870D30;
      }
      goto L_08870D08;
    }
L_08870D08:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08870D18u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7064));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08870D18u) goto L_08870D18;
    return;
L_08870D18:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870D28;
      }
      goto L_08870D20;
    }
L_08870D20:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(688)));
      if (branch_taken) {
          goto L_08870D30;
      }
      goto L_08870D28;
    }
L_08870D28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870C20;
      }
      goto L_08870D30;
    }
L_08870D30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08870D58;
      }
      goto L_08870D3C;
    }
L_08870D3C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08870D4Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 94u, 0x08A4D71Cu>(ctx, &aot_mem) && ctx.pc == 0x08870D4Cu) goto L_08870D4C;
    return;
L_08870D4C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08870D58;
      }
      goto L_08870D54;
    }
L_08870D54:
    aot_gpr[8] = (0u | 1u);
    goto L_08870D58;
L_08870D58:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[8] & 255u);
      if (branch_taken) {
          goto L_08870D60;
      }
      goto L_08870D60;
    }
L_08870D60:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08870D7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[7] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(25244)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[22]);
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(20));
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[23] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08870DF8;
      }
      goto L_08870DCC;
    }
L_08870DCC:
    aot_gpr[31] = (0x08870DD4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 237u, 0x0886FE78u>(ctx, &aot_mem) && ctx.pc == 0x08870DD4u) goto L_08870DD4;
    return;
L_08870DD4:
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[22] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08870DEC;
      }
      goto L_08870DE4;
    }
L_08870DE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870DF8;
      }
      goto L_08870DEC;
    }
L_08870DEC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870DCC;
      }
      goto L_08870DF8;
    }
L_08870DF8:
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[16] = (aot_gpr[17] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08870E80;
      }
      goto L_08870E08;
    }
L_08870E08:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08870E18u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7120));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08870E18u) goto L_08870E18;
    return;
L_08870E18:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870E2C;
      }
      goto L_08870E20;
    }
L_08870E20:
    aot_gpr[20] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08870E80;
      }
      goto L_08870E2C;
    }
L_08870E2C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08870E3Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7132));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08870E3Cu) goto L_08870E3C;
    return;
L_08870E3C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870E50;
      }
      goto L_08870E44;
    }
L_08870E44:
    aot_gpr[20] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08870E80;
      }
      goto L_08870E50;
    }
L_08870E50:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08870E60u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7140));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08870E60u) goto L_08870E60;
    return;
L_08870E60:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870E74;
      }
      goto L_08870E68;
    }
L_08870E68:
    aot_gpr[20] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08870E80;
      }
      goto L_08870E74;
    }
L_08870E74:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870E08;
      }
      goto L_08870E80;
    }
L_08870E80:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[30] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[17] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_08870F0C;
      }
      goto L_08870E9C;
    }
L_08870E9C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08870EACu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7152));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08870EACu) goto L_08870EAC;
    return;
L_08870EAC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870EC0;
      }
      goto L_08870EB4;
    }
L_08870EB4:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08870F00;
      }
      goto L_08870EC0;
    }
L_08870EC0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08870ED0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7168));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08870ED0u) goto L_08870ED0;
    return;
L_08870ED0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870EE4;
      }
      goto L_08870ED8;
    }
L_08870ED8:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08870F00;
      }
      goto L_08870EE4;
    }
L_08870EE4:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08870EF4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7176));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08870EF4u) goto L_08870EF4;
    return;
L_08870EF4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870F00;
      }
      goto L_08870EFC;
    }
L_08870EFC:
    aot_gpr[30] = (0u | 1u);
    goto L_08870F00;
L_08870F00:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870E9C;
      }
      goto L_08870F0C;
    }
L_08870F0C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[17] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08870F48;
      }
      goto L_08870F1C;
    }
L_08870F1C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08870F2Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7184));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08870F2Cu) goto L_08870F2C;
    return;
L_08870F2C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870F3C;
      }
      goto L_08870F34;
    }
L_08870F34:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08870F3C;
L_08870F3C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870F1C;
      }
      goto L_08870F48;
    }
L_08870F48:
    { const bool branch_taken = aot_gpr[17] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 5u, 0x08871030u>(ctx, &aot_mem); return;
      }
      goto L_08870F50;
    }
L_08870F50:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08870F64u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6732));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08870F64u) goto L_08870F64;
    return;
L_08870F64:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 5u, 0x08871030u>(ctx, &aot_mem); return;
      }
      goto L_08870F6C;
    }
L_08870F6C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4808));
    aot_gpr[31] = (0x08870F88u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6696));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08870F88u) goto L_08870F88;
    return;
L_08870F88:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870F98;
      }
      goto L_08870F90;
    }
L_08870F90:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(664)));
      if (branch_taken) {
          goto L_08870FEC;
      }
      goto L_08870F98;
    }
L_08870F98:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08870FA8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7192));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08870FA8u) goto L_08870FA8;
    return;
L_08870FA8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870FC0;
      }
      goto L_08870FB0;
    }
L_08870FB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(664)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(668)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
      if (branch_taken) {
          goto L_08870FEC;
      }
      goto L_08870FC0;
    }
L_08870FC0:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08870FD0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7204));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 178u, 0x08A3A940u>(ctx, &aot_mem) && ctx.pc == 0x08870FD0u) goto L_08870FD0;
    return;
L_08870FD0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08870FEC;
      }
      goto L_08870FD8;
    }
L_08870FD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(664)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(668)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(672)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
    goto L_08870FEC;
L_08870FEC:
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08871004u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6704));
    (void)rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 32u, 0x08A38260u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0108(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0108_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_108(Runtime &runtime) {
    runtime.register_generated_unit(108u, 0x08870000u, 4096u, &recomp_unit_0108, &recomp_unit_0108_entry);
    runtime.register_function(0x08870000u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870008u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870010u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887002Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870038u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870050u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870060u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870068u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870070u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870080u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870088u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870098u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088700A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088700BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088700C8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088700E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088700ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870100u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870108u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870124u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870130u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870148u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870158u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870160u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870170u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870180u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870188u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870198u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088701A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088701B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088701CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088701D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088701F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870200u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870208u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870218u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870228u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870230u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870240u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870250u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870258u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870274u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870280u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870298u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088702A8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088702B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088702C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088702D0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088702D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088702E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088702F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088702F8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870314u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870320u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870338u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870340u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870350u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870358u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870374u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870380u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870398u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088703A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088703B0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088703B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088703D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088703E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088703F8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870400u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870410u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870418u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870440u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887044Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870464u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887046Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887047Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870484u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887048Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887049Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088704A4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088704ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088704BCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088704C4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088704CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088704DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088704E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088704ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088704FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870504u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887050Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887051Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870524u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887052Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887053Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870544u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887054Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887055Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870564u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887056Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870574u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870594u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088705D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088705E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088705F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870608u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887060Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870610u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870620u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870628u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870634u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870644u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870654u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870668u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870670u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870684u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870690u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870698u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088706B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088706C0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088706C8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088706CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088706DCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088706F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088706FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870708u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870710u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870718u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887071Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887072Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887073Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870754u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870764u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870794u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088707D8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088707E4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088707F0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088707F8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870808u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870818u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887083Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870844u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887084Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870874u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088708A4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088708B8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088708CCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088708E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088708ECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870900u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887090Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870914u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887091Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887092Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887093Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870940u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870948u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870954u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870964u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x0887097Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870984u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088709A0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088709ACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088709B4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088709D4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088709E0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088709E8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x088709FCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870A04u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870A14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870A20u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870A28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870A3Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870A44u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870A5Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870A64u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870A6Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870A88u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870A94u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870A9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870AA4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870AB4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870AC0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870AC8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870ACCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870AD8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870ADCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870AF8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870B18u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870B28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870B30u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870B3Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870B54u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870B60u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870B68u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870B80u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870B90u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870B98u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870B9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870BA4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870BA8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870BC0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870BE8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870BFCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870C14u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870C20u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870C28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870C38u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870C40u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870C4Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870C60u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870C68u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870C78u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870C90u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870C94u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870CA4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870CACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870CBCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870CE0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870CE8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870CF8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870D00u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870D08u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870D18u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870D20u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870D28u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870D30u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870D3Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870D4Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870D54u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870D58u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870D60u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870D7Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870DCCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870DD4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870DE4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870DECu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870DF8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870E08u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870E18u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870E20u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870E2Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870E3Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870E44u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870E50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870E60u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870E68u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870E74u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870E80u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870E9Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870EACu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870EB4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870EC0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870ED0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870ED8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870EE4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870EF4u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870EFCu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870F00u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870F0Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870F1Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870F2Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870F34u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870F3Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870F48u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870F50u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870F64u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870F6Cu, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870F88u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870F90u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870F98u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870FA8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870FB0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870FC0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870FD0u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870FD8u, &recomp_unit_0108, "recomp_unit_0108");
    runtime.register_function(0x08870FECu, &recomp_unit_0108, "recomp_unit_0108");
}
} // namespace psprecomp
