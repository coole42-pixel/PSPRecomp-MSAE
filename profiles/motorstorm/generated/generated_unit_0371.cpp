#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0371[1024] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0,
    0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0,
    0, 18, 0, 19, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32,
    0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0,
    0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 52, 0, 0, 0, 0, 0, 53, 0, 54, 0, 55, 56,
    0, 57, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 61, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 64, 0, 65, 0, 66, 67, 0, 0,
    0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 0, 76, 0, 0,
    0, 77, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 82, 0, 83, 84, 0, 0, 85, 0, 0, 86, 0, 0,
    0, 87, 0, 88, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0,
    0, 101, 0, 0, 102, 0, 103, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 110, 0, 111,
    0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 0, 0, 118, 0, 119,
    0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 0, 127, 0, 128, 0, 129, 0, 130,
    0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 133, 0, 134, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137,
    0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 143, 0, 144, 145,
    0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 148, 149, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 153, 0, 154, 0,
    0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160,
    0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169,
    0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 172, 0, 173, 174, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 178, 0, 0,
    0, 179, 0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 186, 187, 0, 188, 0, 0, 189, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 197, 0, 198, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 201, 0, 202, 203, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 208, 0, 209, 0, 0, 0,
    0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 214, 215, 0, 216, 0, 0, 217, 0, 0,
    218, 0, 0, 219, 0, 220, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 227, 228, 0, 229, 0, 0, 230, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0,
    0, 234, 0, 0, 0, 0, 0, 235, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240,
    241, 0, 242, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 246, 0, 0, 247, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 253,
};
void recomp_unit_0371_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08977000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0371[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08977000;
    case 2u: goto L_08977058;
    case 3u: goto L_08977068;
    case 4u: goto L_08977078;
    case 5u: goto L_08977088;
    case 6u: goto L_08977098;
    case 7u: goto L_089770A0;
    case 8u: goto L_089770B4;
    case 9u: goto L_089770BC;
    case 10u: goto L_089770D0;
    case 11u: goto L_089770E4;
    case 12u: goto L_08977108;
    case 13u: goto L_08977128;
    case 14u: goto L_08977134;
    case 15u: goto L_0897713C;
    case 16u: goto L_08977154;
    case 17u: goto L_08977178;
    case 18u: goto L_08977184;
    case 19u: goto L_0897718C;
    case 20u: goto L_089771A0;
    case 21u: goto L_089771AC;
    case 22u: goto L_089771C4;
    case 23u: goto L_089771CC;
    case 24u: goto L_089771E8;
    case 25u: goto L_089771F4;
    case 26u: goto L_08977218;
    case 27u: goto L_08977224;
    case 28u: goto L_08977234;
    case 29u: goto L_0897724C;
    case 30u: goto L_08977254;
    case 31u: goto L_08977270;
    case 32u: goto L_0897727C;
    case 33u: goto L_089772A0;
    case 34u: goto L_089772AC;
    case 35u: goto L_089772BC;
    case 36u: goto L_089772C8;
    case 37u: goto L_089772D4;
    case 38u: goto L_089772E0;
    case 39u: goto L_089772EC;
    case 40u: goto L_089772F8;
    case 41u: goto L_08977304;
    case 42u: goto L_0897730C;
    case 43u: goto L_08977328;
    case 44u: goto L_08977354;
    case 45u: goto L_0897735C;
    case 46u: goto L_08977370;
    case 47u: goto L_08977394;
    case 48u: goto L_089773A4;
    case 49u: goto L_089773B8;
    case 50u: goto L_089773C0;
    case 51u: goto L_089773C8;
    case 52u: goto L_089773D0;
    case 53u: goto L_089773E8;
    case 54u: goto L_089773F0;
    case 55u: goto L_089773F8;
    case 56u: goto L_089773FC;
    case 57u: goto L_08977404;
    case 58u: goto L_0897741C;
    case 59u: goto L_08977424;
    case 60u: goto L_0897742C;
    case 61u: goto L_08977430;
    case 62u: goto L_08977440;
    case 63u: goto L_08977448;
    case 64u: goto L_08977460;
    case 65u: goto L_08977468;
    case 66u: goto L_08977470;
    case 67u: goto L_08977474;
    case 68u: goto L_08977490;
    case 69u: goto L_089774B0;
    case 70u: goto L_089774C0;
    case 71u: goto L_089774E0;
    case 72u: goto L_089774EC;
    case 73u: goto L_0897754C;
    case 74u: goto L_08977560;
    case 75u: goto L_08977568;
    case 76u: goto L_08977574;
    case 77u: goto L_08977584;
    case 78u: goto L_0897758C;
    case 79u: goto L_089775A4;
    case 80u: goto L_089775B0;
    case 81u: goto L_089775C4;
    case 82u: goto L_089775D0;
    case 83u: goto L_089775D8;
    case 84u: goto L_089775DC;
    case 85u: goto L_089775E8;
    case 86u: goto L_089775F4;
    case 87u: goto L_08977604;
    case 88u: goto L_0897760C;
    case 89u: goto L_08977610;
    case 90u: goto L_08977630;
    case 91u: goto L_08977654;
    case 92u: goto L_0897766C;
    case 93u: goto L_08977678;
    case 94u: goto L_0897769C;
    case 95u: goto L_089776A8;
    case 96u: goto L_089776B0;
    case 97u: goto L_089776BC;
    case 98u: goto L_089776C8;
    case 99u: goto L_089776DC;
    case 100u: goto L_089776F8;
    case 101u: goto L_08977704;
    case 102u: goto L_08977710;
    case 103u: goto L_08977718;
    case 104u: goto L_08977720;
    case 105u: goto L_08977738;
    case 106u: goto L_08977744;
    case 107u: goto L_08977754;
    case 108u: goto L_08977760;
    case 109u: goto L_0897776C;
    case 110u: goto L_08977774;
    case 111u: goto L_0897777C;
    case 112u: goto L_08977794;
    case 113u: goto L_089777A0;
    case 114u: goto L_089777B8;
    case 115u: goto L_089777CC;
    case 116u: goto L_089777D4;
    case 117u: goto L_089777E0;
    case 118u: goto L_089777F4;
    case 119u: goto L_089777FC;
    case 120u: goto L_08977814;
    case 121u: goto L_08977820;
    case 122u: goto L_08977828;
    case 123u: goto L_08977830;
    case 124u: goto L_0897783C;
    case 125u: goto L_08977844;
    case 126u: goto L_0897784C;
    case 127u: goto L_08977864;
    case 128u: goto L_0897786C;
    case 129u: goto L_08977874;
    case 130u: goto L_0897787C;
    case 131u: goto L_08977898;
    case 132u: goto L_089778A0;
    case 133u: goto L_089778B8;
    case 134u: goto L_089778C0;
    case 135u: goto L_089778C4;
    case 136u: goto L_089778D0;
    case 137u: goto L_089778FC;
    case 138u: goto L_08977904;
    case 139u: goto L_08977914;
    case 140u: goto L_08977934;
    case 141u: goto L_08977950;
    case 142u: goto L_08977964;
    case 143u: goto L_08977970;
    case 144u: goto L_08977978;
    case 145u: goto L_0897797C;
    case 146u: goto L_0897799C;
    case 147u: goto L_089779B8;
    case 148u: goto L_089779C0;
    case 149u: goto L_089779C4;
    case 150u: goto L_089779CC;
    case 151u: goto L_089779D8;
    case 152u: goto L_089779E8;
    case 153u: goto L_089779F0;
    case 154u: goto L_089779F8;
    case 155u: goto L_08977A08;
    case 156u: goto L_08977A2C;
    case 157u: goto L_08977A40;
    case 158u: goto L_08977A4C;
    case 159u: goto L_08977A58;
    case 160u: goto L_08977A7C;
    case 161u: goto L_08977A88;
    case 162u: goto L_08977A94;
    case 163u: goto L_08977AA0;
    case 164u: goto L_08977AAC;
    case 165u: goto L_08977ABC;
    case 166u: goto L_08977AC8;
    case 167u: goto L_08977AD0;
    case 168u: goto L_08977AEC;
    case 169u: goto L_08977AFC;
    case 170u: goto L_08977B08;
    case 171u: goto L_08977B20;
    case 172u: goto L_08977B28;
    case 173u: goto L_08977B30;
    case 174u: goto L_08977B34;
    case 175u: goto L_08977B48;
    case 176u: goto L_08977B58;
    case 177u: goto L_08977B60;
    case 178u: goto L_08977B74;
    case 179u: goto L_08977B84;
    case 180u: goto L_08977B90;
    case 181u: goto L_08977B98;
    case 182u: goto L_08977BA0;
    case 183u: goto L_08977BA8;
    case 184u: goto L_08977BB0;
    case 185u: goto L_08977BCC;
    case 186u: goto L_08977BD4;
    case 187u: goto L_08977BD8;
    case 188u: goto L_08977BE0;
    case 189u: goto L_08977BEC;
    case 190u: goto L_08977C20;
    case 191u: goto L_08977C2C;
    case 192u: goto L_08977C3C;
    case 193u: goto L_08977C6C;
    case 194u: goto L_08977C94;
    case 195u: goto L_08977CA0;
    case 196u: goto L_08977CAC;
    case 197u: goto L_08977CB4;
    case 198u: goto L_08977CBC;
    case 199u: goto L_08977CC8;
    case 200u: goto L_08977CD8;
    case 201u: goto L_08977D14;
    case 202u: goto L_08977D1C;
    case 203u: goto L_08977D20;
    case 204u: goto L_08977D28;
    case 205u: goto L_08977D34;
    case 206u: goto L_08977D54;
    case 207u: goto L_08977D60;
    case 208u: goto L_08977D68;
    case 209u: goto L_08977D70;
    case 210u: goto L_08977D88;
    case 211u: goto L_08977DA8;
    case 212u: goto L_08977DCC;
    case 213u: goto L_08977DD4;
    case 214u: goto L_08977DDC;
    case 215u: goto L_08977DE0;
    case 216u: goto L_08977DE8;
    case 217u: goto L_08977DF4;
    case 218u: goto L_08977E00;
    case 219u: goto L_08977E0C;
    case 220u: goto L_08977E14;
    case 221u: goto L_08977E28;
    case 222u: goto L_08977E30;
    case 223u: goto L_08977E38;
    case 224u: goto L_08977E4C;
    case 225u: goto L_08977E9C;
    case 226u: goto L_08977EA4;
    case 227u: goto L_08977EAC;
    case 228u: goto L_08977EB0;
    case 229u: goto L_08977EB8;
    case 230u: goto L_08977EC4;
    case 231u: goto L_08977ED0;
    case 232u: goto L_08977ED8;
    case 233u: goto L_08977EF8;
    case 234u: goto L_08977F04;
    case 235u: goto L_08977F1C;
    case 236u: goto L_08977F20;
    case 237u: goto L_08977F2C;
    case 238u: goto L_08977F4C;
    case 239u: goto L_08977F74;
    case 240u: goto L_08977F7C;
    case 241u: goto L_08977F80;
    case 242u: goto L_08977F88;
    case 243u: goto L_08977F94;
    case 244u: goto L_08977FA8;
    case 245u: goto L_08977FBC;
    case 246u: goto L_08977FC4;
    case 247u: goto L_08977FD0;
    case 248u: goto L_08977FD8;
    case 249u: goto L_08977FE0;
    case 250u: goto L_08977FE8;
    case 251u: goto L_08977FF0;
    case 252u: goto L_08977FF8;
    case 253u: goto L_08977FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08977000:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21036)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21040)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(412), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(408), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(420), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(416), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(424), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(428), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(432), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(436), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(472), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(492), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(496), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(500), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(504), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(508), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(512), 0u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(516), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(520));
    aot_gpr[31] = (0x08977058u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-21032));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 127u, 0x0897985Cu>(ctx, &aot_mem) && ctx.pc == 0x08977058u) goto L_08977058;
    return;
L_08977058:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(704));
    aot_gpr[31] = (0x08977068u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-21020));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 127u, 0x0897985Cu>(ctx, &aot_mem) && ctx.pc == 0x08977068u) goto L_08977068;
    return;
L_08977068:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(888));
    aot_gpr[31] = (0x08977078u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-21008));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 127u, 0x0897985Cu>(ctx, &aot_mem) && ctx.pc == 0x08977078u) goto L_08977078;
    return;
L_08977078:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1072));
    aot_gpr[31] = (0x08977088u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20996));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 127u, 0x0897985Cu>(ctx, &aot_mem) && ctx.pc == 0x08977088u) goto L_08977088;
    return;
L_08977088:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1256));
    aot_gpr[31] = (0x08977098u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20976));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 115u, 0x08979768u>(ctx, &aot_mem) && ctx.pc == 0x08977098u) goto L_08977098;
    return;
L_08977098:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089770A0;
L_089770A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(440), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089770A0;
      }
      goto L_089770B4;
    }
L_089770B4:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_089770BC;
L_089770BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(476), 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089770BC;
      }
      goto L_089770D0;
    }
L_089770D0:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089770E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897730C;
      }
      goto L_08977108;
    }
L_08977108:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6480));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(472)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_089771A0;
      }
      goto L_08977128;
    }
L_08977128:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897713C;
      }
      goto L_08977134;
    }
L_08977134:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897718C;
      }
      goto L_0897713C;
    }
L_0897713C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08977154u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08977154u) goto L_08977154;
    return;
L_08977154:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(80));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08977178u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977178u) goto L_08977178;
    return;
L_08977178:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08977184u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x08977184u) goto L_08977184;
    return;
L_08977184:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_0897718C;
L_0897718C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(472)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08977128;
      }
      goto L_089771A0;
    }
L_089771A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977224;
      }
      goto L_089771AC;
    }
L_089771AC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089771C4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089771C4u) goto L_089771C4;
    return;
L_089771C4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089771E8;
      }
      goto L_089771CC;
    }
L_089771CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(432)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089771E8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089771E8u) goto L_089771E8;
    return;
L_089771E8:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x089771F4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x089771F4u) goto L_089771F4;
    return;
L_089771F4:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(432)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08977218u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977218u) goto L_08977218;
    return;
L_08977218:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08977224u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x08977224u) goto L_08977224;
    return;
L_08977224:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(432), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089772AC;
      }
      goto L_08977234;
    }
L_08977234:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0897724Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897724Cu) goto L_0897724C;
    return;
L_0897724C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977270;
      }
      goto L_08977254;
    }
L_08977254:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(436)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08977270u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977270u) goto L_08977270;
    return;
L_08977270:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897727Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897727Cu) goto L_0897727C;
    return;
L_0897727C:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(436)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089772A0u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089772A0u) goto L_089772A0;
    return;
L_089772A0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x089772ACu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x089772ACu) goto L_089772AC;
    return;
L_089772AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(436), 0u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1256));
    aot_gpr[31] = (0x089772BCu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 117u, 0x089797B0u>(ctx, &aot_mem) && ctx.pc == 0x089772BCu) goto L_089772BC;
    return;
L_089772BC:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1072));
    aot_gpr[31] = (0x089772C8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 156u, 0x08979A74u>(ctx, &aot_mem) && ctx.pc == 0x089772C8u) goto L_089772C8;
    return;
L_089772C8:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(888));
    aot_gpr[31] = (0x089772D4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 156u, 0x08979A74u>(ctx, &aot_mem) && ctx.pc == 0x089772D4u) goto L_089772D4;
    return;
L_089772D4:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(704));
    aot_gpr[31] = (0x089772E0u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 156u, 0x08979A74u>(ctx, &aot_mem) && ctx.pc == 0x089772E0u) goto L_089772E0;
    return;
L_089772E0:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(520));
    aot_gpr[31] = (0x089772ECu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 156u, 0x08979A74u>(ctx, &aot_mem) && ctx.pc == 0x089772ECu) goto L_089772EC;
    return;
L_089772EC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089772F8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 8u, 0x0897A074u>(ctx, &aot_mem) && ctx.pc == 0x089772F8u) goto L_089772F8;
    return;
L_089772F8:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897730C;
      }
      goto L_08977304;
    }
L_08977304:
    aot_gpr[31] = (0x0897730Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x0897730Cu) goto L_0897730C;
    return;
L_0897730C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977328:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 2048u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08977354u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977354u) goto L_08977354;
    return;
L_08977354:
    aot_gpr[31] = (0x0897735Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0370_entry, 370u, 258u, 0x08976F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0897735Cu) goto L_0897735C;
    return;
L_0897735C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977370:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(428)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089773C0;
      }
      goto L_08977394;
    }
L_08977394:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x089773A4u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x089773A4u) goto L_089773A4;
    return;
L_089773A4:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x089773B8u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0367_entry, 367u, 226u, 0x08973D44u>(ctx, &aot_mem) && ctx.pc == 0x089773B8u) goto L_089773B8;
    return;
L_089773B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089773C8;
      }
      goto L_089773C0;
    }
L_089773C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 33u);
      if (branch_taken) {
          goto L_08977474;
      }
      goto L_089773C8;
    }
L_089773C8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089773FC;
      }
      goto L_089773D0;
    }
L_089773D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089773E8u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089773E8u) goto L_089773E8;
    return;
L_089773E8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089773FC;
      }
      goto L_089773F0;
    }
L_089773F0:
    aot_gpr[31] = (0x089773F8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 190u, 0x0897EE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089773F8u) goto L_089773F8;
    return;
L_089773F8:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_089773FC;
L_089773FC:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08977430;
      }
      goto L_08977404;
    }
L_08977404:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897741Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897741Cu) goto L_0897741C;
    return;
L_0897741C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977430;
      }
      goto L_08977424;
    }
L_08977424:
    aot_gpr[31] = (0x0897742Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 190u, 0x0897EE3Cu>(ctx, &aot_mem) && ctx.pc == 0x0897742Cu) goto L_0897742C;
    return;
L_0897742C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_08977430;
L_08977430:
    aot_gpr[4] = (0u < aot_gpr[19] ? 1u : 0u);
    aot_gpr[18] = (0u < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[18] = (aot_gpr[4] | aot_gpr[18]);
      if (branch_taken) {
          goto L_08977460;
      }
      goto L_08977440;
    }
L_08977440:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977460;
      }
      goto L_08977448;
    }
L_08977448:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(184));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08977460u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977460u) goto L_08977460;
    return;
L_08977460:
    aot_gpr[31] = (0x08977468u);
    aot_gpr[4] = (0u | 800u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08977468:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089773C8;
      }
      goto L_08977470;
    }
L_08977470:
    aot_gpr[2] = (0u | 0u);
    goto L_08977474;
L_08977474:
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
L_08977490:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(296));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089774B0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089774B0u) goto L_089774B0;
    return;
L_089774B0:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089774C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(304));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089774E0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089774E0u) goto L_089774E0;
    return;
L_089774E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089774EC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21228)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21232)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[9]);
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(504)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    aot_gpr[20] = (0u | 1u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08977568;
      }
      goto L_0897754C;
    }
L_0897754C:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08977560u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977560u) goto L_08977560;
    return;
L_08977560:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0897758C;
      }
      goto L_08977568;
    }
L_08977568:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08977574u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08977574u) goto L_08977574;
    return;
L_08977574:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08977584u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 142u, 0x0897A8A8u>(ctx, &aot_mem) && ctx.pc == 0x08977584u) goto L_08977584;
    return;
L_08977584:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_0897758C;
L_0897758C:
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
      if (branch_taken) {
          goto L_0897760C;
      }
      goto L_089775A4;
    }
L_089775A4:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x089775B0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x089775B0u) goto L_089775B0;
    return;
L_089775B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[31] = (0x089775C4u);
    aot_gpr[4] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 92u, 0x08979644u>(ctx, &aot_mem) && ctx.pc == 0x089775C4u) goto L_089775C4;
    return;
L_089775C4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089775DC;
      }
      goto L_089775D0;
    }
L_089775D0:
    aot_gpr[31] = (0x089775D8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 57u, 0x0897D494u>(ctx, &aot_mem) && ctx.pc == 0x089775D8u) goto L_089775D8;
    return;
L_089775D8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_089775DC;
L_089775DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x089775E8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 69u, 0x0897D59Cu>(ctx, &aot_mem) && ctx.pc == 0x089775E8u) goto L_089775E8;
    return;
L_089775E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977604;
      }
      goto L_089775F4;
    }
L_089775F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (aot_gpr[5] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(48), aot_gpr[5]);
    goto L_08977604;
L_08977604:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08977610;
      }
      goto L_0897760C;
    }
L_0897760C:
    aot_gpr[2] = (aot_gpr[20] | 0u);
    goto L_08977610;
L_08977610:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977630:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[6] = (aot_gpr[6] & 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089776B0;
      }
      goto L_08977654;
    }
L_08977654:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897766Cu);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897766Cu) goto L_0897766C;
    return;
L_0897766C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08977678u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08977678u) goto L_08977678;
    return;
L_08977678:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897769Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897769Cu) goto L_0897769C;
    return;
L_0897769C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089776A8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x089776A8u) goto L_089776A8;
    return;
L_089776A8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089776C8;
      }
      goto L_089776B0;
    }
L_089776B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897766C;
      }
      goto L_089776BC;
    }
L_089776BC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089776C8u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089776C8u) goto L_089776C8;
    return;
L_089776C8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089776DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08977718;
      }
      goto L_089776F8;
    }
L_089776F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977720;
      }
      goto L_08977704;
    }
L_08977704:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08977710u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977710u) goto L_08977710;
    return;
L_08977710:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977738;
      }
      goto L_08977718;
    }
L_08977718:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 46u);
      if (branch_taken) {
          goto L_08977738;
      }
      goto L_08977720;
    }
L_08977720:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08977738u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977738u) goto L_08977738;
    return;
L_08977738:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977744:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_08977774;
      }
      goto L_08977754;
    }
L_08977754:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897777C;
      }
      goto L_08977760;
    }
L_08977760:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0897776Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897776Cu) goto L_0897776C;
    return;
L_0897776C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977794;
      }
      goto L_08977774;
    }
L_08977774:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 46u);
      if (branch_taken) {
          goto L_08977794;
      }
      goto L_0897777C;
    }
L_0897777C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08977794u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977794u) goto L_08977794;
    return;
L_08977794:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089777A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(496)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977830;
      }
      goto L_089777B8;
    }
L_089777B8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x089777CCu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x089777CCu) goto L_089777CC;
    return;
L_089777CC:
    aot_gpr[31] = (0x089777D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 128u, 0x0897A764u>(ctx, &aot_mem) && ctx.pc == 0x089777D4u) goto L_089777D4;
    return;
L_089777D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08977830;
      }
      goto L_089777E0;
    }
L_089777E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x089777F4u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x089777F4u) goto L_089777F4;
    return;
L_089777F4:
    aot_gpr[31] = (0x089777FCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0375_entry, 375u, 42u, 0x0897B284u>(ctx, &aot_mem) && ctx.pc == 0x089777FCu) goto L_089777FC;
    return;
L_089777FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(492)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(496)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08977814u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977814u) goto L_08977814;
    return;
L_08977814:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08977820u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08977820u) goto L_08977820;
    return;
L_08977820:
    aot_gpr[31] = (0x08977828u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0375_entry, 375u, 43u, 0x0897B298u>(ctx, &aot_mem) && ctx.pc == 0x08977828u) goto L_08977828;
    return;
L_08977828:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08977830;
L_08977830:
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0897786C;
      }
      goto L_0897783C;
    }
L_0897783C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) < 0;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_089778C0;
      }
      goto L_08977844;
    }
L_08977844:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) > 0;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
      if (branch_taken) {
          goto L_089778A0;
      }
      goto L_0897784C;
    }
L_0897784C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08977864u);
    aot_gpr[5] = (0u | 32u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977864u) goto L_08977864;
    return;
L_08977864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089778C4;
      }
      goto L_0897786C;
    }
L_0897786C:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089778C0;
      }
      goto L_08977874;
    }
L_08977874:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089778C0;
      }
      goto L_0897787C;
    }
L_0897787C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 256u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(88));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08977898u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977898u) goto L_08977898;
    return;
L_08977898:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089778C4;
      }
      goto L_089778A0;
    }
L_089778A0:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(88));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089778B8u);
    aot_gpr[5] = (0u | 128u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089778B8u) goto L_089778B8;
    return;
L_089778B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089778C4;
      }
      goto L_089778C0;
    }
L_089778C0:
    aot_gpr[2] = (0u | 0u);
    goto L_089778C4;
L_089778C4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089778D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089778FCu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089778FCu) goto L_089778FC;
    return;
L_089778FC:
    aot_gpr[31] = (0x08977904u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(704));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 146u, 0x089799E0u>(ctx, &aot_mem) && ctx.pc == 0x08977904u) goto L_08977904;
    return;
L_08977904:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977914:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08977934u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20960));
    if (rt.invoke_chained_direct<&recomp_unit_0370_entry, 370u, 260u, 0x08976FB0u>(ctx, &aot_mem) && ctx.pc == 0x08977934u) goto L_08977934;
    return;
L_08977934:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6800));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1416), 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08977950u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08977950u) goto L_08977950;
    return;
L_08977950:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x08977964u);
    aot_gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 92u, 0x08979644u>(ctx, &aot_mem) && ctx.pc == 0x08977964u) goto L_08977964;
    return;
L_08977964:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0897797C;
      }
      goto L_08977970;
    }
L_08977970:
    aot_gpr[31] = (0x08977978u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 174u, 0x08980BA4u>(ctx, &aot_mem) && ctx.pc == 0x08977978u) goto L_08977978;
    return;
L_08977978:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0897797C;
L_0897797C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1420), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1424), 0u);
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
L_0897799C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089779C4;
      }
      goto L_089779B8;
    }
L_089779B8:
    aot_gpr[31] = (0x089779C0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 104u, 0x0897461Cu>(ctx, &aot_mem) && ctx.pc == 0x089779C0u) goto L_089779C0;
    return;
L_089779C0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_089779C4;
L_089779C4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089779F0;
      }
      goto L_089779CC;
    }
L_089779CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089779F0;
      }
      goto L_089779D8;
    }
L_089779D8:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x089779E8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1416)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089779E8u) goto L_089779E8;
    return;
L_089779E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089779F8;
      }
      goto L_089779F0;
    }
L_089779F0:
    aot_gpr[31] = (0x089779F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1420)));
    if (rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 176u, 0x08980BD4u>(ctx, &aot_mem) && ctx.pc == 0x089779F8u) goto L_089779F8;
    return;
L_089779F8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977A08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08977AD0;
      }
      goto L_08977A2C;
    }
L_08977A2C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(6800));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    aot_gpr[31] = (0x08977A40u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0897799C;
L_08977A40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1420)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977A88;
      }
      goto L_08977A4C;
    }
L_08977A4C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08977A58u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08977A58u) goto L_08977A58;
    return;
L_08977A58:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1420)));
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08977A7Cu);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977A7Cu) goto L_08977A7C;
    return;
L_08977A7C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08977A88u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x08977A88u) goto L_08977A88;
    return;
L_08977A88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977AAC;
      }
      goto L_08977A94;
    }
L_08977A94:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08977AA0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08977AA0u) goto L_08977AA0;
    return;
L_08977AA0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1424)));
    aot_gpr[31] = (0x08977AACu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x08977AACu) goto L_08977AAC;
    return;
L_08977AAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1424), 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08977ABCu);
    aot_gpr[5] = (0u | 0u);
    goto L_089770E4;
L_08977ABC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977AD0;
      }
      goto L_08977AC8;
    }
L_08977AC8:
    aot_gpr[31] = (0x08977AD0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08977AD0u) goto L_08977AD0;
    return;
L_08977AD0:
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
L_08977AEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08977AFCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1420)));
    if (rt.invoke_chained_direct<&recomp_unit_0381_entry, 381u, 112u, 0x0898166Cu>(ctx, &aot_mem) && ctx.pc == 0x08977AFCu) goto L_08977AFC;
    return;
L_08977AFC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977B08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1420)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08977B34;
      }
      goto L_08977B20;
    }
L_08977B20:
    aot_gpr[31] = (0x08977B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 175u, 0x08980BC8u>(ctx, &aot_mem) && ctx.pc == 0x08977B28u) goto L_08977B28;
    return;
L_08977B28:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977B34;
      }
      goto L_08977B30;
    }
L_08977B30:
    aot_gpr[16] = (0u | 1u);
    goto L_08977B34;
L_08977B34:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977B48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977B60;
      }
      goto L_08977B58;
    }
L_08977B58:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_08977B84;
      }
      goto L_08977B60;
    }
L_08977B60:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (0x08977B74u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_08977AEC;
L_08977B74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[5] | 0u);
    goto L_08977B84;
L_08977B84:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977B90:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 33u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977B98:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 33u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977BA0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1416)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977BA8:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1416), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977BB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08977BD8;
      }
      goto L_08977BCC;
    }
L_08977BCC:
    aot_gpr[31] = (0x08977BD4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 104u, 0x0897461Cu>(ctx, &aot_mem) && ctx.pc == 0x08977BD4u) goto L_08977BD4;
    return;
L_08977BD4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08977BD8;
L_08977BD8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977CA0;
      }
      goto L_08977BE0;
    }
L_08977BE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977CA0;
      }
      goto L_08977BEC;
    }
L_08977BEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(272));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-21228)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-21232)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[9] | 0u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[8] = (0u | 1u);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08977C20u);
    aot_gpr[9] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977C20u) goto L_08977C20;
    return;
L_08977C20:
    aot_gpr[4] = (0u | 514u);
    if (aot_gpr[2] != aot_gpr[4]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
        goto L_08977C3C;
    }
    goto L_08977C2C;
L_08977C2C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20936)));
      if (branch_taken) {
          goto L_08977CC8;
      }
      goto L_08977C3C;
    }
L_08977C3C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(272));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-21228)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-21232)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (aot_gpr[11] | 0u);
    aot_gpr[6] = (aot_gpr[10] | 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08977C6Cu);
    aot_gpr[8] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977C6Cu) goto L_08977C6C;
    return;
L_08977C6C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(272));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = aot_gpr[10];
    aot_gpr[31] = (0x08977C94u);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977C94u) goto L_08977C94;
    return;
L_08977C94:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08977CC8;
      }
      goto L_08977CA0;
    }
L_08977CA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1420)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977CBC;
      }
      goto L_08977CAC;
    }
L_08977CAC:
    aot_gpr[31] = (0x08977CB4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1420)));
    if (rt.invoke_chained_direct<&recomp_unit_0381_entry, 381u, 116u, 0x08981690u>(ctx, &aot_mem) && ctx.pc == 0x08977CB4u) goto L_08977CB4;
    return;
L_08977CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977CC8;
      }
      goto L_08977CBC;
    }
L_08977CBC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21228)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21232)));
    goto L_08977CC8;
L_08977CC8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977CD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[21]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[8] | 0u);
    aot_gpr[21] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[9] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[20] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08977D20;
      }
      goto L_08977D14;
    }
L_08977D14:
    aot_gpr[31] = (0x08977D1Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 104u, 0x0897461Cu>(ctx, &aot_mem) && ctx.pc == 0x08977D1Cu) goto L_08977D1C;
    return;
L_08977D1C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08977D20;
L_08977D20:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977D70;
      }
      goto L_08977D28;
    }
L_08977D28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977D70;
      }
      goto L_08977D34;
    }
L_08977D34:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1416)));
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08977D54u);
    aot_gpr[9] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977D54u) goto L_08977D54;
    return;
L_08977D54:
    aot_gpr[4] = (0u | 19u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08977D68;
      }
      goto L_08977D60;
    }
L_08977D60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977D88;
      }
      goto L_08977D68;
    }
L_08977D68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977D88;
      }
      goto L_08977D70;
    }
L_08977D70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1420)));
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08977D88u);
    aot_gpr[9] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0381_entry, 381u, 103u, 0x089815F4u>(ctx, &aot_mem) && ctx.pc == 0x08977D88u) goto L_08977D88;
    return;
L_08977D88:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977DA8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    if (aot_gpr[5] == 0u) {
    aot_gpr[17] = (aot_gpr[29] | 0u);
        goto L_08977DCC;
    }
    goto L_08977DCC;
L_08977DCC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08977DE0;
      }
      goto L_08977DD4;
    }
L_08977DD4:
    aot_gpr[31] = (0x08977DDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 104u, 0x0897461Cu>(ctx, &aot_mem) && ctx.pc == 0x08977DDCu) goto L_08977DDC;
    return;
L_08977DDC:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_08977DE0;
L_08977DE0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977DF4;
      }
      goto L_08977DE8;
    }
L_08977DE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977E14;
      }
      goto L_08977DF4;
    }
L_08977DF4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1420)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08977E30;
      }
      goto L_08977E00;
    }
L_08977E00:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08977E0Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0381_entry, 381u, 108u, 0x08981628u>(ctx, &aot_mem) && ctx.pc == 0x08977E0Cu) goto L_08977E0C;
    return;
L_08977E0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977E38;
      }
      goto L_08977E14;
    }
L_08977E14:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1416)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08977E28u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977E28u) goto L_08977E28;
    return;
L_08977E28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977E38;
      }
      goto L_08977E30;
    }
L_08977E30:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20932)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20936)));
    goto L_08977E38;
L_08977E38:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977E4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21228)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-21232)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    aot_gpr[18] = (aot_gpr[8] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(428)));
    aot_gpr[21] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    if (aot_gpr[8] == 0u) {
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
        goto L_08977E9C;
    }
    goto L_08977E9C;
L_08977E9C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08977EB0;
      }
      goto L_08977EA4;
    }
L_08977EA4:
    aot_gpr[31] = (0x08977EACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 104u, 0x0897461Cu>(ctx, &aot_mem) && ctx.pc == 0x08977EACu) goto L_08977EAC;
    return;
L_08977EAC:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_08977EB0;
L_08977EB0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977EC4;
      }
      goto L_08977EB8;
    }
L_08977EB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08977ED8;
      }
      goto L_08977EC4;
    }
L_08977EC4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1420)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[4] = (0u | 45u);
      if (branch_taken) {
          goto L_08977F04;
      }
      goto L_08977ED0;
    }
L_08977ED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977F20;
      }
      goto L_08977ED8;
    }
L_08977ED8:
    aot_gpr[10] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1416)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[10];
    aot_gpr[31] = (0x08977EF8u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977EF8u) goto L_08977EF8;
    return;
L_08977EF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_08977F2C;
      }
      goto L_08977F04;
    }
L_08977F04:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08977F1Cu);
    aot_gpr[8] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0381_entry, 381u, 93u, 0x08981508u>(ctx, &aot_mem) && ctx.pc == 0x08977F1Cu) goto L_08977F1C;
    return;
L_08977F1C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08977F20;
L_08977F20:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08977F2C;
L_08977F2C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08977F4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(428)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08977F80;
      }
      goto L_08977F74;
    }
L_08977F74:
    aot_gpr[31] = (0x08977F7Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 104u, 0x0897461Cu>(ctx, &aot_mem) && ctx.pc == 0x08977F7Cu) goto L_08977F7C;
    return;
L_08977F7C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08977F80;
L_08977F80:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977FC4;
      }
      goto L_08977F88;
    }
L_08977F88:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977FC4;
      }
      goto L_08977F94;
    }
L_08977F94:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(428)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x08977FA8u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08977FA8u) goto L_08977FA8;
    return;
L_08977FA8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(1416), aot_gpr[4]);
    aot_gpr[2] = (0u | 16u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (0u | 0u);
        goto L_08977FBC;
    }
    goto L_08977FBC;
L_08977FBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 6u, 0x08978044u>(ctx, &aot_mem); return;
      }
      goto L_08977FC4;
    }
L_08977FC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1420)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08977FE8;
      }
      goto L_08977FD0;
    }
L_08977FD0:
    aot_gpr[31] = (0x08977FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 175u, 0x08980BC8u>(ctx, &aot_mem) && ctx.pc == 0x08977FD8u) goto L_08977FD8;
    return;
L_08977FD8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1420)));
      if (branch_taken) {
          goto L_08977FF0;
      }
      goto L_08977FE0;
    }
L_08977FE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08977FFC;
      }
      goto L_08977FE8;
    }
L_08977FE8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0372_entry, 372u, 6u, 0x08978044u>(ctx, &aot_mem); return;
      }
      goto L_08977FF0;
    }
L_08977FF0:
    aot_gpr[31] = (0x08977FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 176u, 0x08980BD4u>(ctx, &aot_mem) && ctx.pc == 0x08977FF8u) goto L_08977FF8;
    return;
L_08977FF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(1420)));
    goto L_08977FFC;
L_08977FFC:
    aot_gpr[31] = (0x08978004u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0381_entry, 381u, 17u, 0x089810CCu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0371(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0371_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_371(Runtime &runtime) {
    runtime.register_generated_unit(371u, 0x08977000u, 4096u, &recomp_unit_0371, &recomp_unit_0371_entry);
    runtime.register_function(0x08977000u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977058u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977068u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977078u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977088u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977098u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089770A0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089770B4u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089770BCu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089770D0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089770E4u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977108u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977128u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977134u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x0897713Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977154u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977178u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977184u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x0897718Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089771A0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089771ACu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089771C4u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089771CCu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089771E8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089771F4u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977218u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977224u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977234u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x0897724Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977254u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977270u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x0897727Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089772A0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089772ACu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089772BCu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089772C8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089772D4u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089772E0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089772ECu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089772F8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977304u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x0897730Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977328u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977354u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x0897735Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977370u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977394u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089773A4u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089773B8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089773C0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089773C8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089773D0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089773E8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089773F0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089773F8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089773FCu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977404u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x0897741Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977424u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x0897742Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977430u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977440u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977448u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977460u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977468u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977470u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977474u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977490u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089774B0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089774C0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089774E0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089774ECu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x0897754Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977560u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977568u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977574u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977584u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x0897758Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089775A4u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089775B0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089775C4u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089775D0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089775D8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089775DCu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089775E8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089775F4u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977604u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x0897760Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977610u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977630u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977654u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x0897766Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977678u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x0897769Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089776A8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089776B0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089776BCu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089776C8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089776DCu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089776F8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977704u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977710u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977718u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977720u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977738u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977744u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977754u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977760u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x0897776Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977774u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x0897777Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977794u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089777A0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089777B8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089777CCu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089777D4u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089777E0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089777F4u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089777FCu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977814u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977820u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977828u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977830u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x0897783Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977844u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x0897784Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977864u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x0897786Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977874u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x0897787Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977898u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089778A0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089778B8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089778C0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089778C4u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089778D0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089778FCu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977904u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977914u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977934u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977950u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977964u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977970u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977978u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x0897797Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x0897799Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089779B8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089779C0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089779C4u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089779CCu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089779D8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089779E8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089779F0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x089779F8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977A08u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977A2Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977A40u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977A4Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977A58u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977A7Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977A88u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977A94u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977AA0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977AACu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977ABCu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977AC8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977AD0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977AECu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977AFCu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977B08u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977B20u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977B28u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977B30u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977B34u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977B48u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977B58u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977B60u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977B74u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977B84u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977B90u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977B98u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977BA0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977BA8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977BB0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977BCCu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977BD4u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977BD8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977BE0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977BECu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977C20u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977C2Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977C3Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977C6Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977C94u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977CA0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977CACu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977CB4u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977CBCu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977CC8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977CD8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977D14u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977D1Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977D20u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977D28u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977D34u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977D54u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977D60u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977D68u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977D70u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977D88u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977DA8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977DCCu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977DD4u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977DDCu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977DE0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977DE8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977DF4u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977E00u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977E0Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977E14u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977E28u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977E30u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977E38u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977E4Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977E9Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977EA4u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977EACu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977EB0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977EB8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977EC4u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977ED0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977ED8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977EF8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977F04u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977F1Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977F20u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977F2Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977F4Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977F74u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977F7Cu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977F80u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977F88u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977F94u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977FA8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977FBCu, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977FC4u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977FD0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977FD8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977FE0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977FE8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977FF0u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977FF8u, &recomp_unit_0371, "recomp_unit_0371");
    runtime.register_function(0x08977FFCu, &recomp_unit_0371, "recomp_unit_0371");
}
} // namespace psprecomp
