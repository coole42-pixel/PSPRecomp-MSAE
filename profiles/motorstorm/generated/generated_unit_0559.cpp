#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0559[1018] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 8, 0, 0, 0, 9, 10, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 15, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 19, 0, 0, 20,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 27, 28, 0, 0,
    0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 38, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 46, 0, 47, 0, 0, 48, 0, 0, 49, 0, 50, 0, 0,
    51, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 57, 0, 0, 58, 0, 0, 0, 0,
    0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0,
    0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0,
    75, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 79, 0, 80, 0, 0, 81, 0, 0, 0, 82, 83, 0, 0, 0, 0, 0, 0, 84, 0,
    0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 93,
    0, 94, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 103, 0, 0, 104, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0,
    108, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0,
    0, 0, 0, 122, 0, 0, 123, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 128, 0,
    0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133,
    0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 137, 0, 0, 138, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 146, 147, 0, 0, 148, 0, 149, 150, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0,
    0, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0,
    161, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 168,
    0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 175, 0, 176, 0,
    0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 181,
    0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0,
    0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 197,
    0, 198, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204,
    0, 205, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 210, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0,
    0, 213, 0, 214, 0, 215, 216, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 0, 0,
    224, 0, 0, 225, 0, 226, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 230, 0, 231, 0, 232, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 236,
};
void recomp_unit_0559_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A33000u;
        entry_id = (entry_delta < 4072u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0559[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A33000;
    case 2u: goto L_08A33010;
    case 3u: goto L_08A33020;
    case 4u: goto L_08A33028;
    case 5u: goto L_08A33040;
    case 6u: goto L_08A33048;
    case 7u: goto L_08A33050;
    case 8u: goto L_08A3305C;
    case 9u: goto L_08A3306C;
    case 10u: goto L_08A33070;
    case 11u: goto L_08A33088;
    case 12u: goto L_08A33098;
    case 13u: goto L_08A330A4;
    case 14u: goto L_08A330BC;
    case 15u: goto L_08A330C4;
    case 16u: goto L_08A330CC;
    case 17u: goto L_08A330DC;
    case 18u: goto L_08A330E4;
    case 19u: goto L_08A330F0;
    case 20u: goto L_08A330FC;
    case 21u: goto L_08A33110;
    case 22u: goto L_08A33128;
    case 23u: goto L_08A33134;
    case 24u: goto L_08A33144;
    case 25u: goto L_08A3314C;
    case 26u: goto L_08A33160;
    case 27u: goto L_08A33170;
    case 28u: goto L_08A33174;
    case 29u: goto L_08A33184;
    case 30u: goto L_08A3318C;
    case 31u: goto L_08A33194;
    case 32u: goto L_08A331C8;
    case 33u: goto L_08A33200;
    case 34u: goto L_08A33210;
    case 35u: goto L_08A33220;
    case 36u: goto L_08A3323C;
    case 37u: goto L_08A33270;
    case 38u: goto L_08A33274;
    case 39u: goto L_08A332A0;
    case 40u: goto L_08A332B0;
    case 41u: goto L_08A332BC;
    case 42u: goto L_08A332CC;
    case 43u: goto L_08A332F8;
    case 44u: goto L_08A33324;
    case 45u: goto L_08A33348;
    case 46u: goto L_08A3334C;
    case 47u: goto L_08A33354;
    case 48u: goto L_08A33360;
    case 49u: goto L_08A3336C;
    case 50u: goto L_08A33374;
    case 51u: goto L_08A33380;
    case 52u: goto L_08A33390;
    case 53u: goto L_08A3339C;
    case 54u: goto L_08A333B4;
    case 55u: goto L_08A333D0;
    case 56u: goto L_08A333DC;
    case 57u: goto L_08A333E0;
    case 58u: goto L_08A333EC;
    case 59u: goto L_08A33408;
    case 60u: goto L_08A33414;
    case 61u: goto L_08A33450;
    case 62u: goto L_08A334A4;
    case 63u: goto L_08A334BC;
    case 64u: goto L_08A334D4;
    case 65u: goto L_08A334E0;
    case 66u: goto L_08A334EC;
    case 67u: goto L_08A334F8;
    case 68u: goto L_08A33504;
    case 69u: goto L_08A33514;
    case 70u: goto L_08A33524;
    case 71u: goto L_08A33534;
    case 72u: goto L_08A33550;
    case 73u: goto L_08A33560;
    case 74u: goto L_08A33578;
    case 75u: goto L_08A33580;
    case 76u: goto L_08A33588;
    case 77u: goto L_08A33598;
    case 78u: goto L_08A335A8;
    case 79u: goto L_08A335B4;
    case 80u: goto L_08A335BC;
    case 81u: goto L_08A335C8;
    case 82u: goto L_08A335D8;
    case 83u: goto L_08A335DC;
    case 84u: goto L_08A335F8;
    case 85u: goto L_08A33608;
    case 86u: goto L_08A33610;
    case 87u: goto L_08A33628;
    case 88u: goto L_08A33634;
    case 89u: goto L_08A33640;
    case 90u: goto L_08A3364C;
    case 91u: goto L_08A33658;
    case 92u: goto L_08A33670;
    case 93u: goto L_08A3367C;
    case 94u: goto L_08A33684;
    case 95u: goto L_08A3368C;
    case 96u: goto L_08A3369C;
    case 97u: goto L_08A336B0;
    case 98u: goto L_08A336CC;
    case 99u: goto L_08A336D4;
    case 100u: goto L_08A336E4;
    case 101u: goto L_08A33710;
    case 102u: goto L_08A33720;
    case 103u: goto L_08A33728;
    case 104u: goto L_08A33734;
    case 105u: goto L_08A33738;
    case 106u: goto L_08A33764;
    case 107u: goto L_08A33774;
    case 108u: goto L_08A33780;
    case 109u: goto L_08A3378C;
    case 110u: goto L_08A3379C;
    case 111u: goto L_08A337AC;
    case 112u: goto L_08A337B4;
    case 113u: goto L_08A337C0;
    case 114u: goto L_08A337F8;
    case 115u: goto L_08A33810;
    case 116u: goto L_08A33820;
    case 117u: goto L_08A33828;
    case 118u: goto L_08A33848;
    case 119u: goto L_08A33850;
    case 120u: goto L_08A33868;
    case 121u: goto L_08A33870;
    case 122u: goto L_08A3388C;
    case 123u: goto L_08A33898;
    case 124u: goto L_08A338A0;
    case 125u: goto L_08A338A8;
    case 126u: goto L_08A338DC;
    case 127u: goto L_08A338F0;
    case 128u: goto L_08A338F8;
    case 129u: goto L_08A3391C;
    case 130u: goto L_08A33944;
    case 131u: goto L_08A33954;
    case 132u: goto L_08A33958;
    case 133u: goto L_08A3397C;
    case 134u: goto L_08A33984;
    case 135u: goto L_08A339A4;
    case 136u: goto L_08A339AC;
    case 137u: goto L_08A339B8;
    case 138u: goto L_08A339C4;
    case 139u: goto L_08A339CC;
    case 140u: goto L_08A339D8;
    case 141u: goto L_08A339E0;
    case 142u: goto L_08A33A0C;
    case 143u: goto L_08A33A14;
    case 144u: goto L_08A33A1C;
    case 145u: goto L_08A33A30;
    case 146u: goto L_08A33A38;
    case 147u: goto L_08A33A3C;
    case 148u: goto L_08A33A48;
    case 149u: goto L_08A33A50;
    case 150u: goto L_08A33A54;
    case 151u: goto L_08A33A5C;
    case 152u: goto L_08A33A64;
    case 153u: goto L_08A33A6C;
    case 154u: goto L_08A33A88;
    case 155u: goto L_08A33A94;
    case 156u: goto L_08A33AA4;
    case 157u: goto L_08A33AB8;
    case 158u: goto L_08A33AC4;
    case 159u: goto L_08A33AD0;
    case 160u: goto L_08A33AF4;
    case 161u: goto L_08A33B00;
    case 162u: goto L_08A33B18;
    case 163u: goto L_08A33B20;
    case 164u: goto L_08A33B38;
    case 165u: goto L_08A33B4C;
    case 166u: goto L_08A33B64;
    case 167u: goto L_08A33B74;
    case 168u: goto L_08A33B7C;
    case 169u: goto L_08A33B9C;
    case 170u: goto L_08A33BA4;
    case 171u: goto L_08A33BBC;
    case 172u: goto L_08A33BC4;
    case 173u: goto L_08A33BDC;
    case 174u: goto L_08A33BE8;
    case 175u: goto L_08A33BF0;
    case 176u: goto L_08A33BF8;
    case 177u: goto L_08A33C08;
    case 178u: goto L_08A33C40;
    case 179u: goto L_08A33C68;
    case 180u: goto L_08A33C70;
    case 181u: goto L_08A33C7C;
    case 182u: goto L_08A33C88;
    case 183u: goto L_08A33CA0;
    case 184u: goto L_08A33CAC;
    case 185u: goto L_08A33CB8;
    case 186u: goto L_08A33CC0;
    case 187u: goto L_08A33CCC;
    case 188u: goto L_08A33CD8;
    case 189u: goto L_08A33CF4;
    case 190u: goto L_08A33D08;
    case 191u: goto L_08A33D10;
    case 192u: goto L_08A33D30;
    case 193u: goto L_08A33D38;
    case 194u: goto L_08A33D50;
    case 195u: goto L_08A33D58;
    case 196u: goto L_08A33D70;
    case 197u: goto L_08A33D7C;
    case 198u: goto L_08A33D84;
    case 199u: goto L_08A33D8C;
    case 200u: goto L_08A33DA0;
    case 201u: goto L_08A33DBC;
    case 202u: goto L_08A33DD4;
    case 203u: goto L_08A33DDC;
    case 204u: goto L_08A33DFC;
    case 205u: goto L_08A33E04;
    case 206u: goto L_08A33E1C;
    case 207u: goto L_08A33E24;
    case 208u: goto L_08A33E3C;
    case 209u: goto L_08A33E48;
    case 210u: goto L_08A33E50;
    case 211u: goto L_08A33E58;
    case 212u: goto L_08A33E6C;
    case 213u: goto L_08A33E84;
    case 214u: goto L_08A33E8C;
    case 215u: goto L_08A33E94;
    case 216u: goto L_08A33E98;
    case 217u: goto L_08A33EB0;
    case 218u: goto L_08A33EB8;
    case 219u: goto L_08A33ED0;
    case 220u: goto L_08A33ED8;
    case 221u: goto L_08A33EE0;
    case 222u: goto L_08A33EE8;
    case 223u: goto L_08A33EF0;
    case 224u: goto L_08A33F00;
    case 225u: goto L_08A33F0C;
    case 226u: goto L_08A33F14;
    case 227u: goto L_08A33F20;
    case 228u: goto L_08A33F28;
    case 229u: goto L_08A33F4C;
    case 230u: goto L_08A33F88;
    case 231u: goto L_08A33F90;
    case 232u: goto L_08A33F98;
    case 233u: goto L_08A33FA8;
    case 234u: goto L_08A33FB4;
    case 235u: goto L_08A33FE0;
    case 236u: goto L_08A33FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A33000:
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[30]) < static_cast<std::int32_t>(aot_gpr[23]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[22]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 195u, 0x08A32FF8u>(ctx, &aot_mem); return;
      }
      goto L_08A33010;
    }
L_08A33010:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x08A33020u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 95u, 0x08A328FCu>(ctx, &aot_mem) && ctx.pc == 0x08A33020u) goto L_08A33020;
    return;
L_08A33020:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
        goto L_08A33040;
    }
    goto L_08A33028;
L_08A33028:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 49u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[18] = (aot_gpr[16] | 0u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08A33040;
L_08A33040:
    if (aot_gpr[4] == 0u) {
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
        goto L_08A33098;
    }
    goto L_08A33048;
L_08A33048:
    { const bool branch_taken = aot_gpr[20] != aot_gpr[21];
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3305C;
      }
      goto L_08A33050;
    }
L_08A33050:
    aot_gpr[5] = (0u | 1u);
    if (static_cast<std::int32_t>(aot_gpr[19]) > 0) {
    aot_gpr[5] = (aot_gpr[19] | 0u);
        goto L_08A3305C;
    }
    goto L_08A3305C;
L_08A3305C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A33088;
      }
      goto L_08A3306C;
    }
L_08A3306C:
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[6]);
    goto L_08A33070;
L_08A33070:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(-1))))));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[8]));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[6]);
      if (branch_taken) {
          goto L_08A33070;
      }
      goto L_08A33088;
    }
L_08A33088:
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[5] = (0u | 46u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_08A33098;
      }
      goto L_08A33098;
    }
L_08A33098:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
      if (branch_taken) {
          goto L_08A330F0;
      }
      goto L_08A330A4;
    }
L_08A330A4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (0u | 48u);
    aot_gpr[6] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[5] = (0u | 46u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    goto L_08A330BC;
L_08A330BC:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A330DC;
      }
      goto L_08A330C4;
    }
L_08A330C4:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A330DC;
      }
      goto L_08A330CC;
    }
L_08A330CC:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[8] + aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08A330BC;
      }
      goto L_08A330DC;
    }
L_08A330DC:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[5];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A330F0;
      }
      goto L_08A330E4;
    }
L_08A330E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_08A330F0;
L_08A330F0:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[20] == aot_gpr[21];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A3318C;
      }
      goto L_08A330FC;
    }
L_08A330FC:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[20]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) < 0;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A33144;
      }
      goto L_08A33110;
    }
L_08A33110:
    aot_gpr[6] = (0u | 43u);
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    if (aot_gpr[19] != 0u) {
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
        goto L_08A33128;
    }
    goto L_08A33128;
L_08A33128:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 48u);
      if (branch_taken) {
          goto L_08A33174;
      }
      goto L_08A33134;
    }
L_08A33134:
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A33174;
      }
      goto L_08A33144;
    }
L_08A33144:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) >= 0;
    aot_gpr[6] = (0u | 45u);
      if (branch_taken) {
          goto L_08A33174;
      }
      goto L_08A3314C;
    }
L_08A3314C:
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[19]) < -9 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A33170;
      }
      goto L_08A33160;
    }
L_08A33160:
    aot_gpr[6] = (0u | 48u);
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A33170;
L_08A33170:
    aot_gpr[19] = (0u - aot_gpr[19]);
    goto L_08A33174;
L_08A33174:
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A33184u);
    aot_gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 110u, 0x08A329CCu>(ctx, &aot_mem) && ctx.pc == 0x08A33184u) goto L_08A33184;
    return;
L_08A33184:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33194;
      }
      goto L_08A3318C;
    }
L_08A3318C:
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_08A33194;
L_08A33194:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A331C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[8];
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A33220;
      }
      goto L_08A33200;
    }
L_08A33200:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (2218u << 16u);
      if (branch_taken) {
          goto L_08A332CC;
      }
      goto L_08A33210;
    }
L_08A33210:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-26756));
    aot_gpr[20] = (2216u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A33270;
      }
      goto L_08A33220;
    }
L_08A33220:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(-26756));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-17496)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A3323Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0269_entry, 269u, 168u, 0x08911BB4u>(ctx, &aot_mem) && ctx.pc == 0x08A3323Cu) goto L_08A3323C;
    return;
L_08A3323C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-17496), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-17492), aot_gpr[17]);
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
L_08A33270:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[19]);
    goto L_08A33274;
L_08A33274:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-17492)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-17492)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-17496)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-17492), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 128 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-17496), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A332BC;
      }
      goto L_08A332A0;
    }
L_08A332A0:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A332B0u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0269_entry, 269u, 168u, 0x08911BB4u>(ctx, &aot_mem) && ctx.pc == 0x08A332B0u) goto L_08A332B0;
    return;
L_08A332B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-17492), aot_gpr[22]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-17496), 0u);
      if (branch_taken) {
          goto L_08A332F8;
      }
      goto L_08A332BC;
    }
L_08A332BC:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[19]);
      if (branch_taken) {
          goto L_08A33274;
      }
      goto L_08A332CC;
    }
L_08A332CC:
    aot_gpr[2] = (aot_gpr[19] | 0u);
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
L_08A332F8:
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
L_08A33324:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[9] = (aot_gpr[5] | 0u);
    aot_gpr[10] = (aot_gpr[6] | 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[4] = (aot_gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A333EC;
      }
      goto L_08A33348;
    }
L_08A33348:
    aot_gpr[10] = (0u | 37u);
    goto L_08A3334C;
L_08A3334C:
    if (aot_gpr[8] != aot_gpr[10]) {
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08A333E0;
    }
    goto L_08A33354;
L_08A33354:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(1))))));
    if (aot_gpr[8] == 0u) {
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08A333E0;
    }
    goto L_08A33360;
L_08A33360:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[8]) < 65 ? 1u : 0u);
    goto L_08A3336C;
L_08A3336C:
    if (aot_gpr[11] == 0u) {
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-69));
        goto L_08A33390;
    }
    goto L_08A33374;
L_08A33374:
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-69));
      if (branch_taken) {
          goto L_08A33390;
      }
      goto L_08A33380;
    }
L_08A33380:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[8]) < 65 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3336C;
      }
      goto L_08A33390;
    }
L_08A33390:
    aot_gpr[11] = (aot_gpr[8] < static_cast<std::uint32_t>(35) ? 1u : 0u);
    if (aot_gpr[11] == 0u) {
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08A333E0;
    }
    goto L_08A3339C;
L_08A3339C:
    aot_gpr[8] = (aot_gpr[8] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[8]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(7144)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A333B4:
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x08A333D0u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    goto L_08A33414;
L_08A333D0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A333DC:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08A333E0;
L_08A333E0:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3334C;
      }
      goto L_08A333EC;
    }
L_08A333EC:
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x08A33408u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 206u, 0x08A34DB4u>(ctx, &aot_mem) && ctx.pc == 0x08A33408u) goto L_08A33408;
    return;
L_08A33408:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A33414:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-496));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(460), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(472), aot_gpr[20]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[20] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(456), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(464), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(468), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(476), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(480), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(484), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(488), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(492), aot_gpr[31]);
    aot_gpr[31] = (0x08A33450u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 87u, 0x08A364B0u>(ctx, &aot_mem) && ctx.pc == 0x08A33450u) goto L_08A33450;
    return;
L_08A33450:
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(360), 0u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(432), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6984));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7000));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(412), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(408), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7036));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(372), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7016));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(376), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(7044));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7064));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(368), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(364), aot_gpr[4]);
    goto L_08A334A4;
L_08A334A4:
    aot_gpr[19] = (aot_gpr[17] | 0u);
    aot_gpr[18] = (0u | 37u);
    aot_gpr[21] = (aot_gpr[29] + static_cast<std::uint32_t>(360));
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[22] = (2216u << 16u);
    aot_gpr[30] = (2216u << 16u);
    goto L_08A334BC;
L_08A334BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-16724)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-17480)));
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A334D4u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 119u, 0x08A3963Cu>(ctx, &aot_mem) && ctx.pc == 0x08A334D4u) goto L_08A334D4;
    return;
L_08A334D4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[16]) <= 0) {
    aot_gpr[18] = (aot_gpr[17] - aot_gpr[19]);
        goto L_08A334F8;
    }
    goto L_08A334E0;
L_08A334E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[16]);
      if (branch_taken) {
          goto L_08A334BC;
      }
      goto L_08A334EC;
    }
L_08A334EC:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[17] - aot_gpr[19]);
      if (branch_taken) {
          goto L_08A334F8;
      }
      goto L_08A334F8;
    }
L_08A334F8:
    aot_gpr[7] = (aot_gpr[18] | 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A335B4;
      }
      goto L_08A33504;
    }
L_08A33504:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[6] & 512u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08A33578;
    }
    goto L_08A33514;
L_08A33514:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A33550;
      }
      goto L_08A33524;
    }
L_08A33524:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A33534u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A33534u) goto L_08A33534;
    return;
L_08A33534:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[18]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A335A8;
      }
      goto L_08A33550;
    }
L_08A33550:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A33560u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A33560u) goto L_08A33560;
    return;
L_08A33560:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A335A8;
      }
      goto L_08A33578;
    }
L_08A33578:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A33598;
      }
      goto L_08A33580;
    }
L_08A33580:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A33598;
      }
      goto L_08A33588;
    }
L_08A33588:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE16(aot_gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(14))))));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08A33598;
L_08A33598:
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A335A8u);
    aot_gpr[7] = (0u | 0u);
    goto L_08A331C8;
L_08A335A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(432)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(432), aot_gpr[4]);
    goto L_08A335B4;
L_08A335B4:
    if (static_cast<std::int32_t>(aot_gpr[16]) <= 0) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
        (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 164u, 0x08A34A38u>(ctx, &aot_mem); return;
    }
    goto L_08A335BC;
L_08A335BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A335DC;
      }
      goto L_08A335C8;
    }
L_08A335C8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_gpr[4] = (aot_gpr[4] & 512u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(12))))));
        (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 164u, 0x08A34A38u>(ctx, &aot_mem); return;
    }
    goto L_08A335D8;
L_08A335D8:
    aot_gpr[4] = (0u | 0u);
    goto L_08A335DC;
L_08A335DC:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(428), aot_gpr[4]);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[30] = (0u | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A335F8;
L_08A335F8:
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(-32));
    aot_gpr[9] = (aot_gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
    goto L_08A33608;
L_08A33608:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 14u, 0x08A34148u>(ctx, &aot_mem); return;
      }
      goto L_08A33610;
    }
L_08A33610:
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[7]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(7288)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A33628:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A335F8;
      }
      goto L_08A33634;
    }
L_08A33634:
    aot_gpr[4] = (0u | 32u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08A335F8;
      }
      goto L_08A33640;
    }
L_08A33640:
    aot_gpr[21] = (aot_gpr[21] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A335F8;
      }
      goto L_08A3364C;
    }
L_08A3364C:
    aot_gpr[21] = (aot_gpr[21] | 512u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A335F8;
      }
      goto L_08A33658;
    }
L_08A33658:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[30]) >= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A335F8;
      }
      goto L_08A33670;
    }
L_08A33670:
    aot_gpr[30] = (0u - aot_gpr[30]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[21] | 4u);
      if (branch_taken) {
          goto L_08A33684;
      }
      goto L_08A3367C;
    }
L_08A3367C:
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[21] | 4u);
    goto L_08A33684;
L_08A33684:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A335F8;
      }
      goto L_08A3368C;
    }
L_08A3368C:
    aot_gpr[4] = (0u | 43u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A335F8;
      }
      goto L_08A3369C;
    }
L_08A3369C:
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (0u | 42u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    aot_gpr[17] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A336D4;
      }
      goto L_08A336B0;
    }
L_08A336B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
    if (static_cast<std::int32_t>(aot_gpr[5]) < 0) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08A336CC;
    }
    goto L_08A336CC;
L_08A336CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A335F8;
      }
      goto L_08A336D4;
    }
L_08A336D4:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(-48));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A33710;
      }
      goto L_08A336E4;
    }
L_08A336E4:
    aot_gpr[4] = (aot_gpr[5] << 3u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(-48));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-48));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A336E4;
      }
      goto L_08A33710;
    }
L_08A33710:
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(-32));
    aot_gpr[9] = (aot_gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
    if (static_cast<std::int32_t>(aot_gpr[5]) < 0) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08A33720;
    }
    goto L_08A33720;
L_08A33720:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[22] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A33608;
      }
      goto L_08A33728;
    }
L_08A33728:
    aot_gpr[21] = (aot_gpr[21] | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A335F8;
      }
      goto L_08A33734;
    }
L_08A33734:
    aot_gpr[5] = (0u | 0u);
    goto L_08A33738;
L_08A33738:
    aot_gpr[4] = (aot_gpr[5] << 3u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(-48));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-48));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A33738;
      }
      goto L_08A33764;
    }
L_08A33764:
    aot_gpr[7] = (aot_gpr[16] + static_cast<std::uint32_t>(-32));
    aot_gpr[30] = (aot_gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (aot_gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A33608;
      }
      goto L_08A33774;
    }
L_08A33774:
    aot_gpr[21] = (aot_gpr[21] | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A335F8;
      }
      goto L_08A33780;
    }
L_08A33780:
    aot_gpr[21] = (aot_gpr[21] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A335F8;
      }
      goto L_08A3378C;
    }
L_08A3378C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (0u | 108u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A337AC;
      }
      goto L_08A3379C;
    }
L_08A3379C:
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[21] = (aot_gpr[21] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A335F8;
      }
      goto L_08A337AC;
    }
L_08A337AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[21] | 16u);
      if (branch_taken) {
          goto L_08A335F8;
      }
      goto L_08A337B4;
    }
L_08A337B4:
    aot_gpr[21] = (aot_gpr[21] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A335F8;
      }
      goto L_08A337C0;
    }
L_08A337C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
    aot_gpr[9] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[9]);
    aot_gpr[4] = (aot_gpr[21] & 132u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (aot_gpr[21] & 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(416), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(424), aot_gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 16u, 0x08A34170u>(ctx, &aot_mem); return;
      }
      goto L_08A337F8;
    }
L_08A337F8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[21] = (aot_gpr[21] | 16u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7140)));
    aot_gpr[5] = (aot_gpr[21] & 32u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7136)));
      if (branch_taken) {
          goto L_08A33820;
      }
      goto L_08A33810;
    }
L_08A33810:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7140)));
    aot_gpr[5] = (aot_gpr[21] & 32u);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7136)));
    goto L_08A33820;
L_08A33820:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[21] & 16u);
      if (branch_taken) {
          goto L_08A33848;
      }
      goto L_08A33828;
    }
L_08A33828:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[5] = (aot_gpr[4] & 7u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A338A8;
      }
      goto L_08A33848;
    }
L_08A33848:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[21] & 64u);
      if (branch_taken) {
          goto L_08A33868;
      }
      goto L_08A33850;
    }
L_08A33850:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 31u));
      if (branch_taken) {
          goto L_08A338A0;
      }
      goto L_08A33868;
    }
L_08A33868:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
        goto L_08A3388C;
    }
    goto L_08A33870;
L_08A33870:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 16u));
      if (branch_taken) {
          goto L_08A33898;
      }
      goto L_08A3388C;
    }
L_08A3388C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
    goto L_08A33898;
L_08A33898:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 31u));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    goto L_08A338A0;
L_08A338A0:
    aot_gpr[11] = (aot_gpr[7] | 0u);
    aot_gpr[10] = (aot_gpr[6] | 0u);
    goto L_08A338A8;
L_08A338A8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7100)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7096)));
    aot_gpr[19] = (aot_gpr[11] | 0u);
    aot_gpr[18] = (aot_gpr[10] | 0u);
    aot_gpr[6] = (aot_gpr[19] ^ aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (0u < aot_gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A338F0;
      }
      goto L_08A338DC;
    }
L_08A338DC:
    aot_gpr[5] = (0u - aot_gpr[11]);
    aot_gpr[6] = (0u | 45u);
    aot_gpr[18] = (0u - aot_gpr[10]);
    aot_gpr[19] = (aot_gpr[5] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_08A338F0;
L_08A338F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A33E98;
      }
      goto L_08A338F8;
    }
L_08A338F8:
    aot_gpr[4] = (aot_gpr[21] & 132u);
    aot_gpr[5] = (aot_gpr[21] & 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(416), aot_gpr[4]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[23] = (aot_gpr[21] & 1u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(424), aot_gpr[5]);
    if (aot_gpr[22] == aot_gpr[6]) {
    aot_gpr[22] = (0u | 6u);
        goto L_08A3391C;
    }
    goto L_08A3391C;
L_08A3391C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[5] = (aot_gpr[4] & 7u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
    aot_gpr[4] = (0u | 103u);
    if (aot_gpr[16] == aot_gpr[4]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(404), aot_gpr[7]);
        goto L_08A33958;
    }
    goto L_08A33944;
L_08A33944:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(404), aot_gpr[7]);
    aot_gpr[4] = (0u | 71u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(400), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A33A54;
      }
      goto L_08A33954;
    }
L_08A33954:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(404), aot_gpr[7]);
    goto L_08A33958;
L_08A33958:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(400), aot_gpr[6]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6948)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6944)));
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x08A3397Cu);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A3397Cu) goto L_08A3397C;
    return;
L_08A3397C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A339D8;
      }
      goto L_08A33984;
    }
L_08A33984:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6948)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6944)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A339A4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A339A4u) goto L_08A339A4;
    return;
L_08A339A4:
    if (static_cast<std::int32_t>(aot_gpr[2]) >= 0) {
    aot_gpr[5] = (aot_gpr[19] | 0u);
        goto L_08A339C4;
    }
    goto L_08A339AC;
L_08A339AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    aot_gpr[31] = (0x08A339B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 220u, 0x08A3FFD8u>(ctx, &aot_mem) && ctx.pc == 0x08A339B8u) goto L_08A339B8;
    return;
L_08A339B8:
    aot_gpr[19] = (aot_gpr[3] | 0u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_08A339C4;
L_08A339C4:
    aot_gpr[31] = (0x08A339CCu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 55u, 0x08A37550u>(ctx, &aot_mem) && ctx.pc == 0x08A339CCu) goto L_08A339CC;
    return;
L_08A339CC:
    aot_gpr[7] = (aot_gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A339E0;
      }
      goto L_08A339D8;
    }
L_08A339D8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6956)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(6952)));
    goto L_08A339E0;
L_08A339E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(388), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(384), aot_gpr[6]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7108)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7104)));
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (0u | 102u);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x08A33A0Cu);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A33A0Cu) goto L_08A33A0C;
    return;
L_08A33A0C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[5] = (0u | 69u);
      if (branch_taken) {
          goto L_08A33A3C;
      }
      goto L_08A33A14;
    }
L_08A33A14:
    aot_gpr[31] = (0x08A33A1Cu);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 192u, 0x08A3FE28u>(ctx, &aot_mem) && ctx.pc == 0x08A33A1Cu) goto L_08A33A1C;
    return;
L_08A33A1C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(388)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(384)));
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A33A30u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 160u, 0x08A3FBACu>(ctx, &aot_mem) && ctx.pc == 0x08A33A30u) goto L_08A33A30;
    return;
L_08A33A30:
    if (static_cast<std::int32_t>(aot_gpr[2]) < 0) {
    aot_gpr[16] = (aot_gpr[18] | 0u);
        goto L_08A33A50;
    }
    goto L_08A33A38;
L_08A33A38:
    aot_gpr[5] = (0u | 69u);
    goto L_08A33A3C;
L_08A33A3C:
    aot_gpr[4] = (0u | 103u);
    if (aot_gpr[16] == aot_gpr[4]) {
    aot_gpr[5] = (0u | 101u);
        goto L_08A33A48;
    }
    goto L_08A33A48;
L_08A33A48:
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[18] | 0u);
    goto L_08A33A50;
L_08A33A50:
    aot_gpr[18] = (0u | 1u);
    goto L_08A33A54;
L_08A33A54:
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[7] = (aot_gpr[16] << 24u);
      if (branch_taken) {
          goto L_08A33A6C;
      }
      goto L_08A33A5C;
    }
L_08A33A5C:
    if (aot_gpr[22] == 0u) {
    aot_gpr[22] = (0u | 1u);
        goto L_08A33A64;
    }
    goto L_08A33A64;
L_08A33A64:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[16] << 24u);
    goto L_08A33A6C;
L_08A33A6C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(404)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(400)));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 24u));
    aot_gpr[6] = (aot_gpr[22] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A33A88u);
    aot_gpr[9] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0558_entry, 558u, 119u, 0x08A32A68u>(ctx, &aot_mem) && ctx.pc == 0x08A33A88u) goto L_08A33A88;
    return;
L_08A33A88:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A33A94u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A33A94u) goto L_08A33A94;
    return;
L_08A33A94:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[21] & 512u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[9] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 16u, 0x08A34170u>(ctx, &aot_mem); return;
      }
      goto L_08A33AA4;
    }
L_08A33AA4:
    aot_gpr[6] = (aot_gpr[23] + aot_gpr[9]);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08A33AB8u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 167u, 0x08A34A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33AB8u) goto L_08A33AB8;
    return;
L_08A33AB8:
    aot_gpr[23] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 16u, 0x08A34170u>(ctx, &aot_mem); return;
      }
      goto L_08A33AC4;
    }
L_08A33AC4:
    aot_gpr[4] = (aot_gpr[21] & 32u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(432)));
      if (branch_taken) {
          goto L_08A33AF4;
      }
      goto L_08A33AD0;
    }
L_08A33AD0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 31u));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A334A4;
      }
      goto L_08A33AF4;
    }
L_08A33AF4:
    aot_gpr[4] = (aot_gpr[21] & 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[21] & 64u);
      if (branch_taken) {
          goto L_08A33B18;
      }
      goto L_08A33B00;
    }
L_08A33B00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A334A4;
      }
      goto L_08A33B18;
    }
L_08A33B18:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
        goto L_08A33B38;
    }
    goto L_08A33B20;
L_08A33B20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_08A334A4;
      }
      goto L_08A33B38;
    }
L_08A33B38:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A334A4;
      }
      goto L_08A33B4C;
    }
L_08A33B4C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[21] = (aot_gpr[21] | 16u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7140)));
    aot_gpr[5] = (aot_gpr[21] & 32u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7136)));
      if (branch_taken) {
          goto L_08A33B74;
      }
      goto L_08A33B64;
    }
L_08A33B64:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7140)));
    aot_gpr[5] = (aot_gpr[21] & 32u);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7136)));
    goto L_08A33B74;
L_08A33B74:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[21] & 16u);
      if (branch_taken) {
          goto L_08A33B9C;
      }
      goto L_08A33B7C;
    }
L_08A33B7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[5] = (aot_gpr[4] & 7u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A33BF8;
      }
      goto L_08A33B9C;
    }
L_08A33B9C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[21] & 64u);
      if (branch_taken) {
          goto L_08A33BBC;
      }
      goto L_08A33BA4;
    }
L_08A33BA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A33BF0;
      }
      goto L_08A33BBC;
    }
L_08A33BBC:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
        goto L_08A33BDC;
    }
    goto L_08A33BC4;
L_08A33BC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08A33BE8;
      }
      goto L_08A33BDC;
    }
L_08A33BDC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
    goto L_08A33BE8;
L_08A33BE8:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (0u | 0u);
    goto L_08A33BF0;
L_08A33BF0:
    aot_gpr[9] = (aot_gpr[7] | 0u);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    goto L_08A33BF8;
L_08A33BF8:
    aot_gpr[19] = (aot_gpr[9] | 0u);
    aot_gpr[18] = (aot_gpr[8] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A33E94;
      }
      goto L_08A33C08;
    }
L_08A33C08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(376)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(420), aot_gpr[6]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7140)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[21] = (aot_gpr[21] | 2u);
    aot_gpr[16] = (0u | 120u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7136)));
      if (branch_taken) {
          goto L_08A33E94;
      }
      goto L_08A33C40;
    }
L_08A33C40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[5] = (aot_gpr[21] & 132u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[21] & 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(416), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(424), aot_gpr[4]);
    if (aot_gpr[23] == 0u) {
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(372)));
        goto L_08A33C68;
    }
    goto L_08A33C68;
L_08A33C68:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[22]) < 0;
    aot_gpr[4] = (aot_gpr[23] | 0u);
      if (branch_taken) {
          goto L_08A33CB8;
      }
      goto L_08A33C70;
    }
L_08A33C70:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A33C7Cu);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 153u, 0x08A3A7A8u>(ctx, &aot_mem) && ctx.pc == 0x08A33C7Cu) goto L_08A33C7C;
    return;
L_08A33C7C:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(420)));
      if (branch_taken) {
          goto L_08A33CAC;
      }
      goto L_08A33C88;
    }
L_08A33C88:
    aot_gpr[6] = (aot_gpr[5] - aot_gpr[23]);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[5] = (aot_gpr[6] | 0u);
        goto L_08A33CA0;
    }
    goto L_08A33CA0;
L_08A33CA0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A33CCC;
      }
      goto L_08A33CAC;
    }
L_08A33CAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[22]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (aot_gpr[22] | 0u);
      if (branch_taken) {
          goto L_08A33CCC;
      }
      goto L_08A33CB8;
    }
L_08A33CB8:
    aot_gpr[31] = (0x08A33CC0u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A33CC0u) goto L_08A33CC0;
    return;
L_08A33CC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[9] = (aot_gpr[2] | 0u);
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(420)));
    goto L_08A33CCC;
L_08A33CCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(420), aot_gpr[12]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 16u, 0x08A34170u>(ctx, &aot_mem); return;
      }
      goto L_08A33CD8;
    }
L_08A33CD8:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(420)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[21] = (aot_gpr[21] | 16u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7140)));
    aot_gpr[5] = (aot_gpr[21] & 32u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7136)));
      if (branch_taken) {
          goto L_08A33D08;
      }
      goto L_08A33CF4;
    }
L_08A33CF4:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(420)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7140)));
    aot_gpr[5] = (aot_gpr[21] & 32u);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7136)));
    goto L_08A33D08;
L_08A33D08:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[21] & 16u);
      if (branch_taken) {
          goto L_08A33D30;
      }
      goto L_08A33D10;
    }
L_08A33D10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[5] = (aot_gpr[4] & 7u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A33D8C;
      }
      goto L_08A33D30;
    }
L_08A33D30:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[21] & 64u);
      if (branch_taken) {
          goto L_08A33D50;
      }
      goto L_08A33D38;
    }
L_08A33D38:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A33D84;
      }
      goto L_08A33D50;
    }
L_08A33D50:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
        goto L_08A33D70;
    }
    goto L_08A33D58;
L_08A33D58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08A33D7C;
      }
      goto L_08A33D70;
    }
L_08A33D70:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
    goto L_08A33D7C;
L_08A33D7C:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (0u | 0u);
    goto L_08A33D84;
L_08A33D84:
    aot_gpr[9] = (aot_gpr[7] | 0u);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    goto L_08A33D8C;
L_08A33D8C:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[19] = (aot_gpr[9] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(420), aot_gpr[12]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A33E94;
      }
      goto L_08A33DA0;
    }
L_08A33DA0:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(368)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7140)));
    aot_gpr[5] = (aot_gpr[21] & 32u);
    aot_gpr[9] = (aot_gpr[21] & 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7136)));
      if (branch_taken) {
          goto L_08A33DD4;
      }
      goto L_08A33DBC;
    }
L_08A33DBC:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(376)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7140)));
    aot_gpr[5] = (aot_gpr[21] & 32u);
    aot_gpr[9] = (aot_gpr[21] & 1u);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7136)));
    goto L_08A33DD4;
L_08A33DD4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[21] & 16u);
      if (branch_taken) {
          goto L_08A33DFC;
      }
      goto L_08A33DDC;
    }
L_08A33DDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[5] = (aot_gpr[4] & 7u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A33E58;
      }
      goto L_08A33DFC;
    }
L_08A33DFC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[21] & 64u);
      if (branch_taken) {
          goto L_08A33E1C;
      }
      goto L_08A33E04;
    }
L_08A33E04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A33E50;
      }
      goto L_08A33E1C;
    }
L_08A33E1C:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
        goto L_08A33E3C;
    }
    goto L_08A33E24;
L_08A33E24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(396)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08A33E48;
      }
      goto L_08A33E3C;
    }
L_08A33E3C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[4]);
    goto L_08A33E48;
L_08A33E48:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (0u | 0u);
    goto L_08A33E50;
L_08A33E50:
    aot_gpr[3] = (aot_gpr[7] | 0u);
    aot_gpr[2] = (aot_gpr[6] | 0u);
    goto L_08A33E58;
L_08A33E58:
    aot_gpr[19] = (aot_gpr[3] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(420), aot_gpr[12]);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08A33E94;
      }
      goto L_08A33E6C;
    }
L_08A33E6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(420), aot_gpr[12]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7100)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7096)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A33E8C;
      }
      goto L_08A33E84;
    }
L_08A33E84:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A33E94;
      }
      goto L_08A33E8C;
    }
L_08A33E8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(420), aot_gpr[12]);
    aot_gpr[21] = (aot_gpr[21] | 2u);
    goto L_08A33E94;
L_08A33E94:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08A33E98;
L_08A33E98:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(428), aot_gpr[22]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7100)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7096)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[22]) < 0;
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(420)));
      if (branch_taken) {
          goto L_08A33EB8;
      }
      goto L_08A33EB0;
    }
L_08A33EB0:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-129));
    aot_gpr[21] = (aot_gpr[21] & aot_gpr[4]);
    goto L_08A33EB8;
L_08A33EB8:
    aot_gpr[4] = (aot_gpr[21] & 132u);
    aot_gpr[8] = (aot_gpr[21] & 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(416), aot_gpr[4]);
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(356));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[6];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(424), aot_gpr[8]);
      if (branch_taken) {
          goto L_08A33EE0;
      }
      goto L_08A33ED0;
    }
L_08A33ED0:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A33EE0;
      }
      goto L_08A33ED8;
    }
L_08A33ED8:
    { const bool branch_taken = aot_gpr[22] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(392), aot_gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 7u, 0x08A340FCu>(ctx, &aot_mem); return;
      }
      goto L_08A33EE0;
    }
L_08A33EE0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A33F0C;
      }
      goto L_08A33EE8;
    }
L_08A33EE8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) >= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(392), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A33F28;
      }
      goto L_08A33EF0;
    }
L_08A33EF0:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(364)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(420), aot_gpr[12]);
    aot_gpr[31] = (0x08A33F00u);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A33F00u) goto L_08A33F00;
    return;
L_08A33F00:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 16u, 0x08A34170u>(ctx, &aot_mem); return;
      }
      goto L_08A33F0C;
    }
L_08A33F0C:
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(392), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A33FB4;
      }
      goto L_08A33F14;
    }
L_08A33F14:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(392), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A33EF0;
      }
      goto L_08A33F20;
    }
L_08A33F20:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[18] & aot_gpr[14]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 5u, 0x08A340C4u>(ctx, &aot_mem); return;
      }
      goto L_08A33F28;
    }
L_08A33F28:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(420), aot_gpr[12]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7124)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7120)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7116)));
    aot_gpr[5] = (aot_gpr[21] & 1u);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7112)));
    aot_gpr[8] = (aot_gpr[18] & aot_gpr[14]);
    goto L_08A33F4C;
L_08A33F4C:
    aot_gpr[4] = (aot_gpr[8] + aot_gpr[2]);
    aot_gpr[9] = (aot_gpr[19] & aot_gpr[15]);
    aot_gpr[10] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[10] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[8] + aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[1] = (aot_gpr[19] << 29u);
    aot_gpr[18] = (aot_gpr[18] >> 3u);
    aot_gpr[19] = (aot_gpr[19] >> 3u);
    aot_gpr[18] = (aot_gpr[1] | aot_gpr[18]);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[6];
    aot_gpr[8] = (aot_gpr[18] & aot_gpr[14]);
      if (branch_taken) {
          goto L_08A33F4C;
      }
      goto L_08A33F88;
    }
L_08A33F88:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[7];
    aot_gpr[8] = (aot_gpr[18] & aot_gpr[14]);
      if (branch_taken) {
          goto L_08A33F4C;
      }
      goto L_08A33F90;
    }
L_08A33F90:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(420)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 7u, 0x08A340FCu>(ctx, &aot_mem); return;
      }
      goto L_08A33F98;
    }
L_08A33F98:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (0u | 48u);
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(392)));
        (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 8u, 0x08A34100u>(ctx, &aot_mem); return;
    }
    goto L_08A33FA8;
L_08A33FA8:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 7u, 0x08A340FCu>(ctx, &aot_mem); return;
      }
      goto L_08A33FB4;
    }
L_08A33FB4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7132)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7128)));
    aot_gpr[6] = (aot_gpr[19] ^ aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(420), aot_gpr[12]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0560_entry, 560u, 4u, 0x08A34090u>(ctx, &aot_mem); return;
      }
      goto L_08A33FE0;
    }
L_08A33FE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(444), aot_gpr[19]);
    goto L_08A33FE4;
L_08A33FE4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(440), aot_gpr[18]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7132)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7128)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(452), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(448), aot_gpr[18]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.pc = 0x08A34000u; return;
}

void recomp_unit_0559(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0559_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_559(Runtime &runtime) {
    runtime.register_generated_unit(559u, 0x08A33000u, 4096u, &recomp_unit_0559, &recomp_unit_0559_entry);
    runtime.register_function(0x08A33000u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33010u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33020u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33028u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33040u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33048u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33050u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A3305Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A3306Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33070u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33088u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33098u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A330A4u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A330BCu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A330C4u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A330CCu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A330DCu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A330E4u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A330F0u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A330FCu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33110u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33128u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33134u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33144u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A3314Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33160u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33170u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33174u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33184u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A3318Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33194u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A331C8u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33200u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33210u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33220u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A3323Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33270u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33274u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A332A0u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A332B0u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A332BCu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A332CCu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A332F8u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33324u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33348u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A3334Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33354u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33360u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A3336Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33374u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33380u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33390u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A3339Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A333B4u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A333D0u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A333DCu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A333E0u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A333ECu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33408u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33414u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33450u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A334A4u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A334BCu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A334D4u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A334E0u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A334ECu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A334F8u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33504u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33514u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33524u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33534u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33550u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33560u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33578u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33580u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33588u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33598u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A335A8u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A335B4u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A335BCu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A335C8u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A335D8u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A335DCu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A335F8u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33608u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33610u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33628u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33634u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33640u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A3364Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33658u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33670u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A3367Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33684u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A3368Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A3369Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A336B0u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A336CCu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A336D4u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A336E4u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33710u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33720u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33728u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33734u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33738u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33764u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33774u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33780u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A3378Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A3379Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A337ACu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A337B4u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A337C0u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A337F8u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33810u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33820u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33828u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33848u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33850u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33868u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33870u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A3388Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33898u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A338A0u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A338A8u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A338DCu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A338F0u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A338F8u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A3391Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33944u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33954u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33958u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A3397Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33984u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A339A4u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A339ACu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A339B8u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A339C4u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A339CCu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A339D8u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A339E0u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33A0Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33A14u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33A1Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33A30u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33A38u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33A3Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33A48u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33A50u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33A54u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33A5Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33A64u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33A6Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33A88u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33A94u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33AA4u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33AB8u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33AC4u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33AD0u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33AF4u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33B00u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33B18u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33B20u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33B38u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33B4Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33B64u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33B74u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33B7Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33B9Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33BA4u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33BBCu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33BC4u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33BDCu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33BE8u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33BF0u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33BF8u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33C08u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33C40u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33C68u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33C70u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33C7Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33C88u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33CA0u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33CACu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33CB8u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33CC0u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33CCCu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33CD8u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33CF4u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33D08u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33D10u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33D30u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33D38u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33D50u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33D58u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33D70u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33D7Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33D84u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33D8Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33DA0u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33DBCu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33DD4u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33DDCu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33DFCu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33E04u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33E1Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33E24u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33E3Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33E48u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33E50u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33E58u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33E6Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33E84u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33E8Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33E94u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33E98u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33EB0u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33EB8u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33ED0u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33ED8u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33EE0u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33EE8u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33EF0u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33F00u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33F0Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33F14u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33F20u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33F28u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33F4Cu, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33F88u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33F90u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33F98u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33FA8u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33FB4u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33FE0u, &recomp_unit_0559, "recomp_unit_0559");
    runtime.register_function(0x08A33FE4u, &recomp_unit_0559, "recomp_unit_0559");
}
} // namespace psprecomp
