#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0433[1022] = {
    1, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6,
    0, 0, 0, 7, 0, 0, 8, 9, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 13, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 16, 0,
    17, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 23, 0, 24, 25, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 30, 0, 31, 0,
    32, 0, 33, 0, 0, 0, 0, 34, 35, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40,
    0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 46, 0,
    47, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 51, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0,
    56, 0, 57, 0, 0, 0, 58, 0, 59, 0, 60, 0, 61, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 65, 66, 0,
    0, 0, 0, 0, 0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0,
    75, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 84, 85, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 89, 0, 0, 90, 0, 91, 0,
    0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 95, 0, 0, 0, 96, 0, 97, 98, 99, 0, 100, 101, 0, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 103, 0, 104, 0, 105, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0, 112, 0,
    113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 0, 121, 0, 122, 0, 123, 0, 0, 124, 125, 126, 0, 127, 0, 128, 0,
    0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 134, 0, 0, 0, 135, 0, 0, 136, 137, 138, 0, 139, 0, 140, 0, 0, 141,
    0, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 145, 0, 0, 146, 147, 0, 0, 148, 0, 149, 0, 0, 150, 0, 151, 0, 0, 152, 153, 154, 0,
    155, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 160, 0, 161, 0, 0, 0, 162, 0, 0, 163, 164, 0, 0, 165, 0, 0, 166, 0, 0,
    0, 0, 0, 167, 0, 168, 169, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 174, 175, 0, 0, 0, 0, 0, 176,
    0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187,
    0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 193, 0,
    0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 200, 0,
    0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203,
    0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0,
    0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0,
    0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0,
    226, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 233, 234, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 236, 0, 237, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 241, 242, 0, 243, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0,
    247, 0, 248, 0, 249, 0, 0, 250, 0, 0, 251, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0,
    0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 260, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0,
    0, 263, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 268,
};
void recomp_unit_0433_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089B5000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0433[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089B5000;
    case 2u: goto L_089B501C;
    case 3u: goto L_089B5020;
    case 4u: goto L_089B504C;
    case 5u: goto L_089B5068;
    case 6u: goto L_089B507C;
    case 7u: goto L_089B508C;
    case 8u: goto L_089B5098;
    case 9u: goto L_089B509C;
    case 10u: goto L_089B50A0;
    case 11u: goto L_089B50B0;
    case 12u: goto L_089B50C8;
    case 13u: goto L_089B50CC;
    case 14u: goto L_089B50DC;
    case 15u: goto L_089B50E8;
    case 16u: goto L_089B50F8;
    case 17u: goto L_089B5100;
    case 18u: goto L_089B5108;
    case 19u: goto L_089B5124;
    case 20u: goto L_089B512C;
    case 21u: goto L_089B513C;
    case 22u: goto L_089B5144;
    case 23u: goto L_089B5194;
    case 24u: goto L_089B519C;
    case 25u: goto L_089B51A0;
    case 26u: goto L_089B51A4;
    case 27u: goto L_089B51D0;
    case 28u: goto L_089B51D8;
    case 29u: goto L_089B51E0;
    case 30u: goto L_089B51F0;
    case 31u: goto L_089B51F8;
    case 32u: goto L_089B5200;
    case 33u: goto L_089B5208;
    case 34u: goto L_089B521C;
    case 35u: goto L_089B5220;
    case 36u: goto L_089B522C;
    case 37u: goto L_089B5238;
    case 38u: goto L_089B5254;
    case 39u: goto L_089B5260;
    case 40u: goto L_089B527C;
    case 41u: goto L_089B5284;
    case 42u: goto L_089B52B4;
    case 43u: goto L_089B52B8;
    case 44u: goto L_089B52E0;
    case 45u: goto L_089B52E8;
    case 46u: goto L_089B52F8;
    case 47u: goto L_089B5300;
    case 48u: goto L_089B530C;
    case 49u: goto L_089B531C;
    case 50u: goto L_089B5328;
    case 51u: goto L_089B532C;
    case 52u: goto L_089B5330;
    case 53u: goto L_089B533C;
    case 54u: goto L_089B5360;
    case 55u: goto L_089B5378;
    case 56u: goto L_089B5380;
    case 57u: goto L_089B5388;
    case 58u: goto L_089B5398;
    case 59u: goto L_089B53A0;
    case 60u: goto L_089B53A8;
    case 61u: goto L_089B53B0;
    case 62u: goto L_089B53BC;
    case 63u: goto L_089B53C4;
    case 64u: goto L_089B53F0;
    case 65u: goto L_089B53F4;
    case 66u: goto L_089B53F8;
    case 67u: goto L_089B5414;
    case 68u: goto L_089B541C;
    case 69u: goto L_089B5424;
    case 70u: goto L_089B543C;
    case 71u: goto L_089B5444;
    case 72u: goto L_089B544C;
    case 73u: goto L_089B5458;
    case 74u: goto L_089B5478;
    case 75u: goto L_089B5480;
    case 76u: goto L_089B5488;
    case 77u: goto L_089B54A4;
    case 78u: goto L_089B54AC;
    case 79u: goto L_089B54BC;
    case 80u: goto L_089B54D8;
    case 81u: goto L_089B54E8;
    case 82u: goto L_089B54F8;
    case 83u: goto L_089B5528;
    case 84u: goto L_089B552C;
    case 85u: goto L_089B5530;
    case 86u: goto L_089B5534;
    case 87u: goto L_089B5554;
    case 88u: goto L_089B555C;
    case 89u: goto L_089B5564;
    case 90u: goto L_089B5570;
    case 91u: goto L_089B5578;
    case 92u: goto L_089B5588;
    case 93u: goto L_089B55AC;
    case 94u: goto L_089B55B4;
    case 95u: goto L_089B55B8;
    case 96u: goto L_089B55C8;
    case 97u: goto L_089B55D0;
    case 98u: goto L_089B55D4;
    case 99u: goto L_089B55D8;
    case 100u: goto L_089B55E0;
    case 101u: goto L_089B55E4;
    case 102u: goto L_089B5608;
    case 103u: goto L_089B5614;
    case 104u: goto L_089B561C;
    case 105u: goto L_089B5624;
    case 106u: goto L_089B563C;
    case 107u: goto L_089B5644;
    case 108u: goto L_089B5654;
    case 109u: goto L_089B565C;
    case 110u: goto L_089B5664;
    case 111u: goto L_089B566C;
    case 112u: goto L_089B5678;
    case 113u: goto L_089B5680;
    case 114u: goto L_089B5688;
    case 115u: goto L_089B5690;
    case 116u: goto L_089B5698;
    case 117u: goto L_089B56A0;
    case 118u: goto L_089B56A8;
    case 119u: goto L_089B56B0;
    case 120u: goto L_089B56B8;
    case 121u: goto L_089B56C4;
    case 122u: goto L_089B56CC;
    case 123u: goto L_089B56D4;
    case 124u: goto L_089B56E0;
    case 125u: goto L_089B56E4;
    case 126u: goto L_089B56E8;
    case 127u: goto L_089B56F0;
    case 128u: goto L_089B56F8;
    case 129u: goto L_089B5704;
    case 130u: goto L_089B5710;
    case 131u: goto L_089B571C;
    case 132u: goto L_089B5728;
    case 133u: goto L_089B5734;
    case 134u: goto L_089B573C;
    case 135u: goto L_089B574C;
    case 136u: goto L_089B5758;
    case 137u: goto L_089B575C;
    case 138u: goto L_089B5760;
    case 139u: goto L_089B5768;
    case 140u: goto L_089B5770;
    case 141u: goto L_089B577C;
    case 142u: goto L_089B5788;
    case 143u: goto L_089B5794;
    case 144u: goto L_089B57A4;
    case 145u: goto L_089B57AC;
    case 146u: goto L_089B57B8;
    case 147u: goto L_089B57BC;
    case 148u: goto L_089B57C8;
    case 149u: goto L_089B57D0;
    case 150u: goto L_089B57DC;
    case 151u: goto L_089B57E4;
    case 152u: goto L_089B57F0;
    case 153u: goto L_089B57F4;
    case 154u: goto L_089B57F8;
    case 155u: goto L_089B5800;
    case 156u: goto L_089B5808;
    case 157u: goto L_089B5814;
    case 158u: goto L_089B5820;
    case 159u: goto L_089B582C;
    case 160u: goto L_089B5834;
    case 161u: goto L_089B583C;
    case 162u: goto L_089B584C;
    case 163u: goto L_089B5858;
    case 164u: goto L_089B585C;
    case 165u: goto L_089B5868;
    case 166u: goto L_089B5874;
    case 167u: goto L_089B588C;
    case 168u: goto L_089B5894;
    case 169u: goto L_089B5898;
    case 170u: goto L_089B58A4;
    case 171u: goto L_089B58AC;
    case 172u: goto L_089B58B4;
    case 173u: goto L_089B58DC;
    case 174u: goto L_089B58E0;
    case 175u: goto L_089B58E4;
    case 176u: goto L_089B58FC;
    case 177u: goto L_089B5904;
    case 178u: goto L_089B5910;
    case 179u: goto L_089B591C;
    case 180u: goto L_089B5928;
    case 181u: goto L_089B5934;
    case 182u: goto L_089B5940;
    case 183u: goto L_089B594C;
    case 184u: goto L_089B5958;
    case 185u: goto L_089B5964;
    case 186u: goto L_089B5970;
    case 187u: goto L_089B597C;
    case 188u: goto L_089B5988;
    case 189u: goto L_089B59AC;
    case 190u: goto L_089B59B8;
    case 191u: goto L_089B59E0;
    case 192u: goto L_089B59F0;
    case 193u: goto L_089B59F8;
    case 194u: goto L_089B5A04;
    case 195u: goto L_089B5A18;
    case 196u: goto L_089B5A30;
    case 197u: goto L_089B5A48;
    case 198u: goto L_089B5A5C;
    case 199u: goto L_089B5A70;
    case 200u: goto L_089B5A78;
    case 201u: goto L_089B5A84;
    case 202u: goto L_089B5AD8;
    case 203u: goto L_089B5AFC;
    case 204u: goto L_089B5B18;
    case 205u: goto L_089B5B3C;
    case 206u: goto L_089B5BBC;
    case 207u: goto L_089B5BE0;
    case 208u: goto L_089B5BEC;
    case 209u: goto L_089B5BF8;
    case 210u: goto L_089B5C04;
    case 211u: goto L_089B5C10;
    case 212u: goto L_089B5C1C;
    case 213u: goto L_089B5C38;
    case 214u: goto L_089B5C4C;
    case 215u: goto L_089B5C6C;
    case 216u: goto L_089B5C78;
    case 217u: goto L_089B5C9C;
    case 218u: goto L_089B5CA8;
    case 219u: goto L_089B5CB4;
    case 220u: goto L_089B5CD0;
    case 221u: goto L_089B5CE4;
    case 222u: goto L_089B5D08;
    case 223u: goto L_089B5D28;
    case 224u: goto L_089B5D64;
    case 225u: goto L_089B5D74;
    case 226u: goto L_089B5D80;
    case 227u: goto L_089B5D8C;
    case 228u: goto L_089B5D98;
    case 229u: goto L_089B5DA4;
    case 230u: goto L_089B5DB0;
    case 231u: goto L_089B5DBC;
    case 232u: goto L_089B5DD8;
    case 233u: goto L_089B5DE0;
    case 234u: goto L_089B5DE4;
    case 235u: goto L_089B5DF8;
    case 236u: goto L_089B5E0C;
    case 237u: goto L_089B5E14;
    case 238u: goto L_089B5E1C;
    case 239u: goto L_089B5E28;
    case 240u: goto L_089B5E34;
    case 241u: goto L_089B5E40;
    case 242u: goto L_089B5E44;
    case 243u: goto L_089B5E4C;
    case 244u: goto L_089B5E50;
    case 245u: goto L_089B5E70;
    case 246u: goto L_089B5E78;
    case 247u: goto L_089B5E80;
    case 248u: goto L_089B5E88;
    case 249u: goto L_089B5E90;
    case 250u: goto L_089B5E9C;
    case 251u: goto L_089B5EA8;
    case 252u: goto L_089B5EAC;
    case 253u: goto L_089B5EB4;
    case 254u: goto L_089B5EEC;
    case 255u: goto L_089B5EF8;
    case 256u: goto L_089B5F08;
    case 257u: goto L_089B5F20;
    case 258u: goto L_089B5F34;
    case 259u: goto L_089B5F44;
    case 260u: goto L_089B5F50;
    case 261u: goto L_089B5F54;
    case 262u: goto L_089B5F78;
    case 263u: goto L_089B5F84;
    case 264u: goto L_089B5F90;
    case 265u: goto L_089B5F98;
    case 266u: goto L_089B5FD8;
    case 267u: goto L_089B5FE4;
    case 268u: goto L_089B5FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089B5000:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
      if (branch_taken) {
          goto L_089B504C;
      }
      goto L_089B501C;
    }
L_089B501C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089B5020;
L_089B5020:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B504C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (0u | 65535u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (~(0u | aot_gpr[18]));
    { const bool branch_taken = aot_gpr[18] == aot_gpr[4];
    aot_gpr[2] = (aot_gpr[3] >> (aot_gpr[2] & 31u));
      if (branch_taken) {
          goto L_089B501C;
      }
      goto L_089B5068;
    }
L_089B5068:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (~(0u | aot_gpr[2]));
    aot_gpr[2] = (aot_gpr[3] & aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089B5020;
      }
      goto L_089B507C;
    }
L_089B507C:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B5124;
      }
      goto L_089B508C;
    }
L_089B508C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[20] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[20]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089B509C;
      }
      goto L_089B5098;
    }
L_089B5098:
    rt.unsupported(0x089B5098u, 0x000001CDu, "special? not lowered yet"); return;
L_089B509C:
    aot_gpr[22] = (ctx.lo);
    goto L_089B50A0;
L_089B50A0:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[21] = (0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[20]) > 0;
    aot_gpr[4] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089B50CC;
      }
      goto L_089B50B0;
    }
L_089B50B0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] << (aot_gpr[18] & 31u));
    aot_gpr[2] = (aot_gpr[3] | aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (0u + 0u);
    goto L_089B5020;
L_089B50C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089B50CC;
L_089B50CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B50DCu);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B50DCu) goto L_089B50DC;
    return;
L_089B50DC:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[23] + 0u);
      if (branch_taken) {
          goto L_089B512C;
      }
      goto L_089B50E8;
    }
L_089B50E8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B50F8u);
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[22]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B50F8u) goto L_089B50F8;
    return;
L_089B50F8:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
        goto L_089B5020;
    }
    goto L_089B5100;
L_089B5100:
    if (aot_gpr[20] != aot_gpr[21]) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089B50C8;
    }
    goto L_089B5108;
L_089B5108:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] << (aot_gpr[18] & 31u));
    aot_gpr[2] = (aot_gpr[3] | aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[2] = (0u + 0u);
    goto L_089B5020;
L_089B5124:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_089B50A0;
L_089B512C:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-14720)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B513Cu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B513Cu) goto L_089B513C;
    return;
L_089B513C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089B5020;
L_089B5144:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    aot_gpr[2] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[2] + static_cast<std::uint32_t>(-15188));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[23]);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B5194u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5194u) goto L_089B5194;
    return;
L_089B5194:
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[19] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089B51D0;
      }
      goto L_089B519C;
    }
L_089B519C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089B51A0;
L_089B51A0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_089B51A4;
L_089B51A4:
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B51D0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089B51A0;
      }
      goto L_089B51D8;
    }
L_089B51D8:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089B51A4;
      }
      goto L_089B51E0;
    }
L_089B51E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B51F0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B51F0u) goto L_089B51F0;
    return;
L_089B51F0:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089B51A0;
      }
      goto L_089B51F8;
    }
L_089B51F8:
    if (aot_gpr[19] != 0u) {
    aot_gpr[2] = (2215u << 16u);
        goto L_089B5208;
    }
    goto L_089B5200;
L_089B5200:
    aot_gpr[2] = (0u + 0u);
    goto L_089B51A0;
L_089B5208:
    aot_gpr[23] = (aot_gpr[2] + static_cast<std::uint32_t>(-15188));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (0u + 0u);
    aot_gpr[16] = (0u + 0u);
    goto L_089B522C;
L_089B521C:
    aot_gpr[2] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    goto L_089B5220;
L_089B5220:
    aot_gpr[22] = (aot_gpr[2] & 65535u);
    { const bool branch_taken = aot_gpr[19] == aot_gpr[22];
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B5200;
      }
      goto L_089B522C;
    }
L_089B522C:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    jump_target = aot_gpr[30];
    aot_gpr[31] = (0x089B5238u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5238u) goto L_089B5238;
    return;
L_089B5238:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[3] << (aot_gpr[2] & 31u));
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[21]);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[20] + 0u);
      if (branch_taken) {
          goto L_089B521C;
      }
      goto L_089B5254;
    }
L_089B5254:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B5260u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5260u) goto L_089B5260;
    return;
L_089B5260:
    aot_gpr[4] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[31] = (0x089B527Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0432_entry, 432u, 289u, 0x089B4FE8u>(ctx, &aot_mem) && ctx.pc == 0x089B527Cu) goto L_089B527C;
    return;
L_089B527C:
    aot_gpr[2] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    goto L_089B5220;
L_089B5284:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
      if (branch_taken) {
          goto L_089B52E0;
      }
      goto L_089B52B4;
    }
L_089B52B4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089B52B8;
L_089B52B8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
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
L_089B52E0:
    aot_gpr[31] = (0x089B52E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0432_entry, 432u, 227u, 0x089B4BD8u>(ctx, &aot_mem) && ctx.pc == 0x089B52E8u) goto L_089B52E8;
    return;
L_089B52E8:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u | 65535u);
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089B5300;
    }
    goto L_089B52F8;
L_089B52F8:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-12));
    goto L_089B52B8;
L_089B5300:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-12));
      if (branch_taken) {
          goto L_089B52B8;
      }
      goto L_089B530C;
    }
L_089B530C:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B53A8;
      }
      goto L_089B531C;
    }
L_089B531C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[18] != 0u;
    { const std::uint32_t dividend = aot_gpr[2]; const std::uint32_t divisor = aot_gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089B532C;
      }
      goto L_089B5328;
    }
L_089B5328:
    rt.unsupported(0x089B5328u, 0x000001CDu, "special? not lowered yet"); return;
L_089B532C:
    aot_gpr[21] = (ctx.lo);
    goto L_089B5330;
L_089B5330:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) > 0;
    aot_gpr[20] = (0u + 0u);
      if (branch_taken) {
          goto L_089B5388;
      }
      goto L_089B533C;
    }
L_089B533C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] << (aot_gpr[4] & 31u));
    aot_gpr[2] = (~(0u | aot_gpr[2]));
    aot_gpr[3] = (aot_gpr[3] & aot_gpr[2]);
    aot_gpr[2] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    goto L_089B52B8;
L_089B5360:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[19] + aot_gpr[21]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B5378u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5378u) goto L_089B5378;
    return;
L_089B5378:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089B53B0;
      }
      goto L_089B5380;
    }
L_089B5380:
    { const bool branch_taken = aot_gpr[18] == aot_gpr[20];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B533C;
      }
      goto L_089B5388;
    }
L_089B5388:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[19] + 0u);
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B5398u);
    aot_gpr[4] = (aot_gpr[22] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5398u) goto L_089B5398;
    return;
L_089B5398:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B5360;
      }
      goto L_089B53A0;
    }
L_089B53A0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089B52B8;
L_089B53A8:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089B5330;
L_089B53B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-14720)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B53BCu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B53BCu) goto L_089B53BC;
    return;
L_089B53BC:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089B52B8;
L_089B53C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
      if (branch_taken) {
          goto L_089B5414;
      }
      goto L_089B53F0;
    }
L_089B53F0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089B53F4;
L_089B53F4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_089B53F8;
L_089B53F8:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5414:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089B53F4;
      }
      goto L_089B541C;
    }
L_089B541C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_089B53F8;
      }
      goto L_089B5424;
    }
L_089B5424:
    aot_gpr[20] = (2215u << 16u);
    aot_gpr[3] = (aot_gpr[20] + static_cast<std::uint32_t>(-15188));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(52)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B543Cu);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B543Cu) goto L_089B543C;
    return;
L_089B543C:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089B53F4;
      }
      goto L_089B5444;
    }
L_089B5444:
    // nop
    goto L_089B5480;
L_089B544C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B5458u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5458u) goto L_089B5458;
    return;
L_089B5458:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[6] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
      if (branch_taken) {
          goto L_089B54AC;
      }
      goto L_089B5478;
    }
L_089B5478:
    aot_gpr[31] = (0x089B5480u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    goto L_089B5284;
L_089B5480:
    aot_gpr[31] = (0x089B5488u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0432_entry, 432u, 240u, 0x089B4C60u>(ctx, &aot_mem) && ctx.pc == 0x089B5488u) goto L_089B5488;
    return;
L_089B5488:
    aot_gpr[16] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u | 65535u);
    aot_gpr[3] = (aot_gpr[20] + static_cast<std::uint32_t>(-15188));
    aot_gpr[4] = (aot_gpr[18] + 0u);
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    aot_gpr[6] = (aot_gpr[19] + 0u);
      if (branch_taken) {
          goto L_089B544C;
      }
      goto L_089B54A4;
    }
L_089B54A4:
    aot_gpr[2] = (0u + 0u);
    goto L_089B53F4;
L_089B54AC:
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-14708)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B54BCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B54BCu) goto L_089B54BC;
    return;
L_089B54BC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (0x089B54D8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0432_entry, 432u, 249u, 0x089B4CE8u>(ctx, &aot_mem) && ctx.pc == 0x089B54D8u) goto L_089B54D8;
    return;
L_089B54D8:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[3] << (aot_gpr[16] & 31u));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (~(0u | aot_gpr[3]));
      if (branch_taken) {
          goto L_089B53F0;
      }
      goto L_089B54E8;
    }
L_089B54E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    goto L_089B5480;
L_089B54F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
      if (branch_taken) {
          goto L_089B5554;
      }
      goto L_089B5528;
    }
L_089B5528:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089B552C;
L_089B552C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_089B5530;
L_089B5530:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089B5534;
L_089B5534:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[5] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5554:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089B552C;
      }
      goto L_089B555C;
    }
L_089B555C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_089B5530;
      }
      goto L_089B5564;
    }
L_089B5564:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089B5534;
      }
      goto L_089B5570;
    }
L_089B5570:
    aot_gpr[31] = (0x089B5578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0432_entry, 432u, 227u, 0x089B4BD8u>(ctx, &aot_mem) && ctx.pc == 0x089B5578u) goto L_089B5578;
    return;
L_089B5578:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (0u | 65535u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[2];
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-12));
      if (branch_taken) {
          goto L_089B552C;
      }
      goto L_089B5588;
    }
L_089B5588:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[4] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(11));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089B5608;
      }
      goto L_089B55AC;
    }
L_089B55AC:
    if (aot_gpr[16] != aot_gpr[3]) {
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-21));
        goto L_089B552C;
    }
    goto L_089B55B4;
L_089B55B4:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_089B55B8;
L_089B55B8:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[20] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089B55D8;
      }
      goto L_089B55C8;
    }
L_089B55C8:
    { const bool branch_taken = aot_gpr[18] != 0u;
    { const std::uint32_t dividend = aot_gpr[3]; const std::uint32_t divisor = aot_gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
      if (branch_taken) {
          goto L_089B55D4;
      }
      goto L_089B55D0;
    }
L_089B55D0:
    rt.unsupported(0x089B55D0u, 0x000001CDu, "special? not lowered yet"); return;
L_089B55D4:
    aot_gpr[20] = (ctx.lo);
    goto L_089B55D8;
L_089B55D8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) > 0;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089B561C;
      }
      goto L_089B55E0;
    }
L_089B55E0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089B55E4;
L_089B55E4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] << (aot_gpr[4] & 31u));
    aot_gpr[2] = (~(0u | aot_gpr[2]));
    aot_gpr[3] = (aot_gpr[3] & aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), aot_gpr[3]);
    goto L_089B552C;
L_089B5608:
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[3] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
        goto L_089B55B8;
    }
    goto L_089B5614;
L_089B5614:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089B552C;
L_089B561C:
    aot_gpr[19] = (0u + 0u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089B5624;
L_089B5624:
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B563Cu);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[20]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B563Cu) goto L_089B563C;
    return;
L_089B563C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B5528;
      }
      goto L_089B5644;
    }
L_089B5644:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B5654u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5654u) goto L_089B5654;
    return;
L_089B5654:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (2215u << 16u);
      if (branch_taken) {
          goto L_089B566C;
      }
      goto L_089B565C;
    }
L_089B565C:
    { const bool branch_taken = aot_gpr[18] != aot_gpr[19];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B5624;
      }
      goto L_089B5664;
    }
L_089B5664:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089B55E4;
L_089B566C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(-14720)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089B5678u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B5678u) goto L_089B5678;
    return;
L_089B5678:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089B552C;
L_089B5680:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B5690;
      }
      goto L_089B5688;
    }
L_089B5688:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_089B5690;
L_089B5690:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5698:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B56A8;
      }
      goto L_089B56A0;
    }
L_089B56A0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    goto L_089B56A8;
L_089B56A8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B56B0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B56CC;
      }
      goto L_089B56B8;
    }
L_089B56B8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B56CC;
      }
      goto L_089B56C4;
    }
L_089B56C4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B56CC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B56D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
      if (branch_taken) {
          goto L_089B56F0;
      }
      goto L_089B56E0;
    }
L_089B56E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089B56E4;
L_089B56E4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089B56E8;
L_089B56E8:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B56F0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B56E4;
      }
      goto L_089B56F8;
    }
L_089B56F8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089B56E8;
      }
      goto L_089B5704;
    }
L_089B5704:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089B56E8;
      }
      goto L_089B5710;
    }
L_089B5710:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B56E8;
      }
      goto L_089B571C;
    }
L_089B571C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B56E8;
      }
      goto L_089B5728;
    }
L_089B5728:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089B56E4;
      }
      goto L_089B5734;
    }
L_089B5734:
    aot_gpr[31] = (0x089B573Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089B573Cu) goto L_089B573C;
    return;
L_089B573C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B574C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
      if (branch_taken) {
          goto L_089B5768;
      }
      goto L_089B5758;
    }
L_089B5758:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089B575C;
L_089B575C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089B5760;
L_089B5760:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5768:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B575C;
      }
      goto L_089B5770;
    }
L_089B5770:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
        goto L_089B5760;
    }
    goto L_089B577C;
L_089B577C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[7] == 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
        goto L_089B5760;
    }
    goto L_089B5788;
L_089B5788:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
        goto L_089B5760;
    }
    goto L_089B5794;
L_089B5794:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089B57C8;
      }
      goto L_089B57A4;
    }
L_089B57A4:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089B5760;
      }
      goto L_089B57AC;
    }
L_089B57AC:
    aot_gpr[4] = (aot_gpr[5] + 0u);
    aot_gpr[31] = (0x089B57B8u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089B57B8u) goto L_089B57B8;
    return;
L_089B57B8:
    aot_gpr[2] = (0u + 0u);
    goto L_089B57BC;
L_089B57BC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B57C8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B575C;
      }
      goto L_089B57D0;
    }
L_089B57D0:
    aot_gpr[4] = (aot_gpr[5] + 0u);
    aot_gpr[31] = (0x089B57DCu);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089B57DCu) goto L_089B57DC;
    return;
L_089B57DC:
    aot_gpr[2] = (0u + 0u);
    goto L_089B57BC;
L_089B57E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
      if (branch_taken) {
          goto L_089B5800;
      }
      goto L_089B57F0;
    }
L_089B57F0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089B57F4;
L_089B57F4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    goto L_089B57F8;
L_089B57F8:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5800:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B57F4;
      }
      goto L_089B5808;
    }
L_089B5808:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
        goto L_089B57F8;
    }
    goto L_089B5814;
L_089B5814:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
        goto L_089B57F8;
    }
    goto L_089B5820;
L_089B5820:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
        goto L_089B57F8;
    }
    goto L_089B582C;
L_089B582C:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[6];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
      if (branch_taken) {
          goto L_089B57F8;
      }
      goto L_089B5834;
    }
L_089B5834:
    aot_gpr[31] = (0x089B583Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x089B583Cu) goto L_089B583C;
    return;
L_089B583C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B584C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
      if (branch_taken) {
          goto L_089B5868;
      }
      goto L_089B5858;
    }
L_089B5858:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089B585C;
L_089B585C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-21));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5868:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B585C;
      }
      goto L_089B5874;
    }
L_089B5874:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(24)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_089B58A4;
      }
      goto L_089B588C;
    }
L_089B588C:
    aot_gpr[31] = (0x089B5894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0427_entry, 427u, 177u, 0x089AFC38u>(ctx, &aot_mem) && ctx.pc == 0x089B5894u) goto L_089B5894;
    return;
L_089B5894:
    aot_gpr[2] = (0u + 0u);
    goto L_089B5898;
L_089B5898:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B58A4:
    aot_gpr[31] = (0x089B58ACu);
    aot_gpr[4] = (aot_gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0427_entry, 427u, 177u, 0x089AFC38u>(ctx, &aot_mem) && ctx.pc == 0x089B58ACu) goto L_089B58AC;
    return;
L_089B58AC:
    aot_gpr[2] = (0u + 0u);
    goto L_089B5898;
L_089B58B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[6] = ((aot_gpr[6] >> 2u) & 0x0000FFFFu);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
      if (branch_taken) {
          goto L_089B58FC;
      }
      goto L_089B58DC;
    }
L_089B58DC:
    aot_gpr[2] = (0u + 0u);
    goto L_089B58E0;
L_089B58E0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_089B58E4;
L_089B58E4:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B58FC:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B58E0;
      }
      goto L_089B5904;
    }
L_089B5904:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089B58E4;
      }
      goto L_089B5910;
    }
L_089B5910:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B58E4;
      }
      goto L_089B591C;
    }
L_089B591C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B58E4;
      }
      goto L_089B5928;
    }
L_089B5928:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B58E4;
      }
      goto L_089B5934;
    }
L_089B5934:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (0u + 0u);
      if (branch_taken) {
          goto L_089B58DC;
      }
      goto L_089B5940;
    }
L_089B5940:
    aot_gpr[19] = (0u + 0u);
    aot_gpr[5] = (0u + 0u);
    goto L_089B5988;
L_089B594C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B58E0;
      }
      goto L_089B5958;
    }
L_089B5958:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[18];
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B58E0;
      }
      goto L_089B5964;
    }
L_089B5964:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B58E0;
      }
      goto L_089B5970;
    }
L_089B5970:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B58E0;
      }
      goto L_089B597C;
    }
L_089B597C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B58E0;
      }
      goto L_089B5988;
    }
L_089B5988:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[4] & 65535u);
    aot_gpr[3] = (aot_gpr[3] << (aot_gpr[5] & 31u));
    aot_gpr[2] = (aot_gpr[18] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[18];
    aot_gpr[19] = (aot_gpr[19] | aot_gpr[3]);
      if (branch_taken) {
          goto L_089B594C;
      }
      goto L_089B59AC;
    }
L_089B59AC:
    aot_gpr[4] = (aot_gpr[29] + 0u);
    aot_gpr[31] = (0x089B59B8u);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 208u, 0x0898FD48u>(ctx, &aot_mem) && ctx.pc == 0x089B59B8u) goto L_089B59B8;
    return;
L_089B59B8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[3] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[18]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089B58E0;
L_089B59E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_089B59F8;
      }
      goto L_089B59F0;
    }
L_089B59F0:
    aot_gpr[31] = (0x089B59F8u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089B59F8u) goto L_089B59F8;
    return;
L_089B59F8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5A04:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (aot_gpr[2] + static_cast<std::uint32_t>(-14752));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 65535u);
      if (branch_taken) {
          goto L_089B5A5C;
      }
      goto L_089B5A18;
    }
L_089B5A18:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[10] = (aot_gpr[7] + static_cast<std::uint32_t>(-14752));
    aot_gpr[2] = (aot_gpr[5] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_089B5A48;
      }
      goto L_089B5A30;
    }
L_089B5A30:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[2] = (aot_gpr[3] + aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[3] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5A48:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-14752)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = aot_gpr[31];
    aot_gpr[3] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5A5C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-14752)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = aot_gpr[31];
    aot_gpr[3] = (aot_gpr[6] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5A70:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089B5A84;
      }
      goto L_089B5A78;
    }
L_089B5A78:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    goto L_089B5A84;
L_089B5A84:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5AD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B5AFCu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B5AFCu) goto L_089B5AFC;
    return;
L_089B5AFC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089B5B18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B5B3Cu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B5B3Cu) goto L_089B5B3C;
    return;
L_089B5B3C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem); return;
L_089B5BBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B5BE0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B5BE0u) goto L_089B5BE0;
    return;
L_089B5BE0:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B5BECu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 65u, 0x089913B0u>(ctx, &aot_mem) && ctx.pc == 0x089B5BECu) goto L_089B5BEC;
    return;
L_089B5BEC:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B5BF8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B5BF8u) goto L_089B5BF8;
    return;
L_089B5BF8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B5C04u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B5C04u) goto L_089B5C04;
    return;
L_089B5C04:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B5C10u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B5C10u) goto L_089B5C10;
    return;
L_089B5C10:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B5C1Cu);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B5C1Cu) goto L_089B5C1C;
    return;
L_089B5C1C:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(156));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x089B5C38u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0400_entry, 400u, 143u, 0x0899499Cu>(ctx, &aot_mem) && ctx.pc == 0x089B5C38u) goto L_089B5C38;
    return;
L_089B5C38:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5C4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(196));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[31] = (0x089B5C6Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[3]);
    goto L_089B5BBC;
L_089B5C6C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5C78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B5C9Cu);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B5C9Cu) goto L_089B5C9C;
    return;
L_089B5C9C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B5CA8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B5CA8u) goto L_089B5CA8;
    return;
L_089B5CA8:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B5CB4u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B5CB4u) goto L_089B5CB4;
    return;
L_089B5CB4:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(196));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[31] = (0x089B5CD0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_089B5BBC;
L_089B5CD0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B5CE4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x089B5D08u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B5D08u) goto L_089B5D08;
    return;
L_089B5D08:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem); return;
L_089B5D28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(21));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B5D64u);
    aot_gpr[20] = (aot_gpr[17] + aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B5D64u) goto L_089B5D64;
    return;
L_089B5D64:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(17));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089B5D74u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B5D74u) goto L_089B5D74;
    return;
L_089B5D74:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089B5D80u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B5D80u) goto L_089B5D80;
    return;
L_089B5D80:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089B5D8Cu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B5D8Cu) goto L_089B5D8C;
    return;
L_089B5D8C:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089B5D98u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B5D98u) goto L_089B5D98;
    return;
L_089B5D98:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089B5DA4u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B5DA4u) goto L_089B5DA4;
    return;
L_089B5DA4:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089B5DB0u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B5DB0u) goto L_089B5DB0;
    return;
L_089B5DB0:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089B5DBCu);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B5DBCu) goto L_089B5DBC;
    return;
L_089B5DBC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[3] = (aot_gpr[17] + static_cast<std::uint32_t>(72));
    aot_gpr[2] = (aot_gpr[5] ^ 2u);
    if (aot_gpr[2] == 0u) aot_gpr[18] = (aot_gpr[3]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089B5E80;
      }
      goto L_089B5DD8;
    }
L_089B5DD8:
    if (aot_gpr[5] == aot_gpr[2]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(64), aot_gpr[18]);
        goto L_089B5DE0;
    }
    goto L_089B5DE0;
L_089B5DE0:
    aot_gpr[16] = (0u + 0u);
    goto L_089B5DE4;
L_089B5DE4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089B5DF8u);
    aot_gpr[5] = (aot_gpr[2] + aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B5DF8u) goto L_089B5DF8;
    return;
L_089B5DF8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[3] = (aot_gpr[16] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B5DE4;
      }
      goto L_089B5E0C;
    }
L_089B5E0C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    goto L_089B5E14;
L_089B5E14:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089B5E70;
      }
      goto L_089B5E1C;
    }
L_089B5E1C:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    if (aot_gpr[5] == aot_gpr[16]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), aot_gpr[18]);
        goto L_089B5E90;
    }
    goto L_089B5E28;
L_089B5E28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    aot_gpr[31] = (0x089B5E34u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B5E34u) goto L_089B5E34;
    return;
L_089B5E34:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    if (aot_gpr[3] == aot_gpr[16]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
        goto L_089B5EAC;
    }
    goto L_089B5E40;
L_089B5E40:
    aot_gpr[2] = (aot_gpr[20] < aot_gpr[18] ? 1u : 0u);
    goto L_089B5E44;
L_089B5E44:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B5E50;
      }
      goto L_089B5E4C;
    }
L_089B5E4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_089B5E50;
L_089B5E50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
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
L_089B5E70:
    if (aot_gpr[5] == aot_gpr[2]) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), 0u);
        goto L_089B5E40;
    }
    goto L_089B5E78;
L_089B5E78:
    aot_gpr[2] = (aot_gpr[20] < aot_gpr[18] ? 1u : 0u);
    goto L_089B5E44;
L_089B5E80:
    if (aot_gpr[5] != aot_gpr[2]) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
        goto L_089B5E14;
    }
    goto L_089B5E88;
L_089B5E88:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(64), 0u);
    goto L_089B5E0C;
L_089B5E90:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089B5E9Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 158u, 0x08990C94u>(ctx, &aot_mem) && ctx.pc == 0x089B5E9Cu) goto L_089B5E9C;
    return;
L_089B5E9C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[16];
    aot_gpr[2] = (aot_gpr[20] < aot_gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_089B5E44;
      }
      goto L_089B5EA8;
    }
L_089B5EA8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    goto L_089B5EAC;
L_089B5EAC:
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[2]);
    goto L_089B5E40;
L_089B5EB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089B5EECu);
    aot_gpr[21] = (aot_gpr[17] + aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B5EECu) goto L_089B5EEC;
    return;
L_089B5EEC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) <= 0;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089B5F84;
      }
      goto L_089B5EF8;
    }
L_089B5EF8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[20] = (0u + 0u);
      if (branch_taken) {
          goto L_089B5F78;
      }
      goto L_089B5F08;
    }
L_089B5F08:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[20] << 3u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    aot_gpr[31] = (0x089B5F20u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B5F20u) goto L_089B5F20;
    return;
L_089B5F20:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x089B5F34u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B5F34u) goto L_089B5F34;
    return;
L_089B5F34:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[3]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089B5F08;
      }
      goto L_089B5F44;
    }
L_089B5F44:
    aot_gpr[2] = (aot_gpr[21] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089B5F54;
      }
      goto L_089B5F50;
    }
L_089B5F50:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    goto L_089B5F54;
L_089B5F54:
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
L_089B5F78:
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    goto L_089B5F08;
L_089B5F84:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[3] != aot_gpr[2];
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089B5F44;
      }
      goto L_089B5F90;
    }
L_089B5F90:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), 0u);
    goto L_089B5F44;
L_089B5F98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089B5FD8u);
    aot_gpr[23] = (aot_gpr[16] + aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0397_entry, 397u, 4u, 0x08991020u>(ctx, &aot_mem) && ctx.pc == 0x089B5FD8u) goto L_089B5FD8;
    return;
L_089B5FD8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) <= 0;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0434_entry, 434u, 21u, 0x089B6144u>(ctx, &aot_mem); return;
      }
      goto L_089B5FE4;
    }
L_089B5FE4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[6] = (0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0434_entry, 434u, 20u, 0x089B6134u>(ctx, &aot_mem); return;
      }
      goto L_089B5FF4;
    }
L_089B5FF4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (aot_gpr[2] << 2u);
    ctx.pc = 0x089B6000u; return;
}

void recomp_unit_0433(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0433_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_433(Runtime &runtime) {
    runtime.register_generated_unit(433u, 0x089B5000u, 4096u, &recomp_unit_0433, &recomp_unit_0433_entry);
    runtime.register_function(0x089B5000u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B501Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5020u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B504Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5068u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B507Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B508Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5098u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B509Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B50A0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B50B0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B50C8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B50CCu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B50DCu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B50E8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B50F8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5100u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5108u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5124u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B512Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B513Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5144u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5194u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B519Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B51A0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B51A4u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B51D0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B51D8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B51E0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B51F0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B51F8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5200u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5208u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B521Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5220u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B522Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5238u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5254u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5260u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B527Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5284u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B52B4u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B52B8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B52E0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B52E8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B52F8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5300u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B530Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B531Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5328u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B532Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5330u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B533Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5360u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5378u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5380u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5388u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5398u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B53A0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B53A8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B53B0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B53BCu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B53C4u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B53F0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B53F4u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B53F8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5414u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B541Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5424u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B543Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5444u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B544Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5458u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5478u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5480u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5488u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B54A4u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B54ACu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B54BCu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B54D8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B54E8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B54F8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5528u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B552Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5530u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5534u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5554u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B555Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5564u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5570u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5578u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5588u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B55ACu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B55B4u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B55B8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B55C8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B55D0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B55D4u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B55D8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B55E0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B55E4u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5608u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5614u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B561Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5624u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B563Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5644u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5654u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B565Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5664u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B566Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5678u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5680u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5688u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5690u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5698u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B56A0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B56A8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B56B0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B56B8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B56C4u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B56CCu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B56D4u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B56E0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B56E4u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B56E8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B56F0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B56F8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5704u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5710u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B571Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5728u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5734u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B573Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B574Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5758u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B575Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5760u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5768u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5770u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B577Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5788u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5794u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B57A4u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B57ACu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B57B8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B57BCu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B57C8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B57D0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B57DCu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B57E4u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B57F0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B57F4u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B57F8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5800u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5808u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5814u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5820u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B582Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5834u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B583Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B584Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5858u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B585Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5868u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5874u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B588Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5894u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5898u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B58A4u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B58ACu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B58B4u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B58DCu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B58E0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B58E4u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B58FCu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5904u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5910u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B591Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5928u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5934u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5940u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B594Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5958u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5964u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5970u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B597Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5988u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B59ACu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B59B8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B59E0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B59F0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B59F8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5A04u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5A18u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5A30u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5A48u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5A5Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5A70u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5A78u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5A84u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5AD8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5AFCu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5B18u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5B3Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5BBCu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5BE0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5BECu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5BF8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5C04u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5C10u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5C1Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5C38u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5C4Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5C6Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5C78u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5C9Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5CA8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5CB4u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5CD0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5CE4u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5D08u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5D28u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5D64u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5D74u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5D80u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5D8Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5D98u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5DA4u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5DB0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5DBCu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5DD8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5DE0u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5DE4u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5DF8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5E0Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5E14u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5E1Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5E28u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5E34u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5E40u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5E44u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5E4Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5E50u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5E70u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5E78u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5E80u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5E88u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5E90u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5E9Cu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5EA8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5EACu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5EB4u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5EECu, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5EF8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5F08u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5F20u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5F34u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5F44u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5F50u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5F54u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5F78u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5F84u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5F90u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5F98u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5FD8u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5FE4u, &recomp_unit_0433, "recomp_unit_0433");
    runtime.register_function(0x089B5FF4u, &recomp_unit_0433, "recomp_unit_0433");
}
} // namespace psprecomp
