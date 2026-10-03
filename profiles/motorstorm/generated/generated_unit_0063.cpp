#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0063[1022] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 15, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 22, 0, 23, 0, 0,
    0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0,
    0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 36,
    0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 46, 0, 0, 0,
    0, 47, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 58, 0, 0, 59,
    0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0,
    66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 76, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0,
    79, 0, 80, 0, 81, 0, 82, 0, 0, 83, 0, 0, 84, 0, 85, 0, 0, 86, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0, 90, 0, 0, 91,
    92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101,
    0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0,
    113, 0, 114, 0, 0, 115, 0, 0, 116, 0, 117, 0, 0, 118, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 0, 123, 0, 124, 0, 125,
    0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 136, 0, 137, 0, 138, 0, 0, 139, 0, 140, 0, 0, 141, 0, 142, 0, 0, 143, 0, 144, 0, 145,
    0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 0, 149, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 157, 0, 0, 158, 0, 159, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0,
    0, 0, 164, 0, 165, 0, 166, 167, 0, 168, 0, 169, 0, 0, 170, 0, 171, 0, 172, 0, 0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 0,
    178, 0, 0, 179, 0, 0, 180, 0, 181, 182, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0,
    0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190,
    0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 202, 203, 0, 204, 205, 0, 206, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0,
    0, 209, 0, 210, 0, 211, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 217,
};
void recomp_unit_0063_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08843000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0063[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08843000;
    case 2u: goto L_0884300C;
    case 3u: goto L_08843014;
    case 4u: goto L_08843030;
    case 5u: goto L_08843038;
    case 6u: goto L_08843050;
    case 7u: goto L_08843084;
    case 8u: goto L_088430A4;
    case 9u: goto L_088430E0;
    case 10u: goto L_088430E8;
    case 11u: goto L_08843108;
    case 12u: goto L_08843118;
    case 13u: goto L_08843148;
    case 14u: goto L_08843154;
    case 15u: goto L_0884315C;
    case 16u: goto L_08843160;
    case 17u: goto L_08843194;
    case 18u: goto L_088431B0;
    case 19u: goto L_088431B8;
    case 20u: goto L_088431CC;
    case 21u: goto L_088431E4;
    case 22u: goto L_088431EC;
    case 23u: goto L_088431F4;
    case 24u: goto L_08843208;
    case 25u: goto L_08843214;
    case 26u: goto L_08843260;
    case 27u: goto L_0884326C;
    case 28u: goto L_08843284;
    case 29u: goto L_0884329C;
    case 30u: goto L_088432B4;
    case 31u: goto L_088432C0;
    case 32u: goto L_088432CC;
    case 33u: goto L_088432D8;
    case 34u: goto L_088432E4;
    case 35u: goto L_088432F0;
    case 36u: goto L_088432FC;
    case 37u: goto L_08843308;
    case 38u: goto L_08843314;
    case 39u: goto L_08843320;
    case 40u: goto L_0884332C;
    case 41u: goto L_08843338;
    case 42u: goto L_08843344;
    case 43u: goto L_08843350;
    case 44u: goto L_0884335C;
    case 45u: goto L_08843368;
    case 46u: goto L_08843370;
    case 47u: goto L_08843384;
    case 48u: goto L_08843394;
    case 49u: goto L_088433A0;
    case 50u: goto L_088433B0;
    case 51u: goto L_088433B8;
    case 52u: goto L_088433C8;
    case 53u: goto L_0884342C;
    case 54u: goto L_08843438;
    case 55u: goto L_08843444;
    case 56u: goto L_0884345C;
    case 57u: goto L_08843464;
    case 58u: goto L_08843470;
    case 59u: goto L_0884347C;
    case 60u: goto L_088434A0;
    case 61u: goto L_088434CC;
    case 62u: goto L_08843520;
    case 63u: goto L_08843538;
    case 64u: goto L_08843550;
    case 65u: goto L_08843568;
    case 66u: goto L_08843580;
    case 67u: goto L_08843598;
    case 68u: goto L_088435B0;
    case 69u: goto L_088435C8;
    case 70u: goto L_088435DC;
    case 71u: goto L_088435F4;
    case 72u: goto L_0884360C;
    case 73u: goto L_08843628;
    case 74u: goto L_08843638;
    case 75u: goto L_0884364C;
    case 76u: goto L_08843654;
    case 77u: goto L_08843660;
    case 78u: goto L_08843668;
    case 79u: goto L_08843680;
    case 80u: goto L_08843688;
    case 81u: goto L_08843690;
    case 82u: goto L_08843698;
    case 83u: goto L_088436A4;
    case 84u: goto L_088436B0;
    case 85u: goto L_088436B8;
    case 86u: goto L_088436C4;
    case 87u: goto L_088436CC;
    case 88u: goto L_088436DC;
    case 89u: goto L_088436E4;
    case 90u: goto L_088436F0;
    case 91u: goto L_088436FC;
    case 92u: goto L_08843700;
    case 93u: goto L_08843720;
    case 94u: goto L_08843744;
    case 95u: goto L_08843758;
    case 96u: goto L_08843778;
    case 97u: goto L_088437A0;
    case 98u: goto L_088437B0;
    case 99u: goto L_088437B8;
    case 100u: goto L_088437D4;
    case 101u: goto L_088437FC;
    case 102u: goto L_0884380C;
    case 103u: goto L_08843828;
    case 104u: goto L_0884384C;
    case 105u: goto L_08843858;
    case 106u: goto L_08843868;
    case 107u: goto L_08843880;
    case 108u: goto L_088438A8;
    case 109u: goto L_088438B8;
    case 110u: goto L_088438CC;
    case 111u: goto L_088438F0;
    case 112u: goto L_088438F8;
    case 113u: goto L_08843900;
    case 114u: goto L_08843908;
    case 115u: goto L_08843914;
    case 116u: goto L_08843920;
    case 117u: goto L_08843928;
    case 118u: goto L_08843934;
    case 119u: goto L_0884393C;
    case 120u: goto L_0884394C;
    case 121u: goto L_08843954;
    case 122u: goto L_08843960;
    case 123u: goto L_0884396C;
    case 124u: goto L_08843974;
    case 125u: goto L_0884397C;
    case 126u: goto L_088439A0;
    case 127u: goto L_088439C8;
    case 128u: goto L_088439F0;
    case 129u: goto L_08843A18;
    case 130u: goto L_08843A2C;
    case 131u: goto L_08843A54;
    case 132u: goto L_08843A60;
    case 133u: goto L_08843A84;
    case 134u: goto L_08843A94;
    case 135u: goto L_08843AA0;
    case 136u: goto L_08843AA8;
    case 137u: goto L_08843AB0;
    case 138u: goto L_08843AB8;
    case 139u: goto L_08843AC4;
    case 140u: goto L_08843ACC;
    case 141u: goto L_08843AD8;
    case 142u: goto L_08843AE0;
    case 143u: goto L_08843AEC;
    case 144u: goto L_08843AF4;
    case 145u: goto L_08843AFC;
    case 146u: goto L_08843B08;
    case 147u: goto L_08843B14;
    case 148u: goto L_08843B20;
    case 149u: goto L_08843B30;
    case 150u: goto L_08843B34;
    case 151u: goto L_08843B5C;
    case 152u: goto L_08843B80;
    case 153u: goto L_08843BA4;
    case 154u: goto L_08843BC8;
    case 155u: goto L_08843BDC;
    case 156u: goto L_08843BF0;
    case 157u: goto L_08843C08;
    case 158u: goto L_08843C14;
    case 159u: goto L_08843C1C;
    case 160u: goto L_08843C24;
    case 161u: goto L_08843C30;
    case 162u: goto L_08843CF0;
    case 163u: goto L_08843CF8;
    case 164u: goto L_08843D08;
    case 165u: goto L_08843D10;
    case 166u: goto L_08843D18;
    case 167u: goto L_08843D1C;
    case 168u: goto L_08843D24;
    case 169u: goto L_08843D2C;
    case 170u: goto L_08843D38;
    case 171u: goto L_08843D40;
    case 172u: goto L_08843D48;
    case 173u: goto L_08843D54;
    case 174u: goto L_08843D5C;
    case 175u: goto L_08843D64;
    case 176u: goto L_08843D6C;
    case 177u: goto L_08843D74;
    case 178u: goto L_08843D80;
    case 179u: goto L_08843D8C;
    case 180u: goto L_08843D98;
    case 181u: goto L_08843DA0;
    case 182u: goto L_08843DA4;
    case 183u: goto L_08843DB4;
    case 184u: goto L_08843DC0;
    case 185u: goto L_08843DD4;
    case 186u: goto L_08843DE4;
    case 187u: goto L_08843DF4;
    case 188u: goto L_08843E04;
    case 189u: goto L_08843E10;
    case 190u: goto L_08843E7C;
    case 191u: goto L_08843E88;
    case 192u: goto L_08843E94;
    case 193u: goto L_08843EAC;
    case 194u: goto L_08843EB4;
    case 195u: goto L_08843EC0;
    case 196u: goto L_08843ECC;
    case 197u: goto L_08843EDC;
    case 198u: goto L_08843EE8;
    case 199u: goto L_08843EF4;
    case 200u: goto L_08843F20;
    case 201u: goto L_08843F28;
    case 202u: goto L_08843F38;
    case 203u: goto L_08843F3C;
    case 204u: goto L_08843F44;
    case 205u: goto L_08843F48;
    case 206u: goto L_08843F50;
    case 207u: goto L_08843F58;
    case 208u: goto L_08843F6C;
    case 209u: goto L_08843F84;
    case 210u: goto L_08843F8C;
    case 211u: goto L_08843F94;
    case 212u: goto L_08843FA0;
    case 213u: goto L_08843FB4;
    case 214u: goto L_08843FC0;
    case 215u: goto L_08843FE0;
    case 216u: goto L_08843FE8;
    case 217u: goto L_08843FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08843000:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08843030;
      }
      goto L_0884300C;
    }
L_0884300C:
    aot_gpr[31] = (0x08843014u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 76u, 0x0888D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08843014u) goto L_08843014;
    return;
L_08843014:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08843050;
      }
      goto L_08843030;
    }
L_08843030:
    aot_gpr[31] = (0x08843038u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 76u, 0x0888D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08843038u) goto L_08843038;
    return;
L_08843038:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08843050;
L_08843050:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843084:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23888), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088430A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-5456));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088430E0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5436));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088430E0u) goto L_088430E0;
    return;
L_088430E0:
    aot_gpr[31] = (0x088430E8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x088430E8u) goto L_088430E8;
    return;
L_088430E8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4888)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08843108u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5428));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08843108u) goto L_08843108;
    return;
L_08843108:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08843118u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x08843118u) goto L_08843118;
    return;
L_08843118:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (1u << 16u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08843148u);
    aot_gpr[5] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843148u) goto L_08843148;
    return;
L_08843148:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843160;
      }
      goto L_08843154;
    }
L_08843154:
    aot_gpr[31] = (0x0884315Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 70u, 0x088C6608u>(ctx, &aot_mem) && ctx.pc == 0x0884315Cu) goto L_0884315C;
    return;
L_0884315C:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    goto L_08843160;
L_08843160:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
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
L_08843194:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088431B8;
      }
      goto L_088431B0;
    }
L_088431B0:
    aot_gpr[31] = (0x088431B8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 72u, 0x088C6630u>(ctx, &aot_mem) && ctx.pc == 0x088431B8u) goto L_088431B8;
    return;
L_088431B8:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088431CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(31)));
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_088431F4;
      }
      goto L_088431E4;
    }
L_088431E4:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_088431F4;
      }
      goto L_088431EC;
    }
L_088431EC:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08843208;
      }
      goto L_088431F4;
    }
L_088431F4:
    aot_gpr[4] = (17264u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (17184u << 16u);
    aot_gpr[31] = (0x08843208u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 103u, 0x0889A594u>(ctx, &aot_mem) && ctx.pc == 0x08843208u) goto L_08843208;
    return;
L_08843208:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843214:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    aot_gpr[31] = (0x08843260u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 152u, 0x0881CAA0u>(ctx, &aot_mem) && ctx.pc == 0x08843260u) goto L_08843260;
    return;
L_08843260:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0884326Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 153u, 0x0881CABCu>(ctx, &aot_mem) && ctx.pc == 0x0884326Cu) goto L_0884326C;
    return;
L_0884326C:
    aot_gpr[4] = (aot_gpr[2] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[5] = (aot_gpr[4] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[31] = (0x08843284u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08843284u) goto L_08843284;
    return;
L_08843284:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(26)));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08843370;
      }
      goto L_0884329C;
    }
L_0884329C:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[5]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-5168)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088432B4:
    aot_gpr[4] = (0u | 128u);
    aot_gpr[31] = (0x088432C0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088432C0u) goto L_088432C0;
    return;
L_088432C0:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08843370;
      }
      goto L_088432CC;
    }
L_088432CC:
    aot_gpr[4] = (0u | 123u);
    aot_gpr[31] = (0x088432D8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088432D8u) goto L_088432D8;
    return;
L_088432D8:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08843370;
      }
      goto L_088432E4;
    }
L_088432E4:
    aot_gpr[4] = (0u | 125u);
    aot_gpr[31] = (0x088432F0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088432F0u) goto L_088432F0;
    return;
L_088432F0:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08843370;
      }
      goto L_088432FC;
    }
L_088432FC:
    aot_gpr[4] = (0u | 129u);
    aot_gpr[31] = (0x08843308u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08843308u) goto L_08843308;
    return;
L_08843308:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08843370;
      }
      goto L_08843314;
    }
L_08843314:
    aot_gpr[4] = (0u | 126u);
    aot_gpr[31] = (0x08843320u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08843320u) goto L_08843320;
    return;
L_08843320:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08843370;
      }
      goto L_0884332C;
    }
L_0884332C:
    aot_gpr[4] = (0u | 122u);
    aot_gpr[31] = (0x08843338u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08843338u) goto L_08843338;
    return;
L_08843338:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08843370;
      }
      goto L_08843344;
    }
L_08843344:
    aot_gpr[4] = (0u | 124u);
    aot_gpr[31] = (0x08843350u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08843350u) goto L_08843350;
    return;
L_08843350:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08843370;
      }
      goto L_0884335C;
    }
L_0884335C:
    aot_gpr[4] = (0u | 127u);
    aot_gpr[31] = (0x08843368u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08843368u) goto L_08843368;
    return;
L_08843368:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(32)));
    goto L_08843370;
L_08843370:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088433A0;
      }
      goto L_08843384;
    }
L_08843384:
    aot_gpr[21] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (0u | 130u);
    aot_gpr[31] = (0x08843394u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08843394u) goto L_08843394;
    return;
L_08843394:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088433B8;
      }
      goto L_088433A0;
    }
L_088433A0:
    aot_gpr[21] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (0u | 131u);
    aot_gpr[31] = (0x088433B0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x088433B0u) goto L_088433B0;
    return;
L_088433B0:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32)));
    goto L_088433B8;
L_088433B8:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_08843464;
      }
      goto L_088433C8;
    }
L_088433C8:
    { const std::uint32_t dividend = aot_gpr[23]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (0u | 1000u);
    aot_gpr[7] = (0u | 60000u);
    aot_gpr[5] = (0u | 100u);
    aot_gpr[6] = (0u | 60u);
    aot_gpr[8] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[23]; const std::uint32_t divisor = aot_gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[23]; const std::uint32_t divisor = aot_gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[23] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[8]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[21] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (aot_gpr[23] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    aot_gpr[22] = (ctx.hi);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08843438;
      }
      goto L_0884342C;
    }
L_0884342C:
    aot_gpr[21] = (0u | 99u);
    aot_gpr[22] = (0u | 59u);
    aot_gpr[23] = (aot_gpr[21] | 0u);
    goto L_08843438;
L_08843438:
    aot_gpr[4] = (0u | 109u);
    aot_gpr[31] = (0x08843444u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08843444u) goto L_08843444;
    return;
L_08843444:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0884345Cu);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0884345Cu) goto L_0884345C;
    return;
L_0884345C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884347C;
      }
      goto L_08843464;
    }
L_08843464:
    aot_gpr[4] = (0u | 108u);
    aot_gpr[31] = (0x08843470u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08843470u) goto L_08843470;
    return;
L_08843470:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0884347Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0884347Cu) goto L_0884347C;
    return;
L_0884347C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    aot_gpr[9] = (aot_gpr[19] | 0u);
    aot_gpr[10] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088434A0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5416));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088434A0u) goto L_088434A0;
    return;
L_088434A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088434CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-832));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(812), aot_gpr[21]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[21] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(796), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[4] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(792), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-5456));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(800), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(804), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(808), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(816), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(820), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(824), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(828), aot_gpr[31]);
    aot_gpr[31] = (0x08843520u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5436));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08843520u) goto L_08843520;
    return;
L_08843520:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08843538u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5428));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08843538u) goto L_08843538;
    return;
L_08843538:
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(772), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08843550u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08843550u) goto L_08843550;
    return;
L_08843550:
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(780), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08843568u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5384));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08843568u) goto L_08843568;
    return;
L_08843568:
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(776), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08843580u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5368));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08843580u) goto L_08843580;
    return;
L_08843580:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08843598u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5348));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08843598u) goto L_08843598;
    return;
L_08843598:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088435B0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5336));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088435B0u) goto L_088435B0;
    return;
L_088435B0:
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(756), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088435C8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5324));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088435C8u) goto L_088435C8;
    return;
L_088435C8:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088435DCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5312));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088435DCu) goto L_088435DC;
    return;
L_088435DC:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088435F4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5296));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088435F4u) goto L_088435F4;
    return;
L_088435F4:
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(764), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884360Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5284));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884360Cu) goto L_0884360C;
    return;
L_0884360C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(768), aot_gpr[2]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-28696)));
    aot_gpr[30] = (0u | 0u);
    aot_gpr[18] = (0u | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(760), aot_gpr[19]);
      if (branch_taken) {
          goto L_08843660;
      }
      goto L_08843628;
    }
L_08843628:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08843660;
      }
      goto L_08843638;
    }
L_08843638:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26528)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08843660;
      }
      goto L_0884364C;
    }
L_0884364C:
    aot_gpr[31] = (0x08843654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 178u, 0x0889FEB8u>(ctx, &aot_mem) && ctx.pc == 0x08843654u) goto L_08843654;
    return;
L_08843654:
    aot_gpr[30] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08843668;
      }
      goto L_08843660;
    }
L_08843660:
    aot_gpr[31] = (0x08843668u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x08843668u) goto L_08843668;
    return;
L_08843668:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & 2048u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08843758;
      }
      goto L_08843680;
    }
L_08843680:
    aot_gpr[31] = (0x08843688u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x08843688u) goto L_08843688;
    return;
L_08843688:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843700;
      }
      goto L_08843690;
    }
L_08843690:
    aot_gpr[31] = (0x08843698u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x08843698u) goto L_08843698;
    return;
L_08843698:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088436A4u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 175u, 0x0888CADCu>(ctx, &aot_mem) && ctx.pc == 0x088436A4u) goto L_088436A4;
    return;
L_088436A4:
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843700;
      }
      goto L_088436B0;
    }
L_088436B0:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843700;
      }
      goto L_088436B8;
    }
L_088436B8:
    aot_gpr[16] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843700;
      }
      goto L_088436C4;
    }
L_088436C4:
    aot_gpr[31] = (0x088436CCu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 175u, 0x0888CADCu>(ctx, &aot_mem) && ctx.pc == 0x088436CCu) goto L_088436CC;
    return;
L_088436CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843700;
      }
      goto L_088436DC;
    }
L_088436DC:
    aot_gpr[31] = (0x088436E4u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 175u, 0x0888CADCu>(ctx, &aot_mem) && ctx.pc == 0x088436E4u) goto L_088436E4;
    return;
L_088436E4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088436F0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 21u, 0x0889F150u>(ctx, &aot_mem) && ctx.pc == 0x088436F0u) goto L_088436F0;
    return;
L_088436F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843700;
      }
      goto L_088436FC;
    }
L_088436FC:
    aot_gpr[19] = (0u | 1u);
    goto L_08843700;
L_08843700:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-5456));
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(788), static_cast<std::uint8_t>(aot_gpr[19]));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08843720u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5324));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08843720u) goto L_08843720;
    return;
L_08843720:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08843744u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5272));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08843744u) goto L_08843744;
    return;
L_08843744:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(788)));
      if (branch_taken) {
          goto L_088437B0;
      }
      goto L_08843758;
    }
L_08843758:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-5456));
    aot_gpr[6] = (2214u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(788), static_cast<std::uint8_t>(aot_gpr[19]));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08843778u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5324));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08843778u) goto L_08843778;
    return;
L_08843778:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088437A0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5272));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088437A0u) goto L_088437A0;
    return;
L_088437A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(788)));
    goto L_088437B0;
L_088437B0:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884380C;
      }
      goto L_088437B8;
    }
L_088437B8:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-5456));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088437D4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5252));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088437D4u) goto L_088437D4;
    return;
L_088437D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088437FCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5236));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088437FCu) goto L_088437FC;
    return;
L_088437FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08843858;
      }
      goto L_0884380C;
    }
L_0884380C:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-5456));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08843828u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5252));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08843828u) goto L_08843828;
    return;
L_08843828:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0884384Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5236));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0884384Cu) goto L_0884384C;
    return;
L_0884384C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08843858;
L_08843858:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(31)));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 127u, 0x0884476Cu>(ctx, &aot_mem); return;
      }
      goto L_08843868;
    }
L_08843868:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-5136)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843880:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(756)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088438CC;
      }
      goto L_088438A8;
    }
L_088438A8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088438B8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5212));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088438B8u) goto L_088438B8;
    return;
L_088438B8:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08843C14;
      }
      goto L_088438CC;
    }
L_088438CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(772)));
        goto L_0884397C;
    }
    goto L_088438F0;
L_088438F0:
    aot_gpr[31] = (0x088438F8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x088438F8u) goto L_088438F8;
    return;
L_088438F8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843C14;
      }
      goto L_08843900;
    }
L_08843900:
    aot_gpr[31] = (0x08843908u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 177u, 0x0888CAFCu>(ctx, &aot_mem) && ctx.pc == 0x08843908u) goto L_08843908;
    return;
L_08843908:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08843914u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 175u, 0x0888CADCu>(ctx, &aot_mem) && ctx.pc == 0x08843914u) goto L_08843914;
    return;
L_08843914:
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843C14;
      }
      goto L_08843920;
    }
L_08843920:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843C14;
      }
      goto L_08843928;
    }
L_08843928:
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843974;
      }
      goto L_08843934;
    }
L_08843934:
    aot_gpr[31] = (0x0884393Cu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 175u, 0x0888CADCu>(ctx, &aot_mem) && ctx.pc == 0x0884393Cu) goto L_0884393C;
    return;
L_0884393C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843974;
      }
      goto L_0884394C;
    }
L_0884394C:
    aot_gpr[31] = (0x08843954u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 175u, 0x0888CADCu>(ctx, &aot_mem) && ctx.pc == 0x08843954u) goto L_08843954;
    return;
L_08843954:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08843960u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 21u, 0x0889F150u>(ctx, &aot_mem) && ctx.pc == 0x08843960u) goto L_08843960;
    return;
L_08843960:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843974;
      }
      goto L_0884396C;
    }
L_0884396C:
    aot_gpr[4] = (0u | 8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08843974;
L_08843974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08843C14;
      }
      goto L_0884397C;
    }
L_0884397C:
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (16384u << 16u);
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(776)));
      if (branch_taken) {
          goto L_08843A18;
      }
      goto L_088439A0;
    }
L_088439A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(760)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (16384u << 16u);
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08843A18;
      }
      goto L_088439C8;
    }
L_088439C8:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(764)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (16384u << 16u);
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08843A18;
      }
      goto L_088439F0;
    }
L_088439F0:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(768)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (16384u << 16u);
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843A60;
      }
      goto L_08843A18;
    }
L_08843A18:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08843A2Cu);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 59u, 0x088C647Cu>(ctx, &aot_mem) && ctx.pc == 0x08843A2Cu) goto L_08843A2C;
    return;
L_08843A2C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5180));
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5192));
    aot_gpr[31] = (0x08843A54u);
    aot_gpr[9] = (1u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 124u, 0x08888C78u>(ctx, &aot_mem) && ctx.pc == 0x08843A54u) goto L_08843A54;
    return;
L_08843A54:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08843C14;
      }
      goto L_08843A60;
    }
L_08843A60:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (49152u << 16u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[6] = (32768u << 16u);
    aot_gpr[5] = (aot_gpr[5] ^ aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843AA8;
      }
      goto L_08843A84;
    }
L_08843A84:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08843A94u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5456));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08843A94u) goto L_08843A94;
    return;
L_08843A94:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x08843AA0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 58u, 0x0888A3D0u>(ctx, &aot_mem) && ctx.pc == 0x08843AA0u) goto L_08843AA0;
    return;
L_08843AA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08843C14;
      }
      goto L_08843AA8;
    }
L_08843AA8:
    aot_gpr[31] = (0x08843AB0u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08843AB0u) goto L_08843AB0;
    return;
L_08843AB0:
    { const bool branch_taken = aot_gpr[22] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08843AF4;
      }
      goto L_08843AB8;
    }
L_08843AB8:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08843AC4u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08843AC4u) goto L_08843AC4;
    return;
L_08843AC4:
    { const bool branch_taken = aot_gpr[22] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08843AF4;
      }
      goto L_08843ACC;
    }
L_08843ACC:
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(28))))));
    aot_gpr[31] = (0x08843AD8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08843AD8u) goto L_08843AD8;
    return;
L_08843AD8:
    { const bool branch_taken = aot_gpr[22] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08843AF4;
      }
      goto L_08843AE0;
    }
L_08843AE0:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x08843AECu);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08843AECu) goto L_08843AEC;
    return;
L_08843AEC:
    { const bool branch_taken = aot_gpr[22] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_08843B30;
      }
      goto L_08843AF4;
    }
L_08843AF4:
    aot_gpr[31] = (0x08843AFCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(772)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08843AFCu) goto L_08843AFC;
    return;
L_08843AFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x08843B08u);
    aot_gpr[4] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08843B08u) goto L_08843B08;
    return;
L_08843B08:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[31] = (0x08843B14u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08843B14u) goto L_08843B14;
    return;
L_08843B14:
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[31] = (0x08843B20u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08843B20u) goto L_08843B20;
    return;
L_08843B20:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08843B34;
      }
      goto L_08843B30;
    }
L_08843B30:
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    goto L_08843B34;
L_08843B34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(772)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08843BC8;
      }
      goto L_08843B5C;
    }
L_08843B5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08843BC8;
      }
      goto L_08843B80;
    }
L_08843B80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08843BC8;
      }
      goto L_08843BA4;
    }
L_08843BA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843C14;
      }
      goto L_08843BC8;
    }
L_08843BC8:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-5456));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08843BDCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08843BDCu) goto L_08843BDC;
    return;
L_08843BDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[31] = (0x08843BF0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08843BF0u) goto L_08843BF0;
    return;
L_08843BF0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08843C08u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-5436));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08843C08u) goto L_08843C08;
    return;
L_08843C08:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08843C14u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 58u, 0x0888A3D0u>(ctx, &aot_mem) && ctx.pc == 0x08843C14u) goto L_08843C14;
    return;
L_08843C14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 127u, 0x0884476Cu>(ctx, &aot_mem); return;
      }
      goto L_08843C1C;
    }
L_08843C1C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843D10;
      }
      goto L_08843C24;
    }
L_08843C24:
    aot_gpr[16] = (aot_gpr[30] + static_cast<std::uint32_t>(1256));
    aot_gpr[31] = (0x08843C30u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 35u, 0x0889F2BCu>(ctx, &aot_mem) && ctx.pc == 0x08843C30u) goto L_08843C30;
    return;
L_08843C30:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[17] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(28))))));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[5] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1)));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(3)));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] << 24u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 24u));
    aot_gpr[5] = (aot_gpr[8] << 24u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[4] = (aot_gpr[4] << 24u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08843CF0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08843CF0u) goto L_08843CF0;
    return;
L_08843CF0:
    aot_gpr[31] = (0x08843CF8u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x08843CF8u) goto L_08843CF8;
    return;
L_08843CF8:
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08843D08u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 36u, 0x0889F2D8u>(ctx, &aot_mem) && ctx.pc == 0x08843D08u) goto L_08843D08;
    return;
L_08843D08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08843D1C;
      }
      goto L_08843D10;
    }
L_08843D10:
    aot_gpr[31] = (0x08843D18u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 128u, 0x0888C7D4u>(ctx, &aot_mem) && ctx.pc == 0x08843D18u) goto L_08843D18;
    return;
L_08843D18:
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    goto L_08843D1C;
L_08843D1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 127u, 0x0884476Cu>(ctx, &aot_mem); return;
      }
      goto L_08843D24;
    }
L_08843D24:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843F44;
      }
      goto L_08843D2C;
    }
L_08843D2C:
    aot_gpr[4] = (aot_gpr[30] + static_cast<std::uint32_t>(1256));
    aot_gpr[31] = (0x08843D38u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(784), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 59u, 0x0889F48Cu>(ctx, &aot_mem) && ctx.pc == 0x08843D38u) goto L_08843D38;
    return;
L_08843D38:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(784)));
      if (branch_taken) {
          goto L_08843D64;
      }
      goto L_08843D40;
    }
L_08843D40:
    aot_gpr[31] = (0x08843D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 60u, 0x0889F49Cu>(ctx, &aot_mem) && ctx.pc == 0x08843D48u) goto L_08843D48;
    return;
L_08843D48:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08843D5C;
      }
      goto L_08843D54;
    }
L_08843D54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08843D5C;
      }
      goto L_08843D5C;
    }
L_08843D5C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08843F3C;
      }
      goto L_08843D64;
    }
L_08843D64:
    aot_gpr[31] = (0x08843D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 58u, 0x0889F47Cu>(ctx, &aot_mem) && ctx.pc == 0x08843D6Cu) goto L_08843D6C;
    return;
L_08843D6C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843F3C;
      }
      goto L_08843D74;
    }
L_08843D74:
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843F38;
      }
      goto L_08843D80;
    }
L_08843D80:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD16(aot_gpr[30] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x08843D8Cu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x0888CB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08843D8Cu) goto L_08843D8C;
    return;
L_08843D8C:
    aot_gpr[4] = (aot_gpr[2] < aot_gpr[23] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843DA4;
      }
      goto L_08843D98;
    }
L_08843D98:
    aot_gpr[31] = (0x08843DA0u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x0888CB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08843DA0u) goto L_08843DA0;
    return;
L_08843DA0:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    goto L_08843DA4;
L_08843DA4:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843F38;
      }
      goto L_08843DB4;
    }
L_08843DB4:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[31] = (0x08843DC0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 21u, 0x0889F150u>(ctx, &aot_mem) && ctx.pc == 0x08843DC0u) goto L_08843DC0;
    return;
L_08843DC0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08843DD4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 114u, 0x0888C6E4u>(ctx, &aot_mem) && ctx.pc == 0x08843DD4u) goto L_08843DD4;
    return;
L_08843DD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08843DE4u);
    aot_gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 110u, 0x08A329CCu>(ctx, &aot_mem) && ctx.pc == 0x08843DE4u) goto L_08843DE4;
    return;
L_08843DE4:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08843DF4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08843DF4u) goto L_08843DF4;
    return;
L_08843DF4:
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08843E04u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08843E04u) goto L_08843E04;
    return;
L_08843E04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843EB4;
      }
      goto L_08843E10;
    }
L_08843E10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 10u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[5] = (0u | 1000u);
    aot_gpr[8] = (0u | 60000u);
    aot_gpr[6] = (0u | 100u);
    aot_gpr[7] = (0u | 60u);
    aot_gpr[9] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[16] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[9]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[4] = (aot_gpr[16] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    aot_gpr[19] = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[18] = (ctx.hi);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08843E88;
      }
      goto L_08843E7C;
    }
L_08843E7C:
    aot_gpr[19] = (0u | 99u);
    aot_gpr[18] = (0u | 59u);
    aot_gpr[16] = (aot_gpr[19] | 0u);
    goto L_08843E88;
L_08843E88:
    aot_gpr[4] = (0u | 109u);
    aot_gpr[31] = (0x08843E94u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08843E94u) goto L_08843E94;
    return;
L_08843E94:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08843EACu);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08843EACu) goto L_08843EAC;
    return;
L_08843EAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08843ECC;
      }
      goto L_08843EB4;
    }
L_08843EB4:
    aot_gpr[4] = (0u | 108u);
    aot_gpr[31] = (0x08843EC0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08843EC0u) goto L_08843EC0;
    return;
L_08843EC0:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08843ECCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x08843ECCu) goto L_08843ECC;
    return;
L_08843ECC:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08843EDCu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 108u, 0x0888C660u>(ctx, &aot_mem) && ctx.pc == 0x08843EDCu) goto L_08843EDC;
    return;
L_08843EDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843F20;
      }
      goto L_08843EE8;
    }
L_08843EE8:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08843EF4u);
    aot_gpr[5] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08843EF4u) goto L_08843EF4;
    return;
L_08843EF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(272)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08843F20u);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 106u, 0x0888C608u>(ctx, &aot_mem) && ctx.pc == 0x08843F20u) goto L_08843F20;
    return;
L_08843F20:
    aot_gpr[31] = (0x08843F28u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 116u, 0x0888C73Cu>(ctx, &aot_mem) && ctx.pc == 0x08843F28u) goto L_08843F28;
    return;
L_08843F28:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08843DB4;
      }
      goto L_08843F38;
    }
L_08843F38:
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    goto L_08843F3C;
L_08843F3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08843F48;
      }
      goto L_08843F44;
    }
L_08843F44:
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    goto L_08843F48;
L_08843F48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 127u, 0x0884476Cu>(ctx, &aot_mem); return;
      }
      goto L_08843F50;
    }
L_08843F50:
    aot_gpr[31] = (0x08843F58u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 101u, 0x08888B08u>(ctx, &aot_mem) && ctx.pc == 0x08843F58u) goto L_08843F58;
    return;
L_08843F58:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 9u, 0x08844064u>(ctx, &aot_mem); return;
      }
      goto L_08843F6C;
    }
L_08843F6C:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2214u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-5072)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08843F84:
    aot_gpr[31] = (0x08843F8Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 81u, 0x088C6720u>(ctx, &aot_mem) && ctx.pc == 0x08843F8Cu) goto L_08843F8C;
    return;
L_08843F8C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08843FC0;
      }
      goto L_08843F94;
    }
L_08843F94:
    aot_gpr[4] = (0u | 52u);
    aot_gpr[31] = (0x08843FA0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08843FA0u) goto L_08843FA0;
    return;
L_08843FA0:
    aot_gpr[4] = (0u | 5u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08843FB4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08843FB4u) goto L_08843FB4;
    return;
L_08843FB4:
    aot_gpr[4] = (0u | 14u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 3u, 0x0884401Cu>(ctx, &aot_mem); return;
      }
      goto L_08843FC0;
    }
L_08843FC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25244)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(7928)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08843FF4;
      }
      goto L_08843FE0;
    }
L_08843FE0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08843FF4;
      }
      goto L_08843FE8;
    }
L_08843FE8:
    aot_gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 3u, 0x0884401Cu>(ctx, &aot_mem); return;
      }
      goto L_08843FF4;
    }
L_08843FF4:
    aot_gpr[4] = (0u | 216u);
    aot_gpr[31] = (0x08844000u);
    aot_gpr[5] = (0u | 3u);
    (void)rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0063(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0063_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_63(Runtime &runtime) {
    runtime.register_generated_unit(63u, 0x08843000u, 4096u, &recomp_unit_0063, &recomp_unit_0063_entry);
    runtime.register_function(0x08843000u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0884300Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843014u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843030u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843038u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843050u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843084u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088430A4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088430E0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088430E8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843108u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843118u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843148u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843154u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0884315Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843160u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843194u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088431B0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088431B8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088431CCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088431E4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088431ECu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088431F4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843208u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843214u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843260u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0884326Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843284u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0884329Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088432B4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088432C0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088432CCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088432D8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088432E4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088432F0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088432FCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843308u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843314u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843320u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0884332Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843338u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843344u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843350u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0884335Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843368u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843370u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843384u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843394u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088433A0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088433B0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088433B8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088433C8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0884342Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843438u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843444u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0884345Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843464u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843470u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0884347Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088434A0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088434CCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843520u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843538u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843550u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843568u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843580u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843598u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088435B0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088435C8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088435DCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088435F4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0884360Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843628u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843638u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0884364Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843654u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843660u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843668u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843680u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843688u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843690u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843698u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088436A4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088436B0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088436B8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088436C4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088436CCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088436DCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088436E4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088436F0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088436FCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843700u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843720u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843744u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843758u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843778u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088437A0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088437B0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088437B8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088437D4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088437FCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0884380Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843828u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0884384Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843858u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843868u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843880u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088438A8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088438B8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088438CCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088438F0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088438F8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843900u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843908u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843914u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843920u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843928u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843934u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0884393Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0884394Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843954u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843960u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0884396Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843974u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x0884397Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088439A0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088439C8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x088439F0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843A18u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843A2Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843A54u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843A60u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843A84u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843A94u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843AA0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843AA8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843AB0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843AB8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843AC4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843ACCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843AD8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843AE0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843AECu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843AF4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843AFCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843B08u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843B14u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843B20u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843B30u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843B34u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843B5Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843B80u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843BA4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843BC8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843BDCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843BF0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843C08u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843C14u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843C1Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843C24u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843C30u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843CF0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843CF8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843D08u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843D10u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843D18u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843D1Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843D24u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843D2Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843D38u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843D40u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843D48u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843D54u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843D5Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843D64u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843D6Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843D74u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843D80u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843D8Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843D98u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843DA0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843DA4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843DB4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843DC0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843DD4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843DE4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843DF4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843E04u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843E10u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843E7Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843E88u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843E94u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843EACu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843EB4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843EC0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843ECCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843EDCu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843EE8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843EF4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843F20u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843F28u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843F38u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843F3Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843F44u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843F48u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843F50u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843F58u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843F6Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843F84u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843F8Cu, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843F94u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843FA0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843FB4u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843FC0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843FE0u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843FE8u, &recomp_unit_0063, "recomp_unit_0063");
    runtime.register_function(0x08843FF4u, &recomp_unit_0063, "recomp_unit_0063");
}
} // namespace psprecomp
