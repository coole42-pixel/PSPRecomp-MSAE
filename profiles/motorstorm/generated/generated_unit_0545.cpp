#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0545[1023] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0,
    0, 0, 12, 0, 13, 0, 14, 15, 0, 0, 0, 0, 0, 16, 17, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 0, 23, 0,
    0, 24, 0, 25, 0, 0, 26, 0, 0, 0, 0, 27, 0, 28, 0, 0, 29, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0,
    33, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0,
    0, 42, 0, 43, 0, 0, 44, 0, 45, 46, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 51, 0, 0, 52,
    0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 57, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0,
    61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0,
    0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 70, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 0, 77, 0, 0, 78, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 85,
    86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 92,
    0, 93, 0, 94, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    103, 0, 104, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 113, 114, 0, 0,
    0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0,
    0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0,
    0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 136,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 140, 141, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143,
    0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 147, 0, 148, 0, 0, 149, 0, 150, 0, 151, 0, 152, 0, 153,
    0, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 164, 0, 0, 165, 0, 166, 0, 0, 167, 0, 168, 0, 0, 169,
    0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 175, 0, 0, 0, 176, 0, 177,
    0, 0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 181, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0,
    0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194,
    0, 195, 0, 0, 0, 0, 196, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 200, 0, 0, 0, 0, 0, 201, 0, 202, 203,
    204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 208, 0, 0, 0, 0, 0, 209, 0, 210, 0, 211, 0,
    212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 220,
};
void recomp_unit_0545_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A25000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0545[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A25000;
    case 2u: goto L_08A25018;
    case 3u: goto L_08A25024;
    case 4u: goto L_08A2502C;
    case 5u: goto L_08A25048;
    case 6u: goto L_08A25080;
    case 7u: goto L_08A25090;
    case 8u: goto L_08A250B0;
    case 9u: goto L_08A250D8;
    case 10u: goto L_08A250E8;
    case 11u: goto L_08A250F8;
    case 12u: goto L_08A25108;
    case 13u: goto L_08A25110;
    case 14u: goto L_08A25118;
    case 15u: goto L_08A2511C;
    case 16u: goto L_08A25134;
    case 17u: goto L_08A25138;
    case 18u: goto L_08A2514C;
    case 19u: goto L_08A25154;
    case 20u: goto L_08A2515C;
    case 21u: goto L_08A25164;
    case 22u: goto L_08A2516C;
    case 23u: goto L_08A25178;
    case 24u: goto L_08A25184;
    case 25u: goto L_08A2518C;
    case 26u: goto L_08A25198;
    case 27u: goto L_08A251AC;
    case 28u: goto L_08A251B4;
    case 29u: goto L_08A251C0;
    case 30u: goto L_08A251CC;
    case 31u: goto L_08A251D4;
    case 32u: goto L_08A251F4;
    case 33u: goto L_08A25200;
    case 34u: goto L_08A25214;
    case 35u: goto L_08A25224;
    case 36u: goto L_08A25230;
    case 37u: goto L_08A2523C;
    case 38u: goto L_08A2524C;
    case 39u: goto L_08A25254;
    case 40u: goto L_08A25268;
    case 41u: goto L_08A25278;
    case 42u: goto L_08A25284;
    case 43u: goto L_08A2528C;
    case 44u: goto L_08A25298;
    case 45u: goto L_08A252A0;
    case 46u: goto L_08A252A4;
    case 47u: goto L_08A252AC;
    case 48u: goto L_08A252B8;
    case 49u: goto L_08A252D4;
    case 50u: goto L_08A252DC;
    case 51u: goto L_08A252F0;
    case 52u: goto L_08A252FC;
    case 53u: goto L_08A25304;
    case 54u: goto L_08A25310;
    case 55u: goto L_08A2532C;
    case 56u: goto L_08A25334;
    case 57u: goto L_08A25348;
    case 58u: goto L_08A2534C;
    case 59u: goto L_08A25354;
    case 60u: goto L_08A2535C;
    case 61u: goto L_08A25380;
    case 62u: goto L_08A2538C;
    case 63u: goto L_08A253BC;
    case 64u: goto L_08A253F8;
    case 65u: goto L_08A25404;
    case 66u: goto L_08A25414;
    case 67u: goto L_08A2542C;
    case 68u: goto L_08A2543C;
    case 69u: goto L_08A25480;
    case 70u: goto L_08A25488;
    case 71u: goto L_08A25490;
    case 72u: goto L_08A254A8;
    case 73u: goto L_08A254B8;
    case 74u: goto L_08A254C0;
    case 75u: goto L_08A254CC;
    case 76u: goto L_08A254D8;
    case 77u: goto L_08A254E8;
    case 78u: goto L_08A254F4;
    case 79u: goto L_08A25504;
    case 80u: goto L_08A2551C;
    case 81u: goto L_08A25524;
    case 82u: goto L_08A25534;
    case 83u: goto L_08A25560;
    case 84u: goto L_08A25568;
    case 85u: goto L_08A2557C;
    case 86u: goto L_08A25580;
    case 87u: goto L_08A25594;
    case 88u: goto L_08A255D0;
    case 89u: goto L_08A255F4;
    case 90u: goto L_08A25658;
    case 91u: goto L_08A25668;
    case 92u: goto L_08A2567C;
    case 93u: goto L_08A25684;
    case 94u: goto L_08A2568C;
    case 95u: goto L_08A256A0;
    case 96u: goto L_08A256A8;
    case 97u: goto L_08A256E8;
    case 98u: goto L_08A256F4;
    case 99u: goto L_08A2573C;
    case 100u: goto L_08A25750;
    case 101u: goto L_08A25758;
    case 102u: goto L_08A25760;
    case 103u: goto L_08A25780;
    case 104u: goto L_08A25788;
    case 105u: goto L_08A2579C;
    case 106u: goto L_08A257A4;
    case 107u: goto L_08A257EC;
    case 108u: goto L_08A25818;
    case 109u: goto L_08A25834;
    case 110u: goto L_08A25844;
    case 111u: goto L_08A25850;
    case 112u: goto L_08A25868;
    case 113u: goto L_08A25870;
    case 114u: goto L_08A25874;
    case 115u: goto L_08A25884;
    case 116u: goto L_08A25894;
    case 117u: goto L_08A258A0;
    case 118u: goto L_08A258A8;
    case 119u: goto L_08A258B8;
    case 120u: goto L_08A25914;
    case 121u: goto L_08A25940;
    case 122u: goto L_08A25974;
    case 123u: goto L_08A25998;
    case 124u: goto L_08A259AC;
    case 125u: goto L_08A259C0;
    case 126u: goto L_08A259D4;
    case 127u: goto L_08A259DC;
    case 128u: goto L_08A259E4;
    case 129u: goto L_08A25A08;
    case 130u: goto L_08A25A20;
    case 131u: goto L_08A25A34;
    case 132u: goto L_08A25A3C;
    case 133u: goto L_08A25A44;
    case 134u: goto L_08A25A60;
    case 135u: goto L_08A25A74;
    case 136u: goto L_08A25A7C;
    case 137u: goto L_08A25AA8;
    case 138u: goto L_08A25AB4;
    case 139u: goto L_08A25AC0;
    case 140u: goto L_08A25AC8;
    case 141u: goto L_08A25ACC;
    case 142u: goto L_08A25AD8;
    case 143u: goto L_08A25AFC;
    case 144u: goto L_08A25B18;
    case 145u: goto L_08A25B34;
    case 146u: goto L_08A25B40;
    case 147u: goto L_08A25B48;
    case 148u: goto L_08A25B50;
    case 149u: goto L_08A25B5C;
    case 150u: goto L_08A25B64;
    case 151u: goto L_08A25B6C;
    case 152u: goto L_08A25B74;
    case 153u: goto L_08A25B7C;
    case 154u: goto L_08A25B88;
    case 155u: goto L_08A25B90;
    case 156u: goto L_08A25BA4;
    case 157u: goto L_08A25BB0;
    case 158u: goto L_08A25BB8;
    case 159u: goto L_08A25BCC;
    case 160u: goto L_08A25C10;
    case 161u: goto L_08A25C18;
    case 162u: goto L_08A25C34;
    case 163u: goto L_08A25C40;
    case 164u: goto L_08A25C48;
    case 165u: goto L_08A25C54;
    case 166u: goto L_08A25C5C;
    case 167u: goto L_08A25C68;
    case 168u: goto L_08A25C70;
    case 169u: goto L_08A25C7C;
    case 170u: goto L_08A25C90;
    case 171u: goto L_08A25C98;
    case 172u: goto L_08A25CAC;
    case 173u: goto L_08A25CD0;
    case 174u: goto L_08A25CDC;
    case 175u: goto L_08A25CE4;
    case 176u: goto L_08A25CF4;
    case 177u: goto L_08A25CFC;
    case 178u: goto L_08A25D0C;
    case 179u: goto L_08A25D14;
    case 180u: goto L_08A25D24;
    case 181u: goto L_08A25D2C;
    case 182u: goto L_08A25D30;
    case 183u: goto L_08A25D40;
    case 184u: goto L_08A25D64;
    case 185u: goto L_08A25D88;
    case 186u: goto L_08A25DB0;
    case 187u: goto L_08A25DB8;
    case 188u: goto L_08A25DD4;
    case 189u: goto L_08A25E0C;
    case 190u: goto L_08A25E24;
    case 191u: goto L_08A25E4C;
    case 192u: goto L_08A25E5C;
    case 193u: goto L_08A25E6C;
    case 194u: goto L_08A25E7C;
    case 195u: goto L_08A25E84;
    case 196u: goto L_08A25E98;
    case 197u: goto L_08A25E9C;
    case 198u: goto L_08A25EBC;
    case 199u: goto L_08A25ED4;
    case 200u: goto L_08A25ED8;
    case 201u: goto L_08A25EF0;
    case 202u: goto L_08A25EF8;
    case 203u: goto L_08A25EFC;
    case 204u: goto L_08A25F00;
    case 205u: goto L_08A25F20;
    case 206u: goto L_08A25F3C;
    case 207u: goto L_08A25F4C;
    case 208u: goto L_08A25F50;
    case 209u: goto L_08A25F68;
    case 210u: goto L_08A25F70;
    case 211u: goto L_08A25F78;
    case 212u: goto L_08A25F80;
    case 213u: goto L_08A25F94;
    case 214u: goto L_08A25FAC;
    case 215u: goto L_08A25FB4;
    case 216u: goto L_08A25FC0;
    case 217u: goto L_08A25FD4;
    case 218u: goto L_08A25FE4;
    case 219u: goto L_08A25FF0;
    case 220u: goto L_08A25FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A25000:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(740)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(732)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A25080;
      }
      goto L_08A25018;
    }
L_08A25018:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[31] = (0x08A25024u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A25024u) goto L_08A25024;
    return;
L_08A25024:
    aot_gpr[31] = (0x08A2502Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2502Cu) goto L_08A2502C;
    return;
L_08A2502C:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 28u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 528u);
    aot_gpr[31] = (0x08A25048u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1900));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A25048u) goto L_08A25048;
    return;
L_08A25048:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(740)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(332), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(740)));
    aot_gpr[2] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(740), aot_gpr[5]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25080:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25090:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(332));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A250B0u);
    aot_gpr[6] = (0u | 400u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A250B0u) goto L_08A250B0;
    return;
L_08A250B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(732), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(736), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(740), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(744), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(748), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(752), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A250D8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(740)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_08A25110;
      }
      goto L_08A250E8;
    }
L_08A250E8:
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(332)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A25110;
      }
      goto L_08A250F8;
    }
L_08A250F8:
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[8] = (aot_gpr[6] << 2u);
      if (branch_taken) {
          goto L_08A25118;
      }
      goto L_08A25108;
    }
L_08A25108:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[7] << 2u);
      if (branch_taken) {
          goto L_08A25138;
      }
      goto L_08A25110;
    }
L_08A25110:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25118:
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[8]);
    goto L_08A2511C;
L_08A2511C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(336)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(332), aot_gpr[9]);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2511C;
      }
      goto L_08A25134;
    }
L_08A25134:
    aot_gpr[6] = (aot_gpr[7] << 2u);
    goto L_08A25138;
L_08A25138:
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(332), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(740), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2514C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(744)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25154:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(748)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2515C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(736)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25164:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(740)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2516C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(740)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_08A25184;
      }
      goto L_08A25178;
    }
L_08A25178:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(332)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25184:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2518C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(740)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A251AC;
      }
      goto L_08A25198;
    }
L_08A25198:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(744)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(332)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A251AC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A251B4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(740)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A251CC;
      }
      goto L_08A251C0;
    }
L_08A251C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(744), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A251CC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A251D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(216));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A251F4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A251F4u) goto L_08A251F4;
    return;
L_08A251F4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A25214;
      }
      goto L_08A25200;
    }
L_08A25200:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25214:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25224:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(744), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25230:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(740)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (aot_gpr[6] << 2u);
      if (branch_taken) {
          goto L_08A2524C;
      }
      goto L_08A2523C;
    }
L_08A2523C:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(332), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2524C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25254:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(740)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A25380;
      }
      goto L_08A25268;
    }
L_08A25268:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(744)));
    aot_gpr[9] = (aot_gpr[5] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[9]) >= 0;
    aot_gpr[6] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A2528C;
      }
      goto L_08A25278;
    }
L_08A25278:
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[9]) < -1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2534C;
      }
      goto L_08A25284;
    }
L_08A25284:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A252A4;
      }
      goto L_08A2528C;
    }
L_08A2528C:
    aot_gpr[10] = (0u | 1u);
    { const bool branch_taken = aot_gpr[9] == aot_gpr[10];
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A252FC;
      }
      goto L_08A25298;
    }
L_08A25298:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2534C;
      }
      goto L_08A252A0;
    }
L_08A252A0:
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A252A4;
L_08A252A4:
    { const bool branch_taken = aot_gpr[7] != aot_gpr[9];
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[5]);
      if (branch_taken) {
          goto L_08A252B8;
      }
      goto L_08A252AC;
    }
L_08A252AC:
    aot_gpr[7] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(744), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A2534C;
      }
      goto L_08A252B8;
    }
L_08A252B8:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(748)));
    aot_gpr[7] = (ctx.hi);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(744), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A252DC;
      }
      goto L_08A252D4;
    }
L_08A252D4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(748), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A2534C;
      }
      goto L_08A252DC;
    }
L_08A252DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(736)));
    aot_gpr[10] = (aot_gpr[9] + aot_gpr[5]);
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[5] = (aot_gpr[8] - aot_gpr[5]);
      if (branch_taken) {
          goto L_08A2534C;
      }
      goto L_08A252F0;
    }
L_08A252F0:
    aot_gpr[5] = (aot_gpr[9] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(748), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A2534C;
      }
      goto L_08A252FC;
    }
L_08A252FC:
    { const bool branch_taken = aot_gpr[7] != aot_gpr[9];
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[5]);
      if (branch_taken) {
          goto L_08A25310;
      }
      goto L_08A25304;
    }
L_08A25304:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(744), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2534C;
      }
      goto L_08A25310;
    }
L_08A25310:
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(748)));
    aot_gpr[7] = (ctx.hi);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(744), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A25334;
      }
      goto L_08A2532C;
    }
L_08A2532C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(748), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A2534C;
      }
      goto L_08A25334;
    }
L_08A25334:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(736)));
    aot_gpr[8] = (aot_gpr[9] + aot_gpr[8]);
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (aot_gpr[9] + aot_gpr[5]);
      if (branch_taken) {
          goto L_08A2534C;
      }
      goto L_08A25348;
    }
L_08A25348:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(748), aot_gpr[5]);
    goto L_08A2534C;
L_08A2534C:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A25380;
      }
      goto L_08A25354;
    }
L_08A25354:
    aot_gpr[31] = (0x08A2535Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 235u, 0x089FEE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2535Cu) goto L_08A2535C;
    return;
L_08A2535C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1896));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A25380u);
    aot_gpr[5] = (0u | 5u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A25380u) goto L_08A25380;
    return;
L_08A25380:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2538C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-18240)));
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-18240), aot_gpr[7]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A253BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-464));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(416), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(420), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(424), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(428), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(432), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(436), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(440), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(444), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(448), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(452), aot_gpr[31]);
    aot_gpr[31] = (0x08A253F8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(408), aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A253F8u) goto L_08A253F8;
    return;
L_08A253F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A25404u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A25404u) goto L_08A25404;
    return;
L_08A25404:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A25414u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(1936));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A25414u) goto L_08A25414;
    return;
L_08A25414:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(112)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A2542Cu);
    aot_gpr[7] = (0u | 100u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2542Cu) goto L_08A2542C;
    return;
L_08A2542C:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(412), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A25594;
      }
      goto L_08A2543C;
    }
L_08A2543C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1900));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1944));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(404), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(400), aot_gpr[5]);
    aot_gpr[30] = (2215u << 16u);
    aot_gpr[23] = (2215u << 16u);
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    aot_gpr[18] = (aot_gpr[29] | 0u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(1952));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1928));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1960));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1968));
    aot_gpr[20] = (2216u << 16u);
    goto L_08A25480;
L_08A25480:
    aot_gpr[31] = (0x08A25488u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A25488u) goto L_08A25488;
    return;
L_08A25488:
    aot_gpr[31] = (0x08A25490u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A25490u) goto L_08A25490;
    return;
L_08A25490:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 28u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A254A8u);
    aot_gpr[7] = (0u | 451u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A254A8u) goto L_08A254A8;
    return;
L_08A254A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(332), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    aot_gpr[31] = (0x08A254B8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_08A2538C;
L_08A254B8:
    aot_gpr[31] = (0x08A254C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A254C0u) goto L_08A254C0;
    return;
L_08A254C0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A254CCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A254CCu) goto L_08A254CC;
    return;
L_08A254CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    aot_gpr[31] = (0x08A254D8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A254D8u) goto L_08A254D8;
    return;
L_08A254D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A254E8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A254E8u) goto L_08A254E8;
    return;
L_08A254E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    aot_gpr[31] = (0x08A254F4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A254F4u) goto L_08A254F4;
    return;
L_08A254F4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A25504u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A25504u) goto L_08A25504;
    return;
L_08A25504:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    if (aot_gpr[5] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[23]);
        goto L_08A2551C;
    }
    goto L_08A2551C;
L_08A2551C:
    aot_gpr[31] = (0x08A25524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A25524u) goto L_08A25524;
    return;
L_08A25524:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A25534u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A25534u) goto L_08A25534;
    return;
L_08A25534:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-18240)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-18240), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
        goto L_08A25580;
    }
    goto L_08A25560;
L_08A25560:
    aot_gpr[31] = (0x08A25568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 49u, 0x089EF294u>(ctx, &aot_mem) && ctx.pc == 0x08A25568u) goto L_08A25568;
    return;
L_08A25568:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08A2557Cu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 129u, 0x08A008A4u>(ctx, &aot_mem) && ctx.pc == 0x08A2557Cu) goto L_08A2557C;
    return;
L_08A2557C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
    goto L_08A25580;
L_08A25580:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A25480;
      }
      goto L_08A25594;
    }
L_08A25594:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(412)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(408)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(740), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(416)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(420)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(424)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(428)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(432)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(436)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(440)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(444)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(448)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(452)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(464));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A255D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A255F4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1980));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A255F4u) goto L_08A255F4;
    return;
L_08A255F4:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(328), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (65280u << 16u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-256));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(760), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(756), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(780), 0u);
    aot_gpr[4] = (16800u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(784), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(764), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(768), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(772), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(732), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(736), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(144));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A25658u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A25658u) goto L_08A25658;
    return;
L_08A25658:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25668:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(736)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(740)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(748)));
      if (branch_taken) {
          goto L_08A25684;
      }
      goto L_08A2567C;
    }
L_08A2567C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A25684;
      }
      goto L_08A25684;
    }
L_08A25684:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_fpr[0] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_08A256A0;
      }
      goto L_08A2568C;
    }
L_08A2568C:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[0] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[0] = aot_fpr[0] / aot_fpr[13];
    goto L_08A256A0;
L_08A256A0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A256A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(752)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A25940;
      }
      goto L_08A256E8;
    }
L_08A256E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(780)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08A25940;
      }
      goto L_08A256F4;
    }
L_08A256F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[6]);
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(160));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A2573Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2573Cu) goto L_08A2573C;
    return;
L_08A2573C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(736)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(740)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A25758;
      }
      goto L_08A25750;
    }
L_08A25750:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A25758;
      }
      goto L_08A25758;
    }
L_08A25758:
    aot_gpr[31] = (0x08A25760u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A25668;
L_08A25760:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(772), __builtin_bit_cast(std::uint32_t, aot_fpr[0]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(184));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[21] = (0u | 1u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A25780u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A25780u) goto L_08A25780;
    return;
L_08A25780:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
      if (branch_taken) {
          goto L_08A257A4;
      }
      goto L_08A25788;
    }
L_08A25788:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(184));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A2579Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2579Cu) goto L_08A2579C;
    return;
L_08A2579C:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    goto L_08A257A4;
L_08A257A4:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[19]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[21]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[20] = aot_fpr[12] / aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[21] = (aot_gpr[5] + static_cast<std::uint32_t>(144));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(0))))));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[23] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(296)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(300)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A257ECu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A257ECu) goto L_08A257EC;
    return;
L_08A257EC:
    aot_gpr[10] = (aot_gpr[16] + static_cast<std::uint32_t>(144));
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[30] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (aot_gpr[2] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(772)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08A25818u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A25818u) goto L_08A25818;
    return;
L_08A25818:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(748)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(768)));
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08A25940;
      }
      goto L_08A25834;
    }
L_08A25834:
    aot_gpr[21] = (aot_gpr[20] << 2u);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[21] = (aot_gpr[16] + aot_gpr[21]);
    goto L_08A25844;
L_08A25844:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(332)));
    aot_gpr[31] = (0x08A25850u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A25850u) goto L_08A25850;
    return;
L_08A25850:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(332)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[20];
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
      if (branch_taken) {
          goto L_08A25870;
      }
      goto L_08A25868;
    }
L_08A25868:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(756)));
      if (branch_taken) {
          goto L_08A25874;
      }
      goto L_08A25870;
    }
L_08A25870:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(760)));
    goto L_08A25874;
L_08A25874:
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_08A258A0;
      }
      goto L_08A25884;
    }
L_08A25884:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[31] = (0x08A25894u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 59u, 0x08A0E384u>(ctx, &aot_mem) && ctx.pc == 0x08A25894u) goto L_08A25894;
    return;
L_08A25894:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(332)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[23] = (0u | 0u);
    goto L_08A258A0;
L_08A258A0:
    if (aot_gpr[18] == aot_gpr[20]) {
    aot_gpr[23] = (0u | 1u);
        goto L_08A258A8;
    }
    goto L_08A258A8;
L_08A258A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[18]);
    aot_gpr[5] = (65280u << 16u);
    aot_gpr[31] = (0x08A258B8u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A258B8u) goto L_08A258B8;
    return;
L_08A258B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(332)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[12]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[13]);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    aot_gpr[7] = (65280u << 16u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[9] = (aot_gpr[22] | 0u);
    aot_gpr[10] = (aot_gpr[23] | 0u);
    jump_target = aot_gpr[14];
    aot_gpr[31] = (0x08A25914u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A25914u) goto L_08A25914;
    return;
L_08A25914:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(764)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(748)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08A25844;
      }
      goto L_08A25940;
    }
L_08A25940:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
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
L_08A25974:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A25998u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 215u, 0x08A46CCCu>(ctx, &aot_mem) && ctx.pc == 0x08A25998u) goto L_08A25998;
    return;
L_08A25998:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19256));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[31] = (0x08A259ACu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 25u, 0x08A2613Cu>(ctx, &aot_mem) && ctx.pc == 0x08A259ACu) goto L_08A259AC;
    return;
L_08A259AC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(328));
    aot_gpr[31] = (0x08A259C0u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(1992));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A259C0u) goto L_08A259C0;
    return;
L_08A259C0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A259D4u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A259D4u) goto L_08A259D4;
    return;
L_08A259D4:
    aot_gpr[31] = (0x08A259DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A259DCu) goto L_08A259DC;
    return;
L_08A259DC:
    aot_gpr[31] = (0x08A259E4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A259E4u) goto L_08A259E4;
    return;
L_08A259E4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(2004));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 61u);
    aot_gpr[31] = (0x08A25A08u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A25A08u) goto L_08A25A08;
    return;
L_08A25A08:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), aot_gpr[2]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(332));
    aot_gpr[31] = (0x08A25A20u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(2040));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A25A20u) goto L_08A25A20;
    return;
L_08A25A20:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A25A34u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A25A34u) goto L_08A25A34;
    return;
L_08A25A34:
    aot_gpr[31] = (0x08A25A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A25A3Cu) goto L_08A25A3C;
    return;
L_08A25A3C:
    aot_gpr[31] = (0x08A25A44u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A25A44u) goto L_08A25A44;
    return;
L_08A25A44:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 68u);
    aot_gpr[31] = (0x08A25A60u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A25A60u) goto L_08A25A60;
    return;
L_08A25A60:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(356), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A25AA8;
      }
      goto L_08A25A74;
    }
L_08A25A74:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (2216u << 16u);
    goto L_08A25A7C;
L_08A25A7C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-18240)));
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-18240), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(356)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A25A7C;
      }
      goto L_08A25AA8;
    }
L_08A25AA8:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[31] = (0x08A25AB4u);
    aot_gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 10u, 0x08A46078u>(ctx, &aot_mem) && ctx.pc == 0x08A25AB4u) goto L_08A25AB4;
    return;
L_08A25AB4:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A25ACC;
      }
      goto L_08A25AC0;
    }
L_08A25AC0:
    aot_gpr[31] = (0x08A25AC8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 3u, 0x08A46010u>(ctx, &aot_mem) && ctx.pc == 0x08A25AC8u) goto L_08A25AC8;
    return;
L_08A25AC8:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    goto L_08A25ACC;
L_08A25ACC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(348), aot_gpr[18]);
    aot_gpr[31] = (0x08A25AD8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 18u, 0x08A460F8u>(ctx, &aot_mem) && ctx.pc == 0x08A25AD8u) goto L_08A25AD8;
    return;
L_08A25AD8:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A25AFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A25BB8;
      }
      goto L_08A25B18;
    }
L_08A25B18:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19256));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(348)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A25B34u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 6u, 0x08A4604Cu>(ctx, &aot_mem) && ctx.pc == 0x08A25B34u) goto L_08A25B34;
    return;
L_08A25B34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(324)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(356)));
        goto L_08A25B64;
    }
    goto L_08A25B40;
L_08A25B40:
    aot_gpr[31] = (0x08A25B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A25B48u) goto L_08A25B48;
    return;
L_08A25B48:
    aot_gpr[31] = (0x08A25B50u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A25B50u) goto L_08A25B50;
    return;
L_08A25B50:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(324)));
    aot_gpr[31] = (0x08A25B5Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A25B5Cu) goto L_08A25B5C;
    return;
L_08A25B5C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(324), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(356)));
    goto L_08A25B64;
L_08A25B64:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A25B90;
      }
      goto L_08A25B6C;
    }
L_08A25B6C:
    aot_gpr[31] = (0x08A25B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A25B74u) goto L_08A25B74;
    return;
L_08A25B74:
    aot_gpr[31] = (0x08A25B7Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A25B7Cu) goto L_08A25B7C;
    return;
L_08A25B7C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(356)));
    aot_gpr[31] = (0x08A25B88u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A25B88u) goto L_08A25B88;
    return;
L_08A25B88:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(356), 0u);
    aot_gpr[4] = (2216u << 16u);
    goto L_08A25B90;
L_08A25B90:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26304));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A25BA4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A25BA4u) goto L_08A25BA4;
    return;
L_08A25BA4:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A25BB8;
      }
      goto L_08A25BB0;
    }
L_08A25BB0:
    aot_gpr[31] = (0x08A25BB8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A25BB8u) goto L_08A25BB8;
    return;
L_08A25BB8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25BCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A25C10u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A25C10u) goto L_08A25C10;
    return;
L_08A25C10:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A25D64;
      }
      goto L_08A25C18;
    }
L_08A25C18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(232)));
    aot_gpr[5] = (0u | 17u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A25C34u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A25C34u) goto L_08A25C34;
    return;
L_08A25C34:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A25CD0;
      }
      goto L_08A25C40;
    }
L_08A25C40:
    aot_gpr[31] = (0x08A25C48u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 32u, 0x08A461C4u>(ctx, &aot_mem) && ctx.pc == 0x08A25C48u) goto L_08A25C48;
    return;
L_08A25C48:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(251) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A25CD0;
      }
      goto L_08A25C54;
    }
L_08A25C54:
    aot_gpr[31] = (0x08A25C5Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 87u, 0x08A39434u>(ctx, &aot_mem) && ctx.pc == 0x08A25C5Cu) goto L_08A25C5C;
    return;
L_08A25C5C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[2]) < 46 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A25CD0;
      }
      goto L_08A25C68;
    }
L_08A25C68:
    aot_gpr[31] = (0x08A25C70u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(348)));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 28u, 0x08A4616Cu>(ctx, &aot_mem) && ctx.pc == 0x08A25C70u) goto L_08A25C70;
    return;
L_08A25C70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) >= 0;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(216));
      if (branch_taken) {
          goto L_08A25C98;
      }
      goto L_08A25C7C;
    }
L_08A25C7C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A25C90u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A25C90u) goto L_08A25C90;
    return;
L_08A25C90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A25CAC;
      }
      goto L_08A25C98;
    }
L_08A25C98:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A25CACu);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A25CACu) goto L_08A25CAC;
    return;
L_08A25CAC:
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
L_08A25CD0:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A25CDCu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A25CDCu) goto L_08A25CDC;
    return;
L_08A25CDC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A25D30;
      }
      goto L_08A25CE4;
    }
L_08A25CE4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A25CF4u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A25CF4u) goto L_08A25CF4;
    return;
L_08A25CF4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A25D30;
      }
      goto L_08A25CFC;
    }
L_08A25CFC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A25D0Cu);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A25D0Cu) goto L_08A25D0C;
    return;
L_08A25D0C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A25D30;
      }
      goto L_08A25D14;
    }
L_08A25D14:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A25D24u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A25D24u) goto L_08A25D24;
    return;
L_08A25D24:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A25D64;
      }
      goto L_08A25D2C;
    }
L_08A25D2C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A25D30;
L_08A25D30:
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A25D40u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 11u, 0x08A0107Cu>(ctx, &aot_mem) && ctx.pc == 0x08A25D40u) goto L_08A25D40;
    return;
L_08A25D40:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
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
L_08A25D64:
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
L_08A25D88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(336)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(328)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A25E0C;
      }
      goto L_08A25DB0;
    }
L_08A25DB0:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A25E0C;
      }
      goto L_08A25DB8;
    }
L_08A25DB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(224));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A25DD4u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A25DD4u) goto L_08A25DD4;
    return;
L_08A25DD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(336)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(324)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(336)));
    aot_gpr[2] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(336), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25E0C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25E24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(224));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A25E4Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A25E4Cu) goto L_08A25E4C;
    return;
L_08A25E4C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A25E84;
      }
      goto L_08A25E5C;
    }
L_08A25E5C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(336)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A25E84;
      }
      goto L_08A25E6C;
    }
L_08A25E6C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
      if (branch_taken) {
          goto L_08A25E98;
      }
      goto L_08A25E7C;
    }
L_08A25E7C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A25ED8;
      }
      goto L_08A25E84;
    }
L_08A25E84:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25E98:
    aot_gpr[8] = (aot_gpr[4] << 2u);
    goto L_08A25E9C;
L_08A25E9C:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(340)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
    if (aot_gpr[9] == aot_gpr[6]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(340), aot_gpr[7]);
        goto L_08A25EBC;
    }
    goto L_08A25EBC;
L_08A25EBC:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(336)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A25E9C;
      }
      goto L_08A25ED4;
    }
L_08A25ED4:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    goto L_08A25ED8;
L_08A25ED8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(344)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(332)));
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[4] = (aot_gpr[6] << 2u);
        goto L_08A25F00;
    }
    goto L_08A25EF0;
L_08A25EF0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A25EFC;
      }
      goto L_08A25EF8;
    }
L_08A25EF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(344), aot_gpr[4]);
    goto L_08A25EFC;
L_08A25EFC:
    aot_gpr[4] = (aot_gpr[6] << 2u);
    goto L_08A25F00;
L_08A25F00:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(336), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25F20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(324)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(336), 0u);
        goto L_08A25F50;
    }
    goto L_08A25F3C;
L_08A25F3C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A25F4Cu);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A25F4Cu) goto L_08A25F4C;
    return;
L_08A25F4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(336), 0u);
    goto L_08A25F50;
L_08A25F50:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(340), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(344), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25F68:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(344)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25F70:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(332)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25F78:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(336)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25F80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(324)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25F94:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(340)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(324)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25FAC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(340)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25FB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(340), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A25FC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(336)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 18u, 0x08A260ECu>(ctx, &aot_mem); return;
      }
      goto L_08A25FD4;
    }
L_08A25FD4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(340)));
    aot_gpr[9] = (aot_gpr[5] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[9]) >= 0;
    aot_gpr[6] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A25FF8;
      }
      goto L_08A25FE4;
    }
L_08A25FE4:
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[9]) < -1 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 15u, 0x08A260B8u>(ctx, &aot_mem); return;
      }
      goto L_08A25FF0;
    }
L_08A25FF0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 3u, 0x08A26010u>(ctx, &aot_mem); return;
      }
      goto L_08A25FF8;
    }
L_08A25FF8:
    aot_gpr[10] = (0u | 1u);
    { const bool branch_taken = aot_gpr[9] == aot_gpr[10];
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 9u, 0x08A26068u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0546_entry, 546u, 1u, 0x08A26004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0545(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0545_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_545(Runtime &runtime) {
    runtime.register_generated_unit(545u, 0x08A25000u, 4096u, &recomp_unit_0545, &recomp_unit_0545_entry);
    runtime.register_function(0x08A25000u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25018u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25024u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A2502Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25048u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25080u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25090u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A250B0u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A250D8u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A250E8u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A250F8u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25108u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25110u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25118u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A2511Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25134u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25138u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A2514Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25154u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A2515Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25164u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A2516Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25178u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25184u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A2518Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25198u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A251ACu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A251B4u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A251C0u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A251CCu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A251D4u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A251F4u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25200u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25214u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25224u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25230u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A2523Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A2524Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25254u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25268u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25278u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25284u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A2528Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25298u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A252A0u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A252A4u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A252ACu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A252B8u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A252D4u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A252DCu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A252F0u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A252FCu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25304u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25310u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A2532Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25334u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25348u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A2534Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25354u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A2535Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25380u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A2538Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A253BCu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A253F8u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25404u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25414u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A2542Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A2543Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25480u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25488u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25490u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A254A8u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A254B8u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A254C0u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A254CCu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A254D8u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A254E8u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A254F4u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25504u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A2551Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25524u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25534u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25560u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25568u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A2557Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25580u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25594u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A255D0u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A255F4u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25658u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25668u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A2567Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25684u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A2568Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A256A0u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A256A8u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A256E8u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A256F4u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A2573Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25750u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25758u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25760u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25780u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25788u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A2579Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A257A4u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A257ECu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25818u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25834u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25844u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25850u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25868u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25870u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25874u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25884u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25894u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A258A0u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A258A8u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A258B8u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25914u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25940u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25974u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25998u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A259ACu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A259C0u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A259D4u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A259DCu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A259E4u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25A08u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25A20u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25A34u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25A3Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25A44u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25A60u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25A74u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25A7Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25AA8u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25AB4u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25AC0u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25AC8u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25ACCu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25AD8u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25AFCu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25B18u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25B34u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25B40u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25B48u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25B50u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25B5Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25B64u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25B6Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25B74u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25B7Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25B88u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25B90u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25BA4u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25BB0u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25BB8u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25BCCu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25C10u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25C18u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25C34u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25C40u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25C48u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25C54u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25C5Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25C68u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25C70u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25C7Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25C90u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25C98u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25CACu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25CD0u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25CDCu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25CE4u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25CF4u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25CFCu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25D0Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25D14u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25D24u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25D2Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25D30u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25D40u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25D64u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25D88u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25DB0u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25DB8u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25DD4u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25E0Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25E24u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25E4Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25E5Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25E6Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25E7Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25E84u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25E98u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25E9Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25EBCu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25ED4u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25ED8u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25EF0u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25EF8u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25EFCu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25F00u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25F20u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25F3Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25F4Cu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25F50u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25F68u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25F70u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25F78u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25F80u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25F94u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25FACu, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25FB4u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25FC0u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25FD4u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25FE4u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25FF0u, &recomp_unit_0545, "recomp_unit_0545");
    runtime.register_function(0x08A25FF8u, &recomp_unit_0545, "recomp_unit_0545");
}
} // namespace psprecomp
