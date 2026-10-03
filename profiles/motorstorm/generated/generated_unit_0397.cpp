#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0397[1021] = {
    1, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0,
    9, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 14, 15, 0, 0, 16, 0, 0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 20, 0,
    21, 0, 22, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 26, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 31,
    0, 32, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38,
    0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 49, 0, 0, 50, 0, 0, 51, 0,
    0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 56, 57, 0, 58, 0, 0, 59, 0, 60, 0, 61, 0, 0,
    0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 68,
    0, 0, 69, 0, 0, 0, 0, 70, 0, 71, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 75, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0,
    0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 85,
    0, 86, 0, 87, 88, 0, 0, 89, 0, 90, 91, 0, 0, 92, 0, 93, 94, 0, 0, 95, 0, 96, 97, 0, 0, 98, 0, 99, 100, 0, 101, 0,
    0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 118,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0,
    123, 0, 0, 0, 0, 0, 124, 0, 125, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0,
    0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146,
    0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    159, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167,
    0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 172, 0, 0, 173, 0, 0, 0, 0, 174,
    0, 0, 0, 0, 175, 0, 176, 0, 0, 177, 178, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 182, 0, 0, 0,
    183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0,
    0, 0, 190, 0, 191, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196,
    0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 199, 0, 200, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 206, 0, 207, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0,
    210, 0, 0, 0, 211, 0, 0, 0, 0, 212, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0,
    218, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 0, 230, 0, 0, 231, 0,
    0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 236,
};
void recomp_unit_0397_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08991000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0397[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08991000;
    case 2u: goto L_08991010;
    case 3u: goto L_08991018;
    case 4u: goto L_08991020;
    case 5u: goto L_08991040;
    case 6u: goto L_0899104C;
    case 7u: goto L_08991060;
    case 8u: goto L_0899106C;
    case 9u: goto L_08991080;
    case 10u: goto L_08991088;
    case 11u: goto L_08991094;
    case 12u: goto L_089910A4;
    case 13u: goto L_089910B0;
    case 14u: goto L_089910B8;
    case 15u: goto L_089910BC;
    case 16u: goto L_089910C8;
    case 17u: goto L_089910D4;
    case 18u: goto L_089910DC;
    case 19u: goto L_089910E4;
    case 20u: goto L_089910F8;
    case 21u: goto L_08991100;
    case 22u: goto L_08991108;
    case 23u: goto L_0899111C;
    case 24u: goto L_08991124;
    case 25u: goto L_0899112C;
    case 26u: goto L_08991138;
    case 27u: goto L_0899114C;
    case 28u: goto L_08991154;
    case 29u: goto L_08991164;
    case 30u: goto L_08991174;
    case 31u: goto L_0899117C;
    case 32u: goto L_08991184;
    case 33u: goto L_0899118C;
    case 34u: goto L_0899119C;
    case 35u: goto L_089911AC;
    case 36u: goto L_089911C0;
    case 37u: goto L_089911EC;
    case 38u: goto L_089911FC;
    case 39u: goto L_0899120C;
    case 40u: goto L_08991220;
    case 41u: goto L_0899122C;
    case 42u: goto L_08991250;
    case 43u: goto L_08991264;
    case 44u: goto L_08991274;
    case 45u: goto L_089912A4;
    case 46u: goto L_089912B0;
    case 47u: goto L_089912CC;
    case 48u: goto L_089912D8;
    case 49u: goto L_089912E0;
    case 50u: goto L_089912EC;
    case 51u: goto L_089912F8;
    case 52u: goto L_08991304;
    case 53u: goto L_08991320;
    case 54u: goto L_08991330;
    case 55u: goto L_0899133C;
    case 56u: goto L_0899134C;
    case 57u: goto L_08991350;
    case 58u: goto L_08991358;
    case 59u: goto L_08991364;
    case 60u: goto L_0899136C;
    case 61u: goto L_08991374;
    case 62u: goto L_08991388;
    case 63u: goto L_08991398;
    case 64u: goto L_089913A8;
    case 65u: goto L_089913B0;
    case 66u: goto L_089913D8;
    case 67u: goto L_089913E4;
    case 68u: goto L_089913FC;
    case 69u: goto L_08991408;
    case 70u: goto L_0899141C;
    case 71u: goto L_08991424;
    case 72u: goto L_08991430;
    case 73u: goto L_08991440;
    case 74u: goto L_0899144C;
    case 75u: goto L_08991450;
    case 76u: goto L_0899145C;
    case 77u: goto L_08991468;
    case 78u: goto L_08991474;
    case 79u: goto L_08991488;
    case 80u: goto L_089914B0;
    case 81u: goto L_089914C0;
    case 82u: goto L_089914D0;
    case 83u: goto L_089914E0;
    case 84u: goto L_089914F4;
    case 85u: goto L_089914FC;
    case 86u: goto L_08991504;
    case 87u: goto L_0899150C;
    case 88u: goto L_08991510;
    case 89u: goto L_0899151C;
    case 90u: goto L_08991524;
    case 91u: goto L_08991528;
    case 92u: goto L_08991534;
    case 93u: goto L_0899153C;
    case 94u: goto L_08991540;
    case 95u: goto L_0899154C;
    case 96u: goto L_08991554;
    case 97u: goto L_08991558;
    case 98u: goto L_08991564;
    case 99u: goto L_0899156C;
    case 100u: goto L_08991570;
    case 101u: goto L_08991578;
    case 102u: goto L_08991598;
    case 103u: goto L_089915B8;
    case 104u: goto L_089915C8;
    case 105u: goto L_089915D4;
    case 106u: goto L_089915DC;
    case 107u: goto L_089915F0;
    case 108u: goto L_0899160C;
    case 109u: goto L_08991620;
    case 110u: goto L_08991634;
    case 111u: goto L_08991648;
    case 112u: goto L_08991678;
    case 113u: goto L_089916B0;
    case 114u: goto L_089916B8;
    case 115u: goto L_089916D0;
    case 116u: goto L_089916E8;
    case 117u: goto L_089916F0;
    case 118u: goto L_089916FC;
    case 119u: goto L_08991730;
    case 120u: goto L_0899173C;
    case 121u: goto L_0899174C;
    case 122u: goto L_08991778;
    case 123u: goto L_08991780;
    case 124u: goto L_08991798;
    case 125u: goto L_089917A0;
    case 126u: goto L_089917A4;
    case 127u: goto L_089917CC;
    case 128u: goto L_089917E0;
    case 129u: goto L_08991808;
    case 130u: goto L_08991834;
    case 131u: goto L_08991848;
    case 132u: goto L_08991850;
    case 133u: goto L_08991860;
    case 134u: goto L_08991868;
    case 135u: goto L_08991890;
    case 136u: goto L_08991898;
    case 137u: goto L_089918A4;
    case 138u: goto L_089918B4;
    case 139u: goto L_089918EC;
    case 140u: goto L_0899190C;
    case 141u: goto L_0899192C;
    case 142u: goto L_08991934;
    case 143u: goto L_0899193C;
    case 144u: goto L_08991954;
    case 145u: goto L_0899195C;
    case 146u: goto L_0899197C;
    case 147u: goto L_08991984;
    case 148u: goto L_0899199C;
    case 149u: goto L_089919AC;
    case 150u: goto L_089919BC;
    case 151u: goto L_089919CC;
    case 152u: goto L_089919E0;
    case 153u: goto L_08991A00;
    case 154u: goto L_08991A08;
    case 155u: goto L_08991A10;
    case 156u: goto L_08991A18;
    case 157u: goto L_08991A20;
    case 158u: goto L_08991A70;
    case 159u: goto L_08991A80;
    case 160u: goto L_08991A8C;
    case 161u: goto L_08991A98;
    case 162u: goto L_08991AA4;
    case 163u: goto L_08991AAC;
    case 164u: goto L_08991AB4;
    case 165u: goto L_08991AD4;
    case 166u: goto L_08991AEC;
    case 167u: goto L_08991AFC;
    case 168u: goto L_08991B04;
    case 169u: goto L_08991B0C;
    case 170u: goto L_08991B48;
    case 171u: goto L_08991B58;
    case 172u: goto L_08991B5C;
    case 173u: goto L_08991B68;
    case 174u: goto L_08991B7C;
    case 175u: goto L_08991B90;
    case 176u: goto L_08991B98;
    case 177u: goto L_08991BA4;
    case 178u: goto L_08991BA8;
    case 179u: goto L_08991BAC;
    case 180u: goto L_08991BD8;
    case 181u: goto L_08991BEC;
    case 182u: goto L_08991BF0;
    case 183u: goto L_08991C00;
    case 184u: goto L_08991C18;
    case 185u: goto L_08991C30;
    case 186u: goto L_08991C3C;
    case 187u: goto L_08991C44;
    case 188u: goto L_08991C54;
    case 189u: goto L_08991C74;
    case 190u: goto L_08991C88;
    case 191u: goto L_08991C90;
    case 192u: goto L_08991CA4;
    case 193u: goto L_08991CAC;
    case 194u: goto L_08991CC0;
    case 195u: goto L_08991CF0;
    case 196u: goto L_08991CFC;
    case 197u: goto L_08991D08;
    case 198u: goto L_08991D10;
    case 199u: goto L_08991D28;
    case 200u: goto L_08991D30;
    case 201u: goto L_08991D34;
    case 202u: goto L_08991D64;
    case 203u: goto L_08991D98;
    case 204u: goto L_08991DB8;
    case 205u: goto L_08991DC4;
    case 206u: goto L_08991DC8;
    case 207u: goto L_08991DD0;
    case 208u: goto L_08991DE8;
    case 209u: goto L_08991DF0;
    case 210u: goto L_08991E00;
    case 211u: goto L_08991E10;
    case 212u: goto L_08991E24;
    case 213u: goto L_08991E28;
    case 214u: goto L_08991E40;
    case 215u: goto L_08991E5C;
    case 216u: goto L_08991E68;
    case 217u: goto L_08991E74;
    case 218u: goto L_08991E80;
    case 219u: goto L_08991E8C;
    case 220u: goto L_08991E98;
    case 221u: goto L_08991EA4;
    case 222u: goto L_08991EB0;
    case 223u: goto L_08991ECC;
    case 224u: goto L_08991F2C;
    case 225u: goto L_08991F40;
    case 226u: goto L_08991F48;
    case 227u: goto L_08991F50;
    case 228u: goto L_08991F58;
    case 229u: goto L_08991F60;
    case 230u: goto L_08991F6C;
    case 231u: goto L_08991F78;
    case 232u: goto L_08991F9C;
    case 233u: goto L_08991FC0;
    case 234u: goto L_08991FCC;
    case 235u: goto L_08991FD8;
    case 236u: goto L_08991FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08991000:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 212u, 0x08990F64u>(ctx, &aot_mem); return;
L_08991010:
    aot_gpr[31] = (0x08991018u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 10u, 0x08990094u>(ctx, &aot_mem) && ctx.pc == 0x08991018u) goto L_08991018;
    return;
L_08991018:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 224u, 0x08990FF4u>(ctx, &aot_mem); return;
L_08991020:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (43981u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 48314u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08991060;
      }
      goto L_08991040;
    }
L_08991040:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_0899104C;
L_0899104C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991060:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_0899104C;
      }
      goto L_0899106C;
    }
L_0899106C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089910BC;
      }
      goto L_08991080;
    }
L_08991080:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[4]);
      if (branch_taken) {
          goto L_089910B8;
      }
      goto L_08991088;
    }
L_08991088:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089910C8;
      }
      goto L_08991094;
    }
L_08991094:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089910F8;
      }
      goto L_089910A4;
    }
L_089910A4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089910D4;
      }
      goto L_089910B0;
    }
L_089910B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    goto L_0899104C;
L_089910B8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    goto L_089910BC;
L_089910BC:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_0899104C;
L_089910C8:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_0899104C;
L_089910D4:
    aot_gpr[31] = (0x089910DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 5u, 0x08990038u>(ctx, &aot_mem) && ctx.pc == 0x089910DCu) goto L_089910DC;
    return;
L_089910DC:
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (0u + 0u);
        goto L_089910B0;
    }
    goto L_089910E4;
L_089910E4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_0899104C;
L_089910F8:
    aot_gpr[31] = (0x08991100u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 2u, 0x08990008u>(ctx, &aot_mem) && ctx.pc == 0x08991100u) goto L_08991100;
    return;
L_08991100:
    // nop
    goto L_089910DC;
L_08991108:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (43981u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 48314u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0899112C;
      }
      goto L_0899111C;
    }
L_0899111C:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_08991124;
L_08991124:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899112C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08991124;
      }
      goto L_08991138;
    }
L_08991138:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[3] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (0u + 0u);
        goto L_0899118C;
    }
    goto L_0899114C;
L_0899114C:
    if (aot_gpr[6] == 0u) {
    aot_gpr[3] = (0u + 0u);
        goto L_0899118C;
    }
    goto L_08991154;
L_08991154:
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[6]);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (0u + 0u);
        goto L_0899119C;
    }
    goto L_08991164;
L_08991164:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[8] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0899120C;
      }
      goto L_08991174;
    }
L_08991174:
    { const bool branch_taken = aot_gpr[8] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089911AC;
      }
      goto L_0899117C;
    }
L_0899117C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    goto L_08991184;
L_08991184:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899118C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899119C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[3] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089911AC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] & 128u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[3]));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[7] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089911EC;
      }
      goto L_089911C0;
    }
L_089911C0:
    aot_gpr[2] = (aot_gpr[3] << 8u);
    aot_gpr[2] = (aot_gpr[2] & 32767u);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(1)));
    aot_gpr[2] = (aot_gpr[7] | aot_gpr[2]);
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    aot_gpr[7] = (aot_gpr[2] + 0u);
    goto L_089911EC;
L_089911EC:
    aot_gpr[2] = (aot_gpr[7] & 65535u);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(32767) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_08991264;
    }
    goto L_089911FC;
L_089911FC:
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[8]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899120C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[7] & 65535u);
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(32767) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (0u + 0u);
        goto L_0899118C;
    }
    goto L_08991220;
L_08991220:
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
        goto L_08991250;
    }
    goto L_0899122C;
L_0899122C:
    aot_gpr[2] = (aot_gpr[3] >> 8u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-128));
    aot_gpr[2] = (aot_gpr[2] | aot_gpr[3]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[7]));
    goto L_08991250;
L_08991250:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_08991184;
L_08991264:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_08991184;
L_08991274:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[2] = (43981u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 48314u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089912CC;
      }
      goto L_089912A4;
    }
L_089912A4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_089912B0;
L_089912B0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089912CC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08991304;
      }
      goto L_089912D8;
    }
L_089912D8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08991398;
      }
      goto L_089912E0;
    }
L_089912E0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_0899136C;
      }
      goto L_089912EC;
    }
L_089912EC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089912F8u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    goto L_08991108;
L_089912F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08991320;
      }
      goto L_08991304;
    }
L_08991304:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[3] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991320:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08991330u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x08991330u) goto L_08991330;
    return;
L_08991330:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    if (aot_gpr[4] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[18]);
        goto L_08991350;
    }
    goto L_0899133C;
L_0899133C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(-1))))));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089912B0;
      }
      goto L_0899134C;
    }
L_0899134C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    goto L_08991350;
L_08991350:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089912B0;
      }
      goto L_08991358;
    }
L_08991358:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(-1))))));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_089913A8;
      }
      goto L_08991364;
    }
L_08991364:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_089912B0;
L_0899136C:
    aot_gpr[31] = (0x08991374u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(32767));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 91u, 0x089926A0u>(ctx, &aot_mem) && ctx.pc == 0x08991374u) goto L_08991374;
    return;
L_08991374:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    aot_gpr[3] = (aot_gpr[2] < static_cast<std::uint32_t>(32767) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089912EC;
      }
      goto L_08991388;
    }
L_08991388:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(9));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_089912B0;
L_08991398:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_089912B0;
L_089913A8:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    goto L_089912B0;
L_089913B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[2] = (43981u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 48314u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[16] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_089913FC;
      }
      goto L_089913D8;
    }
L_089913D8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_089913E4;
L_089913E4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089913FC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_089913E4;
      }
      goto L_08991408;
    }
L_08991408:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08991450;
      }
      goto L_0899141C;
    }
L_0899141C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (aot_gpr[3] - aot_gpr[4]);
      if (branch_taken) {
          goto L_0899144C;
      }
      goto L_08991424;
    }
L_08991424:
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0899145C;
      }
      goto L_08991430;
    }
L_08991430:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[17]);
      if (branch_taken) {
          goto L_08991468;
      }
      goto L_08991440;
    }
L_08991440:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_089913E4;
L_0899144C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    goto L_08991450;
L_08991450:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_089913E4;
L_0899145C:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_089913E4;
L_08991468:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x08991474u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08991474u) goto L_08991474;
    return;
L_08991474:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_089913E4;
L_08991488:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(15184)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1000));
      if (branch_taken) {
          goto L_08991578;
      }
      goto L_089914B0;
    }
L_089914B0:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(15184), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (0u + 0u);
      if (branch_taken) {
          goto L_08991578;
      }
      goto L_089914C0;
    }
L_089914C0:
    aot_gpr[17] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(15204)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (2217u << 16u);
        goto L_08991510;
    }
    goto L_089914D0;
L_089914D0:
    aot_gpr[16] = (0u + 0u);
    aot_gpr[19] = (aot_gpr[17] + 0u);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(13312));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(15204)));
    goto L_089914E0;
L_089914E0:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089914FC;
      }
      goto L_089914F4;
    }
L_089914F4:
    aot_gpr[31] = (0x089914FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089914FCu) goto L_089914FC;
    return;
L_089914FC:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[18];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(15204)));
      if (branch_taken) {
          goto L_089914E0;
      }
      goto L_08991504;
    }
L_08991504:
    aot_gpr[31] = (0x0899150Cu);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(15204));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x0899150Cu) goto L_0899150C;
    return;
L_0899150C:
    aot_gpr[4] = (2217u << 16u);
    goto L_08991510;
L_08991510:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(15152)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (2217u << 16u);
        goto L_08991528;
    }
    goto L_0899151C;
L_0899151C:
    aot_gpr[31] = (0x08991524u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15152));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x08991524u) goto L_08991524;
    return;
L_08991524:
    aot_gpr[4] = (2217u << 16u);
    goto L_08991528;
L_08991528:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(15156)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (2217u << 16u);
        goto L_08991540;
    }
    goto L_08991534;
L_08991534:
    aot_gpr[31] = (0x0899153Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15156));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x0899153Cu) goto L_0899153C;
    return;
L_0899153C:
    aot_gpr[4] = (2217u << 16u);
    goto L_08991540;
L_08991540:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(15176)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (2217u << 16u);
        goto L_08991558;
    }
    goto L_0899154C;
L_0899154C:
    aot_gpr[31] = (0x08991554u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15176));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x08991554u) goto L_08991554;
    return;
L_08991554:
    aot_gpr[4] = (2217u << 16u);
    goto L_08991558;
L_08991558:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(15148)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_08991570;
      }
      goto L_08991564;
    }
L_08991564:
    aot_gpr[31] = (0x0899156Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15148));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x0899156Cu) goto L_0899156C;
    return;
L_0899156C:
    aot_gpr[2] = (2217u << 16u);
    goto L_08991570;
L_08991570:
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(15160), static_cast<std::uint8_t>(0u));
    aot_gpr[3] = (0u + 0u);
    goto L_08991578;
L_08991578:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991598:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(15160)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[16] = (aot_gpr[6] + 0u);
      if (branch_taken) {
          goto L_089916D0;
      }
      goto L_089915B8;
    }
L_089915B8:
    aot_gpr[25] = (2217u << 16u);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[25] + static_cast<std::uint32_t>(15156)));
    { const bool branch_taken = aot_gpr[13] == 0u;
    aot_gpr[6] = (2217u << 16u);
      if (branch_taken) {
          goto L_089916D0;
      }
      goto L_089915C8;
    }
L_089915C8:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(15152)));
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[2] = (aot_gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
      if (branch_taken) {
          goto L_089916D0;
      }
      goto L_089915D4;
    }
L_089915D4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[24] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08991634;
      }
      goto L_089915DC;
    }
L_089915DC:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(15212)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_08991634;
      }
      goto L_089915F0;
    }
L_089915F0:
    aot_gpr[15] = (aot_gpr[5] << 2u);
    aot_gpr[14] = (aot_gpr[10] + aot_gpr[15]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(15216)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[14] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[10] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[24] = (0u + static_cast<std::uint32_t>(1003));
      if (branch_taken) {
          goto L_08991634;
      }
      goto L_0899160C;
    }
L_0899160C:
    ctx.lo = aot_gpr[4];
    rt.unsupported(0x08991610u, 0x00AA001Cu, "special? not lowered yet"); return;
L_08991620:
    aot_gpr[10] = (aot_gpr[10] << 4u);
    aot_gpr[3] = (aot_gpr[10] + aot_gpr[13]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[24] = (0u + static_cast<std::uint32_t>(1002));
      if (branch_taken) {
          goto L_08991678;
      }
      goto L_08991634;
    }
L_08991634:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[24] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991648:
    PSPRECOMP_AOT_STORE32(aot_gpr[14] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[10] = (aot_gpr[10] << 4u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(15152)));
    aot_gpr[3] = (aot_gpr[15] + aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[25] + static_cast<std::uint32_t>(15156)));
    aot_gpr[3] = (aot_gpr[10] + aot_gpr[13]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[24] = (0u + static_cast<std::uint32_t>(1002));
      if (branch_taken) {
          goto L_08991634;
      }
      goto L_08991678;
    }
L_08991678:
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[25] + static_cast<std::uint32_t>(15156)));
    aot_gpr[2] = (aot_gpr[10] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[25] + static_cast<std::uint32_t>(15156)));
    aot_gpr[3] = (aot_gpr[10] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[25] + static_cast<std::uint32_t>(15156)));
    aot_gpr[2] = (aot_gpr[10] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[9]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(15180)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[24] = (0u + 0u);
      if (branch_taken) {
          goto L_08991634;
      }
      goto L_089916B0;
    }
L_089916B0:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089916B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089916B8u) goto L_089916B8;
    return;
L_089916B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[24] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[24] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089916D0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[24] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[2] = (aot_gpr[24] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089916E8:
    aot_gpr[9] = (0u + 0u);
    goto L_08991598;
L_089916F0:
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (0u + 0u);
    goto L_089916E8;
L_089916FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[2] = (aot_gpr[5] < static_cast<std::uint32_t>(257) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[8] = (aot_gpr[4] + 0u);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
      if (branch_taken) {
          goto L_08991808;
      }
      goto L_08991730;
    }
L_08991730:
    aot_gpr[2] = (aot_gpr[6] < static_cast<std::uint32_t>(257) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[21] = (2217u << 16u);
      if (branch_taken) {
          goto L_08991808;
      }
      goto L_0899173C;
    }
L_0899173C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(15160)));
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[20];
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_089917CC;
      }
      goto L_0899174C;
    }
L_0899174C:
    aot_gpr[4] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(15168), aot_gpr[7]);
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15152));
    aot_gpr[19] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[6] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(15216), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(15212), aot_gpr[6]);
    aot_gpr[31] = (0x08991778u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(15208), aot_gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x08991778u) goto L_08991778;
    return;
L_08991778:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[18] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089917E0;
      }
      goto L_08991780;
    }
L_08991780:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15156));
    aot_gpr[16] = (ctx.lo);
    aot_gpr[31] = (0x08991798u);
    aot_gpr[5] = (aot_gpr[16] << 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x08991798u) goto L_08991798;
    return;
L_08991798:
    if (aot_gpr[2] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(15208)));
        goto L_08991834;
    }
    goto L_089917A0;
L_089917A0:
    aot_gpr[18] = (aot_gpr[2] + 0u);
    goto L_089917A4;
L_089917A4:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
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
L_089917CC:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(15184)));
    aot_gpr[18] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(15184), aot_gpr[2]);
    goto L_089917E0;
L_089917E0:
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08991808:
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[18] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08991834:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15176));
    aot_gpr[2] = (aot_gpr[5] << 1u);
    aot_gpr[31] = (0x08991848u);
    aot_gpr[5] = (aot_gpr[2] + aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x08991848u) goto L_08991848;
    return;
L_08991848:
    if (aot_gpr[2] != 0u) {
    aot_gpr[18] = (aot_gpr[2] + 0u);
        goto L_089917A4;
    }
    goto L_08991850;
L_08991850:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(15148));
    aot_gpr[31] = (0x08991860u);
    aot_gpr[5] = (aot_gpr[16] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 215u, 0x0898FDB0u>(ctx, &aot_mem) && ctx.pc == 0x08991860u) goto L_08991860;
    return;
L_08991860:
    if (aot_gpr[2] != 0u) {
    aot_gpr[18] = (aot_gpr[2] + 0u);
        goto L_089917A4;
    }
    goto L_08991868;
L_08991868:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(15184)));
    aot_gpr[6] = (2201u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8768));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(15160), static_cast<std::uint8_t>(aot_gpr[20]));
    aot_gpr[31] = (0x08991890u);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(15184), aot_gpr[2]);
    goto L_089916F0;
L_08991890:
    if (aot_gpr[2] != 0u) {
    aot_gpr[18] = (aot_gpr[2] + 0u);
        goto L_089917A4;
    }
    goto L_08991898;
L_08991898:
    aot_gpr[2] = (2217u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[2] + static_cast<std::uint32_t>(15144), static_cast<std::uint8_t>(0u));
    goto L_089917E0;
L_089918A4:
    aot_gpr[9] = (aot_gpr[7] + 0u);
    aot_gpr[8] = (0u + 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
    goto L_08991598;
L_089918B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(5));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(15152)));
    aot_gpr[2] = (aot_gpr[5] << 2u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[8] = (aot_gpr[3] + aot_gpr[2]);
      if (branch_taken) {
          goto L_0899190C;
      }
      goto L_089918EC;
    }
L_089918EC:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(15216)));
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(1003));
    aot_gpr[2] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[3] < aot_gpr[16] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_0899192C;
      }
      goto L_0899190C;
    }
L_0899190C:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
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
L_0899192C:
    aot_gpr[31] = (0x08991934u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089918A4;
L_08991934:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_0899190C;
      }
      goto L_0899193C;
    }
L_0899193C:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(15180)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[18] + 0u);
      if (branch_taken) {
          goto L_0899190C;
      }
      goto L_08991954;
    }
L_08991954:
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x0899195Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0899195Cu) goto L_0899195C;
    return;
L_0899195C:
    aot_gpr[2] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
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
L_0899197C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[8] = (aot_gpr[4] + 0u);
      if (branch_taken) {
          goto L_08991A10;
      }
      goto L_08991984;
    }
L_08991984:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(15160)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[3];
    // nop
      if (branch_taken) {
          goto L_08991A18;
      }
      goto L_0899199C;
    }
L_0899199C:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(15156)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991A18;
      }
      goto L_089919AC;
    }
L_089919AC:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(15152)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[3] = (2217u << 16u);
      if (branch_taken) {
          goto L_08991A18;
      }
      goto L_089919BC;
    }
L_089919BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(15212)));
    aot_gpr[2] = (aot_gpr[8] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991A10;
      }
      goto L_089919CC;
    }
L_089919CC:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(15216)));
    aot_gpr[3] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    ctx.lo = aot_gpr[5];
      if (branch_taken) {
          goto L_08991A10;
      }
      goto L_089919E0;
    }
L_089919E0:
    rt.unsupported(0x089919E0u, 0x0104001Cu, "special? not lowered yet"); return;
L_08991A00:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991A08:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991A00;
      }
      goto L_08991A10;
    }
L_08991A10:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991A18:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991A20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[30]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[30] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(15160)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[4]);
      if (branch_taken) {
          goto L_08991D30;
      }
      goto L_08991A70;
    }
L_08991A70:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(15156)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          goto L_08991D30;
      }
      goto L_08991A80;
    }
L_08991A80:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(15152)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[22] = (2217u << 16u);
      if (branch_taken) {
          goto L_08991D30;
      }
      goto L_08991A8C;
    }
L_08991A8C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(15176)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (2217u << 16u);
      if (branch_taken) {
          goto L_08991D30;
      }
      goto L_08991A98;
    }
L_08991A98:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(15148)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_08991D34;
    }
    goto L_08991AA4;
L_08991AA4:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (aot_gpr[8] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_08991D64;
      }
      goto L_08991AAC;
    }
L_08991AAC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (2217u << 16u);
      if (branch_taken) {
          goto L_08991D64;
      }
      goto L_08991AB4;
    }
L_08991AB4:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(15212)));
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(-2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(1)));
      if (branch_taken) {
          goto L_08991BA4;
      }
      goto L_08991AD4;
    }
L_08991AD4:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(15216)));
    aot_gpr[17] = (aot_gpr[5] + 0u);
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08991BA4;
      }
      goto L_08991AEC;
    }
L_08991AEC:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08991AFCu);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_0899197C;
L_08991AFC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08991BA4;
      }
      goto L_08991B04;
    }
L_08991B04:
    { const bool branch_taken = aot_gpr[2] == 0u;
    ctx.lo = aot_gpr[17];
      if (branch_taken) {
          goto L_08991BA4;
      }
      goto L_08991B0C;
    }
L_08991B0C:
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(15216)));
    aot_gpr[3] = (2217u << 16u);
    rt.unsupported(0x08991B18u, 0x0242001Cu, "special? not lowered yet"); return;
L_08991B48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(15176)));
    aot_gpr[5] = (aot_gpr[19] + aot_gpr[20]);
    aot_gpr[31] = (0x08991B58u);
    aot_gpr[6] = (aot_gpr[21] - aot_gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08991B58u) goto L_08991B58;
    return;
L_08991B58:
    aot_gpr[2] = (2217u << 16u);
    goto L_08991B5C;
L_08991B5C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(15168)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(15176)));
      if (branch_taken) {
          goto L_08991B7C;
      }
      goto L_08991B68;
    }
L_08991B68:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[30] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08991B7Cu);
    aot_gpr[7] = (aot_gpr[23] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08991B7Cu) goto L_08991B7C;
    return;
L_08991B7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08991C90;
    }
    goto L_08991B90;
L_08991B90:
    if (aot_gpr[3] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08991BD8;
    }
    goto L_08991B98;
L_08991B98:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr[3] == aot_gpr[2]) {
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_08991D10;
    }
    goto L_08991BA4;
L_08991BA4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1001));
    goto L_08991BA8;
L_08991BA8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_08991BAC;
L_08991BAC:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991BD8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(15176)));
    aot_gpr[4] = (0u + 0u);
    aot_gpr[5] = (aot_gpr[30] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08991BECu);
    aot_gpr[6] = (aot_gpr[23] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08991BECu) goto L_08991BEC;
    return;
L_08991BEC:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_08991BF0;
L_08991BF0:
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(15164)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(15176)));
      if (branch_taken) {
          goto L_08991C18;
      }
      goto L_08991C00;
    }
L_08991C00:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (aot_gpr[30] + 0u);
    aot_gpr[7] = (aot_gpr[23] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08991C18u);
    aot_gpr[9] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08991C18u) goto L_08991C18;
    return;
L_08991C18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[4] != 0u) aot_gpr[16] = (aot_gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    aot_gpr[9] = (aot_gpr[20] + aot_gpr[16]);
      if (branch_taken) {
          goto L_08991BA4;
      }
      goto L_08991C30;
    }
L_08991C30:
    aot_gpr[2] = (aot_gpr[21] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[9] < aot_gpr[21] ? 1u : 0u);
      if (branch_taken) {
          goto L_08991BA4;
      }
      goto L_08991C3C;
    }
L_08991C3C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_08991BA8;
      }
      goto L_08991C44;
    }
L_08991C44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08991BA4;
      }
      goto L_08991C54;
    }
L_08991C54:
    aot_gpr[3] = (aot_gpr[19] + aot_gpr[9]);
    aot_gpr[4] = (2217u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(15212)));
    aot_gpr[20] = (aot_gpr[9] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[3] + static_cast<std::uint32_t>(1)));
      if (branch_taken) {
          goto L_08991BA4;
      }
      goto L_08991C74;
    }
L_08991C74:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(15216)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[5] + 0u);
      if (branch_taken) {
          goto L_08991AEC;
      }
      goto L_08991C88;
    }
L_08991C88:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1001));
    goto L_08991BA8;
L_08991C90:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(15176)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (aot_gpr[30] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08991CA4u);
    aot_gpr[6] = (aot_gpr[23] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08991CA4u) goto L_08991CA4;
    return;
L_08991CA4:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_08991BF0;
L_08991CAC:
    aot_gpr[6] = (aot_gpr[19] + aot_gpr[21]);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08991CC0u);
    aot_gpr[5] = (aot_gpr[19] + aot_gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x08991CC0u) goto L_08991CC0;
    return;
L_08991CC0:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(15208)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(15176)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[3] = (aot_gpr[2] << 1u);
    aot_gpr[3] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x08991CF0u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08991CF0u) goto L_08991CF0;
    return;
L_08991CF0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08991CFCu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x08991CFCu) goto L_08991CFC;
    return;
L_08991CFC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (2217u << 16u);
        goto L_08991B5C;
    }
    goto L_08991D08;
L_08991D08:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_08991BAC;
L_08991D10:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(15176)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (aot_gpr[30] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08991D28u);
    aot_gpr[6] = (aot_gpr[23] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08991D28u) goto L_08991D28;
    return;
L_08991D28:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    goto L_08991BF0;
L_08991D30:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_08991D34;
L_08991D34:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991D64:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991D98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(15204)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_08991E24;
      }
      goto L_08991DB8;
    }
L_08991DB8:
    aot_gpr[16] = (0u + 0u);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(13312));
    goto L_08991DD0;
L_08991DC4:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(52));
    goto L_08991DC8;
L_08991DC8:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[18];
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08991E28;
      }
      goto L_08991DD0;
    }
L_08991DD0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(15204)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08991DC4;
      }
      goto L_08991DE8;
    }
L_08991DE8:
    aot_gpr[31] = (0x08991DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 172u, 0x08992B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08991DF0u) goto L_08991DF0;
    return;
L_08991DF0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(30001) ? 1u : 0u);
    if (aot_gpr[3] != 0u) {
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(52));
        goto L_08991DC8;
    }
    goto L_08991E00;
L_08991E00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(15204)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[31] = (0x08991E10u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x08991E10u) goto L_08991E10;
    return;
L_08991E10:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(15204)));
    aot_gpr[3] = (aot_gpr[16] + aot_gpr[3]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[18];
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08991DD0;
      }
      goto L_08991E24;
    }
L_08991E24:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08991E28;
L_08991E28:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991E40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08991E5Cu);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x08991E5Cu) goto L_08991E5C;
    return;
L_08991E5C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08991E68u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x08991E68u) goto L_08991E68;
    return;
L_08991E68:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08991E74u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x08991E74u) goto L_08991E74;
    return;
L_08991E74:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08991E80u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x08991E80u) goto L_08991E80;
    return;
L_08991E80:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08991E8Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 192u, 0x08990E50u>(ctx, &aot_mem) && ctx.pc == 0x08991E8Cu) goto L_08991E8C;
    return;
L_08991E8C:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08991E98u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 176u, 0x08990D84u>(ctx, &aot_mem) && ctx.pc == 0x08991E98u) goto L_08991E98;
    return;
L_08991E98:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08991EA4u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    goto L_089913B0;
L_08991EA4:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08991EB0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    goto L_08991020;
L_08991EB0:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08991020;
L_08991ECC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-240));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[30]);
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[30] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(220), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[8] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(208), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(212), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[19]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(15212)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(160), aot_gpr[7]);
    aot_gpr[3] = (aot_gpr[4] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 19u, 0x089921FCu>(ctx, &aot_mem); return;
      }
      goto L_08991F2C;
    }
L_08991F2C:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(15216)));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[29] = (aot_gpr[30] + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 20u, 0x08992200u>(ctx, &aot_mem); return;
    }
    goto L_08991F40;
L_08991F40:
    if (aot_gpr[6] == 0u) {
    aot_gpr[29] = (aot_gpr[30] + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 20u, 0x08992200u>(ctx, &aot_mem); return;
    }
    goto L_08991F48;
L_08991F48:
    if (aot_gpr[7] == 0u) {
    aot_gpr[29] = (aot_gpr[30] + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 20u, 0x08992200u>(ctx, &aot_mem); return;
    }
    goto L_08991F50;
L_08991F50:
    if (aot_gpr[9] == 0u) {
    aot_gpr[29] = (aot_gpr[30] + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 20u, 0x08992200u>(ctx, &aot_mem); return;
    }
    goto L_08991F58;
L_08991F58:
    aot_gpr[31] = (0x08991F60u);
    aot_gpr[6] = (aot_gpr[30] + static_cast<std::uint32_t>(4));
    goto L_0899197C;
L_08991F60:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (2217u << 16u);
        (void)rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 14u, 0x08992170u>(ctx, &aot_mem); return;
    }
    goto L_08991F6C;
L_08991F6C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 13u, 0x0899216Cu>(ctx, &aot_mem); return;
      }
      goto L_08991F78;
    }
L_08991F78:
    aot_gpr[21] = (aot_gpr[30] + static_cast<std::uint32_t>(32));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(30));
    aot_gpr[2] = ((aot_gpr[2] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    aot_gpr[29] = (aot_gpr[29] - aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x08991F9Cu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 141u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x08991F9Cu) goto L_08991F9C;
    return;
L_08991F9C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(160)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[30] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (aot_gpr[21] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[30] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08991FC0u);
    aot_gpr[19] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08991FC0u) goto L_08991FC0;
    return;
L_08991FC0:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x08991FCCu);
    aot_gpr[5] = (aot_gpr[30] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 148u, 0x08990C18u>(ctx, &aot_mem) && ctx.pc == 0x08991FCCu) goto L_08991FCC;
    return;
L_08991FCC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 12u, 0x08992134u>(ctx, &aot_mem); return;
      }
      goto L_08991FD8;
    }
L_08991FD8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(160)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(15208)));
    aot_gpr[3] = (aot_gpr[7] + static_cast<std::uint32_t>(2));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 16u, 0x0899218Cu>(ctx, &aot_mem); return;
      }
      goto L_08991FF0;
    }
L_08991FF0:
    aot_gpr[3] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(-25));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(-26));
    { const bool branch_taken = aot_gpr[2] != 0u;
    { const std::uint32_t dividend = aot_gpr[3]; const std::uint32_t divisor = aot_gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 2u, 0x08992008u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 1u, 0x08992004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0397(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0397_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_397(Runtime &runtime) {
    runtime.register_generated_unit(397u, 0x08991000u, 4096u, &recomp_unit_0397, &recomp_unit_0397_entry);
    runtime.register_function(0x08991000u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991010u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991018u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991020u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991040u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899104Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991060u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899106Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991080u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991088u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991094u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089910A4u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089910B0u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089910B8u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089910BCu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089910C8u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089910D4u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089910DCu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089910E4u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089910F8u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991100u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991108u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899111Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991124u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899112Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991138u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899114Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991154u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991164u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991174u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899117Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991184u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899118Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899119Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089911ACu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089911C0u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089911ECu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089911FCu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899120Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991220u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899122Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991250u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991264u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991274u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089912A4u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089912B0u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089912CCu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089912D8u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089912E0u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089912ECu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089912F8u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991304u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991320u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991330u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899133Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899134Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991350u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991358u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991364u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899136Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991374u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991388u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991398u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089913A8u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089913B0u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089913D8u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089913E4u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089913FCu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991408u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899141Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991424u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991430u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991440u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899144Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991450u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899145Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991468u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991474u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991488u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089914B0u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089914C0u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089914D0u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089914E0u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089914F4u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089914FCu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991504u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899150Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991510u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899151Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991524u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991528u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991534u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899153Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991540u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899154Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991554u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991558u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991564u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899156Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991570u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991578u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991598u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089915B8u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089915C8u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089915D4u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089915DCu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089915F0u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899160Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991620u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991634u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991648u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991678u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089916B0u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089916B8u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089916D0u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089916E8u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089916F0u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089916FCu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991730u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899173Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899174Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991778u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991780u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991798u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089917A0u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089917A4u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089917CCu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089917E0u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991808u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991834u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991848u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991850u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991860u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991868u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991890u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991898u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089918A4u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089918B4u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089918ECu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899190Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899192Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991934u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899193Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991954u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899195Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899197Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991984u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x0899199Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089919ACu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089919BCu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089919CCu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x089919E0u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991A00u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991A08u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991A10u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991A18u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991A20u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991A70u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991A80u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991A8Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991A98u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991AA4u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991AACu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991AB4u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991AD4u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991AECu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991AFCu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991B04u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991B0Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991B48u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991B58u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991B5Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991B68u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991B7Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991B90u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991B98u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991BA4u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991BA8u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991BACu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991BD8u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991BECu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991BF0u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991C00u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991C18u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991C30u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991C3Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991C44u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991C54u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991C74u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991C88u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991C90u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991CA4u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991CACu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991CC0u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991CF0u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991CFCu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991D08u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991D10u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991D28u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991D30u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991D34u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991D64u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991D98u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991DB8u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991DC4u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991DC8u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991DD0u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991DE8u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991DF0u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991E00u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991E10u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991E24u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991E28u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991E40u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991E5Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991E68u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991E74u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991E80u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991E8Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991E98u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991EA4u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991EB0u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991ECCu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991F2Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991F40u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991F48u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991F50u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991F58u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991F60u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991F6Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991F78u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991F9Cu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991FC0u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991FCCu, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991FD8u, &recomp_unit_0397, "recomp_unit_0397");
    runtime.register_function(0x08991FF0u, &recomp_unit_0397, "recomp_unit_0397");
}
} // namespace psprecomp
