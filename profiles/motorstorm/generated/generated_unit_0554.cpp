#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0554[1022] = {
    1, 0, 0, 0, 0, 2, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0,
    0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 19,
    0, 20, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0,
    0, 0, 25, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 30, 31, 0, 0, 32, 0, 33, 0, 0,
    34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 40, 0, 41, 0, 42, 0, 0, 0, 43, 0,
    44, 0, 45, 46, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 54, 0, 55, 0, 56,
    0, 57, 0, 58, 0, 59, 0, 0, 0, 0, 60, 61, 0, 62, 0, 63, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 68, 0, 69,
    0, 70, 0, 71, 0, 72, 0, 73, 74, 0, 75, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 0, 0, 81, 0, 0, 0,
    82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 87, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94,
    0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 100, 0, 0, 101, 0, 0, 102, 0, 103, 0, 0, 104, 0, 105, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0,
    0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 112, 0, 0, 113, 0, 114, 0, 115, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0,
    118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 0, 0, 0, 123, 124, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 128, 0, 129, 0, 130, 0, 0, 0, 0, 0,
    131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 134, 0, 0, 135, 0, 136, 0, 0, 137,
    0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 143, 0, 144, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 148, 0, 0, 149, 150, 0,
    0, 0, 151, 0, 0, 152, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 157, 0, 158, 0, 159, 0, 160, 0, 161,
    0, 0, 162, 0, 163, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168, 169, 0, 170, 0, 0, 0, 171,
    0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0,
    182, 0, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 0, 188, 0, 189, 0, 190, 0, 191, 0, 0, 192, 0, 193, 0, 0, 0, 0, 194, 0,
    195, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0,
    0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 205, 0, 0, 0, 206, 0, 207, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 217, 0, 218, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0,
    224, 0, 0, 0, 225, 0, 226, 0, 0, 0, 227, 0, 228, 0, 229, 0, 0, 230, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 233, 0, 234,
    0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 239, 0, 0, 0, 240, 0, 0, 241, 242, 0, 0, 243, 0, 244, 0, 0,
    0, 0, 0, 0, 245, 0, 246, 0, 247, 0, 248, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251,
};
void recomp_unit_0554_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A2E000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0554[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A2E000;
    case 2u: goto L_08A2E014;
    case 3u: goto L_08A2E018;
    case 4u: goto L_08A2E028;
    case 5u: goto L_08A2E040;
    case 6u: goto L_08A2E078;
    case 7u: goto L_08A2E0A0;
    case 8u: goto L_08A2E0A8;
    case 9u: goto L_08A2E0B0;
    case 10u: goto L_08A2E0B8;
    case 11u: goto L_08A2E0DC;
    case 12u: goto L_08A2E0E4;
    case 13u: goto L_08A2E0F0;
    case 14u: goto L_08A2E108;
    case 15u: goto L_08A2E138;
    case 16u: goto L_08A2E14C;
    case 17u: goto L_08A2E160;
    case 18u: goto L_08A2E16C;
    case 19u: goto L_08A2E17C;
    case 20u: goto L_08A2E184;
    case 21u: goto L_08A2E18C;
    case 22u: goto L_08A2E19C;
    case 23u: goto L_08A2E1C8;
    case 24u: goto L_08A2E1EC;
    case 25u: goto L_08A2E208;
    case 26u: goto L_08A2E210;
    case 27u: goto L_08A2E21C;
    case 28u: goto L_08A2E244;
    case 29u: goto L_08A2E250;
    case 30u: goto L_08A2E25C;
    case 31u: goto L_08A2E260;
    case 32u: goto L_08A2E26C;
    case 33u: goto L_08A2E274;
    case 34u: goto L_08A2E280;
    case 35u: goto L_08A2E28C;
    case 36u: goto L_08A2E2AC;
    case 37u: goto L_08A2E2B4;
    case 38u: goto L_08A2E2C4;
    case 39u: goto L_08A2E2D0;
    case 40u: goto L_08A2E2D8;
    case 41u: goto L_08A2E2E0;
    case 42u: goto L_08A2E2E8;
    case 43u: goto L_08A2E2F8;
    case 44u: goto L_08A2E300;
    case 45u: goto L_08A2E308;
    case 46u: goto L_08A2E30C;
    case 47u: goto L_08A2E314;
    case 48u: goto L_08A2E330;
    case 49u: goto L_08A2E3A0;
    case 50u: goto L_08A2E3C0;
    case 51u: goto L_08A2E3C8;
    case 52u: goto L_08A2E3D0;
    case 53u: goto L_08A2E3DC;
    case 54u: goto L_08A2E3EC;
    case 55u: goto L_08A2E3F4;
    case 56u: goto L_08A2E3FC;
    case 57u: goto L_08A2E404;
    case 58u: goto L_08A2E40C;
    case 59u: goto L_08A2E414;
    case 60u: goto L_08A2E428;
    case 61u: goto L_08A2E42C;
    case 62u: goto L_08A2E434;
    case 63u: goto L_08A2E43C;
    case 64u: goto L_08A2E444;
    case 65u: goto L_08A2E450;
    case 66u: goto L_08A2E460;
    case 67u: goto L_08A2E46C;
    case 68u: goto L_08A2E474;
    case 69u: goto L_08A2E47C;
    case 70u: goto L_08A2E484;
    case 71u: goto L_08A2E48C;
    case 72u: goto L_08A2E494;
    case 73u: goto L_08A2E49C;
    case 74u: goto L_08A2E4A0;
    case 75u: goto L_08A2E4A8;
    case 76u: goto L_08A2E4C0;
    case 77u: goto L_08A2E4C8;
    case 78u: goto L_08A2E4D0;
    case 79u: goto L_08A2E4D8;
    case 80u: goto L_08A2E4E0;
    case 81u: goto L_08A2E4F0;
    case 82u: goto L_08A2E500;
    case 83u: goto L_08A2E534;
    case 84u: goto L_08A2E54C;
    case 85u: goto L_08A2E558;
    case 86u: goto L_08A2E56C;
    case 87u: goto L_08A2E578;
    case 88u: goto L_08A2E584;
    case 89u: goto L_08A2E5A0;
    case 90u: goto L_08A2E5B0;
    case 91u: goto L_08A2E5BC;
    case 92u: goto L_08A2E5C8;
    case 93u: goto L_08A2E5D4;
    case 94u: goto L_08A2E5FC;
    case 95u: goto L_08A2E610;
    case 96u: goto L_08A2E664;
    case 97u: goto L_08A2E6B0;
    case 98u: goto L_08A2E6C4;
    case 99u: goto L_08A2E6D4;
    case 100u: goto L_08A2E708;
    case 101u: goto L_08A2E714;
    case 102u: goto L_08A2E720;
    case 103u: goto L_08A2E728;
    case 104u: goto L_08A2E734;
    case 105u: goto L_08A2E73C;
    case 106u: goto L_08A2E748;
    case 107u: goto L_08A2E750;
    case 108u: goto L_08A2E778;
    case 109u: goto L_08A2E794;
    case 110u: goto L_08A2E7A0;
    case 111u: goto L_08A2E7AC;
    case 112u: goto L_08A2E7B4;
    case 113u: goto L_08A2E7C0;
    case 114u: goto L_08A2E7C8;
    case 115u: goto L_08A2E7D0;
    case 116u: goto L_08A2E7D4;
    case 117u: goto L_08A2E7F8;
    case 118u: goto L_08A2E800;
    case 119u: goto L_08A2E810;
    case 120u: goto L_08A2E838;
    case 121u: goto L_08A2E864;
    case 122u: goto L_08A2E880;
    case 123u: goto L_08A2E8A0;
    case 124u: goto L_08A2E8A4;
    case 125u: goto L_08A2E8AC;
    case 126u: goto L_08A2E8B8;
    case 127u: goto L_08A2E8D0;
    case 128u: goto L_08A2E8D8;
    case 129u: goto L_08A2E8E0;
    case 130u: goto L_08A2E8E8;
    case 131u: goto L_08A2E900;
    case 132u: goto L_08A2E92C;
    case 133u: goto L_08A2E958;
    case 134u: goto L_08A2E95C;
    case 135u: goto L_08A2E968;
    case 136u: goto L_08A2E970;
    case 137u: goto L_08A2E97C;
    case 138u: goto L_08A2E988;
    case 139u: goto L_08A2E9AC;
    case 140u: goto L_08A2E9B4;
    case 141u: goto L_08A2E9B8;
    case 142u: goto L_08A2E9CC;
    case 143u: goto L_08A2EA14;
    case 144u: goto L_08A2EA1C;
    case 145u: goto L_08A2EA20;
    case 146u: goto L_08A2EA4C;
    case 147u: goto L_08A2EA60;
    case 148u: goto L_08A2EA68;
    case 149u: goto L_08A2EA74;
    case 150u: goto L_08A2EA78;
    case 151u: goto L_08A2EA88;
    case 152u: goto L_08A2EA94;
    case 153u: goto L_08A2EA9C;
    case 154u: goto L_08A2EAA8;
    case 155u: goto L_08A2EAB4;
    case 156u: goto L_08A2EAD8;
    case 157u: goto L_08A2EADC;
    case 158u: goto L_08A2EAE4;
    case 159u: goto L_08A2EAEC;
    case 160u: goto L_08A2EAF4;
    case 161u: goto L_08A2EAFC;
    case 162u: goto L_08A2EB08;
    case 163u: goto L_08A2EB10;
    case 164u: goto L_08A2EB18;
    case 165u: goto L_08A2EB24;
    case 166u: goto L_08A2EB30;
    case 167u: goto L_08A2EB3C;
    case 168u: goto L_08A2EB60;
    case 169u: goto L_08A2EB64;
    case 170u: goto L_08A2EB6C;
    case 171u: goto L_08A2EB7C;
    case 172u: goto L_08A2EB84;
    case 173u: goto L_08A2EB8C;
    case 174u: goto L_08A2EBA8;
    case 175u: goto L_08A2EBB0;
    case 176u: goto L_08A2EBB8;
    case 177u: goto L_08A2EBC0;
    case 178u: goto L_08A2EBC8;
    case 179u: goto L_08A2EBD4;
    case 180u: goto L_08A2EBE4;
    case 181u: goto L_08A2EBF0;
    case 182u: goto L_08A2EC00;
    case 183u: goto L_08A2EC0C;
    case 184u: goto L_08A2EC14;
    case 185u: goto L_08A2EC1C;
    case 186u: goto L_08A2EC24;
    case 187u: goto L_08A2EC2C;
    case 188u: goto L_08A2EC38;
    case 189u: goto L_08A2EC40;
    case 190u: goto L_08A2EC48;
    case 191u: goto L_08A2EC50;
    case 192u: goto L_08A2EC5C;
    case 193u: goto L_08A2EC64;
    case 194u: goto L_08A2EC78;
    case 195u: goto L_08A2EC80;
    case 196u: goto L_08A2EC8C;
    case 197u: goto L_08A2ECA0;
    case 198u: goto L_08A2ECB4;
    case 199u: goto L_08A2ECC4;
    case 200u: goto L_08A2ECCC;
    case 201u: goto L_08A2ECD8;
    case 202u: goto L_08A2ECF8;
    case 203u: goto L_08A2ED14;
    case 204u: goto L_08A2ED24;
    case 205u: goto L_08A2ED28;
    case 206u: goto L_08A2ED38;
    case 207u: goto L_08A2ED40;
    case 208u: goto L_08A2ED4C;
    case 209u: goto L_08A2ED5C;
    case 210u: goto L_08A2ED90;
    case 211u: goto L_08A2EDA0;
    case 212u: goto L_08A2EDB0;
    case 213u: goto L_08A2EDB8;
    case 214u: goto L_08A2EDC4;
    case 215u: goto L_08A2EE14;
    case 216u: goto L_08A2EE1C;
    case 217u: goto L_08A2EE28;
    case 218u: goto L_08A2EE30;
    case 219u: goto L_08A2EE38;
    case 220u: goto L_08A2EE44;
    case 221u: goto L_08A2EE60;
    case 222u: goto L_08A2EE6C;
    case 223u: goto L_08A2EE78;
    case 224u: goto L_08A2EE80;
    case 225u: goto L_08A2EE90;
    case 226u: goto L_08A2EE98;
    case 227u: goto L_08A2EEA8;
    case 228u: goto L_08A2EEB0;
    case 229u: goto L_08A2EEB8;
    case 230u: goto L_08A2EEC4;
    case 231u: goto L_08A2EED4;
    case 232u: goto L_08A2EEDC;
    case 233u: goto L_08A2EEF4;
    case 234u: goto L_08A2EEFC;
    case 235u: goto L_08A2EF04;
    case 236u: goto L_08A2EF10;
    case 237u: goto L_08A2EF2C;
    case 238u: goto L_08A2EF38;
    case 239u: goto L_08A2EF40;
    case 240u: goto L_08A2EF50;
    case 241u: goto L_08A2EF5C;
    case 242u: goto L_08A2EF60;
    case 243u: goto L_08A2EF6C;
    case 244u: goto L_08A2EF74;
    case 245u: goto L_08A2EF90;
    case 246u: goto L_08A2EF98;
    case 247u: goto L_08A2EFA0;
    case 248u: goto L_08A2EFA8;
    case 249u: goto L_08A2EFB0;
    case 250u: goto L_08A2EFC4;
    case 251u: goto L_08A2EFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A2E000:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E018;
      }
      goto L_08A2E014;
    }
L_08A2E014:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8192));
    goto L_08A2E018;
L_08A2E018:
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 32u);
    aot_gpr[31] = (0x08A2E028u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 188u, 0x08A2DF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2E028u) goto L_08A2E028;
    return;
L_08A2E028:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A2E040u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 179u, 0x08A2DEBCu>(ctx, &aot_mem) && ctx.pc == 0x08A2E040u) goto L_08A2E040;
    return;
L_08A2E040:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17572)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-17572), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr[18]));
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
L_08A2E078:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-17572)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] & 15u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A2E0A8;
      }
      goto L_08A2E0A0;
    }
L_08A2E0A0:
    aot_gpr[31] = (0x08A2E0A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 186u, 0x08A2DF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2E0A8u) goto L_08A2E0A8;
    return;
L_08A2E0A8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2E0B8;
      }
      goto L_08A2E0B0;
    }
L_08A2E0B0:
    aot_gpr[4] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[18]);
    goto L_08A2E0B8;
L_08A2E0B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-17572)));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E0E4;
      }
      goto L_08A2E0DC;
    }
L_08A2E0DC:
    aot_gpr[31] = (0x08A2E0E4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 189u, 0x08A2DFDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2E0E4u) goto L_08A2E0E4;
    return;
L_08A2E0E4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A2E0F0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 188u, 0x08A2DF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2E0F0u) goto L_08A2E0F0;
    return;
L_08A2E0F0:
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
L_08A2E108:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17568)));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-17572)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-17568), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-16));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E138:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A2E14Cu);
    // nop
    goto L_08A2E108;
L_08A2E14C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17572)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E18C;
      }
      goto L_08A2E160;
    }
L_08A2E160:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E18C;
      }
      goto L_08A2E16C;
    }
L_08A2E16C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-17572), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A2E184;
      }
      goto L_08A2E17C;
    }
L_08A2E17C:
    aot_gpr[31] = (0x08A2E184u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 183u, 0x08A2DEF8u>(ctx, &aot_mem) && ctx.pc == 0x08A2E184u) goto L_08A2E184;
    return;
L_08A2E184:
    aot_gpr[31] = (0x08A2E18Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A2E108;
L_08A2E18C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E19C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[5] & 65535u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (aot_gpr[6] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[19] == aot_gpr[17];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A2E314;
      }
      goto L_08A2E1C8;
    }
L_08A2E1C8:
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[4] << 2u);
    aot_gpr[19] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[5] & 2u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2E210;
      }
      goto L_08A2E1EC;
    }
L_08A2E1EC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (aot_gpr[18] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E210;
      }
      goto L_08A2E208;
    }
L_08A2E208:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(6)));
      if (branch_taken) {
          goto L_08A2E30C;
      }
      goto L_08A2E210;
    }
L_08A2E210:
    aot_gpr[6] = (aot_gpr[5] & 8u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A2E244;
      }
      goto L_08A2E21C;
    }
L_08A2E21C:
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[7]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[8] + aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[7] = (aot_gpr[18] + aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A2E250;
      }
      goto L_08A2E244;
    }
L_08A2E244:
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[7] = (aot_gpr[18] + aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08A2E250;
L_08A2E250:
    aot_gpr[8] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E260;
      }
      goto L_08A2E25C;
    }
L_08A2E25C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08A2E260;
L_08A2E260:
    aot_gpr[8] = (aot_gpr[5] & 128u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E274;
      }
      goto L_08A2E26C;
    }
L_08A2E26C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A2E308;
      }
      goto L_08A2E274;
    }
L_08A2E274:
    aot_gpr[8] = (aot_gpr[5] & 4u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E2D8;
      }
      goto L_08A2E280;
    }
L_08A2E280:
    aot_gpr[8] = (aot_gpr[6] | 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A2E2B4;
      }
      goto L_08A2E28C;
    }
L_08A2E28C:
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x08A2E2ACu);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 105u, 0x08A2D81Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2E2ACu) goto L_08A2E2AC;
    return;
L_08A2E2AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E2D0;
      }
      goto L_08A2E2B4;
    }
L_08A2E2B4:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (aot_gpr[5] & 64u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 0u);
        goto L_08A2E2C4;
    }
    goto L_08A2E2C4;
L_08A2E2C4:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A2E2D0u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2E2D0u) goto L_08A2E2D0;
    return;
L_08A2E2D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E308;
      }
      goto L_08A2E2D8;
    }
L_08A2E2D8:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E308;
      }
      goto L_08A2E2E0;
    }
L_08A2E2E0:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A2E300;
      }
      goto L_08A2E2E8;
    }
L_08A2E2E8:
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A2E2F8u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2E2F8u) goto L_08A2E2F8;
    return;
L_08A2E2F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E308;
      }
      goto L_08A2E300;
    }
L_08A2E300:
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A2E308u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2E308u) goto L_08A2E308;
    return;
L_08A2E308:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(6)));
    goto L_08A2E30C;
L_08A2E30C:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A2E1C8;
      }
      goto L_08A2E314;
    }
L_08A2E314:
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
L_08A2E330:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[6]);
    aot_gpr[6] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-27828));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[30]);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[23] & 1u);
    aot_gpr[22] = (aot_gpr[23] & 6u);
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (aot_gpr[10] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    goto L_08A2E3A0;
L_08A2E3A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[4] & 16u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[4] & 1u);
      if (branch_taken) {
          goto L_08A2E3C8;
      }
      goto L_08A2E3C0;
    }
L_08A2E3C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2E42C;
      }
      goto L_08A2E3C8;
    }
L_08A2E3C8:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A2E42C;
      }
      goto L_08A2E3D0;
    }
L_08A2E3D0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A2E3F4;
      }
      goto L_08A2E3DC;
    }
L_08A2E3DC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2E42C;
      }
      goto L_08A2E3EC;
    }
L_08A2E3EC:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E42C;
      }
      goto L_08A2E3F4;
    }
L_08A2E3F4:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E404;
      }
      goto L_08A2E3FC;
    }
L_08A2E3FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2E42C;
      }
      goto L_08A2E404;
    }
L_08A2E404:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A2E42C;
      }
      goto L_08A2E40C;
    }
L_08A2E40C:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E42C;
      }
      goto L_08A2E414;
    }
L_08A2E414:
    aot_gpr[6] = (aot_gpr[4] & 6u);
    aot_gpr[6] = (~(aot_gpr[6] | 0u));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[22]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E42C;
      }
      goto L_08A2E428;
    }
L_08A2E428:
    aot_gpr[17] = (0u | 1u);
    goto L_08A2E42C;
L_08A2E42C:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E4D8;
      }
      goto L_08A2E434;
    }
L_08A2E434:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A2E4D8;
      }
      goto L_08A2E43C;
    }
L_08A2E43C:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[23]);
      if (branch_taken) {
          goto L_08A2E450;
      }
      goto L_08A2E444;
    }
L_08A2E444:
    aot_gpr[4] = (aot_gpr[4] & 6u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A2E4D8;
      }
      goto L_08A2E450;
    }
L_08A2E450:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E484;
      }
      goto L_08A2E460;
    }
L_08A2E460:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2E484;
      }
      goto L_08A2E46C;
    }
L_08A2E46C:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A2E484;
      }
      goto L_08A2E474;
    }
L_08A2E474:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E484;
      }
      goto L_08A2E47C;
    }
L_08A2E47C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2E4D8;
      }
      goto L_08A2E484;
    }
L_08A2E484:
    if (aot_gpr[16] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
        goto L_08A2E4A0;
    }
    goto L_08A2E48C;
L_08A2E48C:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E4D8;
      }
      goto L_08A2E494;
    }
L_08A2E494:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E4D8;
      }
      goto L_08A2E49C;
    }
L_08A2E49C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    goto L_08A2E4A0;
L_08A2E4A0:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A2E4D8;
      }
      goto L_08A2E4A8;
    }
L_08A2E4A8:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A2E4C0u);
    aot_gpr[8] = (aot_gpr[30] | 0u);
    goto L_08A2EDC4;
L_08A2E4C0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E4D8;
      }
      goto L_08A2E4C8;
    }
L_08A2E4C8:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2E4D8;
      }
      goto L_08A2E4D0;
    }
L_08A2E4D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A2E4D8;
L_08A2E4D8:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E4F0;
      }
      goto L_08A2E4E0;
    }
L_08A2E4E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[18]);
      if (branch_taken) {
          goto L_08A2E500;
      }
      goto L_08A2E4F0;
    }
L_08A2E4F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] & 32u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A2E3A0;
      }
      goto L_08A2E500;
    }
L_08A2E500:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E534:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    if (aot_gpr[6] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
        goto L_08A2E54C;
    }
    goto L_08A2E54C;
L_08A2E54C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E56C;
      }
      goto L_08A2E558;
    }
L_08A2E558:
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    goto L_08A2E56C;
L_08A2E56C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E5C8;
      }
      goto L_08A2E578;
    }
L_08A2E578:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(46)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E5C8;
      }
      goto L_08A2E584;
    }
L_08A2E584:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(49)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E5C8;
      }
      goto L_08A2E5A0;
    }
L_08A2E5A0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[6] & 1u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E5C8;
      }
      goto L_08A2E5B0;
    }
L_08A2E5B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E5C8;
      }
      goto L_08A2E5BC;
    }
L_08A2E5BC:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A2E5C8u);
    aot_gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2E5C8u) goto L_08A2E5C8;
    return;
L_08A2E5C8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E5D4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17576)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-17700)));
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(52));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-17700), aot_gpr[7]);
    aot_gpr[5] = (0u | 1u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E5FC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17700)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-17700), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E610:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[11]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    aot_gpr[16] = (aot_gpr[10] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[9] | 0u);
    aot_gpr[18] = (aot_gpr[8] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[21] = (aot_gpr[5] | 0u);
    aot_gpr[22] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x08A2E664u);
    aot_gpr[4] = (0u | 164u);
    goto L_08A2E078;
L_08A2E664:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17576)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-17576), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[21]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(aot_gpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(36), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E6C4;
      }
      goto L_08A2E6B0;
    }
L_08A2E6B0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(40), aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A2E6D4;
      }
      goto L_08A2E6C4;
    }
L_08A2E6C4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(40), aot_gpr[7]);
    goto L_08A2E6D4;
L_08A2E6D4:
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(52), 0u);
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17700)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E734;
      }
      goto L_08A2E708;
    }
L_08A2E708:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E728;
      }
      goto L_08A2E714;
    }
L_08A2E714:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E728;
      }
      goto L_08A2E720;
    }
L_08A2E720:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E734;
      }
      goto L_08A2E728;
    }
L_08A2E728:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E708;
      }
      goto L_08A2E734;
    }
L_08A2E734:
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(32), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A2E750;
      }
      goto L_08A2E73C;
    }
L_08A2E73C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2E750;
      }
      goto L_08A2E748;
    }
L_08A2E748:
    aot_gpr[31] = (0x08A2E750u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08A2E534;
L_08A2E750:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E778:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17576)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E7C0;
      }
      goto L_08A2E794;
    }
L_08A2E794:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(47)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E7B4;
      }
      goto L_08A2E7A0;
    }
L_08A2E7A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E7B4;
      }
      goto L_08A2E7AC;
    }
L_08A2E7AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E7C0;
      }
      goto L_08A2E7B4;
    }
L_08A2E7B4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E794;
      }
      goto L_08A2E7C0;
    }
L_08A2E7C0:
    if (aot_gpr[16] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08A2E7D4;
    }
    goto L_08A2E7C8;
L_08A2E7C8:
    aot_gpr[31] = (0x08A2E7D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 138u, 0x08A2DA44u>(ctx, &aot_mem) && ctx.pc == 0x08A2E7D0u) goto L_08A2E7D0;
    return;
L_08A2E7D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A2E7D4;
L_08A2E7D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(50)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[11] = (0u | 1u);
    aot_gpr[31] = (0x08A2E7F8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    goto L_08A2E610;
L_08A2E7F8:
    aot_gpr[31] = (0x08A2E800u);
    // nop
    goto L_08A2E9CC;
L_08A2E800:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E810:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08A2E838u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_08A2E078;
L_08A2E838:
    aot_gpr[6] = (aot_gpr[17] & 255u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[17] | 0u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[31] = (0x08A2E864u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A2E610;
L_08A2E864:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E880:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A2E8A0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-17576)));
    goto L_08A2E534;
L_08A2E8A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-17576)));
    goto L_08A2E8A4;
L_08A2E8A4:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E8E8;
      }
      goto L_08A2E8AC;
    }
L_08A2E8AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E8E8;
      }
      goto L_08A2E8B8;
    }
L_08A2E8B8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-17576), aot_gpr[5]);
    aot_gpr[31] = (0x08A2E8D0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    goto L_08A2E138;
L_08A2E8D0:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E8E0;
      }
      goto L_08A2E8D8;
    }
L_08A2E8D8:
    aot_gpr[31] = (0x08A2E8E0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A2E138;
L_08A2E8E0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-17576)));
      if (branch_taken) {
          goto L_08A2E8A4;
      }
      goto L_08A2E8E8;
    }
L_08A2E8E8:
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
L_08A2E900:
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-17576)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-17576)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-17576)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E92C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] & 255u);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-17700)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A2E97C;
      }
      goto L_08A2E958;
    }
L_08A2E958:
    aot_gpr[8] = (0u | 2u);
    goto L_08A2E95C;
L_08A2E95C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A2E970;
      }
      goto L_08A2E968;
    }
L_08A2E968:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E97C;
      }
      goto L_08A2E970;
    }
L_08A2E970:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E95C;
      }
      goto L_08A2E97C;
    }
L_08A2E97C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E9B8;
      }
      goto L_08A2E988;
    }
L_08A2E988:
    aot_gpr[8] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x08A2E9ACu);
    aot_gpr[11] = (aot_gpr[29] | 0u);
    goto L_08A2E330;
L_08A2E9AC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E9B8;
      }
      goto L_08A2E9B4;
    }
L_08A2E9B4:
    aot_gpr[16] = (0u | 1u);
    goto L_08A2E9B8;
L_08A2E9B8:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E9CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-17576)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[30]);
    aot_gpr[22] = (0u | 0u);
    aot_gpr[30] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[23] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A2EA20;
      }
      goto L_08A2EA14;
    }
L_08A2EA14:
    aot_gpr[31] = (0x08A2EA1Cu);
    // nop
    goto L_08A2E5D4;
L_08A2EA1C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-17576)));
    goto L_08A2EA20;
L_08A2EA20:
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr[30]));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(50)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (aot_gpr[17] & 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-17700)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A2EA60;
      }
      goto L_08A2EA4C;
    }
L_08A2EA4C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(28));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A2EA68;
      }
      goto L_08A2EA60;
    }
L_08A2EA60:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    goto L_08A2EA68;
L_08A2EA68:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[30] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A2EBC8;
      }
      goto L_08A2EA74;
    }
L_08A2EA74:
    aot_gpr[23] = (0u | 3u);
    goto L_08A2EA78;
L_08A2EA78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2EBB0;
      }
      goto L_08A2EA88;
    }
L_08A2EA88:
    aot_gpr[5] = (0u | 4u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2EBB0;
      }
      goto L_08A2EA94;
    }
L_08A2EA94:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EB10;
      }
      goto L_08A2EA9C;
    }
L_08A2EA9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EBB0;
      }
      goto L_08A2EAA8;
    }
L_08A2EAA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A2EADC;
      }
      goto L_08A2EAB4;
    }
L_08A2EAB4:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[11] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A2EAD8u);
    aot_gpr[10] = (aot_gpr[29] | 0u);
    goto L_08A2E330;
L_08A2EAD8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08A2EADC;
L_08A2EADC:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EB08;
      }
      goto L_08A2EAE4;
    }
L_08A2EAE4:
    { const bool branch_taken = aot_gpr[22] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08A2EAF4;
      }
      goto L_08A2EAEC;
    }
L_08A2EAEC:
    aot_gpr[22] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    goto L_08A2EAF4;
L_08A2EAF4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EB08;
      }
      goto L_08A2EAFC;
    }
L_08A2EAFC:
    aot_gpr[23] = (2216u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-17700)));
      if (branch_taken) {
          goto L_08A2EBC8;
      }
      goto L_08A2EB08;
    }
L_08A2EB08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EBB0;
      }
      goto L_08A2EB10;
    }
L_08A2EB10:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EB24;
      }
      goto L_08A2EB18;
    }
L_08A2EB18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A2EBB8;
      }
      goto L_08A2EB24;
    }
L_08A2EB24:
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2EB84;
      }
      goto L_08A2EB30;
    }
L_08A2EB30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2EB64;
      }
      goto L_08A2EB3C;
    }
L_08A2EB3C:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (aot_gpr[18] | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x08A2EB60u);
    aot_gpr[11] = (aot_gpr[30] | 0u);
    goto L_08A2E330;
L_08A2EB60:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08A2EB64;
L_08A2EB64:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EB7C;
      }
      goto L_08A2EB6C;
    }
L_08A2EB6C:
    aot_gpr[23] = (2216u << 16u);
    aot_gpr[22] = (aot_gpr[16] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-17700)));
      if (branch_taken) {
          goto L_08A2EBC8;
      }
      goto L_08A2EB7C;
    }
L_08A2EB7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EBB0;
      }
      goto L_08A2EB84;
    }
L_08A2EB84:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A2EBB0;
      }
      goto L_08A2EB8C;
    }
L_08A2EB8C:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-17700), aot_gpr[16]);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-17576)));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08A2EBA8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08A2E5FC;
L_08A2EBA8:
    aot_gpr[31] = (0x08A2EBB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 138u, 0x08A2DA44u>(ctx, &aot_mem) && ctx.pc == 0x08A2EBB0u) goto L_08A2EBB0;
    return;
L_08A2EBB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_08A2EBB8;
L_08A2EBB8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EA78;
      }
      goto L_08A2EBC0;
    }
L_08A2EBC0:
    aot_gpr[23] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-17700)));
    goto L_08A2EBC8;
L_08A2EBC8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[22];
    aot_gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2EC5C;
      }
      goto L_08A2EBD4;
    }
L_08A2EBD4:
    aot_gpr[18] = (0u | 65535u);
    aot_gpr[20] = (0u | 4u);
    aot_gpr[19] = (0u | 2u);
    aot_gpr[17] = (2216u << 16u);
    goto L_08A2EBE4;
L_08A2EBE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A2EC0C;
      }
      goto L_08A2EBF0;
    }
L_08A2EBF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(-17704)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A2EC00u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_08A2E19C;
L_08A2EC00:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(-17704), static_cast<std::uint16_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08A2EC50;
      }
      goto L_08A2EC0C;
    }
L_08A2EC0C:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A2EC24;
      }
      goto L_08A2EC14;
    }
L_08A2EC14:
    aot_gpr[31] = (0x08A2EC1Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 81u, 0x08A2D5ACu>(ctx, &aot_mem) && ctx.pc == 0x08A2EC1Cu) goto L_08A2EC1C;
    return;
L_08A2EC1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EC50;
      }
      goto L_08A2EC24;
    }
L_08A2EC24:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EC48;
      }
      goto L_08A2EC2C;
    }
L_08A2EC2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EC50;
      }
      goto L_08A2EC38;
    }
L_08A2EC38:
    aot_gpr[31] = (0x08A2EC40u);
    // nop
    goto L_08A2E534;
L_08A2EC40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EC50;
      }
      goto L_08A2EC48;
    }
L_08A2EC48:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A2EC50;
      }
      goto L_08A2EC50;
    }
L_08A2EC50:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A2EBE4;
      }
      goto L_08A2EC5C;
    }
L_08A2EC5C:
    { const bool branch_taken = aot_gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EC80;
      }
      goto L_08A2EC64;
    }
L_08A2EC64:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-17576)));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08A2EC78u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08A2E5FC;
L_08A2EC78:
    aot_gpr[31] = (0x08A2EC80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 138u, 0x08A2DA44u>(ctx, &aot_mem) && ctx.pc == 0x08A2EC80u) goto L_08A2EC80;
    return;
L_08A2EC80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-17700)));
        goto L_08A2ECD8;
    }
    goto L_08A2EC8C;
L_08A2EC8C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(108)));
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(-17704)));
    if (aot_gpr[6] == aot_gpr[5]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-17700)));
        goto L_08A2ECD8;
    }
    goto L_08A2ECA0;
L_08A2ECA0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 1u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[8] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2ECC4;
      }
      goto L_08A2ECB4;
    }
L_08A2ECB4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2ECB4;
      }
      goto L_08A2ECC4;
    }
L_08A2ECC4:
    aot_gpr[31] = (0x08A2ECCCu);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_08A2E19C;
L_08A2ECCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(108)));
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(-17704), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-17700)));
    goto L_08A2ECD8;
L_08A2ECD8:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[22]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-17576)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ED40;
      }
      goto L_08A2ECF8;
    }
L_08A2ECF8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-27836), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (2220u << 16u);
      if (branch_taken) {
          goto L_08A2ED24;
      }
      goto L_08A2ED14;
    }
L_08A2ED14:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-27832), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A2ED28;
      }
      goto L_08A2ED24;
    }
L_08A2ED24:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-27832), aot_gpr[5]);
    goto L_08A2ED28;
L_08A2ED28:
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(104), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[22] + static_cast<std::uint32_t>(8));
    aot_gpr[31] = (0x08A2ED38u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 95u, 0x08A3655Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2ED38u) goto L_08A2ED38;
    return;
L_08A2ED38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ED5C;
      }
      goto L_08A2ED40;
    }
L_08A2ED40:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2ED5C;
      }
      goto L_08A2ED4C;
    }
L_08A2ED4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-17700)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A2ED5Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-17700), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 115u, 0x08A2D8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A2ED5Cu) goto L_08A2ED5C;
    return;
L_08A2ED5C:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2ED90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A2EDB8;
      }
      goto L_08A2EDA0;
    }
L_08A2EDA0:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(20072));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A2EDB8;
      }
      goto L_08A2EDB0;
    }
L_08A2EDB0:
    aot_gpr[31] = (0x08A2EDB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08A2EDB8u) goto L_08A2EDB8;
    return;
L_08A2EDB8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2EDC4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[22] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[8] | 0u);
    aot_gpr[19] = (aot_gpr[9] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    if (aot_gpr[4] != 0u) {
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08A2EE14;
    }
    goto L_08A2EE14;
L_08A2EE14:
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A2EFC4;
      }
      goto L_08A2EE1C;
    }
L_08A2EE1C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2EE30;
      }
      goto L_08A2EE28;
    }
L_08A2EE28:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(4))))));
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[4]);
    goto L_08A2EE30;
L_08A2EE30:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EE6C;
      }
      goto L_08A2EE38;
    }
L_08A2EE38:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EE60;
      }
      goto L_08A2EE44;
    }
L_08A2EE44:
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[10] ^ 89u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    aot_gpr[9] = (aot_gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(6)));
      if (branch_taken) {
          goto L_08A2EE78;
      }
      goto L_08A2EE60;
    }
L_08A2EE60:
    aot_gpr[9] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(6)));
      if (branch_taken) {
          goto L_08A2EE78;
      }
      goto L_08A2EE6C;
    }
L_08A2EE6C:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(6)));
    aot_gpr[9] = (aot_gpr[10] & 4u);
    aot_gpr[9] = (0u < aot_gpr[9] ? 1u : 0u);
    goto L_08A2EE78;
L_08A2EE78:
    { const bool branch_taken = aot_gpr[8] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A2EE98;
      }
      goto L_08A2EE80;
    }
L_08A2EE80:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[8] != aot_gpr[11];
    // nop
      if (branch_taken) {
          goto L_08A2EEDC;
      }
      goto L_08A2EE90;
    }
L_08A2EE90:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EEDC;
      }
      goto L_08A2EE98;
    }
L_08A2EE98:
    aot_gpr[5] = (aot_gpr[10] & 8u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EEDC;
      }
      goto L_08A2EEA8;
    }
L_08A2EEA8:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EEDC;
      }
      goto L_08A2EEB0;
    }
L_08A2EEB0:
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2EEDC;
      }
      goto L_08A2EEB8;
    }
L_08A2EEB8:
    aot_gpr[8] = (aot_gpr[10] & 1u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EED4;
      }
      goto L_08A2EEC4;
    }
L_08A2EEC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(6)));
      if (branch_taken) {
          goto L_08A2EEDC;
      }
      goto L_08A2EED4;
    }
L_08A2EED4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(6)));
    goto L_08A2EEDC;
L_08A2EEDC:
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[20]);
    aot_gpr[8] = (aot_gpr[10] & 2u);
    aot_gpr[8] = (aot_gpr[4] | aot_gpr[8]);
    aot_gpr[8] = (0u < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A2EE1C;
      }
      goto L_08A2EEF4;
    }
L_08A2EEF4:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EFC4;
      }
      goto L_08A2EEFC;
    }
L_08A2EEFC:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[23] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    goto L_08A2EF04;
L_08A2EF04:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = aot_gpr[22] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A2EF38;
      }
      goto L_08A2EF10;
    }
L_08A2EF10:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[21] + static_cast<std::uint32_t>(4))))));
    aot_gpr[4] = (aot_gpr[22] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(6)));
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EF38;
      }
      goto L_08A2EF2C;
    }
L_08A2EF2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A2EF38;
L_08A2EF38:
    { const bool branch_taken = aot_gpr[19] != 0u;
    aot_gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2EF60;
      }
      goto L_08A2EF40;
    }
L_08A2EF40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(6)));
    aot_gpr[7] = (aot_gpr[4] & 4u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2EF60;
      }
      goto L_08A2EF50;
    }
L_08A2EF50:
    aot_gpr[4] = (aot_gpr[4] & 8u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EF60;
      }
      goto L_08A2EF5C;
    }
L_08A2EF5C:
    aot_gpr[6] = (0u | 1u);
    goto L_08A2EF60;
L_08A2EF60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EFB0;
      }
      goto L_08A2EF6C;
    }
L_08A2EF6C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EFB0;
      }
      goto L_08A2EF74;
    }
L_08A2EF74:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[8] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A2EF90u);
    aot_gpr[9] = (aot_gpr[19] | 0u);
    goto L_08A2EDC4;
L_08A2EF90:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EFB0;
      }
      goto L_08A2EF98;
    }
L_08A2EF98:
    { const bool branch_taken = aot_gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EFA8;
      }
      goto L_08A2EFA0;
    }
L_08A2EFA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08A2EFA8;
L_08A2EFA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2EFC4;
      }
      goto L_08A2EFB0;
    }
L_08A2EFB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(6)));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A2EF04;
      }
      goto L_08A2EFC4;
    }
L_08A2EFC4:
    aot_gpr[2] = (aot_gpr[20] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2EFF4:
    aot_gpr[7] = (aot_gpr[5] + 0u);
    aot_gpr[7] = ((aot_gpr[7] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    aot_gpr[2] = (aot_gpr[4] + 0u);
    ctx.pc = 0x08A2F000u; return;
}

void recomp_unit_0554(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0554_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_554(Runtime &runtime) {
    runtime.register_generated_unit(554u, 0x08A2E000u, 4096u, &recomp_unit_0554, &recomp_unit_0554_entry);
    runtime.register_function(0x08A2E000u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E014u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E018u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E028u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E040u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E078u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E0A0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E0A8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E0B0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E0B8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E0DCu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E0E4u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E0F0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E108u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E138u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E14Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E160u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E16Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E17Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E184u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E18Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E19Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E1C8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E1ECu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E208u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E210u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E21Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E244u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E250u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E25Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E260u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E26Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E274u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E280u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E28Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E2ACu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E2B4u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E2C4u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E2D0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E2D8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E2E0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E2E8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E2F8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E300u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E308u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E30Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E314u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E330u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E3A0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E3C0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E3C8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E3D0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E3DCu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E3ECu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E3F4u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E3FCu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E404u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E40Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E414u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E428u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E42Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E434u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E43Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E444u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E450u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E460u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E46Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E474u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E47Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E484u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E48Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E494u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E49Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E4A0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E4A8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E4C0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E4C8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E4D0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E4D8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E4E0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E4F0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E500u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E534u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E54Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E558u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E56Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E578u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E584u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E5A0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E5B0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E5BCu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E5C8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E5D4u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E5FCu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E610u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E664u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E6B0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E6C4u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E6D4u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E708u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E714u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E720u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E728u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E734u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E73Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E748u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E750u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E778u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E794u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E7A0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E7ACu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E7B4u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E7C0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E7C8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E7D0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E7D4u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E7F8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E800u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E810u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E838u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E864u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E880u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E8A0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E8A4u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E8ACu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E8B8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E8D0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E8D8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E8E0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E8E8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E900u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E92Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E958u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E95Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E968u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E970u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E97Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E988u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E9ACu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E9B4u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E9B8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2E9CCu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EA14u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EA1Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EA20u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EA4Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EA60u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EA68u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EA74u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EA78u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EA88u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EA94u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EA9Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EAA8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EAB4u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EAD8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EADCu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EAE4u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EAECu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EAF4u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EAFCu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EB08u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EB10u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EB18u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EB24u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EB30u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EB3Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EB60u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EB64u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EB6Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EB7Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EB84u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EB8Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EBA8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EBB0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EBB8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EBC0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EBC8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EBD4u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EBE4u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EBF0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EC00u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EC0Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EC14u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EC1Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EC24u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EC2Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EC38u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EC40u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EC48u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EC50u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EC5Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EC64u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EC78u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EC80u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EC8Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2ECA0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2ECB4u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2ECC4u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2ECCCu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2ECD8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2ECF8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2ED14u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2ED24u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2ED28u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2ED38u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2ED40u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2ED4Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2ED5Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2ED90u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EDA0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EDB0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EDB8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EDC4u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EE14u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EE1Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EE28u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EE30u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EE38u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EE44u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EE60u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EE6Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EE78u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EE80u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EE90u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EE98u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EEA8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EEB0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EEB8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EEC4u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EED4u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EEDCu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EEF4u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EEFCu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EF04u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EF10u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EF2Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EF38u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EF40u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EF50u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EF5Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EF60u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EF6Cu, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EF74u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EF90u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EF98u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EFA0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EFA8u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EFB0u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EFC4u, &recomp_unit_0554, "recomp_unit_0554");
    runtime.register_function(0x08A2EFF4u, &recomp_unit_0554, "recomp_unit_0554");
}
} // namespace psprecomp
