#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0528[1022] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 11, 0,
    0, 12, 0, 13, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 19, 0, 0, 20, 0, 21, 0, 22, 0, 0,
    0, 23, 0, 24, 0, 25, 0, 26, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 31, 0, 32, 0, 0, 33, 34, 0, 35, 0, 36,
    0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 53, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 57, 0, 0, 58, 59, 0, 60, 0, 0,
    61, 0, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0,
    0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 82, 0, 0, 83,
    0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 88, 0, 0, 89, 0, 0, 90, 0, 91, 0, 92,
    0, 93, 0, 0, 0, 0, 94, 95, 0, 96, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 101, 0, 102, 0,
    103, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0,
    0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 134,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0,
    0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 148, 0, 0, 0, 149, 0, 150, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 154, 0, 155, 0, 0, 156, 0, 157, 0, 158, 0, 0, 159, 0, 0, 160, 0, 161, 162, 163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0,
    166, 0, 167, 168, 0, 169, 0, 170, 0, 0, 0, 171, 172, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181,
    0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0,
    0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 188, 0, 189, 0, 190, 0, 0, 0, 191, 0, 0, 192, 0, 193, 0, 194, 0, 0,
    0, 195, 0, 0, 196, 0, 197, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    204, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 0, 208, 209, 0, 0, 210, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    213, 0, 214, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236,
};
void recomp_unit_0528_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A14004u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0528[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A14004;
    case 2u: goto L_08A1400C;
    case 3u: goto L_08A14014;
    case 4u: goto L_08A1401C;
    case 5u: goto L_08A14024;
    case 6u: goto L_08A14040;
    case 7u: goto L_08A14050;
    case 8u: goto L_08A14054;
    case 9u: goto L_08A14064;
    case 10u: goto L_08A14074;
    case 11u: goto L_08A1407C;
    case 12u: goto L_08A14088;
    case 13u: goto L_08A14090;
    case 14u: goto L_08A14098;
    case 15u: goto L_08A140A4;
    case 16u: goto L_08A140B0;
    case 17u: goto L_08A140C8;
    case 18u: goto L_08A140D0;
    case 19u: goto L_08A140DC;
    case 20u: goto L_08A140E8;
    case 21u: goto L_08A140F0;
    case 22u: goto L_08A140F8;
    case 23u: goto L_08A14108;
    case 24u: goto L_08A14110;
    case 25u: goto L_08A14118;
    case 26u: goto L_08A14120;
    case 27u: goto L_08A1412C;
    case 28u: goto L_08A14134;
    case 29u: goto L_08A1413C;
    case 30u: goto L_08A1414C;
    case 31u: goto L_08A14158;
    case 32u: goto L_08A14160;
    case 33u: goto L_08A1416C;
    case 34u: goto L_08A14170;
    case 35u: goto L_08A14178;
    case 36u: goto L_08A14180;
    case 37u: goto L_08A14198;
    case 38u: goto L_08A141AC;
    case 39u: goto L_08A141B4;
    case 40u: goto L_08A141BC;
    case 41u: goto L_08A141E0;
    case 42u: goto L_08A14208;
    case 43u: goto L_08A1422C;
    case 44u: goto L_08A14244;
    case 45u: goto L_08A1424C;
    case 46u: goto L_08A14258;
    case 47u: goto L_08A14264;
    case 48u: goto L_08A14294;
    case 49u: goto L_08A142B4;
    case 50u: goto L_08A142BC;
    case 51u: goto L_08A142DC;
    case 52u: goto L_08A142F0;
    case 53u: goto L_08A142F4;
    case 54u: goto L_08A14340;
    case 55u: goto L_08A1434C;
    case 56u: goto L_08A14354;
    case 57u: goto L_08A14360;
    case 58u: goto L_08A1436C;
    case 59u: goto L_08A14370;
    case 60u: goto L_08A14378;
    case 61u: goto L_08A14384;
    case 62u: goto L_08A14390;
    case 63u: goto L_08A14398;
    case 64u: goto L_08A143A0;
    case 65u: goto L_08A143A8;
    case 66u: goto L_08A143B0;
    case 67u: goto L_08A143BC;
    case 68u: goto L_08A143C8;
    case 69u: goto L_08A143E4;
    case 70u: goto L_08A1441C;
    case 71u: goto L_08A14424;
    case 72u: goto L_08A1443C;
    case 73u: goto L_08A14468;
    case 74u: goto L_08A14478;
    case 75u: goto L_08A1448C;
    case 76u: goto L_08A144A4;
    case 77u: goto L_08A144AC;
    case 78u: goto L_08A144B4;
    case 79u: goto L_08A144C8;
    case 80u: goto L_08A144D8;
    case 81u: goto L_08A144EC;
    case 82u: goto L_08A144F4;
    case 83u: goto L_08A14500;
    case 84u: goto L_08A1450C;
    case 85u: goto L_08A14514;
    case 86u: goto L_08A14540;
    case 87u: goto L_08A14550;
    case 88u: goto L_08A14558;
    case 89u: goto L_08A14564;
    case 90u: goto L_08A14570;
    case 91u: goto L_08A14578;
    case 92u: goto L_08A14580;
    case 93u: goto L_08A14588;
    case 94u: goto L_08A1459C;
    case 95u: goto L_08A145A0;
    case 96u: goto L_08A145A8;
    case 97u: goto L_08A145B8;
    case 98u: goto L_08A145C0;
    case 99u: goto L_08A145DC;
    case 100u: goto L_08A145E4;
    case 101u: goto L_08A145F4;
    case 102u: goto L_08A145FC;
    case 103u: goto L_08A14604;
    case 104u: goto L_08A14610;
    case 105u: goto L_08A1461C;
    case 106u: goto L_08A14624;
    case 107u: goto L_08A14630;
    case 108u: goto L_08A1465C;
    case 109u: goto L_08A14684;
    case 110u: goto L_08A146AC;
    case 111u: goto L_08A146C0;
    case 112u: goto L_08A146C8;
    case 113u: goto L_08A146D4;
    case 114u: goto L_08A14700;
    case 115u: goto L_08A14734;
    case 116u: goto L_08A14748;
    case 117u: goto L_08A1476C;
    case 118u: goto L_08A14778;
    case 119u: goto L_08A14788;
    case 120u: goto L_08A147B4;
    case 121u: goto L_08A147D8;
    case 122u: goto L_08A14810;
    case 123u: goto L_08A14818;
    case 124u: goto L_08A1483C;
    case 125u: goto L_08A14844;
    case 126u: goto L_08A14858;
    case 127u: goto L_08A14860;
    case 128u: goto L_08A1486C;
    case 129u: goto L_08A14894;
    case 130u: goto L_08A148B8;
    case 131u: goto L_08A148C8;
    case 132u: goto L_08A148DC;
    case 133u: goto L_08A148EC;
    case 134u: goto L_08A14900;
    case 135u: goto L_08A14914;
    case 136u: goto L_08A14928;
    case 137u: goto L_08A1493C;
    case 138u: goto L_08A14950;
    case 139u: goto L_08A14964;
    case 140u: goto L_08A14978;
    case 141u: goto L_08A14988;
    case 142u: goto L_08A1499C;
    case 143u: goto L_08A149BC;
    case 144u: goto L_08A149DC;
    case 145u: goto L_08A14A0C;
    case 146u: goto L_08A14A14;
    case 147u: goto L_08A14A1C;
    case 148u: goto L_08A14A2C;
    case 149u: goto L_08A14A3C;
    case 150u: goto L_08A14A44;
    case 151u: goto L_08A14A50;
    case 152u: goto L_08A14A58;
    case 153u: goto L_08A14A60;
    case 154u: goto L_08A14A88;
    case 155u: goto L_08A14A90;
    case 156u: goto L_08A14A9C;
    case 157u: goto L_08A14AA4;
    case 158u: goto L_08A14AAC;
    case 159u: goto L_08A14AB8;
    case 160u: goto L_08A14AC4;
    case 161u: goto L_08A14ACC;
    case 162u: goto L_08A14AD0;
    case 163u: goto L_08A14AD4;
    case 164u: goto L_08A14AE4;
    case 165u: goto L_08A14AF8;
    case 166u: goto L_08A14B04;
    case 167u: goto L_08A14B0C;
    case 168u: goto L_08A14B10;
    case 169u: goto L_08A14B18;
    case 170u: goto L_08A14B20;
    case 171u: goto L_08A14B30;
    case 172u: goto L_08A14B34;
    case 173u: goto L_08A14B3C;
    case 174u: goto L_08A14B4C;
    case 175u: goto L_08A14B68;
    case 176u: goto L_08A14B90;
    case 177u: goto L_08A14BB0;
    case 178u: goto L_08A14BC4;
    case 179u: goto L_08A14BD8;
    case 180u: goto L_08A14BF8;
    case 181u: goto L_08A14C00;
    case 182u: goto L_08A14C18;
    case 183u: goto L_08A14C20;
    case 184u: goto L_08A14C70;
    case 185u: goto L_08A14C78;
    case 186u: goto L_08A14C9C;
    case 187u: goto L_08A14CB0;
    case 188u: goto L_08A14CBC;
    case 189u: goto L_08A14CC4;
    case 190u: goto L_08A14CCC;
    case 191u: goto L_08A14CDC;
    case 192u: goto L_08A14CE8;
    case 193u: goto L_08A14CF0;
    case 194u: goto L_08A14CF8;
    case 195u: goto L_08A14D08;
    case 196u: goto L_08A14D14;
    case 197u: goto L_08A14D1C;
    case 198u: goto L_08A14D24;
    case 199u: goto L_08A14D3C;
    case 200u: goto L_08A14D48;
    case 201u: goto L_08A14D50;
    case 202u: goto L_08A14D58;
    case 203u: goto L_08A14D74;
    case 204u: goto L_08A14D84;
    case 205u: goto L_08A14D8C;
    case 206u: goto L_08A14D9C;
    case 207u: goto L_08A14DA8;
    case 208u: goto L_08A14DB4;
    case 209u: goto L_08A14DB8;
    case 210u: goto L_08A14DC4;
    case 211u: goto L_08A14DC8;
    case 212u: goto L_08A14DD8;
    case 213u: goto L_08A14E04;
    case 214u: goto L_08A14E0C;
    case 215u: goto L_08A14E20;
    case 216u: goto L_08A14E28;
    case 217u: goto L_08A14E48;
    case 218u: goto L_08A14E54;
    case 219u: goto L_08A14E64;
    case 220u: goto L_08A14E84;
    case 221u: goto L_08A14E8C;
    case 222u: goto L_08A14EC8;
    case 223u: goto L_08A14ED0;
    case 224u: goto L_08A14F08;
    case 225u: goto L_08A14F1C;
    case 226u: goto L_08A14F30;
    case 227u: goto L_08A14F44;
    case 228u: goto L_08A14F58;
    case 229u: goto L_08A14F6C;
    case 230u: goto L_08A14F90;
    case 231u: goto L_08A14FA0;
    case 232u: goto L_08A14FB4;
    case 233u: goto L_08A14FBC;
    case 234u: goto L_08A14FD0;
    case 235u: goto L_08A14FE4;
    case 236u: goto L_08A14FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A14004:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A1400C;
      }
      goto L_08A1400C;
    }
L_08A1400C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A14074;
      }
      goto L_08A14014;
    }
L_08A14014:
    aot_gpr[31] = (0x08A1401Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1401Cu) goto L_08A1401C;
    return;
L_08A1401C:
    aot_gpr[31] = (0x08A14024u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14024u) goto L_08A14024;
    return;
L_08A14024:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[17] << 4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[7] = (0u | 1140u);
    aot_gpr[31] = (0x08A14040u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-2720));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A14040u) goto L_08A14040;
    return;
L_08A14040:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(356), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A14074;
      }
      goto L_08A14050;
    }
L_08A14050:
    aot_gpr[21] = (0u | 0u);
    goto L_08A14054;
L_08A14054:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(356)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A14064u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[21]);
    goto L_08A14B90;
L_08A14064:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A14054;
      }
      goto L_08A14074;
    }
L_08A14074:
    aot_gpr[31] = (0x08A1407Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1407Cu) goto L_08A1407C;
    return;
L_08A1407C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A14088u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A14088u) goto L_08A14088;
    return;
L_08A14088:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A14264;
      }
      goto L_08A14090;
    }
L_08A14090:
    aot_gpr[31] = (0x08A14098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A14098u) goto L_08A14098;
    return;
L_08A14098:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A140A4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A140A4u) goto L_08A140A4;
    return;
L_08A140A4:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[21] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A14264;
      }
      goto L_08A140B0;
    }
L_08A140B0:
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-2676));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-2672));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-2720));
    goto L_08A140C8;
L_08A140C8:
    aot_gpr[31] = (0x08A140D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A140D0u) goto L_08A140D0;
    return;
L_08A140D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A140DCu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A140DCu) goto L_08A140DC;
    return;
L_08A140DC:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A14244;
      }
      goto L_08A140E8;
    }
L_08A140E8:
    aot_gpr[31] = (0x08A140F0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A140F0u) goto L_08A140F0;
    return;
L_08A140F0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A14110;
      }
      goto L_08A140F8;
    }
L_08A140F8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A14108u);
    aot_gpr[6] = (0u | 0u);
    goto L_08A143E4;
L_08A14108:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A14244;
      }
      goto L_08A14110;
    }
L_08A14110:
    aot_gpr[31] = (0x08A14118u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14118u) goto L_08A14118;
    return;
L_08A14118:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A14244;
      }
      goto L_08A14120;
    }
L_08A14120:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A14170;
      }
      goto L_08A1412C;
    }
L_08A1412C:
    aot_gpr[31] = (0x08A14134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A14134u) goto L_08A14134;
    return;
L_08A14134:
    aot_gpr[31] = (0x08A1413Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1413Cu) goto L_08A1413C;
    return;
L_08A1413C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A1414Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A1414Cu) goto L_08A1414C;
    return;
L_08A1414C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[31] = (0x08A14158u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A14158u) goto L_08A14158;
    return;
L_08A14158:
    aot_gpr[31] = (0x08A14160u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14160u) goto L_08A14160;
    return;
L_08A14160:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[31] = (0x08A1416Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A1416Cu) goto L_08A1416C;
    return;
L_08A1416C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(360), 0u);
    goto L_08A14170;
L_08A14170:
    aot_gpr[31] = (0x08A14178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A14178u) goto L_08A14178;
    return;
L_08A14178:
    aot_gpr[31] = (0x08A14180u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14180u) goto L_08A14180;
    return;
L_08A14180:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 24u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1177u);
    aot_gpr[31] = (0x08A14198u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A14198u) goto L_08A14198;
    return;
L_08A14198:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(360), aot_gpr[2]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A141ACu);
    aot_gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A141ACu) goto L_08A141AC;
    return;
L_08A141AC:
    aot_gpr[31] = (0x08A141B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A141B4u) goto L_08A141B4;
    return;
L_08A141B4:
    aot_gpr[31] = (0x08A141BCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A141BCu) goto L_08A141BC;
    return;
L_08A141BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1181u);
    aot_gpr[31] = (0x08A141E0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A141E0u) goto L_08A141E0;
    return;
L_08A141E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[5] << 3u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[31] = (0x08A14208u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14208u) goto L_08A14208;
    return;
L_08A14208:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(368)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[31] = (0x08A1422Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0527_entry, 527u, 205u, 0x08A13C68u>(ctx, &aot_mem) && ctx.pc == 0x08A1422Cu) goto L_08A1422C;
    return;
L_08A1422C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A14244u);
    aot_gpr[6] = (0u | 1u);
    goto L_08A143E4;
L_08A14244:
    aot_gpr[31] = (0x08A1424Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1424Cu) goto L_08A1424C;
    return;
L_08A1424C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A14258u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A14258u) goto L_08A14258;
    return;
L_08A14258:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A140C8;
      }
      goto L_08A14264;
    }
L_08A14264:
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
L_08A14294:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A142B4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A142B4u) goto L_08A142B4;
    return;
L_08A142B4:
    aot_gpr[31] = (0x08A142BCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A142BCu) goto L_08A142BC;
    return;
L_08A142BC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] << 5u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1297u);
    aot_gpr[31] = (0x08A142DCu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-2720));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A142DCu) goto L_08A142DC;
    return;
L_08A142DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(352), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A14340;
      }
      goto L_08A142F0;
    }
L_08A142F0:
    aot_gpr[5] = (0u | 0u);
    goto L_08A142F4;
L_08A142F4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(364)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(436)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(28), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A142F4;
      }
      goto L_08A14340;
    }
L_08A14340:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1434Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A14894;
L_08A1434C:
    aot_gpr[31] = (0x08A14354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A14354u) goto L_08A14354;
    return;
L_08A14354:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A14360u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A14360u) goto L_08A14360;
    return;
L_08A14360:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[18] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A143C8;
      }
      goto L_08A1436C;
    }
L_08A1436C:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-2656));
    goto L_08A14370;
L_08A14370:
    aot_gpr[31] = (0x08A14378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A14378u) goto L_08A14378;
    return;
L_08A14378:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A14384u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A14384u) goto L_08A14384;
    return;
L_08A14384:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A143A8;
      }
      goto L_08A14390;
    }
L_08A14390:
    aot_gpr[31] = (0x08A14398u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14398u) goto L_08A14398;
    return;
L_08A14398:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A143A8;
      }
      goto L_08A143A0;
    }
L_08A143A0:
    aot_gpr[31] = (0x08A143A8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A1465C;
L_08A143A8:
    aot_gpr[31] = (0x08A143B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A143B0u) goto L_08A143B0;
    return;
L_08A143B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A143BCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A143BCu) goto L_08A143BC;
    return;
L_08A143BC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A14370;
      }
      goto L_08A143C8;
    }
L_08A143C8:
    aot_gpr[2] = (0u | 1u);
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
L_08A143E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(340)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) <= 0;
    aot_gpr[17] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A1443C;
      }
      goto L_08A1441C;
    }
L_08A1441C:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A14468;
      }
      goto L_08A14424;
    }
L_08A14424:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(356)));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-18076)));
    aot_gpr[4] = (aot_gpr[4] << 4u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[4]);
      if (branch_taken) {
          goto L_08A144A4;
      }
      goto L_08A1443C;
    }
L_08A1443C:
    aot_gpr[2] = (0u | 1u);
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
L_08A14468:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(496));
    aot_gpr[31] = (0x08A14478u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-2648));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A14478u) goto L_08A14478;
    return;
L_08A14478:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1448Cu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1448Cu) goto L_08A1448C;
    return;
L_08A1448C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x08A144A4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2628));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A144A4u) goto L_08A144A4;
    return;
L_08A144A4:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A14514;
      }
      goto L_08A144AC;
    }
L_08A144AC:
    aot_gpr[31] = (0x08A144B4u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-2616));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A144B4u) goto L_08A144B4;
    return;
L_08A144B4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A144C8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A144C8u) goto L_08A144C8;
    return;
L_08A144C8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08A144D8u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-2604));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A144D8u) goto L_08A144D8;
    return;
L_08A144D8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A144ECu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A144ECu) goto L_08A144EC;
    return;
L_08A144EC:
    aot_gpr[31] = (0x08A144F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A144F4u) goto L_08A144F4;
    return;
L_08A144F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A14500u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A14500u) goto L_08A14500;
    return;
L_08A14500:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A14540;
      }
      goto L_08A1450C;
    }
L_08A1450C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1461C;
      }
      goto L_08A14514;
    }
L_08A14514:
    aot_gpr[2] = (0u | 0u);
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
L_08A14540:
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[22] = (0u | 0u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-2596));
    aot_gpr[18] = (2216u << 16u);
    goto L_08A14550;
L_08A14550:
    aot_gpr[31] = (0x08A14558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A14558u) goto L_08A14558;
    return;
L_08A14558:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A14564u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A14564u) goto L_08A14564;
    return;
L_08A14564:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A145FC;
      }
      goto L_08A14570;
    }
L_08A14570:
    aot_gpr[31] = (0x08A14578u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14578u) goto L_08A14578;
    return;
L_08A14578:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A145FC;
      }
      goto L_08A14580;
    }
L_08A14580:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A1459C;
      }
      goto L_08A14588;
    }
L_08A14588:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(340)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18076)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A145A0;
      }
      goto L_08A1459C;
    }
L_08A1459C:
    aot_gpr[4] = (0u | 1u);
    goto L_08A145A0;
L_08A145A0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A145FC;
      }
      goto L_08A145A8;
    }
L_08A145A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A145FC;
      }
      goto L_08A145B8;
    }
L_08A145B8:
    if (aot_gpr[17] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
        goto L_08A145DC;
    }
    goto L_08A145C0;
L_08A145C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-18076)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
      if (branch_taken) {
          goto L_08A145E4;
      }
      goto L_08A145DC;
    }
L_08A145DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    goto L_08A145E4;
L_08A145E4:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A145F4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_08A149DC;
L_08A145F4:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(24));
    goto L_08A145FC;
L_08A145FC:
    aot_gpr[31] = (0x08A14604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A14604u) goto L_08A14604;
    return;
L_08A14604:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A14610u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A14610u) goto L_08A14610;
    return;
L_08A14610:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A14550;
      }
      goto L_08A1461C;
    }
L_08A1461C:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A14630;
      }
      goto L_08A14624;
    }
L_08A14624:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-18076)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18076), aot_gpr[5]);
    goto L_08A14630;
L_08A14630:
    aot_gpr[2] = (0u | 1u);
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
L_08A1465C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A14818;
      }
      goto L_08A14684;
    }
L_08A14684:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-18080)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] << 5u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[6] + static_cast<std::uint32_t>(-2588));
    aot_gpr[31] = (0x08A146ACu);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A146ACu) goto L_08A146AC;
    return;
L_08A146AC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A146C0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A146C0u) goto L_08A146C0;
    return;
L_08A146C0:
    aot_gpr[31] = (0x08A146C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A146C8u) goto L_08A146C8;
    return;
L_08A146C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A146D4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A146D4u) goto L_08A146D4;
    return;
L_08A146D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-18080)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-18080)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[31] = (0x08A14700u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 49u, 0x089EF294u>(ctx, &aot_mem) && ctx.pc == 0x08A14700u) goto L_08A14700;
    return;
L_08A14700:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-18080)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-18080)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A14734u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-2576));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A14734u) goto L_08A14734;
    return;
L_08A14734:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A14748u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A14748u) goto L_08A14748;
    return;
L_08A14748:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-18080)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A1476Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2568));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 129u, 0x08A008A4u>(ctx, &aot_mem) && ctx.pc == 0x08A1476Cu) goto L_08A1476C;
    return;
L_08A1476C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A14778u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2556));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A14778u) goto L_08A14778;
    return;
L_08A14778:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A14788u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A14788u) goto L_08A14788;
    return;
L_08A14788:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-18080)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-18080)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[31] = (0x08A147B4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 49u, 0x089EF294u>(ctx, &aot_mem) && ctx.pc == 0x08A147B4u) goto L_08A147B4;
    return;
L_08A147B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-18080)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(28));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A147D8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2548));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 103u, 0x08A0063Cu>(ctx, &aot_mem) && ctx.pc == 0x08A147D8u) goto L_08A147D8;
    return;
L_08A147D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-18080)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[4] = (aot_gpr[4] << 5u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-18080)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(352)));
    aot_gpr[6] = (aot_gpr[4] << 5u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1483C;
      }
      goto L_08A14810;
    }
L_08A14810:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A1486C;
      }
      goto L_08A14818;
    }
L_08A14818:
    aot_gpr[2] = (0u | 0u);
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
L_08A1483C:
    aot_gpr[31] = (0x08A14844u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 49u, 0x089EF294u>(ctx, &aot_mem) && ctx.pc == 0x08A14844u) goto L_08A14844;
    return;
L_08A14844:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(376)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-18080)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A14860;
      }
      goto L_08A14858;
    }
L_08A14858:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A14860;
      }
      goto L_08A14860;
    }
L_08A14860:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(376), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-18080)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A1486C;
L_08A1486C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-18080), aot_gpr[4]);
    aot_gpr[2] = (0u | 1u);
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
L_08A14894:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A149BC;
      }
      goto L_08A148B8;
    }
L_08A148B8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(392));
    aot_gpr[31] = (0x08A148C8u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2540));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A148C8u) goto L_08A148C8;
    return;
L_08A148C8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A148DCu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A148DCu) goto L_08A148DC;
    return;
L_08A148DC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(388));
    aot_gpr[31] = (0x08A148ECu);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2532));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A148ECu) goto L_08A148EC;
    return;
L_08A148EC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A14900u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A14900u) goto L_08A14900;
    return;
L_08A14900:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(424));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A14914u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2520));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A14914u) goto L_08A14914;
    return;
L_08A14914:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(428));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A14928u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2508));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A14928u) goto L_08A14928;
    return;
L_08A14928:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(408));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1493Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2628));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A1493Cu) goto L_08A1493C;
    return;
L_08A1493C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(412));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A14950u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2488));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A14950u) goto L_08A14950;
    return;
L_08A14950:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(416));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A14964u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2468));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A14964u) goto L_08A14964;
    return;
L_08A14964:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(420));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A14978u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2456));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A14978u) goto L_08A14978;
    return;
L_08A14978:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(400));
    aot_gpr[31] = (0x08A14988u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-2604));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A14988u) goto L_08A14988;
    return;
L_08A14988:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1499Cu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1499Cu) goto L_08A1499C;
    return;
L_08A1499C:
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
L_08A149BC:
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
L_08A149DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A14A60;
      }
      goto L_08A14A0C;
    }
L_08A14A0C:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A14A60;
      }
      goto L_08A14A14;
    }
L_08A14A14:
    aot_gpr[31] = (0x08A14A1Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0527_entry, 527u, 205u, 0x08A13C68u>(ctx, &aot_mem) && ctx.pc == 0x08A14A1Cu) goto L_08A14A1C;
    return;
L_08A14A1C:
    aot_gpr[19] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[2]);
    aot_gpr[31] = (0x08A14A2Cu);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-2604));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A14A2Cu) goto L_08A14A2C;
    return;
L_08A14A2C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A14A3Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A14A3Cu) goto L_08A14A3C;
    return;
L_08A14A3C:
    aot_gpr[31] = (0x08A14A44u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A14A44u) goto L_08A14A44;
    return;
L_08A14A44:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A14A50u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A14A50u) goto L_08A14A50;
    return;
L_08A14A50:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A14A88;
      }
      goto L_08A14A58;
    }
L_08A14A58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A14B68;
      }
      goto L_08A14A60;
    }
L_08A14A60:
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
L_08A14A88:
    aot_gpr[31] = (0x08A14A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A14A90u) goto L_08A14A90;
    return;
L_08A14A90:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A14A9Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A14A9Cu) goto L_08A14A9C;
    return;
L_08A14A9C:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
        goto L_08A14AD0;
    }
    goto L_08A14AA4;
L_08A14AA4:
    aot_gpr[31] = (0x08A14AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A14AACu) goto L_08A14AAC;
    return;
L_08A14AAC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A14AB8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A14AB8u) goto L_08A14AB8;
    return;
L_08A14AB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (0x08A14AC4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 49u, 0x089EF294u>(ctx, &aot_mem) && ctx.pc == 0x08A14AC4u) goto L_08A14AC4;
    return;
L_08A14AC4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A14AD4;
      }
      goto L_08A14ACC;
    }
L_08A14ACC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A14AD0;
L_08A14AD0:
    aot_gpr[4] = (2215u << 16u);
    goto L_08A14AD4;
L_08A14AD4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08A14AE4u);
    aot_gpr[21] = (aot_gpr[4] + static_cast<std::uint32_t>(-2576));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A14AE4u) goto L_08A14AE4;
    return;
L_08A14AE4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(100)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A14AF8u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A14AF8u) goto L_08A14AF8;
    return;
L_08A14AF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(112)));
        goto L_08A14B10;
    }
    goto L_08A14B04;
L_08A14B04:
    aot_gpr[31] = (0x08A14B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 49u, 0x089EF294u>(ctx, &aot_mem) && ctx.pc == 0x08A14B0Cu) goto L_08A14B0C;
    return;
L_08A14B0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(112)));
    goto L_08A14B10;
L_08A14B10:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A14B34;
      }
      goto L_08A14B18;
    }
L_08A14B18:
    aot_gpr[31] = (0x08A14B20u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-2556));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A14B20u) goto L_08A14B20;
    return;
L_08A14B20:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A14B30u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A14B30u) goto L_08A14B30;
    return;
L_08A14B30:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_08A14B34;
L_08A14B34:
    aot_gpr[31] = (0x08A14B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A14B3Cu) goto L_08A14B3C;
    return;
L_08A14B3C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A14B4Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A14B4Cu) goto L_08A14B4C;
    return;
L_08A14B4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A14B68u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-2568));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 129u, 0x08A008A4u>(ctx, &aot_mem) && ctx.pc == 0x08A14B68u) goto L_08A14B68;
    return;
L_08A14B68:
    aot_gpr[2] = (0u | 1u);
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
L_08A14B90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(368)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A14BB0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0527_entry, 527u, 205u, 0x08A13C68u>(ctx, &aot_mem) && ctx.pc == 0x08A14BB0u) goto L_08A14BB0;
    return;
L_08A14BB0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14BC4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(324)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A14BF8;
      }
      goto L_08A14BD8;
    }
L_08A14BD8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(384)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(324)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A14BD8;
      }
      goto L_08A14BF8;
    }
L_08A14BF8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14C00:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(324)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08A14C70;
      }
      goto L_08A14C18;
    }
L_08A14C18:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(352)));
    goto L_08A14C20;
L_08A14C20:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(384)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[8] = (aot_gpr[8] << 5u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(352)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (aot_gpr[5] + aot_gpr[8]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(324)));
    aot_fpr[13] = aot_fpr[12] + aot_fpr[14];
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08A14C20;
      }
      goto L_08A14C70;
    }
L_08A14C70:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14C78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(380)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(376), aot_gpr[6]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A14CF8;
      }
      goto L_08A14C9C;
    }
L_08A14C9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(384)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    if (aot_gpr[6] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
        goto L_08A14CCC;
    }
    goto L_08A14CB0;
L_08A14CB0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A14CBCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A14D9C;
L_08A14CBC:
    aot_gpr[31] = (0x08A14CC4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A14C00;
L_08A14CC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A14D8C;
      }
      goto L_08A14CCC;
    }
L_08A14CCC:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[4] - aot_gpr[6]);
      if (branch_taken) {
          goto L_08A14D8C;
      }
      goto L_08A14CDC;
    }
L_08A14CDC:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x08A14CE8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A14D9C;
L_08A14CE8:
    aot_gpr[31] = (0x08A14CF0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A14C00;
L_08A14CF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A14D8C;
      }
      goto L_08A14CF8;
    }
L_08A14CF8:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(384)));
        goto L_08A14D24;
    }
    goto L_08A14D08;
L_08A14D08:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A14D14u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_08A14D9C;
L_08A14D14:
    aot_gpr[31] = (0x08A14D1Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A14C00;
L_08A14D1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A14D8C;
      }
      goto L_08A14D24;
    }
L_08A14D24:
    aot_gpr[7] = (aot_gpr[5] << 2u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A14D58;
      }
      goto L_08A14D3C;
    }
L_08A14D3C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A14D48u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A14D9C;
L_08A14D48:
    aot_gpr[31] = (0x08A14D50u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A14C00;
L_08A14D50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A14D8C;
      }
      goto L_08A14D58;
    }
L_08A14D58:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
    aot_gpr[8] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-4)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A14D8C;
      }
      goto L_08A14D74;
    }
L_08A14D74:
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[31] = (0x08A14D84u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A14D9C;
L_08A14D84:
    aot_gpr[31] = (0x08A14D8Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A14C00;
L_08A14D8C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14D9C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(380)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A14DC4;
      }
      goto L_08A14DA8;
    }
L_08A14DA8:
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    if (aot_gpr[8] == 0u) {
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(324)));
        goto L_08A14DC8;
    }
    goto L_08A14DB4;
L_08A14DB4:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A14DB8;
L_08A14DB8:
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A14DB8;
      }
      goto L_08A14DC4;
    }
L_08A14DC4:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(324)));
    goto L_08A14DC8;
L_08A14DC8:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (aot_gpr[6] << 2u);
      if (branch_taken) {
          goto L_08A14E04;
      }
      goto L_08A14DD8;
    }
L_08A14DD8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(380)));
    aot_gpr[9] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(384)));
    aot_gpr[8] = (aot_gpr[9] - aot_gpr[8]);
    aot_gpr[9] = (aot_gpr[10] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(324)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A14DD8;
      }
      goto L_08A14E04;
    }
L_08A14E04:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14E0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A14E20u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A14E20u) goto L_08A14E20;
    return;
L_08A14E20:
    aot_gpr[31] = (0x08A14E28u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A14E28u) goto L_08A14E28;
    return;
L_08A14E28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1711u);
    aot_gpr[31] = (0x08A14E48u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-2720));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A14E48u) goto L_08A14E48;
    return;
L_08A14E48:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(384), aot_gpr[2]);
    aot_gpr[31] = (0x08A14E54u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A14BC4;
L_08A14E54:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14E64:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(392)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(336)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_fpr[12] = aot_fpr[13] + aot_fpr[12];
      if (branch_taken) {
          goto L_08A14EC8;
      }
      goto L_08A14E84;
    }
L_08A14E84:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(356)));
    aot_gpr[5] = (0u | 0u);
    goto L_08A14E8C;
L_08A14E8C:
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(356)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[5]);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(336)));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
      if (branch_taken) {
          goto L_08A14E8C;
      }
      goto L_08A14EC8;
    }
L_08A14EC8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A14ED0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[31] = (0x08A14F08u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 215u, 0x08A46CCCu>(ctx, &aot_mem) && ctx.pc == 0x08A14F08u) goto L_08A14F08;
    return;
L_08A14F08:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(14792));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[31] = (0x08A14F1Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0530_entry, 530u, 63u, 0x08A16428u>(ctx, &aot_mem) && ctx.pc == 0x08A14F1Cu) goto L_08A14F1C;
    return;
L_08A14F1C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x08A14F30u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-2436));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A14F30u) goto L_08A14F30;
    return;
L_08A14F30:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A14F44u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A14F44u) goto L_08A14F44;
    return;
L_08A14F44:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(328));
    aot_gpr[31] = (0x08A14F58u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(-2424));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A14F58u) goto L_08A14F58;
    return;
L_08A14F58:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A14F6Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A14F6Cu) goto L_08A14F6C;
    return;
L_08A14F6C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(460));
    aot_gpr[20] = (aot_gpr[17] + static_cast<std::uint32_t>(440));
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(444));
    aot_gpr[22] = (aot_gpr[17] + static_cast<std::uint32_t>(448));
    aot_gpr[23] = (aot_gpr[17] + static_cast<std::uint32_t>(452));
    aot_gpr[30] = (aot_gpr[17] + static_cast<std::uint32_t>(456));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A14FBC;
      }
      goto L_08A14F90;
    }
L_08A14F90:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[30]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A14FA0u);
    aot_gpr[30] = (aot_gpr[4] + static_cast<std::uint32_t>(-2416));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A14FA0u) goto L_08A14FA0;
    return;
L_08A14FA0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A14FB4u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A14FB4u) goto L_08A14FB4;
    return;
L_08A14FB4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08A14FBC;
L_08A14FBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[30]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(324));
    aot_gpr[31] = (0x08A14FD0u);
    aot_gpr[30] = (aot_gpr[4] + static_cast<std::uint32_t>(-2400));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A14FD0u) goto L_08A14FD0;
    return;
L_08A14FD0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A14FE4u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A14FE4u) goto L_08A14FE4;
    return;
L_08A14FE4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(380));
    aot_gpr[31] = (0x08A14FF8u);
    aot_gpr[30] = (aot_gpr[4] + static_cast<std::uint32_t>(-2388));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A14FF8u) goto L_08A14FF8;
    return;
L_08A14FF8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    ctx.pc = 0x08A15000u; return;
}

void recomp_unit_0528(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0528_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_528(Runtime &runtime) {
    runtime.register_generated_unit(528u, 0x08A14000u, 4096u, &recomp_unit_0528, &recomp_unit_0528_entry);
    runtime.register_function(0x08A14004u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A1400Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14014u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A1401Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14024u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14040u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14050u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14054u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14064u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14074u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A1407Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14088u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14090u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14098u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A140A4u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A140B0u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A140C8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A140D0u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A140DCu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A140E8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A140F0u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A140F8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14108u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14110u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14118u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14120u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A1412Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14134u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A1413Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A1414Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14158u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14160u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A1416Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14170u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14178u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14180u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14198u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A141ACu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A141B4u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A141BCu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A141E0u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14208u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A1422Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14244u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A1424Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14258u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14264u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14294u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A142B4u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A142BCu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A142DCu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A142F0u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A142F4u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14340u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A1434Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14354u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14360u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A1436Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14370u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14378u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14384u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14390u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14398u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A143A0u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A143A8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A143B0u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A143BCu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A143C8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A143E4u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A1441Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14424u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A1443Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14468u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14478u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A1448Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A144A4u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A144ACu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A144B4u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A144C8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A144D8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A144ECu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A144F4u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14500u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A1450Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14514u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14540u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14550u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14558u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14564u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14570u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14578u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14580u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14588u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A1459Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A145A0u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A145A8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A145B8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A145C0u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A145DCu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A145E4u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A145F4u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A145FCu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14604u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14610u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A1461Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14624u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14630u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A1465Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14684u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A146ACu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A146C0u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A146C8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A146D4u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14700u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14734u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14748u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A1476Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14778u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14788u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A147B4u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A147D8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14810u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14818u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A1483Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14844u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14858u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14860u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A1486Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14894u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A148B8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A148C8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A148DCu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A148ECu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14900u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14914u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14928u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A1493Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14950u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14964u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14978u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14988u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A1499Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A149BCu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A149DCu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14A0Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14A14u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14A1Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14A2Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14A3Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14A44u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14A50u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14A58u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14A60u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14A88u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14A90u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14A9Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14AA4u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14AACu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14AB8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14AC4u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14ACCu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14AD0u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14AD4u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14AE4u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14AF8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14B04u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14B0Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14B10u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14B18u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14B20u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14B30u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14B34u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14B3Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14B4Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14B68u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14B90u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14BB0u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14BC4u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14BD8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14BF8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14C00u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14C18u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14C20u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14C70u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14C78u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14C9Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14CB0u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14CBCu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14CC4u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14CCCu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14CDCu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14CE8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14CF0u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14CF8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14D08u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14D14u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14D1Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14D24u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14D3Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14D48u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14D50u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14D58u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14D74u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14D84u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14D8Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14D9Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14DA8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14DB4u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14DB8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14DC4u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14DC8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14DD8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14E04u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14E0Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14E20u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14E28u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14E48u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14E54u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14E64u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14E84u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14E8Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14EC8u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14ED0u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14F08u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14F1Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14F30u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14F44u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14F58u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14F6Cu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14F90u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14FA0u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14FB4u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14FBCu, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14FD0u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14FE4u, &recomp_unit_0528, "recomp_unit_0528");
    runtime.register_function(0x08A14FF8u, &recomp_unit_0528, "recomp_unit_0528");
}
} // namespace psprecomp
