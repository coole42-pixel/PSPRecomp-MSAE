#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0573[1023] = {
    1, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 12, 0, 0, 13,
    0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 21, 0, 22, 0,
    23, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 27, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31,
    0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 34, 0, 35, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0,
    46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 50, 0, 51, 0, 52, 0,
    0, 0, 53, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 0,
    59, 0, 0, 60, 0, 0, 61, 0, 0, 0, 62, 0, 63, 0, 64, 0, 0, 65, 0, 66, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 0, 70, 0, 0, 71, 0, 72, 73, 0, 0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79,
    0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 87, 0,
    0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 91, 0, 92, 0, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0,
    97, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 105, 106, 0, 0, 107,
    0, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 112, 0, 113, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 0,
    0, 118, 0, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0, 122, 0, 0, 123, 0, 124, 0, 125, 0, 0, 126, 0, 0, 0, 127, 128, 0, 0, 0,
    0, 0, 0, 129, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 133, 134, 0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0,
    140, 141, 0, 142, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 150, 151, 0, 152, 0, 0,
    0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 160, 0, 161, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 172, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 178,
    0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 182, 0, 183, 0, 0, 0, 184, 0, 185, 0, 186, 0, 0, 0, 187, 0,
    188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 0, 192, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0, 207, 0, 0,
    208, 0, 0, 0, 209, 210, 0, 0, 0, 211, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216,
    0, 0, 217, 218, 0, 0, 0, 219, 0, 0, 0, 220, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 224, 0, 225, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 230, 0, 231, 0, 0, 0, 232, 0, 233, 0,
    234, 0, 0, 235, 0, 236, 0, 237, 0, 0, 238, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0,
    0, 0, 0, 244, 0, 0, 245, 0, 246, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250,
};
void recomp_unit_0573_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A41000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0573[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A41000;
    case 2u: goto L_08A4100C;
    case 3u: goto L_08A4101C;
    case 4u: goto L_08A41050;
    case 5u: goto L_08A4106C;
    case 6u: goto L_08A41094;
    case 7u: goto L_08A410A4;
    case 8u: goto L_08A410AC;
    case 9u: goto L_08A410B4;
    case 10u: goto L_08A410DC;
    case 11u: goto L_08A410E4;
    case 12u: goto L_08A410F0;
    case 13u: goto L_08A410FC;
    case 14u: goto L_08A41114;
    case 15u: goto L_08A41128;
    case 16u: goto L_08A41130;
    case 17u: goto L_08A4113C;
    case 18u: goto L_08A41144;
    case 19u: goto L_08A41154;
    case 20u: goto L_08A41164;
    case 21u: goto L_08A41170;
    case 22u: goto L_08A41178;
    case 23u: goto L_08A41180;
    case 24u: goto L_08A41190;
    case 25u: goto L_08A4119C;
    case 26u: goto L_08A411C8;
    case 27u: goto L_08A41208;
    case 28u: goto L_08A41210;
    case 29u: goto L_08A41218;
    case 30u: goto L_08A41220;
    case 31u: goto L_08A4127C;
    case 32u: goto L_08A41284;
    case 33u: goto L_08A41308;
    case 34u: goto L_08A41318;
    case 35u: goto L_08A41320;
    case 36u: goto L_08A41324;
    case 37u: goto L_08A413AC;
    case 38u: goto L_08A413B4;
    case 39u: goto L_08A413BC;
    case 40u: goto L_08A4140C;
    case 41u: goto L_08A41420;
    case 42u: goto L_08A41430;
    case 43u: goto L_08A4144C;
    case 44u: goto L_08A41458;
    case 45u: goto L_08A41474;
    case 46u: goto L_08A41480;
    case 47u: goto L_08A4148C;
    case 48u: goto L_08A414D4;
    case 49u: goto L_08A414DC;
    case 50u: goto L_08A414E8;
    case 51u: goto L_08A414F0;
    case 52u: goto L_08A414F8;
    case 53u: goto L_08A41508;
    case 54u: goto L_08A4150C;
    case 55u: goto L_08A4153C;
    case 56u: goto L_08A41558;
    case 57u: goto L_08A41564;
    case 58u: goto L_08A41570;
    case 59u: goto L_08A41580;
    case 60u: goto L_08A4158C;
    case 61u: goto L_08A41598;
    case 62u: goto L_08A415A8;
    case 63u: goto L_08A415B0;
    case 64u: goto L_08A415B8;
    case 65u: goto L_08A415C4;
    case 66u: goto L_08A415CC;
    case 67u: goto L_08A415D0;
    case 68u: goto L_08A415E4;
    case 69u: goto L_08A41600;
    case 70u: goto L_08A41610;
    case 71u: goto L_08A4161C;
    case 72u: goto L_08A41624;
    case 73u: goto L_08A41628;
    case 74u: goto L_08A41634;
    case 75u: goto L_08A4163C;
    case 76u: goto L_08A41644;
    case 77u: goto L_08A4164C;
    case 78u: goto L_08A41660;
    case 79u: goto L_08A4167C;
    case 80u: goto L_08A41688;
    case 81u: goto L_08A41698;
    case 82u: goto L_08A416A8;
    case 83u: goto L_08A416CC;
    case 84u: goto L_08A416DC;
    case 85u: goto L_08A416E4;
    case 86u: goto L_08A416EC;
    case 87u: goto L_08A416F8;
    case 88u: goto L_08A41704;
    case 89u: goto L_08A41714;
    case 90u: goto L_08A41724;
    case 91u: goto L_08A4172C;
    case 92u: goto L_08A41734;
    case 93u: goto L_08A41740;
    case 94u: goto L_08A4174C;
    case 95u: goto L_08A4175C;
    case 96u: goto L_08A41764;
    case 97u: goto L_08A41780;
    case 98u: goto L_08A41798;
    case 99u: goto L_08A417A4;
    case 100u: goto L_08A417AC;
    case 101u: goto L_08A417BC;
    case 102u: goto L_08A417C8;
    case 103u: goto L_08A417D4;
    case 104u: goto L_08A417E4;
    case 105u: goto L_08A417EC;
    case 106u: goto L_08A417F0;
    case 107u: goto L_08A417FC;
    case 108u: goto L_08A41808;
    case 109u: goto L_08A41818;
    case 110u: goto L_08A41824;
    case 111u: goto L_08A4182C;
    case 112u: goto L_08A41838;
    case 113u: goto L_08A41840;
    case 114u: goto L_08A41848;
    case 115u: goto L_08A41858;
    case 116u: goto L_08A41868;
    case 117u: goto L_08A41874;
    case 118u: goto L_08A41884;
    case 119u: goto L_08A41898;
    case 120u: goto L_08A418A0;
    case 121u: goto L_08A418AC;
    case 122u: goto L_08A418B4;
    case 123u: goto L_08A418C0;
    case 124u: goto L_08A418C8;
    case 125u: goto L_08A418D0;
    case 126u: goto L_08A418DC;
    case 127u: goto L_08A418EC;
    case 128u: goto L_08A418F0;
    case 129u: goto L_08A4190C;
    case 130u: goto L_08A41914;
    case 131u: goto L_08A41924;
    case 132u: goto L_08A41930;
    case 133u: goto L_08A41938;
    case 134u: goto L_08A4193C;
    case 135u: goto L_08A41944;
    case 136u: goto L_08A41950;
    case 137u: goto L_08A41960;
    case 138u: goto L_08A4196C;
    case 139u: goto L_08A41978;
    case 140u: goto L_08A41980;
    case 141u: goto L_08A41984;
    case 142u: goto L_08A4198C;
    case 143u: goto L_08A41994;
    case 144u: goto L_08A419A0;
    case 145u: goto L_08A419AC;
    case 146u: goto L_08A419B8;
    case 147u: goto L_08A419C4;
    case 148u: goto L_08A419D0;
    case 149u: goto L_08A419DC;
    case 150u: goto L_08A419E8;
    case 151u: goto L_08A419EC;
    case 152u: goto L_08A419F4;
    case 153u: goto L_08A41A14;
    case 154u: goto L_08A41A20;
    case 155u: goto L_08A41A44;
    case 156u: goto L_08A41A70;
    case 157u: goto L_08A41A84;
    case 158u: goto L_08A41A94;
    case 159u: goto L_08A41AA0;
    case 160u: goto L_08A41AA8;
    case 161u: goto L_08A41AB0;
    case 162u: goto L_08A41ABC;
    case 163u: goto L_08A41ACC;
    case 164u: goto L_08A41B0C;
    case 165u: goto L_08A41B14;
    case 166u: goto L_08A41B1C;
    case 167u: goto L_08A41B28;
    case 168u: goto L_08A41B34;
    case 169u: goto L_08A41B48;
    case 170u: goto L_08A41B5C;
    case 171u: goto L_08A41B68;
    case 172u: goto L_08A41B78;
    case 173u: goto L_08A41BA0;
    case 174u: goto L_08A41BB8;
    case 175u: goto L_08A41BC8;
    case 176u: goto L_08A41BE8;
    case 177u: goto L_08A41BF4;
    case 178u: goto L_08A41BFC;
    case 179u: goto L_08A41C04;
    case 180u: goto L_08A41C2C;
    case 181u: goto L_08A41C38;
    case 182u: goto L_08A41C40;
    case 183u: goto L_08A41C48;
    case 184u: goto L_08A41C58;
    case 185u: goto L_08A41C60;
    case 186u: goto L_08A41C68;
    case 187u: goto L_08A41C78;
    case 188u: goto L_08A41C80;
    case 189u: goto L_08A41C90;
    case 190u: goto L_08A41CA0;
    case 191u: goto L_08A41CA8;
    case 192u: goto L_08A41CB8;
    case 193u: goto L_08A41CBC;
    case 194u: goto L_08A41CD0;
    case 195u: goto L_08A41CF0;
    case 196u: goto L_08A41D00;
    case 197u: goto L_08A41D10;
    case 198u: goto L_08A41D20;
    case 199u: goto L_08A41D28;
    case 200u: goto L_08A41D30;
    case 201u: goto L_08A41D38;
    case 202u: goto L_08A41D40;
    case 203u: goto L_08A41D48;
    case 204u: goto L_08A41D50;
    case 205u: goto L_08A41D5C;
    case 206u: goto L_08A41D6C;
    case 207u: goto L_08A41D74;
    case 208u: goto L_08A41D80;
    case 209u: goto L_08A41D90;
    case 210u: goto L_08A41D94;
    case 211u: goto L_08A41DA4;
    case 212u: goto L_08A41DA8;
    case 213u: goto L_08A41DC0;
    case 214u: goto L_08A41DDC;
    case 215u: goto L_08A41DEC;
    case 216u: goto L_08A41DFC;
    case 217u: goto L_08A41E08;
    case 218u: goto L_08A41E0C;
    case 219u: goto L_08A41E1C;
    case 220u: goto L_08A41E2C;
    case 221u: goto L_08A41E30;
    case 222u: goto L_08A41E5C;
    case 223u: goto L_08A41E64;
    case 224u: goto L_08A41E70;
    case 225u: goto L_08A41E78;
    case 226u: goto L_08A41E90;
    case 227u: goto L_08A41EA8;
    case 228u: goto L_08A41EC0;
    case 229u: goto L_08A41EC8;
    case 230u: goto L_08A41ED8;
    case 231u: goto L_08A41EE0;
    case 232u: goto L_08A41EF0;
    case 233u: goto L_08A41EF8;
    case 234u: goto L_08A41F00;
    case 235u: goto L_08A41F0C;
    case 236u: goto L_08A41F14;
    case 237u: goto L_08A41F1C;
    case 238u: goto L_08A41F28;
    case 239u: goto L_08A41F30;
    case 240u: goto L_08A41F3C;
    case 241u: goto L_08A41F48;
    case 242u: goto L_08A41F58;
    case 243u: goto L_08A41F74;
    case 244u: goto L_08A41F8C;
    case 245u: goto L_08A41F98;
    case 246u: goto L_08A41FA0;
    case 247u: goto L_08A41FA8;
    case 248u: goto L_08A41FB8;
    case 249u: goto L_08A41FE0;
    case 250u: goto L_08A41FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A41000:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-14752), aot_gpr[4]);
    aot_gpr[31] = (0x08A4100Cu);
    // nop
    ctx.pc = 0x08A5B01Cu;
    return;
L_08A4100C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-14752)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x08A4101Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 220u, 0x08A40E58u>(ctx, &aot_mem) && ctx.pc == 0x08A4101Cu) goto L_08A4101C;
    return;
L_08A4101C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-14752)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    aot_gpr[4] = (2212u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3064));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-14748), aot_gpr[4]);
    aot_gpr[4] = (2212u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3096));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-14744), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-14740), aot_gpr[17]);
    goto L_08A41050;
L_08A41050:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4106C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (0u | 0u);
    aot_gpr[5] = (0u | 108u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[31] = (0x08A41094u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5B144u;
    return;
L_08A41094:
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10540));
    aot_gpr[5] = (0u | 1u);
    goto L_08A410A4;
L_08A410A4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A410DC;
      }
      goto L_08A410AC;
    }
L_08A410AC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A410DC;
      }
      goto L_08A410B4;
    }
L_08A410B4:
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[6]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(4))))));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[17] = (aot_gpr[17] << 4u);
    aot_gpr[17] = (aot_gpr[17] | aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[6]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A410A4;
      }
      goto L_08A410DC;
    }
L_08A410DC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A410FC;
      }
      goto L_08A410E4;
    }
L_08A410E4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A410F0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10796));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 197u, 0x08A40CB0u>(ctx, &aot_mem) && ctx.pc == 0x08A410F0u) goto L_08A410F0;
    return;
L_08A410F0:
    rt.unsupported(0x08A410F0u, 0x0000000Du, "special? not lowered yet"); return;
L_08A410FC:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41114:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A41128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 228u, 0x08A40F20u>(ctx, &aot_mem) && ctx.pc == 0x08A41128u) goto L_08A41128;
    return;
L_08A41128:
    aot_gpr[31] = (0x08A41130u);
    // nop
    ctx.pc = 0x08A5B01Cu;
    return;
L_08A41130:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A41154;
      }
      goto L_08A4113C;
    }
L_08A4113C:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A41154;
      }
      goto L_08A41144;
    }
L_08A41144:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10472));
    aot_gpr[5] = (0u | 160u);
    aot_gpr[31] = (0x08A41154u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A41154u) goto L_08A41154;
    return;
L_08A41154:
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-14752)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41178;
      }
      goto L_08A41164;
    }
L_08A41164:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A41178;
      }
      goto L_08A41170;
    }
L_08A41170:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41180;
      }
      goto L_08A41178;
    }
L_08A41178:
    aot_gpr[31] = (0x08A41180u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A4106C;
L_08A41180:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41190:
    aot_gpr[2] = (aot_gpr[4] ^ aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4119C:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (0u | 4096u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (0u | 111u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A411C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[31]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[6]);
    aot_gpr[31] = (0x08A41208u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 228u, 0x08A40F20u>(ctx, &aot_mem) && ctx.pc == 0x08A41208u) goto L_08A41208;
    return;
L_08A41208:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41220;
      }
      goto L_08A41210;
    }
L_08A41210:
    aot_gpr[31] = (0x08A41218u);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    goto L_08A4119C;
L_08A41218:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08A4127C;
      }
      goto L_08A41220;
    }
L_08A41220:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_08A4127C;
L_08A4127C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41308;
      }
      goto L_08A41284;
    }
L_08A41284:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 28u));
    aot_gpr[4] = (aot_gpr[4] & 15u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(10508));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 24u));
    aot_gpr[30] = (aot_gpr[5] & 15u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[30] = (aot_gpr[30] + aot_gpr[18]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 20u));
    aot_gpr[23] = (aot_gpr[4] & 15u);
    aot_gpr[23] = (aot_gpr[23] + aot_gpr[18]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 16u));
    aot_gpr[22] = (aot_gpr[4] & 15u);
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 12u));
    aot_gpr[21] = (aot_gpr[4] & 15u);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[18]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 8u));
    aot_gpr[20] = (aot_gpr[4] & 15u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[18]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 4u));
    aot_gpr[19] = (aot_gpr[4] & 15u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[17] & 15u);
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    aot_gpr[5] = (2212u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3576));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A413B4;
      }
      goto L_08A41308;
    }
L_08A41308:
    aot_gpr[4] = (0u | 408u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A41318u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 177u, 0x08A40B24u>(ctx, &aot_mem) && ctx.pc == 0x08A41318u) goto L_08A41318;
    return;
L_08A41318:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A413AC;
      }
      goto L_08A41324;
    }
L_08A41320:
    // nop
    goto L_08A41324;
L_08A41324:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 28u));
    aot_gpr[4] = (aot_gpr[4] & 15u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(10508));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 24u));
    aot_gpr[30] = (aot_gpr[5] & 15u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[30] = (aot_gpr[30] + aot_gpr[18]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 20u));
    aot_gpr[23] = (aot_gpr[4] & 15u);
    aot_gpr[23] = (aot_gpr[23] + aot_gpr[18]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 16u));
    aot_gpr[22] = (aot_gpr[4] & 15u);
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[18]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 12u));
    aot_gpr[21] = (aot_gpr[4] & 15u);
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[18]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 8u));
    aot_gpr[20] = (aot_gpr[4] & 15u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[18]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 4u));
    aot_gpr[19] = (aot_gpr[4] & 15u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[17] & 15u);
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    aot_gpr[5] = (2212u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3576));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A413B4;
      }
      goto L_08A413AC;
    }
L_08A413AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 12u);
      if (branch_taken) {
          goto L_08A4150C;
      }
      goto L_08A413B4;
    }
L_08A413B4:
    aot_gpr[31] = (0x08A413BCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 220u, 0x08A40E58u>(ctx, &aot_mem) && ctx.pc == 0x08A413BCu) goto L_08A413BC;
    return;
L_08A413BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[30] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[23] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41420;
      }
      goto L_08A4140C;
    }
L_08A4140C:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A41458;
      }
      goto L_08A41420;
    }
L_08A41420:
    aot_gpr[4] = (0u | 32u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(9));
    goto L_08A41430;
L_08A41430:
    aot_gpr[6] = (aot_gpr[29] + aot_gpr[4]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(28))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[4] < static_cast<std::uint32_t>(23) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A41430;
      }
      goto L_08A4144C;
    }
L_08A4144C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08A41458;
L_08A41458:
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (0x08A41474u);
    aot_gpr[9] = (0u | 0u);
    ctx.pc = 0x08A5B05Cu;
    return;
L_08A41474:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_08A4148C;
    }
    goto L_08A41480;
L_08A41480:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 11u);
      if (branch_taken) {
          goto L_08A414F0;
      }
      goto L_08A4148C;
    }
L_08A4148C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(77))))));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 12u);
    aot_gpr[31] = (0x08A414D4u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5AFFCu;
    return;
L_08A414D4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A414E8;
      }
      goto L_08A414DC;
    }
L_08A414DC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 11u);
      if (branch_taken) {
          goto L_08A414F0;
      }
      goto L_08A414E8;
    }
L_08A414E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4150C;
      }
      goto L_08A414F0;
    }
L_08A414F0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4150C;
      }
      goto L_08A414F8;
    }
L_08A414F8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A41508u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 181u, 0x08A40B88u>(ctx, &aot_mem) && ctx.pc == 0x08A41508u) goto L_08A41508;
    return;
L_08A41508:
    aot_gpr[2] = (0u | 11u);
    goto L_08A4150C;
L_08A4150C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4153C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A415C4;
      }
      goto L_08A41558;
    }
L_08A41558:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A41564u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = 0x08A5B0A4u;
    return;
L_08A41564:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A415B8;
      }
      goto L_08A41570;
    }
L_08A41570:
    aot_gpr[5] = (32770u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(408));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (32770u << 16u);
      if (branch_taken) {
          goto L_08A415B0;
      }
      goto L_08A41580;
    }
L_08A41580:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(407));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (32770u << 16u);
      if (branch_taken) {
          goto L_08A415B0;
      }
      goto L_08A4158C;
    }
L_08A4158C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(418));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A415B0;
      }
      goto L_08A41598;
    }
L_08A41598:
    aot_gpr[5] = (32770u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(403));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A415CC;
      }
      goto L_08A415A8;
    }
L_08A415A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 134u);
      if (branch_taken) {
          goto L_08A415D0;
      }
      goto L_08A415B0;
    }
L_08A415B0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_08A415D0;
      }
      goto L_08A415B8;
    }
L_08A415B8:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(aot_gpr[16]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A415D0;
      }
      goto L_08A415C4;
    }
L_08A415C4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 22u);
      if (branch_taken) {
          goto L_08A415D0;
      }
      goto L_08A415CC;
    }
L_08A415CC:
    aot_gpr[2] = (0u | 22u);
    goto L_08A415D0;
L_08A415D0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A415E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A41600u);
    // nop
    goto L_08A41114;
L_08A41600:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41624;
      }
      goto L_08A41610;
    }
L_08A41610:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A4161Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 201u, 0x08A40D28u>(ctx, &aot_mem) && ctx.pc == 0x08A4161Cu) goto L_08A4161C;
    return;
L_08A4161C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41628;
      }
      goto L_08A41624;
    }
L_08A41624:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(40), aot_gpr[16]);
    goto L_08A41628;
L_08A41628:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41644;
      }
      goto L_08A41634;
    }
L_08A41634:
    aot_gpr[31] = (0x08A4163Cu);
    aot_gpr[4] = (0u | 1u);
    ctx.pc = 0x08A5B13Cu;
    return;
L_08A4163C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4164C;
      }
      goto L_08A41644;
    }
L_08A41644:
    aot_gpr[31] = (0x08A4164Cu);
    aot_gpr[4] = (0u | 1u);
    ctx.pc = 0x08A5B0E4u;
    return;
L_08A4164C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41660:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A4167Cu);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = 0x08A5B04Cu;
    return;
L_08A4167C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A41698;
      }
      goto L_08A41688;
    }
L_08A41688:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10472));
    aot_gpr[31] = (0x08A41698u);
    aot_gpr[5] = (0u | 619u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A41698u) goto L_08A41698;
    return;
L_08A41698:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A416A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A416E4;
      }
      goto L_08A416CC;
    }
L_08A416CC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(77))))));
    aot_gpr[18] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A416E4;
      }
      goto L_08A416DC;
    }
L_08A416DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A416EC;
      }
      goto L_08A416E4;
    }
L_08A416E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 22u);
      if (branch_taken) {
          goto L_08A418F0;
      }
      goto L_08A416EC;
    }
L_08A416EC:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08A416F8u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5B064u;
    return;
L_08A416F8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A41714;
      }
      goto L_08A41704;
    }
L_08A41704:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10472));
    aot_gpr[31] = (0x08A41714u);
    aot_gpr[5] = (0u | 655u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A41714u) goto L_08A41714;
    return;
L_08A41714:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A41764;
      }
      goto L_08A41724;
    }
L_08A41724:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41734;
      }
      goto L_08A4172C;
    }
L_08A4172C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A41734;
L_08A41734:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A41740u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = 0x08A5B04Cu;
    return;
L_08A41740:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A4175C;
      }
      goto L_08A4174C;
    }
L_08A4174C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10472));
    aot_gpr[31] = (0x08A4175Cu);
    aot_gpr[5] = (0u | 661u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A4175Cu) goto L_08A4175C;
    return;
L_08A4175C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A418F0;
      }
      goto L_08A41764;
    }
L_08A41764:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A417F0;
      }
      goto L_08A41780;
    }
L_08A41780:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10524));
    aot_gpr[5] = (2212u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5728));
    aot_gpr[31] = (0x08A41798u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5AFDCu;
    return;
L_08A41798:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A417EC;
      }
      goto L_08A417A4;
    }
L_08A417A4:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A417BC;
      }
      goto L_08A417AC;
    }
L_08A417AC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10472));
    aot_gpr[5] = (0u | 672u);
    aot_gpr[31] = (0x08A417BCu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A417BCu) goto L_08A417BC;
    return;
L_08A417BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A417C8u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = 0x08A5B04Cu;
    return;
L_08A417C8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A417E4;
      }
      goto L_08A417D4;
    }
L_08A417D4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10472));
    aot_gpr[31] = (0x08A417E4u);
    aot_gpr[5] = (0u | 673u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A417E4u) goto L_08A417E4;
    return;
L_08A417E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A418F0;
      }
      goto L_08A417EC;
    }
L_08A417EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    goto L_08A417F0;
L_08A417F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (0x08A417FCu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08A5B10Cu;
    return;
L_08A417FC:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A41818;
      }
      goto L_08A41808;
    }
L_08A41808:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10472));
    aot_gpr[5] = (0u | 680u);
    aot_gpr[31] = (0x08A41818u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A41818u) goto L_08A41818;
    return;
L_08A41818:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A41824u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = 0x08A5B0BCu;
    return;
L_08A41824:
    aot_gpr[31] = (0x08A4182Cu);
    // nop
    ctx.pc = 0x08A5B034u;
    return;
L_08A4182C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41858;
      }
      goto L_08A41838;
    }
L_08A41838:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A41858;
      }
      goto L_08A41840;
    }
L_08A41840:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A41858;
      }
      goto L_08A41848;
    }
L_08A41848:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10472));
    aot_gpr[31] = (0x08A41858u);
    aot_gpr[5] = (0u | 694u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A41858u) goto L_08A41858;
    return;
L_08A41858:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08A41868u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5B064u;
    return;
L_08A41868:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A41884;
      }
      goto L_08A41874;
    }
L_08A41874:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10472));
    aot_gpr[31] = (0x08A41884u);
    aot_gpr[5] = (0u | 696u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A41884u) goto L_08A41884;
    return;
L_08A41884:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A418A0;
      }
      goto L_08A41898;
    }
L_08A41898:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A418A0;
L_08A418A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A418B4;
      }
      goto L_08A418AC;
    }
L_08A418AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A418C8;
      }
      goto L_08A418B4;
    }
L_08A418B4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A418C0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 201u, 0x08A40D28u>(ctx, &aot_mem) && ctx.pc == 0x08A418C0u) goto L_08A418C0;
    return;
L_08A418C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A418F0;
      }
      goto L_08A418C8;
    }
L_08A418C8:
    aot_gpr[31] = (0x08A418D0u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = 0x08A5B04Cu;
    return;
L_08A418D0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A418EC;
      }
      goto L_08A418DC;
    }
L_08A418DC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10472));
    aot_gpr[31] = (0x08A418ECu);
    aot_gpr[5] = (0u | 731u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A418ECu) goto L_08A418EC;
    return;
L_08A418EC:
    aot_gpr[2] = (0u | 0u);
    goto L_08A418F0;
L_08A418F0:
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
L_08A4190C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41930;
      }
      goto L_08A41914;
    }
L_08A41914:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(77))))));
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A41930;
      }
      goto L_08A41924;
    }
L_08A41924:
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(36));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08A41938;
      }
      goto L_08A41930;
    }
L_08A41930:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 22u);
      if (branch_taken) {
          goto L_08A41984;
      }
      goto L_08A41938;
    }
L_08A41938:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    goto L_08A4193C;
L_08A4193C:
    aot_gpr[25] = (aot_gpr[6] | 1u);
    aot_gpr[25] = (aot_gpr[25] | 0u);
    goto L_08A41944;
L_08A41944:
    { const std::uint32_t ll_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      ctx.ll_address = ll_address;
      ctx.ll_reserved = true;
      aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(ll_address)); }
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A41960;
      }
      goto L_08A41950;
    }
L_08A41950:
    aot_gpr[24] = (aot_gpr[25] | 0u);
    { const std::uint32_t sc_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      const bool sc_reserved = ctx.ll_reserved && ctx.ll_address == sc_address;
      if (sc_reserved) PSPRECOMP_AOT_STORE32(sc_address, aot_gpr[24]);
      ctx.ll_reserved = false;
      aot_gpr[24] = (sc_reserved ? 1u : 0u); }
    { const bool branch_taken = aot_gpr[24] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41944;
      }
      goto L_08A41960;
    }
L_08A41960:
    rt.memory().memory_barrier();
    if (aot_gpr[6] != aot_gpr[4]) {
    aot_gpr[6] = (aot_gpr[4] | 0u);
        goto L_08A4193C;
    }
    goto L_08A4196C;
L_08A4196C:
    aot_gpr[4] = (aot_gpr[6] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41980;
      }
      goto L_08A41978;
    }
L_08A41978:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 22u);
      if (branch_taken) {
          goto L_08A41984;
      }
      goto L_08A41980;
    }
L_08A41980:
    aot_gpr[2] = (0u | 0u);
    goto L_08A41984;
L_08A41984:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A4198C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (32770u << 16u);
      if (branch_taken) {
          goto L_08A419C4;
      }
      goto L_08A41994;
    }
L_08A41994:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(424));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (32770u << 16u);
      if (branch_taken) {
          goto L_08A419D0;
      }
      goto L_08A419A0;
    }
L_08A419A0:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(401));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (32770u << 16u);
      if (branch_taken) {
          goto L_08A419DC;
      }
      goto L_08A419AC;
    }
L_08A419AC:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(400));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A419E8;
      }
      goto L_08A419B8;
    }
L_08A419B8:
    aot_gpr[4] = (0u | 12u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A419EC;
      }
      goto L_08A419C4;
    }
L_08A419C4:
    aot_gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A419EC;
      }
      goto L_08A419D0;
    }
L_08A419D0:
    aot_gpr[4] = (0u | 116u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A419EC;
      }
      goto L_08A419DC;
    }
L_08A419DC:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A419EC;
      }
      goto L_08A419E8;
    }
L_08A419E8:
    aot_gpr[4] = (0u | 22u);
    goto L_08A419EC;
L_08A419EC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A419F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x08A41A14u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10852));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 197u, 0x08A40CB0u>(ctx, &aot_mem) && ctx.pc == 0x08A41A14u) goto L_08A41A14;
    return;
L_08A41A14:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41A20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A41A44u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    goto L_08A41114;
L_08A41A44:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[16]);
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
L_08A41A70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A41A84u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08A41114;
L_08A41A84:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41AA8;
      }
      goto L_08A41A94;
    }
L_08A41A94:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A41AB0;
      }
      goto L_08A41AA0;
    }
L_08A41AA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41ABC;
      }
      goto L_08A41AA8;
    }
L_08A41AA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41ABC;
      }
      goto L_08A41AB0;
    }
L_08A41AB0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A41ABCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A41ABCu) goto L_08A41ABC;
    return;
L_08A41ABC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41ACC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 0 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A41B48;
      }
      goto L_08A41B0C;
    }
L_08A41B0C:
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(10912));
    goto L_08A41B14;
L_08A41B14:
    aot_gpr[31] = (0x08A41B1Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 166u, 0x08A42978u>(ctx, &aot_mem) && ctx.pc == 0x08A41B1Cu) goto L_08A41B1C;
    return;
L_08A41B1C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A41B34;
      }
      goto L_08A41B28;
    }
L_08A41B28:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A41B34u);
    aot_gpr[5] = (0u | 39u);
    goto L_08A419F4;
L_08A41B34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41B14;
      }
      goto L_08A41B48;
    }
L_08A41B48:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A41B5Cu);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = 0x08A5B04Cu;
    return;
L_08A41B5C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A41B78;
      }
      goto L_08A41B68;
    }
L_08A41B68:
    aot_gpr[5] = (0u | 42u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A41B78u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10912));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A41B78u) goto L_08A41B78;
    return;
L_08A41B78:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41BA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A41BFC;
      }
      goto L_08A41BB8;
    }
L_08A41BB8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-14748)));
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08A41BC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A41BC8u) goto L_08A41BC8;
    return;
L_08A41BC8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[7] = (32768u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10936));
    aot_gpr[31] = (0x08A41BE8u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.pc = 0x08A5AFC4u;
    return;
L_08A41BE8:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A41C04;
      }
      goto L_08A41BF4;
    }
L_08A41BF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41C60;
      }
      goto L_08A41BFC;
    }
L_08A41BFC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 22u);
      if (branch_taken) {
          goto L_08A41CBC;
      }
      goto L_08A41C04;
    }
L_08A41C04:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x08A41C2Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10952));
    ctx.pc = 0x08A5AFC4u;
    return;
L_08A41C2C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A41C40;
      }
      goto L_08A41C38;
    }
L_08A41C38:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A41C58;
      }
      goto L_08A41C40;
    }
L_08A41C40:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A41C58;
      }
      goto L_08A41C48;
    }
L_08A41C48:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 69u);
    aot_gpr[31] = (0x08A41C58u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10912));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A41C58u) goto L_08A41C58;
    return;
L_08A41C58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41CA8;
      }
      goto L_08A41C60;
    }
L_08A41C60:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A41C78;
      }
      goto L_08A41C68;
    }
L_08A41C68:
    aot_gpr[5] = (0u | 73u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A41C78u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10912));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A41C78u) goto L_08A41C78;
    return;
L_08A41C78:
    aot_gpr[31] = (0x08A41C80u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A4198C;
L_08A41C80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A41CA0;
      }
      goto L_08A41C90;
    }
L_08A41C90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A41CA8;
      }
      goto L_08A41CA0;
    }
L_08A41CA0:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A41CA8;
L_08A41CA8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-14744)));
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08A41CB8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A41CB8u) goto L_08A41CB8;
    return;
L_08A41CB8:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    goto L_08A41CBC;
L_08A41CBC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41CD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A41D28;
      }
      goto L_08A41CF0;
    }
L_08A41CF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A41D28;
      }
      goto L_08A41D00;
    }
L_08A41D00:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-14748)));
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08A41D10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A41D10u) goto L_08A41D10;
    return;
L_08A41D10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A41D38;
      }
      goto L_08A41D20;
    }
L_08A41D20:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_08A41D30;
      }
      goto L_08A41D28;
    }
L_08A41D28:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 22u);
      if (branch_taken) {
          goto L_08A41DA8;
      }
      goto L_08A41D30;
    }
L_08A41D30:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A41D94;
      }
      goto L_08A41D38;
    }
L_08A41D38:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A41D48;
      }
      goto L_08A41D40;
    }
L_08A41D40:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 16u);
      if (branch_taken) {
          goto L_08A41D94;
      }
      goto L_08A41D48;
    }
L_08A41D48:
    aot_gpr[31] = (0x08A41D50u);
    // nop
    ctx.pc = 0x08A5B014u;
    return;
L_08A41D50:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A41D6C;
      }
      goto L_08A41D5C;
    }
L_08A41D5C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 97u);
    aot_gpr[31] = (0x08A41D6Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10912));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A41D6Cu) goto L_08A41D6C;
    return;
L_08A41D6C:
    aot_gpr[31] = (0x08A41D74u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08A5B014u;
    return;
L_08A41D74:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A41D90;
      }
      goto L_08A41D80;
    }
L_08A41D80:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 100u);
    aot_gpr[31] = (0x08A41D90u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10912));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A41D90u) goto L_08A41D90;
    return;
L_08A41D90:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    goto L_08A41D94;
L_08A41D94:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-14744)));
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08A41DA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A41DA4u) goto L_08A41DA4;
    return;
L_08A41DA4:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    goto L_08A41DA8;
L_08A41DA8:
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
L_08A41DC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-14748)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08A41DDCu);
    aot_gpr[17] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A41DDCu) goto L_08A41DDC;
    return;
L_08A41DDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A41E0C;
      }
      goto L_08A41DEC;
    }
L_08A41DEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A41E0C;
      }
      goto L_08A41DFC;
    }
L_08A41DFC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A41E08u);
    aot_gpr[5] = (0u | 0u);
    goto L_08A41BA0;
L_08A41E08:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_08A41E0C;
L_08A41E0C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-14744)));
    jump_target = aot_gpr[4];
    aot_gpr[31] = (0x08A41E1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A41E1Cu) goto L_08A41E1C;
    return;
L_08A41E1C:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A41E2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    goto L_08A41E30;
L_08A41E30:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 0 ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A41E90;
      }
      goto L_08A41E5C;
    }
L_08A41E5C:
    aot_gpr[31] = (0x08A41E64u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 164u, 0x08A4291Cu>(ctx, &aot_mem) && ctx.pc == 0x08A41E64u) goto L_08A41E64;
    return;
L_08A41E64:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41E78;
      }
      goto L_08A41E70;
    }
L_08A41E70:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A41E78;
L_08A41E78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41E5C;
      }
      goto L_08A41E90;
    }
L_08A41E90:
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
L_08A41EA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[20] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[31] = (0x08A41EC0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    goto L_08A41114;
L_08A41EC0:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[21] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A41EF8;
      }
      goto L_08A41EC8;
    }
L_08A41EC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A41EF8;
      }
      goto L_08A41ED8;
    }
L_08A41ED8:
    aot_gpr[31] = (0x08A41EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 228u, 0x08A40F20u>(ctx, &aot_mem) && ctx.pc == 0x08A41EE0u) goto L_08A41EE0;
    return;
L_08A41EE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08A41F00;
    }
    goto L_08A41EF0;
L_08A41EF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A41F1C;
      }
      goto L_08A41EF8;
    }
L_08A41EF8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 22u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 22u, 0x08A42134u>(ctx, &aot_mem); return;
      }
      goto L_08A41F00;
    }
L_08A41F00:
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A41F1C;
      }
      goto L_08A41F0C;
    }
L_08A41F0C:
    aot_gpr[31] = (0x08A41F14u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_08A41DC0;
L_08A41F14:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A41F28;
      }
      goto L_08A41F1C;
    }
L_08A41F1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_08A41F30;
      }
      goto L_08A41F28;
    }
L_08A41F28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 22u, 0x08A42134u>(ctx, &aot_mem); return;
      }
      goto L_08A41F30;
    }
L_08A41F30:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08A41F3Cu);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5B064u;
    return;
L_08A41F3C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A41F58;
      }
      goto L_08A41F48;
    }
L_08A41F48:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 180u);
    aot_gpr[31] = (0x08A41F58u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10912));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A41F58u) goto L_08A41F58;
    return;
L_08A41F58:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A41FB8;
      }
      goto L_08A41F74;
    }
L_08A41F74:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (2212u << 16u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10968));
    aot_gpr[31] = (0x08A41F8Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(6860));
    ctx.pc = 0x08A5AFDCu;
    return;
L_08A41F8C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A41FA0;
      }
      goto L_08A41F98;
    }
L_08A41F98:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A41FB8;
      }
      goto L_08A41FA0;
    }
L_08A41FA0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A41FB8;
      }
      goto L_08A41FA8;
    }
L_08A41FA8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 192u);
    aot_gpr[31] = (0x08A41FB8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10912));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 199u, 0x08A40CFCu>(ctx, &aot_mem) && ctx.pc == 0x08A41FB8u) goto L_08A41FB8;
    return;
L_08A41FB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (2212u << 16u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x08A41FE0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7724));
    goto L_08A41A20;
L_08A41FE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[31] = (0x08A41FF8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08A5B10Cu;
    return;
L_08A41FF8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 2u, 0x08A42014u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0574_entry, 574u, 1u, 0x08A42004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0573(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0573_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_573(Runtime &runtime) {
    runtime.register_generated_unit(573u, 0x08A41000u, 4096u, &recomp_unit_0573, &recomp_unit_0573_entry);
    runtime.register_function(0x08A41000u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4100Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4101Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41050u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4106Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41094u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A410A4u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A410ACu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A410B4u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A410DCu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A410E4u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A410F0u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A410FCu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41114u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41128u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41130u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4113Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41144u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41154u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41164u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41170u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41178u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41180u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41190u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4119Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A411C8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41208u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41210u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41218u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41220u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4127Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41284u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41308u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41318u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41320u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41324u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A413ACu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A413B4u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A413BCu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4140Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41420u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41430u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4144Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41458u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41474u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41480u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4148Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A414D4u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A414DCu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A414E8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A414F0u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A414F8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41508u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4150Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4153Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41558u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41564u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41570u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41580u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4158Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41598u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A415A8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A415B0u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A415B8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A415C4u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A415CCu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A415D0u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A415E4u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41600u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41610u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4161Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41624u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41628u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41634u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4163Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41644u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4164Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41660u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4167Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41688u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41698u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A416A8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A416CCu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A416DCu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A416E4u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A416ECu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A416F8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41704u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41714u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41724u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4172Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41734u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41740u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4174Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4175Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41764u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41780u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41798u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A417A4u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A417ACu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A417BCu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A417C8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A417D4u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A417E4u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A417ECu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A417F0u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A417FCu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41808u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41818u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41824u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4182Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41838u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41840u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41848u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41858u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41868u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41874u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41884u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41898u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A418A0u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A418ACu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A418B4u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A418C0u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A418C8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A418D0u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A418DCu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A418ECu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A418F0u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4190Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41914u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41924u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41930u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41938u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4193Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41944u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41950u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41960u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4196Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41978u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41980u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41984u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A4198Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41994u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A419A0u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A419ACu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A419B8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A419C4u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A419D0u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A419DCu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A419E8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A419ECu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A419F4u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41A14u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41A20u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41A44u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41A70u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41A84u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41A94u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41AA0u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41AA8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41AB0u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41ABCu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41ACCu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41B0Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41B14u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41B1Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41B28u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41B34u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41B48u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41B5Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41B68u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41B78u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41BA0u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41BB8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41BC8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41BE8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41BF4u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41BFCu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41C04u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41C2Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41C38u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41C40u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41C48u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41C58u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41C60u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41C68u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41C78u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41C80u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41C90u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41CA0u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41CA8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41CB8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41CBCu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41CD0u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41CF0u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41D00u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41D10u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41D20u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41D28u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41D30u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41D38u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41D40u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41D48u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41D50u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41D5Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41D6Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41D74u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41D80u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41D90u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41D94u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41DA4u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41DA8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41DC0u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41DDCu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41DECu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41DFCu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41E08u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41E0Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41E1Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41E2Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41E30u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41E5Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41E64u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41E70u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41E78u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41E90u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41EA8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41EC0u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41EC8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41ED8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41EE0u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41EF0u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41EF8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41F00u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41F0Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41F14u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41F1Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41F28u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41F30u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41F3Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41F48u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41F58u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41F74u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41F8Cu, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41F98u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41FA0u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41FA8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41FB8u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41FE0u, &recomp_unit_0573, "recomp_unit_0573");
    runtime.register_function(0x08A41FF8u, &recomp_unit_0573, "recomp_unit_0573");
}
} // namespace psprecomp
