#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0549[1024] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 6, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 14, 0, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0,
    0, 29, 30, 0, 0, 31, 0, 32, 0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 38, 39, 0, 0, 40,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    44, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0,
    0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 56, 0, 0, 57, 0, 58, 0, 0, 0,
    0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 62, 0, 63, 0, 64, 0,
    65, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0,
    0, 0, 73, 74, 0, 0, 75, 0, 76, 0, 0, 0, 77, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0,
    0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 86, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0,
    97, 0, 98, 0, 99, 0, 100, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0,
    0, 105, 0, 106, 0, 107, 108, 0, 109, 0, 110, 0, 111, 112, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 118,
    0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 121, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126,
    127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 135, 136, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 0, 0, 140, 0, 141, 0, 0, 142, 0, 0, 0, 143, 0, 144, 0, 145, 146, 0, 147, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 152, 0, 153, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0,
    0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 164, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0,
    0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 185, 0, 186, 0, 0, 187, 0, 0, 0, 188, 0,
    0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 197, 0, 0, 198, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0,
    202, 0, 203, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 0,
    211, 0, 0, 0, 0, 212, 0, 213, 0, 214, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 219, 0, 220, 0, 221, 0, 0,
    0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 224, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0,
    235, 0, 0, 0, 236, 0, 237, 0, 238, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244,
};
void recomp_unit_0549_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A29000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0549[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A29000;
    case 2u: goto L_08A29010;
    case 3u: goto L_08A29030;
    case 4u: goto L_08A29050;
    case 5u: goto L_08A2905C;
    case 6u: goto L_08A29060;
    case 7u: goto L_08A29078;
    case 8u: goto L_08A29090;
    case 9u: goto L_08A290A0;
    case 10u: goto L_08A290A8;
    case 11u: goto L_08A290C8;
    case 12u: goto L_08A290D8;
    case 13u: goto L_08A290F0;
    case 14u: goto L_08A29104;
    case 15u: goto L_08A2911C;
    case 16u: goto L_08A29124;
    case 17u: goto L_08A2912C;
    case 18u: goto L_08A2913C;
    case 19u: goto L_08A29154;
    case 20u: goto L_08A29160;
    case 21u: goto L_08A29174;
    case 22u: goto L_08A29188;
    case 23u: goto L_08A291A0;
    case 24u: goto L_08A291AC;
    case 25u: goto L_08A291B8;
    case 26u: goto L_08A291C4;
    case 27u: goto L_08A291D8;
    case 28u: goto L_08A291F8;
    case 29u: goto L_08A29204;
    case 30u: goto L_08A29208;
    case 31u: goto L_08A29214;
    case 32u: goto L_08A2921C;
    case 33u: goto L_08A29228;
    case 34u: goto L_08A29230;
    case 35u: goto L_08A29240;
    case 36u: goto L_08A29254;
    case 37u: goto L_08A29264;
    case 38u: goto L_08A2926C;
    case 39u: goto L_08A29270;
    case 40u: goto L_08A2927C;
    case 41u: goto L_08A292B8;
    case 42u: goto L_08A292D4;
    case 43u: goto L_08A292EC;
    case 44u: goto L_08A29300;
    case 45u: goto L_08A29308;
    case 46u: goto L_08A29324;
    case 47u: goto L_08A29334;
    case 48u: goto L_08A29348;
    case 49u: goto L_08A29350;
    case 50u: goto L_08A2935C;
    case 51u: goto L_08A2936C;
    case 52u: goto L_08A2938C;
    case 53u: goto L_08A293A8;
    case 54u: goto L_08A293BC;
    case 55u: goto L_08A293D8;
    case 56u: goto L_08A293DC;
    case 57u: goto L_08A293E8;
    case 58u: goto L_08A293F0;
    case 59u: goto L_08A2940C;
    case 60u: goto L_08A29450;
    case 61u: goto L_08A29460;
    case 62u: goto L_08A29468;
    case 63u: goto L_08A29470;
    case 64u: goto L_08A29478;
    case 65u: goto L_08A29480;
    case 66u: goto L_08A29488;
    case 67u: goto L_08A29498;
    case 68u: goto L_08A294B4;
    case 69u: goto L_08A294C0;
    case 70u: goto L_08A294C8;
    case 71u: goto L_08A294E0;
    case 72u: goto L_08A294EC;
    case 73u: goto L_08A29508;
    case 74u: goto L_08A2950C;
    case 75u: goto L_08A29518;
    case 76u: goto L_08A29520;
    case 77u: goto L_08A29530;
    case 78u: goto L_08A29538;
    case 79u: goto L_08A29548;
    case 80u: goto L_08A29564;
    case 81u: goto L_08A29570;
    case 82u: goto L_08A29578;
    case 83u: goto L_08A29590;
    case 84u: goto L_08A2959C;
    case 85u: goto L_08A295B8;
    case 86u: goto L_08A295BC;
    case 87u: goto L_08A295C8;
    case 88u: goto L_08A295D8;
    case 89u: goto L_08A295F8;
    case 90u: goto L_08A2960C;
    case 91u: goto L_08A29620;
    case 92u: goto L_08A29638;
    case 93u: goto L_08A29648;
    case 94u: goto L_08A2965C;
    case 95u: goto L_08A2966C;
    case 96u: goto L_08A29678;
    case 97u: goto L_08A29680;
    case 98u: goto L_08A29688;
    case 99u: goto L_08A29690;
    case 100u: goto L_08A29698;
    case 101u: goto L_08A2969C;
    case 102u: goto L_08A296D0;
    case 103u: goto L_08A296F0;
    case 104u: goto L_08A296F8;
    case 105u: goto L_08A29704;
    case 106u: goto L_08A2970C;
    case 107u: goto L_08A29714;
    case 108u: goto L_08A29718;
    case 109u: goto L_08A29720;
    case 110u: goto L_08A29728;
    case 111u: goto L_08A29730;
    case 112u: goto L_08A29734;
    case 113u: goto L_08A2973C;
    case 114u: goto L_08A29744;
    case 115u: goto L_08A2974C;
    case 116u: goto L_08A29760;
    case 117u: goto L_08A29768;
    case 118u: goto L_08A2977C;
    case 119u: goto L_08A29788;
    case 120u: goto L_08A297A4;
    case 121u: goto L_08A297A8;
    case 122u: goto L_08A297B0;
    case 123u: goto L_08A297B8;
    case 124u: goto L_08A297D4;
    case 125u: goto L_08A297E0;
    case 126u: goto L_08A297FC;
    case 127u: goto L_08A29800;
    case 128u: goto L_08A29808;
    case 129u: goto L_08A2982C;
    case 130u: goto L_08A29854;
    case 131u: goto L_08A2985C;
    case 132u: goto L_08A29868;
    case 133u: goto L_08A298A0;
    case 134u: goto L_08A298AC;
    case 135u: goto L_08A298B4;
    case 136u: goto L_08A298B8;
    case 137u: goto L_08A298C0;
    case 138u: goto L_08A298D8;
    case 139u: goto L_08A298F4;
    case 140u: goto L_08A29910;
    case 141u: goto L_08A29918;
    case 142u: goto L_08A29924;
    case 143u: goto L_08A29934;
    case 144u: goto L_08A2993C;
    case 145u: goto L_08A29944;
    case 146u: goto L_08A29948;
    case 147u: goto L_08A29950;
    case 148u: goto L_08A29954;
    case 149u: goto L_08A2996C;
    case 150u: goto L_08A29998;
    case 151u: goto L_08A299A4;
    case 152u: goto L_08A299AC;
    case 153u: goto L_08A299B4;
    case 154u: goto L_08A299B8;
    case 155u: goto L_08A299D0;
    case 156u: goto L_08A29A08;
    case 157u: goto L_08A29A1C;
    case 158u: goto L_08A29A34;
    case 159u: goto L_08A29A3C;
    case 160u: goto L_08A29A60;
    case 161u: goto L_08A29A68;
    case 162u: goto L_08A29A8C;
    case 163u: goto L_08A29AA8;
    case 164u: goto L_08A29AB0;
    case 165u: goto L_08A29AB4;
    case 166u: goto L_08A29ABC;
    case 167u: goto L_08A29B18;
    case 168u: goto L_08A29B2C;
    case 169u: goto L_08A29B34;
    case 170u: goto L_08A29B40;
    case 171u: goto L_08A29B50;
    case 172u: goto L_08A29B64;
    case 173u: goto L_08A29B6C;
    case 174u: goto L_08A29B88;
    case 175u: goto L_08A29B98;
    case 176u: goto L_08A29BAC;
    case 177u: goto L_08A29BB4;
    case 178u: goto L_08A29BC0;
    case 179u: goto L_08A29BD0;
    case 180u: goto L_08A29BF0;
    case 181u: goto L_08A29C14;
    case 182u: goto L_08A29C28;
    case 183u: goto L_08A29C30;
    case 184u: goto L_08A29C48;
    case 185u: goto L_08A29C54;
    case 186u: goto L_08A29C5C;
    case 187u: goto L_08A29C68;
    case 188u: goto L_08A29C78;
    case 189u: goto L_08A29C88;
    case 190u: goto L_08A29C90;
    case 191u: goto L_08A29CB0;
    case 192u: goto L_08A29CB4;
    case 193u: goto L_08A29CDC;
    case 194u: goto L_08A29CF8;
    case 195u: goto L_08A29D18;
    case 196u: goto L_08A29D20;
    case 197u: goto L_08A29D2C;
    case 198u: goto L_08A29D38;
    case 199u: goto L_08A29D40;
    case 200u: goto L_08A29D54;
    case 201u: goto L_08A29D74;
    case 202u: goto L_08A29D80;
    case 203u: goto L_08A29D88;
    case 204u: goto L_08A29D8C;
    case 205u: goto L_08A29D9C;
    case 206u: goto L_08A29DC8;
    case 207u: goto L_08A29DD0;
    case 208u: goto L_08A29DD8;
    case 209u: goto L_08A29DE4;
    case 210u: goto L_08A29DF0;
    case 211u: goto L_08A29E00;
    case 212u: goto L_08A29E14;
    case 213u: goto L_08A29E1C;
    case 214u: goto L_08A29E24;
    case 215u: goto L_08A29E2C;
    case 216u: goto L_08A29E38;
    case 217u: goto L_08A29E54;
    case 218u: goto L_08A29E5C;
    case 219u: goto L_08A29E64;
    case 220u: goto L_08A29E6C;
    case 221u: goto L_08A29E74;
    case 222u: goto L_08A29E94;
    case 223u: goto L_08A29EAC;
    case 224u: goto L_08A29EB4;
    case 225u: goto L_08A29EBC;
    case 226u: goto L_08A29EC4;
    case 227u: goto L_08A29EE4;
    case 228u: goto L_08A29F1C;
    case 229u: goto L_08A29F24;
    case 230u: goto L_08A29F2C;
    case 231u: goto L_08A29F3C;
    case 232u: goto L_08A29F58;
    case 233u: goto L_08A29F64;
    case 234u: goto L_08A29F70;
    case 235u: goto L_08A29F80;
    case 236u: goto L_08A29F90;
    case 237u: goto L_08A29F98;
    case 238u: goto L_08A29FA0;
    case 239u: goto L_08A29FA8;
    case 240u: goto L_08A29FB4;
    case 241u: goto L_08A29FC0;
    case 242u: goto L_08A29FD4;
    case 243u: goto L_08A29FE8;
    case 244u: goto L_08A29FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A29000:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A29010u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3560));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08A29010u) goto L_08A29010;
    return;
L_08A29010:
    aot_gpr[16] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] - aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[20] - aot_gpr[4]);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16432)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A29030u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3584));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08A29030u) goto L_08A29030;
    return;
L_08A29030:
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[17] - aot_gpr[19]);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[20] - aot_gpr[5]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16436)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A29050u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3604));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08A29050u) goto L_08A29050;
    return;
L_08A29050:
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[17] - aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[20] - aot_gpr[16]);
    goto L_08A2905C;
L_08A2905C:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16456)));
    goto L_08A29060;
L_08A29060:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16452)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16460)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A29078u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08A29078u) goto L_08A29078;
    return;
L_08A29078:
    aot_gpr[16] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] - aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[20] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A29090u);
    aot_gpr[6] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08A29090u) goto L_08A29090;
    return;
L_08A29090:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16440), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[31] = (0x08A290A0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16444), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A290A0u) goto L_08A290A0;
    return;
L_08A290A0:
    aot_gpr[31] = (0x08A290A8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 235u, 0x089EFEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A290A8u) goto L_08A290A8;
    return;
L_08A290A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16440));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A290C8u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16444));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A290C8u) goto L_08A290C8;
    return;
L_08A290C8:
    aot_gpr[4] = (aot_gpr[16] - aot_gpr[19]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16440)));
    aot_gpr[31] = (0x08A290D8u);
    aot_gpr[17] = (aot_gpr[20] - aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A290D8u) goto L_08A290D8;
    return;
L_08A290D8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[9] = (aot_gpr[3] | 0u);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A290F0u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08A290F0u) goto L_08A290F0;
    return;
L_08A290F0:
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[19]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16444)));
    aot_gpr[31] = (0x08A29104u);
    aot_gpr[16] = (aot_gpr[20] - aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 22u, 0x08A3F1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A29104u) goto L_08A29104;
    return;
L_08A29104:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16448)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[9] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A2911Cu);
    aot_gpr[8] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08A2911Cu) goto L_08A2911C;
    return;
L_08A2911C:
    aot_gpr[31] = (0x08A29124u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A29124u) goto L_08A29124;
    return;
L_08A29124:
    aot_gpr[31] = (0x08A2912Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 249u, 0x089EFF94u>(ctx, &aot_mem) && ctx.pc == 0x08A2912Cu) goto L_08A2912C;
    return;
L_08A2912C:
    aot_gpr[16] = (aot_gpr[17] - aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[20] - aot_gpr[16]);
      if (branch_taken) {
          goto L_08A29160;
      }
      goto L_08A2913C;
    }
L_08A2913C:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A29154u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3712));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08A29154u) goto L_08A29154;
    return;
L_08A29154:
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[17] - aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[20] - aot_gpr[16]);
    goto L_08A29160;
L_08A29160:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16384)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16464)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A29174u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08A29174u) goto L_08A29174;
    return;
L_08A29174:
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16388)));
    aot_gpr[16] = (aot_gpr[17] - aot_gpr[19]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[20] - aot_gpr[16]);
      if (branch_taken) {
          goto L_08A291AC;
      }
      goto L_08A29188;
    }
L_08A29188:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A291A0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3784));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08A291A0u) goto L_08A291A0;
    return;
L_08A291A0:
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[17] - aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[20] - aot_gpr[16]);
    goto L_08A291AC;
L_08A291AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(728)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(992)));
        goto L_08A29208;
    }
    goto L_08A291B8;
L_08A291B8:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(732))))));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A29204;
      }
      goto L_08A291C4;
    }
L_08A291C4:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A291D8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3804));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08A291D8u) goto L_08A291D8;
    return;
L_08A291D8:
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[17] - aot_gpr[19]);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[20] - aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[18] + static_cast<std::uint32_t>(732));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A291F8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3824));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08A291F8u) goto L_08A291F8;
    return;
L_08A291F8:
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[17] - aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[20] - aot_gpr[16]);
    goto L_08A29204;
L_08A29204:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(992)));
    goto L_08A29208;
L_08A29208:
    aot_gpr[5] = (0u | 1u);
    if (aot_gpr[4] != aot_gpr[5]) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16472)));
        goto L_08A29270;
    }
    goto L_08A29214;
L_08A29214:
    if (aot_gpr[22] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16472)));
        goto L_08A29270;
    }
    goto L_08A2921C;
L_08A2921C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16468)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16472)));
        goto L_08A29270;
    }
    goto L_08A29228;
L_08A29228:
    aot_gpr[31] = (0x08A29230u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A29230u) goto L_08A29230;
    return;
L_08A29230:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(-6));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A29264;
      }
      goto L_08A29240;
    }
L_08A29240:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08A29254u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3840));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 63u, 0x089F0388u>(ctx, &aot_mem) && ctx.pc == 0x08A29254u) goto L_08A29254;
    return;
L_08A29254:
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[17] - aot_gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[20] - aot_gpr[16]);
      if (branch_taken) {
          goto L_08A2926C;
      }
      goto L_08A29264;
    }
L_08A29264:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16476)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[22]);
    goto L_08A2926C;
L_08A2926C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16472)));
    goto L_08A29270;
L_08A29270:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A2927Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A2927Cu) goto L_08A2927C;
    return;
L_08A2927C:
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[19]);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16484)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16488)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16492)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16496)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16500)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16504)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16508)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16512)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16516)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16520)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16524)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16528));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A292B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[6] = (0u | 136u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A292D4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(29108));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A292D4u) goto L_08A292D4;
    return;
L_08A292D4:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-17928), aot_gpr[4]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A292EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A29300u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A29300u) goto L_08A29300;
    return;
L_08A29300:
    aot_gpr[31] = (0x08A29308u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29308u) goto L_08A29308;
    return;
L_08A29308:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 84u);
    aot_gpr[31] = (0x08A29324u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(3944));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A29324u) goto L_08A29324;
    return;
L_08A29324:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29334:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A29348u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A29348u) goto L_08A29348;
    return;
L_08A29348:
    aot_gpr[31] = (0x08A29350u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29350u) goto L_08A29350;
    return;
L_08A29350:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A2935Cu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A2935Cu) goto L_08A2935C;
    return;
L_08A2935C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2936C:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(19864));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2938C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A293F0;
      }
      goto L_08A293A8;
    }
L_08A293A8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(19864));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A293DC;
      }
      goto L_08A293BC;
    }
L_08A293BC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A293D8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A293D8u) goto L_08A293D8;
    return;
L_08A293D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A293DC;
L_08A293DC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A293F0;
      }
      goto L_08A293E8;
    }
L_08A293E8:
    aot_gpr[31] = (0x08A293F0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A29334;
L_08A293F0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2940C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-416));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(372), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(376), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(380), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(384), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(392), aot_gpr[21]);
    aot_gpr[21] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(388), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(400), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[20] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A2969C;
      }
      goto L_08A29450;
    }
L_08A29450:
    aot_gpr[22] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-17928)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29468;
      }
      goto L_08A29460;
    }
L_08A29460:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (0u | 3u);
      if (branch_taken) {
          goto L_08A2969C;
      }
      goto L_08A29468;
    }
L_08A29468:
    aot_gpr[31] = (0x08A29470u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 87u, 0x089F0508u>(ctx, &aot_mem) && ctx.pc == 0x08A29470u) goto L_08A29470;
    return;
L_08A29470:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[29] | 0u);
      if (branch_taken) {
          goto L_08A29518;
      }
      goto L_08A29478;
    }
L_08A29478:
    aot_gpr[31] = (0x08A29480u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 112u, 0x0898F738u>(ctx, &aot_mem) && ctx.pc == 0x08A29480u) goto L_08A29480;
    return;
L_08A29480:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2969C;
      }
      goto L_08A29488;
    }
L_08A29488:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(3944));
      if (branch_taken) {
          goto L_08A294B4;
      }
      goto L_08A29498;
    }
L_08A29498:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A294B4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A294B4u) goto L_08A294B4;
    return;
L_08A294B4:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08A294C0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(368), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A294C0u) goto L_08A294C0;
    return;
L_08A294C0:
    aot_gpr[31] = (0x08A294C8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A294C8u) goto L_08A294C8;
    return;
L_08A294C8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 12u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 44u);
    aot_gpr[31] = (0x08A294E0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A294E0u) goto L_08A294E0;
    return;
L_08A294E0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(368)));
      if (branch_taken) {
          goto L_08A2950C;
      }
      goto L_08A294EC;
    }
L_08A294EC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26464));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A29508u);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A29508u) goto L_08A29508;
    return;
L_08A29508:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A2950C;
L_08A2950C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2969C;
      }
      goto L_08A29518;
    }
L_08A29518:
    aot_gpr[31] = (0x08A29520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0550_entry, 550u, 115u, 0x08A2A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08A29520u) goto L_08A29520;
    return;
L_08A29520:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A29530u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0550_entry, 550u, 142u, 0x08A2A764u>(ctx, &aot_mem) && ctx.pc == 0x08A29530u) goto L_08A29530;
    return;
L_08A29530:
    if (aot_gpr[2] == 0u) {
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
        goto L_08A295C8;
    }
    goto L_08A29538;
L_08A29538:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(3944));
      if (branch_taken) {
          goto L_08A29564;
      }
      goto L_08A29548;
    }
L_08A29548:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A29564u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A29564u) goto L_08A29564;
    return;
L_08A29564:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08A29570u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(364), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A29570u) goto L_08A29570;
    return;
L_08A29570:
    aot_gpr[31] = (0x08A29578u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29578u) goto L_08A29578;
    return;
L_08A29578:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 12u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 44u);
    aot_gpr[31] = (0x08A29590u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A29590u) goto L_08A29590;
    return;
L_08A29590:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(364)));
      if (branch_taken) {
          goto L_08A295BC;
      }
      goto L_08A2959C;
    }
L_08A2959C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26464));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A295B8u);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A295B8u) goto L_08A295B8;
    return;
L_08A295B8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A295BC;
L_08A295BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2969C;
      }
      goto L_08A295C8;
    }
L_08A295C8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A295D8u);
    aot_gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A295D8u) goto L_08A295D8;
    return;
L_08A295D8:
    aot_gpr[4] = (2211u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27976));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[4]);
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 136u);
    aot_gpr[31] = (0x08A295F8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(29108));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A295F8u) goto L_08A295F8;
    return;
L_08A295F8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(356), 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(276));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(356));
    aot_gpr[31] = (0x08A2960Cu);
    aot_gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 117u, 0x0898F7B4u>(ctx, &aot_mem) && ctx.pc == 0x08A2960Cu) goto L_08A2960C;
    return;
L_08A2960C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(356)));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[18] << 3u);
      if (branch_taken) {
          goto L_08A2969C;
      }
      goto L_08A29620;
    }
L_08A29620:
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(276));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(360));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A29638u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A29638u) goto L_08A29638;
    return;
L_08A29638:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(264));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A29648u);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A29648u) goto L_08A29648;
    return;
L_08A29648:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 65u);
    aot_gpr[31] = (0x08A2965Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(29044));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A2965Cu) goto L_08A2965C;
    return;
L_08A2965C:
    aot_gpr[17] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-17928), aot_gpr[17]);
    aot_gpr[31] = (0x08A2966Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 172u, 0x0898ECA4u>(ctx, &aot_mem) && ctx.pc == 0x08A2966Cu) goto L_08A2966C;
    return;
L_08A2966C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 50007u);
      if (branch_taken) {
          goto L_08A29690;
      }
      goto L_08A29678;
    }
L_08A29678:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A29688;
      }
      goto L_08A29680;
    }
L_08A29680:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[21] = (0u | 3u);
    goto L_08A29688;
L_08A29688:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-17928), 0u);
      if (branch_taken) {
          goto L_08A2969C;
      }
      goto L_08A29690;
    }
L_08A29690:
    aot_gpr[31] = (0x08A29698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 85u, 0x0898F500u>(ctx, &aot_mem) && ctx.pc == 0x08A29698u) goto L_08A29698;
    return;
L_08A29698:
    aot_gpr[21] = (0u | 2u);
    goto L_08A2969C;
L_08A2969C:
    aot_gpr[2] = (aot_gpr[21] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(372)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(376)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(380)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(384)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(388)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(392)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(416));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A296D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A296F0u);
    aot_gpr[18] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 85u, 0x0898F500u>(ctx, &aot_mem) && ctx.pc == 0x08A296F0u) goto L_08A296F0;
    return;
L_08A296F0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A29808;
      }
      goto L_08A296F8;
    }
L_08A296F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-17928)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A29718;
      }
      goto L_08A29704;
    }
L_08A29704:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A29808;
      }
      goto L_08A2970C;
    }
L_08A2970C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A29734;
      }
      goto L_08A29714;
    }
L_08A29714:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    goto L_08A29718;
L_08A29718:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A29744;
      }
      goto L_08A29720;
    }
L_08A29720:
    if (aot_gpr[4] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-17928), 0u);
        goto L_08A2974C;
    }
    goto L_08A29728;
L_08A29728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29808;
      }
      goto L_08A29730;
    }
L_08A29730:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A29734;
L_08A29734:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29808;
      }
      goto L_08A2973C;
    }
L_08A2973C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A29808;
      }
      goto L_08A29744;
    }
L_08A29744:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A29808;
      }
      goto L_08A2974C;
    }
L_08A2974C:
    aot_gpr[17] = (2217u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(29108));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29808;
      }
      goto L_08A29760;
    }
L_08A29760:
    aot_gpr[31] = (0x08A29768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0550_entry, 550u, 115u, 0x08A2A5C4u>(ctx, &aot_mem) && ctx.pc == 0x08A29768u) goto L_08A29768;
    return;
L_08A29768:
    aot_gpr[5] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A2977Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(29044));
    if (rt.invoke_chained_direct<&recomp_unit_0550_entry, 550u, 119u, 0x08A2A614u>(ctx, &aot_mem) && ctx.pc == 0x08A2977Cu) goto L_08A2977C;
    return;
L_08A2977C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (0u | 0u);
        goto L_08A297A8;
    }
    goto L_08A29788;
L_08A29788:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A297A4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A297A4u) goto L_08A297A4;
    return;
L_08A297A4:
    aot_gpr[4] = (0u | 0u);
    goto L_08A297A8;
L_08A297A8:
    aot_gpr[31] = (0x08A297B0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A297B0u) goto L_08A297B0;
    return;
L_08A297B0:
    aot_gpr[31] = (0x08A297B8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A297B8u) goto L_08A297B8;
    return;
L_08A297B8:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 12u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 44u);
    aot_gpr[31] = (0x08A297D4u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(3944));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A297D4u) goto L_08A297D4;
    return;
L_08A297D4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A29800;
      }
      goto L_08A297E0;
    }
L_08A297E0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26464));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A297FCu);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A297FCu) goto L_08A297FC;
    return;
L_08A297FC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_08A29800;
L_08A29800:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[18] = (0u | 1u);
    goto L_08A29808;
L_08A29808:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_08A2982C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A298B8;
      }
      goto L_08A29854;
    }
L_08A29854:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) <= 0;
    aot_gpr[4] = (aot_gpr[29] | 0u);
      if (branch_taken) {
          goto L_08A298B8;
      }
      goto L_08A2985C;
    }
L_08A2985C:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A29868u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29868u) goto L_08A29868;
    return;
L_08A29868:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (0u | 512u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[4] = (0u < aot_gpr[5] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A298A0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 29u, 0x0898E1CCu>(ctx, &aot_mem) && ctx.pc == 0x08A298A0u) goto L_08A298A0;
    return;
L_08A298A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A298B8;
      }
      goto L_08A298AC;
    }
L_08A298AC:
    aot_gpr[31] = (0x08A298B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 85u, 0x0898F500u>(ctx, &aot_mem) && ctx.pc == 0x08A298B4u) goto L_08A298B4;
    return;
L_08A298B4:
    aot_gpr[18] = (0u | 1u);
    goto L_08A298B8;
L_08A298B8:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A298D8;
      }
      goto L_08A298C0;
    }
L_08A298C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A298D8u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A298D8u) goto L_08A298D8;
    return;
L_08A298D8:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A298F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A29910u);
    aot_gpr[17] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 85u, 0x0898F500u>(ctx, &aot_mem) && ctx.pc == 0x08A29910u) goto L_08A29910;
    return;
L_08A29910:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29954;
      }
      goto L_08A29918;
    }
L_08A29918:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A29924u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0393_entry, 393u, 193u, 0x0898DD8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29924u) goto L_08A29924;
    return;
L_08A29924:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[5];
    aot_gpr[4] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A29944;
      }
      goto L_08A29934;
    }
L_08A29934:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] | aot_gpr[4]);
      if (branch_taken) {
          goto L_08A29948;
      }
      goto L_08A2993C;
    }
L_08A2993C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A29954;
      }
      goto L_08A29944;
    }
L_08A29944:
    aot_gpr[4] = (aot_gpr[16] | aot_gpr[4]);
    goto L_08A29948;
L_08A29948:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29954;
      }
      goto L_08A29950;
    }
L_08A29950:
    aot_gpr[17] = (0u | 0u);
    goto L_08A29954;
L_08A29954:
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
L_08A2996C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A29998u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 86u, 0x0898F508u>(ctx, &aot_mem) && ctx.pc == 0x08A29998u) goto L_08A29998;
    return;
L_08A29998:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A299B8;
      }
      goto L_08A299A4;
    }
L_08A299A4:
    aot_gpr[31] = (0x08A299ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 85u, 0x0898F500u>(ctx, &aot_mem) && ctx.pc == 0x08A299ACu) goto L_08A299AC;
    return;
L_08A299AC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A299B8;
      }
      goto L_08A299B4;
    }
L_08A299B4:
    aot_gpr[16] = (0u | 1u);
    goto L_08A299B8;
L_08A299B8:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A299D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08A29A08u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 85u, 0x0898F500u>(ctx, &aot_mem) && ctx.pc == 0x08A29A08u) goto L_08A29A08;
    return;
L_08A29A08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A29A1Cu);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 101u, 0x0898E724u>(ctx, &aot_mem) && ctx.pc == 0x08A29A1Cu) goto L_08A29A1C;
    return;
L_08A29A1C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 50006u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A29A60;
      }
      goto L_08A29A34;
    }
L_08A29A34:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A29A3C;
L_08A29A3C:
    aot_gpr[2] = (0u | 1u);
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
L_08A29A60:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29A3C;
      }
      goto L_08A29A68;
    }
L_08A29A68:
    aot_gpr[2] = (0u | 0u);
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
L_08A29A8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29AB4;
      }
      goto L_08A29AA8;
    }
L_08A29AA8:
    aot_gpr[31] = (0x08A29AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 6u, 0x0898E048u>(ctx, &aot_mem) && ctx.pc == 0x08A29AB0u) goto L_08A29AB0;
    return;
L_08A29AB0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A29AB4;
L_08A29AB4:
    aot_gpr[31] = (0x08A29ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 85u, 0x0898F500u>(ctx, &aot_mem) && ctx.pc == 0x08A29ABCu) goto L_08A29ABC;
    return;
L_08A29ABC:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29B18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A29B2Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A29B2Cu) goto L_08A29B2C;
    return;
L_08A29B2C:
    aot_gpr[31] = (0x08A29B34u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29B34u) goto L_08A29B34;
    return;
L_08A29B34:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A29B40u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A29B40u) goto L_08A29B40;
    return;
L_08A29B40:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29B50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A29B64u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A29B64u) goto L_08A29B64;
    return;
L_08A29B64:
    aot_gpr[31] = (0x08A29B6Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29B6Cu) goto L_08A29B6C;
    return;
L_08A29B6C:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 36u);
    aot_gpr[31] = (0x08A29B88u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4192));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A29B88u) goto L_08A29B88;
    return;
L_08A29B88:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29B98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A29BACu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A29BACu) goto L_08A29BAC;
    return;
L_08A29BAC:
    aot_gpr[31] = (0x08A29BB4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29BB4u) goto L_08A29BB4;
    return;
L_08A29BB4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A29BC0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A29BC0u) goto L_08A29BC0;
    return;
L_08A29BC0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29BD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x08A29BF0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    goto L_08A2936C;
L_08A29BF0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19920));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A29C14u);
    aot_gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29C14u) goto L_08A29C14;
    return;
L_08A29C14:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(76), 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17920)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A29CB4;
      }
      goto L_08A29C28;
    }
L_08A29C28:
    aot_gpr[31] = (0x08A29C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0550_entry, 550u, 160u, 0x08A2A8C0u>(ctx, &aot_mem) && ctx.pc == 0x08A29C30u) goto L_08A29C30;
    return;
L_08A29C30:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 25u);
    aot_gpr[31] = (0x08A29C48u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4220));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A29C48u) goto L_08A29C48;
    return;
L_08A29C48:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A29C54u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29C54u) goto L_08A29C54;
    return;
L_08A29C54:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2211u << 16u);
      if (branch_taken) {
          goto L_08A29C90;
      }
      goto L_08A29C5C;
    }
L_08A29C5C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A29C68u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4248));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A29C68u) goto L_08A29C68;
    return;
L_08A29C68:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A29C78u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4364));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A29C78u) goto L_08A29C78;
    return;
L_08A29C78:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A29C88u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4420));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A29C88u) goto L_08A29C88;
    return;
L_08A29C88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29C88;
      }
      goto L_08A29C90;
    }
L_08A29C90:
    aot_gpr[5] = (2211u << 16u);
    aot_gpr[6] = (2201u << 16u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-25904));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-25832));
    aot_gpr[31] = (0x08A29CB0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1340));
    if (rt.invoke_chained_direct<&recomp_unit_0550_entry, 550u, 161u, 0x08A2A8CCu>(ctx, &aot_mem) && ctx.pc == 0x08A29CB0u) goto L_08A29CB0;
    return;
L_08A29CB0:
    aot_gpr[4] = (2216u << 16u);
    goto L_08A29CB4;
L_08A29CB4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17920)));
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-17920), aot_gpr[5]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29CDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A29D40;
      }
      goto L_08A29CF8;
    }
L_08A29CF8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19920));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17920)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-17920), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A29D20;
      }
      goto L_08A29D18;
    }
L_08A29D18:
    aot_gpr[31] = (0x08A29D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0550_entry, 550u, 198u, 0x08A2AB28u>(ctx, &aot_mem) && ctx.pc == 0x08A29D20u) goto L_08A29D20;
    return;
L_08A29D20:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A29D2Cu);
    aot_gpr[5] = (0u | 0u);
    goto L_08A2938C;
L_08A29D2C:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29D40;
      }
      goto L_08A29D38;
    }
L_08A29D38:
    aot_gpr[31] = (0x08A29D40u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A29B98;
L_08A29D40:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29D54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[2] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A29D8C;
      }
      goto L_08A29D74;
    }
L_08A29D74:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A29D80u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A2982C;
L_08A29D80:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A29D8C;
      }
      goto L_08A29D88;
    }
L_08A29D88:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    goto L_08A29D8C;
L_08A29D8C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29D9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A29DC8u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A29DC8u) goto L_08A29DC8;
    return;
L_08A29DC8:
    aot_gpr[31] = (0x08A29DD0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29DD0u) goto L_08A29DD0;
    return;
L_08A29DD0:
    aot_gpr[31] = (0x08A29DD8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 138u, 0x089EEB90u>(ctx, &aot_mem) && ctx.pc == 0x08A29DD8u) goto L_08A29DD8;
    return;
L_08A29DD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29E14;
      }
      goto L_08A29DE4;
    }
L_08A29DE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (0u | 2023u);
      if (branch_taken) {
          goto L_08A29E14;
      }
      goto L_08A29DF0;
    }
L_08A29DF0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[18] ? 1u : 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 2023u);
        goto L_08A29E00;
    }
    goto L_08A29E00;
L_08A29E00:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), aot_gpr[19]);
    aot_gpr[31] = (0x08A29E14u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0550_entry, 550u, 29u, 0x08A2A14Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29E14u) goto L_08A29E14;
    return;
L_08A29E14:
    aot_gpr[31] = (0x08A29E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A29E1Cu) goto L_08A29E1C;
    return;
L_08A29E1C:
    aot_gpr[31] = (0x08A29E24u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29E24u) goto L_08A29E24;
    return;
L_08A29E24:
    aot_gpr[31] = (0x08A29E2Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 138u, 0x089EEB90u>(ctx, &aot_mem) && ctx.pc == 0x08A29E2Cu) goto L_08A29E2C;
    return;
L_08A29E2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A29EAC;
      }
      goto L_08A29E38;
    }
L_08A29E38:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A29E54u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    goto L_08A2996C;
L_08A29E54:
    aot_gpr[31] = (0x08A29E5Cu);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A29E5Cu) goto L_08A29E5C;
    return;
L_08A29E5C:
    aot_gpr[31] = (0x08A29E64u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29E64u) goto L_08A29E64;
    return;
L_08A29E64:
    aot_gpr[31] = (0x08A29E6Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 138u, 0x089EEB90u>(ctx, &aot_mem) && ctx.pc == 0x08A29E6Cu) goto L_08A29E6C;
    return;
L_08A29E6C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29EAC;
      }
      goto L_08A29E74;
    }
L_08A29E74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A29EAC;
      }
      goto L_08A29E94;
    }
L_08A29E94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(76), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(52), 0u);
      if (branch_taken) {
          goto L_08A29EAC;
      }
      goto L_08A29EAC;
    }
L_08A29EAC:
    aot_gpr[31] = (0x08A29EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A29EB4u) goto L_08A29EB4;
    return;
L_08A29EB4:
    aot_gpr[31] = (0x08A29EBCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29EBCu) goto L_08A29EBC;
    return;
L_08A29EBC:
    aot_gpr[31] = (0x08A29EC4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 138u, 0x089EEB90u>(ctx, &aot_mem) && ctx.pc == 0x08A29EC4u) goto L_08A29EC4;
    return;
L_08A29EC4:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_08A29EE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-8224));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8196), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8200), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8204), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8208), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8212), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8216), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8220), aot_gpr[31]);
    aot_gpr[31] = (0x08A29F1Cu);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A29F1Cu) goto L_08A29F1C;
    return;
L_08A29F1C:
    aot_gpr[31] = (0x08A29F24u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29F24u) goto L_08A29F24;
    return;
L_08A29F24:
    aot_gpr[31] = (0x08A29F2Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 138u, 0x089EEB90u>(ctx, &aot_mem) && ctx.pc == 0x08A29F2Cu) goto L_08A29F2C;
    return;
L_08A29F2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08A29F90;
      }
      goto L_08A29F3C;
    }
L_08A29F3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8192), 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8192));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 8192u);
    aot_gpr[31] = (0x08A29F58u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A299D0;
L_08A29F58:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29F90;
      }
      goto L_08A29F64;
    }
L_08A29F64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8192)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A29F90;
      }
      goto L_08A29F70;
    }
L_08A29F70:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(44), aot_gpr[29]);
    aot_gpr[31] = (0x08A29F80u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0550_entry, 550u, 43u, 0x08A2A1D4u>(ctx, &aot_mem) && ctx.pc == 0x08A29F80u) goto L_08A29F80;
    return;
L_08A29F80:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(48), 0u);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(44), 0u);
      if (branch_taken) {
          goto L_08A29F90;
      }
      goto L_08A29F90;
    }
L_08A29F90:
    aot_gpr[31] = (0x08A29F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A29F98u) goto L_08A29F98;
    return;
L_08A29F98:
    aot_gpr[31] = (0x08A29FA0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A29FA0u) goto L_08A29FA0;
    return;
L_08A29FA0:
    aot_gpr[31] = (0x08A29FA8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 138u, 0x089EEB90u>(ctx, &aot_mem) && ctx.pc == 0x08A29FA8u) goto L_08A29FA8;
    return;
L_08A29FA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0550_entry, 550u, 2u, 0x08A2A008u>(ctx, &aot_mem); return;
      }
      goto L_08A29FB4;
    }
L_08A29FB4:
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[18] ? 1u : 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[4] = (aot_gpr[5] | 0u);
        goto L_08A29FC0;
    }
    goto L_08A29FC0;
L_08A29FC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(68)));
    aot_gpr[31] = (0x08A29FD4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A29FD4u) goto L_08A29FD4;
    return;
L_08A29FD4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(72)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(72), aot_gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0550_entry, 550u, 1u, 0x08A2A004u>(ctx, &aot_mem); return;
      }
      goto L_08A29FE8;
    }
L_08A29FE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(68)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A29FFCu);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x08A29FFCu) goto L_08A29FFC;
    return;
L_08A29FFC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0550_entry, 550u, 3u, 0x08A2A00Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0550_entry, 550u, 1u, 0x08A2A004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0549(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0549_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_549(Runtime &runtime) {
    runtime.register_generated_unit(549u, 0x08A29000u, 4096u, &recomp_unit_0549, &recomp_unit_0549_entry);
    runtime.register_function(0x08A29000u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29010u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29030u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29050u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2905Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29060u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29078u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29090u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A290A0u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A290A8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A290C8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A290D8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A290F0u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29104u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2911Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29124u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2912Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2913Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29154u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29160u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29174u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29188u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A291A0u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A291ACu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A291B8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A291C4u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A291D8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A291F8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29204u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29208u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29214u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2921Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29228u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29230u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29240u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29254u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29264u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2926Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29270u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2927Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A292B8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A292D4u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A292ECu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29300u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29308u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29324u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29334u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29348u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29350u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2935Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2936Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2938Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A293A8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A293BCu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A293D8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A293DCu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A293E8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A293F0u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2940Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29450u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29460u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29468u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29470u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29478u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29480u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29488u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29498u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A294B4u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A294C0u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A294C8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A294E0u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A294ECu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29508u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2950Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29518u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29520u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29530u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29538u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29548u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29564u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29570u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29578u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29590u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2959Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A295B8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A295BCu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A295C8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A295D8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A295F8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2960Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29620u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29638u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29648u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2965Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2966Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29678u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29680u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29688u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29690u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29698u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2969Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A296D0u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A296F0u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A296F8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29704u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2970Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29714u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29718u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29720u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29728u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29730u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29734u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2973Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29744u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2974Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29760u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29768u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2977Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29788u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A297A4u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A297A8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A297B0u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A297B8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A297D4u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A297E0u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A297FCu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29800u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29808u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2982Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29854u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2985Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29868u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A298A0u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A298ACu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A298B4u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A298B8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A298C0u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A298D8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A298F4u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29910u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29918u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29924u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29934u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2993Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29944u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29948u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29950u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29954u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A2996Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29998u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A299A4u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A299ACu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A299B4u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A299B8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A299D0u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29A08u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29A1Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29A34u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29A3Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29A60u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29A68u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29A8Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29AA8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29AB0u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29AB4u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29ABCu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29B18u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29B2Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29B34u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29B40u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29B50u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29B64u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29B6Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29B88u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29B98u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29BACu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29BB4u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29BC0u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29BD0u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29BF0u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29C14u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29C28u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29C30u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29C48u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29C54u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29C5Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29C68u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29C78u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29C88u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29C90u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29CB0u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29CB4u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29CDCu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29CF8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29D18u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29D20u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29D2Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29D38u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29D40u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29D54u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29D74u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29D80u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29D88u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29D8Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29D9Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29DC8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29DD0u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29DD8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29DE4u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29DF0u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29E00u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29E14u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29E1Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29E24u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29E2Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29E38u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29E54u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29E5Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29E64u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29E6Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29E74u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29E94u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29EACu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29EB4u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29EBCu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29EC4u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29EE4u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29F1Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29F24u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29F2Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29F3Cu, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29F58u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29F64u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29F70u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29F80u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29F90u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29F98u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29FA0u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29FA8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29FB4u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29FC0u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29FD4u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29FE8u, &recomp_unit_0549, "recomp_unit_0549");
    runtime.register_function(0x08A29FFCu, &recomp_unit_0549, "recomp_unit_0549");
}
} // namespace psprecomp
