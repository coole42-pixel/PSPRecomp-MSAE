#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0497[1022] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 9, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 14,
    0, 15, 0, 0, 0, 0, 16, 0, 17, 0, 18, 0, 0, 19, 20, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0,
    0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 32, 0, 0, 0, 0, 0,
    0, 0, 33, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 41,
    0, 42, 0, 43, 44, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48,
    0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 52, 53, 0, 54, 0, 0, 0, 0, 55, 0, 56, 57, 0,
    0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 63, 0, 0, 64, 0, 65, 0, 0, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 68, 0, 0, 69, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0,
    0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 84, 0, 0, 0, 0, 85, 0, 0,
    0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0,
    91, 0, 0, 92, 0, 0, 93, 0, 94, 95, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 104, 0, 105, 0, 106, 0,
    107, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0,
    0, 0, 113, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 127,
    0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0,
    135, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 140, 141, 0, 142, 0, 0, 0, 143, 0, 144, 0,
    0, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 152, 0, 153, 0, 0,
    0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 0, 158, 0, 159, 0, 0, 160, 161, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 164, 165, 0, 0, 0, 0, 0, 166, 0, 0,
    0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 170, 171, 0, 0, 0, 0, 172, 0, 173, 0, 0, 174, 175, 0,
    176, 177, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 184,
    0, 185, 0, 186, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0,
    0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0,
    0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0,
    0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0,
    0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229,
};
void recomp_unit_0497_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089F5000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0497[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089F5000;
    case 2u: goto L_089F5010;
    case 3u: goto L_089F5020;
    case 4u: goto L_089F5068;
    case 5u: goto L_089F509C;
    case 6u: goto L_089F50AC;
    case 7u: goto L_089F50D0;
    case 8u: goto L_089F50F0;
    case 9u: goto L_089F5108;
    case 10u: goto L_089F5110;
    case 11u: goto L_089F5118;
    case 12u: goto L_089F5158;
    case 13u: goto L_089F5164;
    case 14u: goto L_089F517C;
    case 15u: goto L_089F5184;
    case 16u: goto L_089F5198;
    case 17u: goto L_089F51A0;
    case 18u: goto L_089F51A8;
    case 19u: goto L_089F51B4;
    case 20u: goto L_089F51B8;
    case 21u: goto L_089F51C0;
    case 22u: goto L_089F51C8;
    case 23u: goto L_089F51E8;
    case 24u: goto L_089F51F0;
    case 25u: goto L_089F5204;
    case 26u: goto L_089F5214;
    case 27u: goto L_089F5224;
    case 28u: goto L_089F5238;
    case 29u: goto L_089F5248;
    case 30u: goto L_089F5258;
    case 31u: goto L_089F5260;
    case 32u: goto L_089F5268;
    case 33u: goto L_089F5288;
    case 34u: goto L_089F5290;
    case 35u: goto L_089F52A4;
    case 36u: goto L_089F52B4;
    case 37u: goto L_089F52C4;
    case 38u: goto L_089F52D8;
    case 39u: goto L_089F52E8;
    case 40u: goto L_089F52F8;
    case 41u: goto L_089F52FC;
    case 42u: goto L_089F5304;
    case 43u: goto L_089F530C;
    case 44u: goto L_089F5310;
    case 45u: goto L_089F5318;
    case 46u: goto L_089F5320;
    case 47u: goto L_089F533C;
    case 48u: goto L_089F537C;
    case 49u: goto L_089F5398;
    case 50u: goto L_089F53B0;
    case 51u: goto L_089F53C4;
    case 52u: goto L_089F53CC;
    case 53u: goto L_089F53D0;
    case 54u: goto L_089F53D8;
    case 55u: goto L_089F53EC;
    case 56u: goto L_089F53F4;
    case 57u: goto L_089F53F8;
    case 58u: goto L_089F540C;
    case 59u: goto L_089F5414;
    case 60u: goto L_089F5430;
    case 61u: goto L_089F5448;
    case 62u: goto L_089F5454;
    case 63u: goto L_089F545C;
    case 64u: goto L_089F5468;
    case 65u: goto L_089F5470;
    case 66u: goto L_089F548C;
    case 67u: goto L_089F54B0;
    case 68u: goto L_089F54B4;
    case 69u: goto L_089F54C0;
    case 70u: goto L_089F54C8;
    case 71u: goto L_089F54D4;
    case 72u: goto L_089F54F0;
    case 73u: goto L_089F550C;
    case 74u: goto L_089F5530;
    case 75u: goto L_089F5544;
    case 76u: goto L_089F5558;
    case 77u: goto L_089F5568;
    case 78u: goto L_089F5584;
    case 79u: goto L_089F55A0;
    case 80u: goto L_089F55B4;
    case 81u: goto L_089F55C0;
    case 82u: goto L_089F55CC;
    case 83u: goto L_089F55D8;
    case 84u: goto L_089F55E0;
    case 85u: goto L_089F55F4;
    case 86u: goto L_089F5604;
    case 87u: goto L_089F5610;
    case 88u: goto L_089F5624;
    case 89u: goto L_089F5634;
    case 90u: goto L_089F5674;
    case 91u: goto L_089F5680;
    case 92u: goto L_089F568C;
    case 93u: goto L_089F5698;
    case 94u: goto L_089F56A0;
    case 95u: goto L_089F56A4;
    case 96u: goto L_089F56AC;
    case 97u: goto L_089F56BC;
    case 98u: goto L_089F56E4;
    case 99u: goto L_089F5728;
    case 100u: goto L_089F5738;
    case 101u: goto L_089F5740;
    case 102u: goto L_089F5750;
    case 103u: goto L_089F5760;
    case 104u: goto L_089F5768;
    case 105u: goto L_089F5770;
    case 106u: goto L_089F5778;
    case 107u: goto L_089F5780;
    case 108u: goto L_089F578C;
    case 109u: goto L_089F57A0;
    case 110u: goto L_089F57C8;
    case 111u: goto L_089F57EC;
    case 112u: goto L_089F57F8;
    case 113u: goto L_089F5808;
    case 114u: goto L_089F5810;
    case 115u: goto L_089F5818;
    case 116u: goto L_089F5820;
    case 117u: goto L_089F583C;
    case 118u: goto L_089F5858;
    case 119u: goto L_089F5894;
    case 120u: goto L_089F58A0;
    case 121u: goto L_089F58A8;
    case 122u: goto L_089F58B8;
    case 123u: goto L_089F58D0;
    case 124u: goto L_089F58E4;
    case 125u: goto L_089F58EC;
    case 126u: goto L_089F58F4;
    case 127u: goto L_089F58FC;
    case 128u: goto L_089F591C;
    case 129u: goto L_089F5924;
    case 130u: goto L_089F5930;
    case 131u: goto L_089F593C;
    case 132u: goto L_089F5948;
    case 133u: goto L_089F5950;
    case 134u: goto L_089F5968;
    case 135u: goto L_089F5980;
    case 136u: goto L_089F5988;
    case 137u: goto L_089F5994;
    case 138u: goto L_089F59B8;
    case 139u: goto L_089F59CC;
    case 140u: goto L_089F59D4;
    case 141u: goto L_089F59D8;
    case 142u: goto L_089F59E0;
    case 143u: goto L_089F59F0;
    case 144u: goto L_089F59F8;
    case 145u: goto L_089F5A0C;
    case 146u: goto L_089F5A14;
    case 147u: goto L_089F5A1C;
    case 148u: goto L_089F5A3C;
    case 149u: goto L_089F5A48;
    case 150u: goto L_089F5A54;
    case 151u: goto L_089F5A64;
    case 152u: goto L_089F5A6C;
    case 153u: goto L_089F5A74;
    case 154u: goto L_089F5A84;
    case 155u: goto L_089F5A98;
    case 156u: goto L_089F5AC0;
    case 157u: goto L_089F5B00;
    case 158u: goto L_089F5B14;
    case 159u: goto L_089F5B1C;
    case 160u: goto L_089F5B28;
    case 161u: goto L_089F5B2C;
    case 162u: goto L_089F5B44;
    case 163u: goto L_089F5B4C;
    case 164u: goto L_089F5B58;
    case 165u: goto L_089F5B5C;
    case 166u: goto L_089F5B74;
    case 167u: goto L_089F5B8C;
    case 168u: goto L_089F5BAC;
    case 169u: goto L_089F5BC0;
    case 170u: goto L_089F5BC8;
    case 171u: goto L_089F5BCC;
    case 172u: goto L_089F5BE0;
    case 173u: goto L_089F5BE8;
    case 174u: goto L_089F5BF4;
    case 175u: goto L_089F5BF8;
    case 176u: goto L_089F5C00;
    case 177u: goto L_089F5C04;
    case 178u: goto L_089F5C18;
    case 179u: goto L_089F5C24;
    case 180u: goto L_089F5C30;
    case 181u: goto L_089F5C48;
    case 182u: goto L_089F5C68;
    case 183u: goto L_089F5C70;
    case 184u: goto L_089F5C7C;
    case 185u: goto L_089F5C84;
    case 186u: goto L_089F5C8C;
    case 187u: goto L_089F5C9C;
    case 188u: goto L_089F5CA4;
    case 189u: goto L_089F5CC0;
    case 190u: goto L_089F5CC8;
    case 191u: goto L_089F5CE4;
    case 192u: goto L_089F5D08;
    case 193u: goto L_089F5D14;
    case 194u: goto L_089F5D20;
    case 195u: goto L_089F5D34;
    case 196u: goto L_089F5D3C;
    case 197u: goto L_089F5D44;
    case 198u: goto L_089F5D60;
    case 199u: goto L_089F5D7C;
    case 200u: goto L_089F5DB0;
    case 201u: goto L_089F5DBC;
    case 202u: goto L_089F5DC4;
    case 203u: goto L_089F5DD4;
    case 204u: goto L_089F5DEC;
    case 205u: goto L_089F5E0C;
    case 206u: goto L_089F5E34;
    case 207u: goto L_089F5E40;
    case 208u: goto L_089F5E50;
    case 209u: goto L_089F5E5C;
    case 210u: goto L_089F5E8C;
    case 211u: goto L_089F5E9C;
    case 212u: goto L_089F5EAC;
    case 213u: goto L_089F5EB4;
    case 214u: goto L_089F5EBC;
    case 215u: goto L_089F5ECC;
    case 216u: goto L_089F5EE4;
    case 217u: goto L_089F5EEC;
    case 218u: goto L_089F5F04;
    case 219u: goto L_089F5F1C;
    case 220u: goto L_089F5F28;
    case 221u: goto L_089F5F30;
    case 222u: goto L_089F5F50;
    case 223u: goto L_089F5F78;
    case 224u: goto L_089F5F84;
    case 225u: goto L_089F5FAC;
    case 226u: goto L_089F5FB8;
    case 227u: goto L_089F5FC4;
    case 228u: goto L_089F5FE4;
    case 229u: goto L_089F5FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089F5000:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089F5010u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F5010u) goto L_089F5010;
    return;
L_089F5010:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F5020:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(10032));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-18744));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(40), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F5068:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x089F509Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F509Cu) goto L_089F509C;
    return;
L_089F509C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F50ACu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F50ACu) goto L_089F50AC;
    return;
L_089F50AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
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
L_089F50D0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089F5110;
      }
      goto L_089F50F0;
    }
L_089F50F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5110;
      }
      goto L_089F5108;
    }
L_089F5108:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F5110:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F5118:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-18744));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(20));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x089F5158u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 167u, 0x089F4A34u>(ctx, &aot_mem) && ctx.pc == 0x089F5158u) goto L_089F5158;
    return;
L_089F5158:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (0x089F5164u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 167u, 0x089F4A34u>(ctx, &aot_mem) && ctx.pc == 0x089F5164u) goto L_089F5164;
    return;
L_089F5164:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (0u | 34u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-9800)));
      if (branch_taken) {
          goto L_089F5184;
      }
      goto L_089F517C;
    }
L_089F517C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089F51B8;
      }
      goto L_089F5184;
    }
L_089F5184:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    if (aot_gpr[8] == 0u) {
    aot_gpr[5] = (aot_gpr[6] | 0u);
        goto L_089F51B8;
    }
    goto L_089F5198;
L_089F5198:
    if (aot_gpr[8] != aot_gpr[4]) {
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
        goto L_089F51A8;
    }
    goto L_089F51A0;
L_089F51A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[7] - aot_gpr[5]);
      if (branch_taken) {
          goto L_089F51B8;
      }
      goto L_089F51A8;
    }
L_089F51A8:
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F5198;
      }
      goto L_089F51B4;
    }
L_089F51B4:
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_089F51B8;
L_089F51B8:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_089F5260;
      }
      goto L_089F51C0;
    }
L_089F51C0:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F51E8;
      }
      goto L_089F51C8;
    }
L_089F51C8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F51E8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10068));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F51E8u) goto L_089F51E8;
    return;
L_089F51E8:
    if (aot_gpr[17] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_089F52FC;
    }
    goto L_089F51F0;
L_089F51F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F5204u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F5204u) goto L_089F5204;
    return;
L_089F5204:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-10060));
    aot_gpr[31] = (0x089F5214u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F5214u) goto L_089F5214;
    return;
L_089F5214:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F5224u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F5224u) goto L_089F5224;
    return;
L_089F5224:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F5238u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F5238u) goto L_089F5238;
    return;
L_089F5238:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-10056));
    aot_gpr[31] = (0x089F5248u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F5248u) goto L_089F5248;
    return;
L_089F5248:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F5258u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F5258u) goto L_089F5258;
    return;
L_089F5258:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089F52FC;
      }
      goto L_089F5260;
    }
L_089F5260:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5288;
      }
      goto L_089F5268;
    }
L_089F5268:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F5288u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10052));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F5288u) goto L_089F5288;
    return;
L_089F5288:
    if (aot_gpr[17] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_089F52FC;
    }
    goto L_089F5290;
L_089F5290:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F52A4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F52A4u) goto L_089F52A4;
    return;
L_089F52A4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-10044));
    aot_gpr[31] = (0x089F52B4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F52B4u) goto L_089F52B4;
    return;
L_089F52B4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F52C4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F52C4u) goto L_089F52C4;
    return;
L_089F52C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089F52D8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F52D8u) goto L_089F52D8;
    return;
L_089F52D8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(-10040));
    aot_gpr[31] = (0x089F52E8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F52E8u) goto L_089F52E8;
    return;
L_089F52E8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F52F8u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 24u, 0x089F7200u>(ctx, &aot_mem) && ctx.pc == 0x089F52F8u) goto L_089F52F8;
    return;
L_089F52F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089F52FC;
L_089F52FC:
    if (aot_gpr[4] == aot_gpr[18]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_089F5310;
    }
    goto L_089F5304;
L_089F5304:
    aot_gpr[31] = (0x089F530Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F530Cu) goto L_089F530C;
    return;
L_089F530C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089F5310;
L_089F5310:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_089F5320;
      }
      goto L_089F5318;
    }
L_089F5318:
    aot_gpr[31] = (0x089F5320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F5320u) goto L_089F5320;
    return;
L_089F5320:
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
L_089F533C:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10984));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-18744));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F537C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F5414;
      }
      goto L_089F5398;
    }
L_089F5398:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10984));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089F53D0;
      }
      goto L_089F53B0;
    }
L_089F53B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-18744));
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
        goto L_089F53D0;
    }
    goto L_089F53C4;
L_089F53C4:
    aot_gpr[31] = (0x089F53CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F53CCu) goto L_089F53CC;
    return;
L_089F53CC:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    goto L_089F53D0;
L_089F53D0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_089F53F8;
      }
      goto L_089F53D8;
    }
L_089F53D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-18744));
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[4] = (2216u << 16u);
        goto L_089F53F8;
    }
    goto L_089F53EC;
L_089F53EC:
    aot_gpr[31] = (0x089F53F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F53F4u) goto L_089F53F4;
    return;
L_089F53F4:
    aot_gpr[4] = (2216u << 16u);
    goto L_089F53F8;
L_089F53F8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26144));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5414;
      }
      goto L_089F540C;
    }
L_089F540C:
    aot_gpr[31] = (0x089F5414u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x089F5414u) goto L_089F5414;
    return;
L_089F5414:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F5430:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F5448:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[7] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_089F5468;
      }
      goto L_089F5454;
    }
L_089F5454:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[5];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089F5470;
      }
      goto L_089F545C;
    }
L_089F545C:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_089F5454;
      }
      goto L_089F5468;
    }
L_089F5468:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F5470:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(32), 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(28), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F548C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[18] == aot_gpr[4];
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F54D4;
      }
      goto L_089F54B0;
    }
L_089F54B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    goto L_089F54B4;
L_089F54B4:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F54C0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F54C0u) goto L_089F54C0;
    return;
L_089F54C0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F54F0;
      }
      goto L_089F54C8;
    }
L_089F54C8:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    if (aot_gpr[18] != aot_gpr[17]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_089F54B4;
    }
    goto L_089F54D4;
L_089F54D4:
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
L_089F54F0:
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
L_089F550C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089F5530u);
    aot_gpr[5] = (0u | 1u);
    goto L_089F5020;
L_089F5530:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10176));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[31] = (0x089F5544u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    goto L_089F533C;
L_089F5544:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089F5558u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F5558u) goto L_089F5558;
    return;
L_089F5558:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F5568u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F5568u) goto L_089F5568;
    return;
L_089F5568:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_089F5584:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089F55E0;
      }
      goto L_089F55A0;
    }
L_089F55A0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10176));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[31] = (0x089F55B4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F5C48;
L_089F55B4:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    aot_gpr[31] = (0x089F55C0u);
    aot_gpr[5] = (0u | 2u);
    goto L_089F537C;
L_089F55C0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F55CCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 204u, 0x089F4CC8u>(ctx, &aot_mem) && ctx.pc == 0x089F55CCu) goto L_089F55CC;
    return;
L_089F55CC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F55E0;
      }
      goto L_089F55D8;
    }
L_089F55D8:
    aot_gpr[31] = (0x089F55E0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 165u, 0x089F4A18u>(ctx, &aot_mem) && ctx.pc == 0x089F55E0u) goto L_089F55E0;
    return;
L_089F55E0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F55F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089F5604u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(44));
    goto L_089F548C;
L_089F5604:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5624;
      }
      goto L_089F5610;
    }
L_089F5610:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F5624:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F5634:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x089F5674u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_089F548C;
L_089F5674:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
        goto L_089F56A4;
    }
    goto L_089F5680;
L_089F5680:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[31] = (0x089F568Cu);
    aot_gpr[4] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 163u, 0x089F49FCu>(ctx, &aot_mem) && ctx.pc == 0x089F568Cu) goto L_089F568C;
    return;
L_089F568C:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] != 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_089F56E4;
      }
      goto L_089F5698;
    }
L_089F5698:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5760;
      }
      goto L_089F56A0;
    }
L_089F56A0:
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    goto L_089F56A4;
L_089F56A4:
    aot_gpr[31] = (0x089F56ACu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F56ACu) goto L_089F56AC;
    return;
L_089F56AC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089F56BCu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F56BCu) goto L_089F56BC;
    return;
L_089F56BC:
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
L_089F56E4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26144));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10984));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-18744));
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[21] + static_cast<std::uint32_t>(20));
    aot_gpr[22] = (aot_gpr[21] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (0x089F5728u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F5728u) goto L_089F5728;
    return;
L_089F5728:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F5738u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F5738u) goto L_089F5738;
    return;
L_089F5738:
    aot_gpr[31] = (0x089F5740u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F5740u) goto L_089F5740;
    return;
L_089F5740:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F5750u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F5750u) goto L_089F5750;
    return;
L_089F5750:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(32), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[20] = (aot_gpr[21] | 0u);
    goto L_089F5760;
L_089F5760:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_089F5778;
      }
      goto L_089F5768;
    }
L_089F5768:
    aot_gpr[31] = (0x089F5770u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    goto L_089F5430;
L_089F5770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F57A0;
      }
      goto L_089F5778;
    }
L_089F5778:
    aot_gpr[31] = (0x089F5780u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 250u, 0x089F4FA4u>(ctx, &aot_mem) && ctx.pc == 0x089F5780u) goto L_089F5780;
    return;
L_089F5780:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089F57A0;
      }
      goto L_089F578C;
    }
L_089F578C:
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x089F57A0u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0500_entry, 500u, 214u, 0x089F8F70u>(ctx, &aot_mem) && ctx.pc == 0x089F57A0u) goto L_089F57A0;
    return;
L_089F57A0:
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
L_089F57C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089F57ECu);
    aot_gpr[4] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 163u, 0x089F49FCu>(ctx, &aot_mem) && ctx.pc == 0x089F57ECu) goto L_089F57EC;
    return;
L_089F57EC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F5810;
      }
      goto L_089F57F8;
    }
L_089F57F8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F5808u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    goto L_089F550C;
L_089F5808:
    aot_gpr[17] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F5810;
L_089F5810:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F583C;
      }
      goto L_089F5818;
    }
L_089F5818:
    aot_gpr[31] = (0x089F5820u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089F5B8C;
L_089F5820:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_089F583C:
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
L_089F5858:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089F58B8;
      }
      goto L_089F5894;
    }
L_089F5894:
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-10036));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F58A0;
L_089F58A0:
    aot_gpr[31] = (0x089F58A8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F58A8u) goto L_089F58A8;
    return;
L_089F58A8:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F58A0;
      }
      goto L_089F58B8;
    }
L_089F58B8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F58D0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10028));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F58D0u) goto L_089F58D0;
    return;
L_089F58D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    if (aot_gpr[4] != aot_gpr[5]) {
    aot_gpr[19] = (aot_gpr[4] | 0u);
        goto L_089F58E4;
    }
    goto L_089F58E4;
L_089F58E4:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[20] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F5930;
      }
      goto L_089F58EC;
    }
L_089F58EC:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-10024));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F58F4;
L_089F58F4:
    aot_gpr[31] = (0x089F58FCu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F58FCu) goto L_089F58FC;
    return;
L_089F58FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089F591Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F591Cu) goto L_089F591C;
    return;
L_089F591C:
    aot_gpr[31] = (0x089F5924u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_089F50D0;
L_089F5924:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F58F4;
      }
      goto L_089F5930;
    }
L_089F5930:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F5950;
      }
      goto L_089F593C;
    }
L_089F593C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F5948u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10020));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F5948u) goto L_089F5948;
    return;
L_089F5948:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5A98;
      }
      goto L_089F5950;
    }
L_089F5950:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[20] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-10016));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-10012));
      if (branch_taken) {
          goto L_089F59D4;
      }
      goto L_089F5968;
    }
L_089F5968:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(104));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089F5980u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F5980u) goto L_089F5980;
    return;
L_089F5980:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F59D8;
      }
      goto L_089F5988;
    }
L_089F5988:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F5994u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F5994u) goto L_089F5994;
    return;
L_089F5994:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089F59B8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F59B8u) goto L_089F59B8;
    return;
L_089F59B8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F59CCu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F59CCu) goto L_089F59CC;
    return;
L_089F59CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5A98;
      }
      goto L_089F59D4;
    }
L_089F59D4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F59D8;
L_089F59D8:
    aot_gpr[31] = (0x089F59E0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F59E0u) goto L_089F59E0;
    return;
L_089F59E0:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-10004));
      if (branch_taken) {
          goto L_089F5A48;
      }
      goto L_089F59F0;
    }
L_089F59F0:
    aot_gpr[22] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089F59F8;
L_089F59F8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(104));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089F5A0Cu);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F5A0Cu) goto L_089F5A0C;
    return;
L_089F5A0C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F5A1C;
      }
      goto L_089F5A14;
    }
L_089F5A14:
    aot_gpr[31] = (0x089F5A1Cu);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F5A1Cu) goto L_089F5A1C;
    return;
L_089F5A1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089F5A3Cu);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F5A3Cu) goto L_089F5A3C;
    return;
L_089F5A3C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(40)));
    if (aot_gpr[19] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
        goto L_089F59F8;
    }
    goto L_089F5A48;
L_089F5A48:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F5A54u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F5A54u) goto L_089F5A54;
    return;
L_089F5A54:
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F5A84;
      }
      goto L_089F5A64;
    }
L_089F5A64:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-10036));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F5A6C;
L_089F5A6C:
    aot_gpr[31] = (0x089F5A74u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F5A74u) goto L_089F5A74;
    return;
L_089F5A74:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F5A6C;
      }
      goto L_089F5A84;
    }
L_089F5A84:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F5A98u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F5A98u) goto L_089F5A98;
    return;
L_089F5A98:
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
L_089F5AC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(24));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
    aot_gpr[6] = (aot_gpr[16] + aot_gpr[6]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    if (aot_gpr[4] != aot_gpr[8]) {
    aot_gpr[5] = (aot_gpr[4] | 0u);
        goto L_089F5B00;
    }
    goto L_089F5B00;
L_089F5B00:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089F5B14u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F5B14u) goto L_089F5B14;
    return;
L_089F5B14:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089F5B5C;
    }
    goto L_089F5B1C;
L_089F5B1C:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    if (aot_gpr[18] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089F5B5C;
    }
    goto L_089F5B28;
L_089F5B28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    goto L_089F5B2C;
L_089F5B2C:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(136));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089F5B44u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F5B44u) goto L_089F5B44;
    return;
L_089F5B44:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_089F5B5C;
    }
    goto L_089F5B4C;
L_089F5B4C:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    if (aot_gpr[18] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
        goto L_089F5B2C;
    }
    goto L_089F5B58;
L_089F5B58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_089F5B5C;
L_089F5B5C:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089F5B74u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F5B74u) goto L_089F5B74;
    return;
L_089F5B74:
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
L_089F5B8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089F5BACu);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    goto L_089F5068;
L_089F5BAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (aot_gpr[4] != aot_gpr[5]) {
    aot_gpr[18] = (aot_gpr[4] | 0u);
        goto L_089F5BC0;
    }
    goto L_089F5BC0;
L_089F5BC0:
    if (aot_gpr[18] == 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
        goto L_089F5BF8;
    }
    goto L_089F5BC8;
L_089F5BC8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
    goto L_089F5BCC;
L_089F5BCC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F5BE0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089F5634;
L_089F5BE0:
    aot_gpr[31] = (0x089F5BE8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_089F50D0;
L_089F5BE8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (aot_gpr[18] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_089F5BCC;
    }
    goto L_089F5BF4;
L_089F5BF4:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    goto L_089F5BF8;
L_089F5BF8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5C30;
      }
      goto L_089F5C00;
    }
L_089F5C00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_089F5C04;
L_089F5C04:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(128));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089F5C18u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F5C18u) goto L_089F5C18;
    return;
L_089F5C18:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F5C24u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 231u, 0x089F4E6Cu>(ctx, &aot_mem) && ctx.pc == 0x089F5C24u) goto L_089F5C24;
    return;
L_089F5C24:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    if (aot_gpr[17] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_089F5C04;
    }
    goto L_089F5C30;
L_089F5C30:
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
L_089F5C48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x089F5C68u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 218u, 0x089F4D94u>(ctx, &aot_mem) && ctx.pc == 0x089F5C68u) goto L_089F5C68;
    return;
L_089F5C68:
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    goto L_089F5C70;
L_089F5C70:
    aot_gpr[5] = (0u | 0u);
    if (aot_gpr[4] != aot_gpr[17]) {
    aot_gpr[5] = (0u < aot_gpr[4] ? 1u : 0u);
        goto L_089F5C7C;
    }
    goto L_089F5C7C;
L_089F5C7C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089F5CC8;
      }
      goto L_089F5C84;
    }
L_089F5C84:
    if (aot_gpr[4] != aot_gpr[17]) {
    aot_gpr[18] = (aot_gpr[4] | 0u);
        goto L_089F5C8C;
    }
    goto L_089F5C8C;
L_089F5C8C:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089F5C9Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_089F5448;
L_089F5C9C:
    if (aot_gpr[19] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
        goto L_089F5C70;
    }
    goto L_089F5CA4;
L_089F5CA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089F5CC0u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F5CC0u) goto L_089F5CC0;
    return;
L_089F5CC0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_089F5C70;
      }
      goto L_089F5CC8;
    }
L_089F5CC8:
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
L_089F5CE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x089F5D08u);
    aot_gpr[4] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 163u, 0x089F49FCu>(ctx, &aot_mem) && ctx.pc == 0x089F5D08u) goto L_089F5D08;
    return;
L_089F5D08:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F5D34;
      }
      goto L_089F5D14;
    }
L_089F5D14:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F5D20u);
    aot_gpr[5] = (0u | 2u);
    goto L_089F5020;
L_089F5D20:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10320));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F5D34;
L_089F5D34:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089F5D60;
      }
      goto L_089F5D3C;
    }
L_089F5D3C:
    aot_gpr[31] = (0x089F5D44u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089F5E40;
L_089F5D44:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_089F5D60:
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
L_089F5D7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089F5DD4;
      }
      goto L_089F5DB0;
    }
L_089F5DB0:
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-10036));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_089F5DBC;
L_089F5DBC:
    aot_gpr[31] = (0x089F5DC4u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F5DC4u) goto L_089F5DC4;
    return;
L_089F5DC4:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F5DBC;
      }
      goto L_089F5DD4;
    }
L_089F5DD4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F5DECu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10000));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F5DECu) goto L_089F5DEC;
    return;
L_089F5DEC:
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
L_089F5E0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089F5E34u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F5E34u) goto L_089F5E34;
    return;
L_089F5E34:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F5E40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089F5E50u);
    // nop
    goto L_089F5068;
L_089F5E50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F5E5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_089F5EEC;
      }
      goto L_089F5E8C;
    }
L_089F5E8C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x089F5E9Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10004));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F5E9Cu) goto L_089F5E9C;
    return;
L_089F5E9C:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (2215u << 16u);
      if (branch_taken) {
          goto L_089F5ECC;
      }
      goto L_089F5EAC;
    }
L_089F5EAC:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-10036));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089F5EB4;
L_089F5EB4:
    aot_gpr[31] = (0x089F5EBCu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F5EBCu) goto L_089F5EBC;
    return;
L_089F5EBC:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_089F5EB4;
      }
      goto L_089F5ECC;
    }
L_089F5ECC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F5EE4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9988));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F5EE4u) goto L_089F5EE4;
    return;
L_089F5EE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F5F30;
      }
      goto L_089F5EEC;
    }
L_089F5EEC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(-18744));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089F5F04u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 167u, 0x089F4A34u>(ctx, &aot_mem) && ctx.pc == 0x089F5F04u) goto L_089F5F04;
    return;
L_089F5F04:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x089F5F1Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-9972));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 128u, 0x08A37B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089F5F1Cu) goto L_089F5F1C;
    return;
L_089F5F1C:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_089F5F30;
      }
      goto L_089F5F28;
    }
L_089F5F28:
    aot_gpr[31] = (0x089F5F30u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0502_entry, 502u, 35u, 0x089FA288u>(ctx, &aot_mem) && ctx.pc == 0x089F5F30u) goto L_089F5F30;
    return;
L_089F5F30:
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
L_089F5F50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(56));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x089F5F78u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F5F78u) goto L_089F5F78;
    return;
L_089F5F78:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F5F84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x089F5FACu);
    aot_gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0496_entry, 496u, 163u, 0x089F49FCu>(ctx, &aot_mem) && ctx.pc == 0x089F5FACu) goto L_089F5FAC;
    return;
L_089F5FAC:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0498_entry, 498u, 1u, 0x089F6000u>(ctx, &aot_mem); return;
      }
      goto L_089F5FB8;
    }
L_089F5FB8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089F5FC4u);
    aot_gpr[5] = (0u | 4u);
    goto L_089F5020;
L_089F5FC4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10464));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-9968));
    aot_gpr[17] = (aot_gpr[18] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x089F5FE4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x089F5FE4u) goto L_089F5FE4;
    return;
L_089F5FE4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089F5FF4u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0499_entry, 499u, 10u, 0x089F70ECu>(ctx, &aot_mem) && ctx.pc == 0x089F5FF4u) goto L_089F5FF4;
    return;
L_089F5FF4:
    PSPRECOMP_AOT_STORE8(aot_gpr[18] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_gpr[17] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = 0x089F6000u; return;
}

void recomp_unit_0497(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0497_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_497(Runtime &runtime) {
    runtime.register_generated_unit(497u, 0x089F5000u, 4096u, &recomp_unit_0497, &recomp_unit_0497_entry);
    runtime.register_function(0x089F5000u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5010u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5020u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5068u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F509Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F50ACu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F50D0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F50F0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5108u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5110u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5118u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5158u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5164u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F517Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5184u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5198u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F51A0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F51A8u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F51B4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F51B8u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F51C0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F51C8u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F51E8u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F51F0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5204u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5214u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5224u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5238u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5248u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5258u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5260u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5268u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5288u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5290u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F52A4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F52B4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F52C4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F52D8u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F52E8u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F52F8u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F52FCu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5304u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F530Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5310u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5318u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5320u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F533Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F537Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5398u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F53B0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F53C4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F53CCu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F53D0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F53D8u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F53ECu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F53F4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F53F8u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F540Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5414u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5430u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5448u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5454u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F545Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5468u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5470u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F548Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F54B0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F54B4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F54C0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F54C8u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F54D4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F54F0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F550Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5530u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5544u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5558u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5568u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5584u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F55A0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F55B4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F55C0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F55CCu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F55D8u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F55E0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F55F4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5604u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5610u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5624u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5634u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5674u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5680u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F568Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5698u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F56A0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F56A4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F56ACu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F56BCu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F56E4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5728u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5738u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5740u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5750u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5760u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5768u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5770u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5778u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5780u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F578Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F57A0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F57C8u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F57ECu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F57F8u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5808u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5810u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5818u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5820u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F583Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5858u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5894u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F58A0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F58A8u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F58B8u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F58D0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F58E4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F58ECu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F58F4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F58FCu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F591Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5924u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5930u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F593Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5948u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5950u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5968u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5980u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5988u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5994u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F59B8u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F59CCu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F59D4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F59D8u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F59E0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F59F0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F59F8u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5A0Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5A14u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5A1Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5A3Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5A48u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5A54u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5A64u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5A6Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5A74u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5A84u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5A98u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5AC0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5B00u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5B14u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5B1Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5B28u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5B2Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5B44u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5B4Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5B58u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5B5Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5B74u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5B8Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5BACu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5BC0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5BC8u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5BCCu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5BE0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5BE8u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5BF4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5BF8u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5C00u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5C04u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5C18u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5C24u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5C30u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5C48u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5C68u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5C70u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5C7Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5C84u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5C8Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5C9Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5CA4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5CC0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5CC8u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5CE4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5D08u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5D14u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5D20u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5D34u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5D3Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5D44u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5D60u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5D7Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5DB0u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5DBCu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5DC4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5DD4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5DECu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5E0Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5E34u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5E40u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5E50u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5E5Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5E8Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5E9Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5EACu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5EB4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5EBCu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5ECCu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5EE4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5EECu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5F04u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5F1Cu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5F28u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5F30u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5F50u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5F78u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5F84u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5FACu, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5FB8u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5FC4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5FE4u, &recomp_unit_0497, "recomp_unit_0497");
    runtime.register_function(0x089F5FF4u, &recomp_unit_0497, "recomp_unit_0497");
}
} // namespace psprecomp
