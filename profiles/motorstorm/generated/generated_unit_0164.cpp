#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0164[1022] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 14, 0, 15,
    0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 22, 23, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 27, 0, 0, 28, 0, 0, 29, 30, 0, 0, 31, 0, 0, 0, 0, 0, 32,
    0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 39, 0, 40,
    0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 46, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0, 50, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 58, 0, 0,
    0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 62, 0, 0, 63, 0, 64, 0, 65, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 72, 0, 73, 0, 0, 74, 0, 75, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82,
    0, 83, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 88, 0, 89, 0, 0, 0, 0, 0, 90, 91, 0,
    92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 97, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 106, 107, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 113,
    0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 117, 0, 0, 118, 0, 0, 119, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0,
    0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 125, 126, 0, 127, 0, 0, 128, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0,
    0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 136,
    0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 141, 0, 0,
    0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0,
    0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0,
    0, 0, 154, 0, 0, 0, 0, 0, 155, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0,
    0, 0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 168,
    0, 0, 169, 0, 170, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 178,
    0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 0, 182, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 190, 0, 0, 191, 0, 0, 0, 0, 192, 0,
    0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 198, 0, 199, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0,
    0, 0, 202, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 209, 210, 0,
    0, 0, 211, 0, 0, 212, 0, 213, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217,
};
void recomp_unit_0164_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088A8000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0164[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A8000;
    case 2u: goto L_088A801C;
    case 3u: goto L_088A8034;
    case 4u: goto L_088A803C;
    case 5u: goto L_088A804C;
    case 6u: goto L_088A805C;
    case 7u: goto L_088A8088;
    case 8u: goto L_088A80A4;
    case 9u: goto L_088A80AC;
    case 10u: goto L_088A80B4;
    case 11u: goto L_088A80C8;
    case 12u: goto L_088A80D8;
    case 13u: goto L_088A80E0;
    case 14u: goto L_088A80F4;
    case 15u: goto L_088A80FC;
    case 16u: goto L_088A810C;
    case 17u: goto L_088A8120;
    case 18u: goto L_088A812C;
    case 19u: goto L_088A8138;
    case 20u: goto L_088A814C;
    case 21u: goto L_088A8154;
    case 22u: goto L_088A816C;
    case 23u: goto L_088A8170;
    case 24u: goto L_088A8178;
    case 25u: goto L_088A81A8;
    case 26u: goto L_088A81B4;
    case 27u: goto L_088A81BC;
    case 28u: goto L_088A81C8;
    case 29u: goto L_088A81D4;
    case 30u: goto L_088A81D8;
    case 31u: goto L_088A81E4;
    case 32u: goto L_088A81FC;
    case 33u: goto L_088A8204;
    case 34u: goto L_088A8224;
    case 35u: goto L_088A8230;
    case 36u: goto L_088A8240;
    case 37u: goto L_088A8260;
    case 38u: goto L_088A8268;
    case 39u: goto L_088A8274;
    case 40u: goto L_088A827C;
    case 41u: goto L_088A8284;
    case 42u: goto L_088A829C;
    case 43u: goto L_088A82B4;
    case 44u: goto L_088A82B8;
    case 45u: goto L_088A82D0;
    case 46u: goto L_088A8304;
    case 47u: goto L_088A8318;
    case 48u: goto L_088A8320;
    case 49u: goto L_088A8328;
    case 50u: goto L_088A8330;
    case 51u: goto L_088A8344;
    case 52u: goto L_088A8350;
    case 53u: goto L_088A8360;
    case 54u: goto L_088A8378;
    case 55u: goto L_088A83B0;
    case 56u: goto L_088A83D8;
    case 57u: goto L_088A83E4;
    case 58u: goto L_088A83F4;
    case 59u: goto L_088A8418;
    case 60u: goto L_088A8420;
    case 61u: goto L_088A8428;
    case 62u: goto L_088A842C;
    case 63u: goto L_088A8438;
    case 64u: goto L_088A8440;
    case 65u: goto L_088A8448;
    case 66u: goto L_088A844C;
    case 67u: goto L_088A8454;
    case 68u: goto L_088A8488;
    case 69u: goto L_088A849C;
    case 70u: goto L_088A84C0;
    case 71u: goto L_088A84CC;
    case 72u: goto L_088A84D4;
    case 73u: goto L_088A84DC;
    case 74u: goto L_088A84E8;
    case 75u: goto L_088A84F0;
    case 76u: goto L_088A8518;
    case 77u: goto L_088A8524;
    case 78u: goto L_088A852C;
    case 79u: goto L_088A8534;
    case 80u: goto L_088A8548;
    case 81u: goto L_088A8570;
    case 82u: goto L_088A857C;
    case 83u: goto L_088A8584;
    case 84u: goto L_088A858C;
    case 85u: goto L_088A85A0;
    case 86u: goto L_088A85C0;
    case 87u: goto L_088A85CC;
    case 88u: goto L_088A85D4;
    case 89u: goto L_088A85DC;
    case 90u: goto L_088A85F4;
    case 91u: goto L_088A85F8;
    case 92u: goto L_088A8600;
    case 93u: goto L_088A861C;
    case 94u: goto L_088A8630;
    case 95u: goto L_088A8654;
    case 96u: goto L_088A8670;
    case 97u: goto L_088A8674;
    case 98u: goto L_088A86A0;
    case 99u: goto L_088A86B4;
    case 100u: goto L_088A86CC;
    case 101u: goto L_088A86D8;
    case 102u: goto L_088A86E8;
    case 103u: goto L_088A871C;
    case 104u: goto L_088A8740;
    case 105u: goto L_088A8750;
    case 106u: goto L_088A878C;
    case 107u: goto L_088A8790;
    case 108u: goto L_088A87A4;
    case 109u: goto L_088A87B4;
    case 110u: goto L_088A87C4;
    case 111u: goto L_088A87E4;
    case 112u: goto L_088A87F0;
    case 113u: goto L_088A87FC;
    case 114u: goto L_088A8808;
    case 115u: goto L_088A881C;
    case 116u: goto L_088A8860;
    case 117u: goto L_088A8888;
    case 118u: goto L_088A8894;
    case 119u: goto L_088A88A0;
    case 120u: goto L_088A88A4;
    case 121u: goto L_088A88D8;
    case 122u: goto L_088A88F8;
    case 123u: goto L_088A8918;
    case 124u: goto L_088A8934;
    case 125u: goto L_088A893C;
    case 126u: goto L_088A8940;
    case 127u: goto L_088A8948;
    case 128u: goto L_088A8954;
    case 129u: goto L_088A8958;
    case 130u: goto L_088A8968;
    case 131u: goto L_088A8988;
    case 132u: goto L_088A89B0;
    case 133u: goto L_088A89B8;
    case 134u: goto L_088A89E0;
    case 135u: goto L_088A89EC;
    case 136u: goto L_088A89FC;
    case 137u: goto L_088A8A04;
    case 138u: goto L_088A8A3C;
    case 139u: goto L_088A8A58;
    case 140u: goto L_088A8A6C;
    case 141u: goto L_088A8A74;
    case 142u: goto L_088A8A98;
    case 143u: goto L_088A8AA8;
    case 144u: goto L_088A8AB8;
    case 145u: goto L_088A8AC0;
    case 146u: goto L_088A8AF8;
    case 147u: goto L_088A8B0C;
    case 148u: goto L_088A8B20;
    case 149u: goto L_088A8B28;
    case 150u: goto L_088A8B3C;
    case 151u: goto L_088A8B44;
    case 152u: goto L_088A8B68;
    case 153u: goto L_088A8B74;
    case 154u: goto L_088A8B88;
    case 155u: goto L_088A8BA0;
    case 156u: goto L_088A8BA4;
    case 157u: goto L_088A8BB8;
    case 158u: goto L_088A8BE4;
    case 159u: goto L_088A8BEC;
    case 160u: goto L_088A8C0C;
    case 161u: goto L_088A8C14;
    case 162u: goto L_088A8C1C;
    case 163u: goto L_088A8C38;
    case 164u: goto L_088A8C44;
    case 165u: goto L_088A8C48;
    case 166u: goto L_088A8C68;
    case 167u: goto L_088A8C70;
    case 168u: goto L_088A8C7C;
    case 169u: goto L_088A8C88;
    case 170u: goto L_088A8C90;
    case 171u: goto L_088A8C9C;
    case 172u: goto L_088A8CA8;
    case 173u: goto L_088A8CB0;
    case 174u: goto L_088A8CBC;
    case 175u: goto L_088A8CC8;
    case 176u: goto L_088A8CE0;
    case 177u: goto L_088A8CEC;
    case 178u: goto L_088A8CFC;
    case 179u: goto L_088A8D18;
    case 180u: goto L_088A8D20;
    case 181u: goto L_088A8D28;
    case 182u: goto L_088A8D34;
    case 183u: goto L_088A8D40;
    case 184u: goto L_088A8D48;
    case 185u: goto L_088A8D60;
    case 186u: goto L_088A8D70;
    case 187u: goto L_088A8D7C;
    case 188u: goto L_088A8DC4;
    case 189u: goto L_088A8DD0;
    case 190u: goto L_088A8DD8;
    case 191u: goto L_088A8DE4;
    case 192u: goto L_088A8DF8;
    case 193u: goto L_088A8E08;
    case 194u: goto L_088A8E1C;
    case 195u: goto L_088A8E34;
    case 196u: goto L_088A8E54;
    case 197u: goto L_088A8E5C;
    case 198u: goto L_088A8E60;
    case 199u: goto L_088A8E68;
    case 200u: goto L_088A8EC8;
    case 201u: goto L_088A8EF8;
    case 202u: goto L_088A8F08;
    case 203u: goto L_088A8F10;
    case 204u: goto L_088A8F1C;
    case 205u: goto L_088A8F2C;
    case 206u: goto L_088A8F48;
    case 207u: goto L_088A8F54;
    case 208u: goto L_088A8F60;
    case 209u: goto L_088A8F74;
    case 210u: goto L_088A8F78;
    case 211u: goto L_088A8F88;
    case 212u: goto L_088A8F94;
    case 213u: goto L_088A8F9C;
    case 214u: goto L_088A8FA8;
    case 215u: goto L_088A8FBC;
    case 216u: goto L_088A8FDC;
    case 217u: goto L_088A8FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088A8000:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] >> 24u);
    aot_gpr[4] = (aot_gpr[4] & 8u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088A8034;
      }
      goto L_088A801C;
    }
L_088A801C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(108)));
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] >> 24u);
    aot_gpr[4] = (aot_gpr[4] & 8u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_088A8034;
L_088A8034:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A804C;
      }
      goto L_088A803C;
    }
L_088A803C:
    aot_gpr[4] = (2048u << 16u);
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(108), aot_gpr[4]);
      if (branch_taken) {
          goto L_088A805C;
      }
      goto L_088A804C;
    }
L_088A804C:
    aot_gpr[4] = (63488u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(108), aot_gpr[4]);
    goto L_088A805C;
L_088A805C:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(120)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(124)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8088:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A80FC;
      }
      goto L_088A80A4;
    }
L_088A80A4:
    aot_gpr[31] = (0x088A80ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 60u, 0x0894B468u>(ctx, &aot_mem) && ctx.pc == 0x088A80ACu) goto L_088A80AC;
    return;
L_088A80AC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A80FC;
      }
      goto L_088A80B4;
    }
L_088A80B4:
    aot_gpr[5] = (16307u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 13107u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    aot_gpr[31] = (0x088A80C8u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 140u, 0x0894BAD4u>(ctx, &aot_mem) && ctx.pc == 0x088A80C8u) goto L_088A80C8;
    return;
L_088A80C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    aot_gpr[5] = (0u | 8u);
    aot_gpr[31] = (0x088A80D8u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 85u, 0x0894B60Cu>(ctx, &aot_mem) && ctx.pc == 0x088A80D8u) goto L_088A80D8;
    return;
L_088A80D8:
    aot_gpr[31] = (0x088A80E0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 46u, 0x0894B330u>(ctx, &aot_mem) && ctx.pc == 0x088A80E0u) goto L_088A80E0;
    return;
L_088A80E0:
    aot_gpr[5] = (15897u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 39322u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    aot_gpr[31] = (0x088A80F4u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 155u, 0x0894BB50u>(ctx, &aot_mem) && ctx.pc == 0x088A80F4u) goto L_088A80F4;
    return;
L_088A80F4:
    aot_gpr[31] = (0x088A80FCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 62u, 0x0894B480u>(ctx, &aot_mem) && ctx.pc == 0x088A80FCu) goto L_088A80FC;
    return;
L_088A80FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A810C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(110)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A816C;
      }
      goto L_088A8120;
    }
L_088A8120:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    goto L_088A812C;
L_088A812C:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8154;
      }
      goto L_088A8138;
    }
L_088A8138:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    aot_gpr[10] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A812C;
      }
      goto L_088A814C;
    }
L_088A814C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A816C;
      }
      goto L_088A8154;
    }
L_088A8154:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088A8170;
      }
      goto L_088A816C;
    }
L_088A816C:
    aot_gpr[2] = (0u | 0u);
    goto L_088A8170;
L_088A8170:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8178:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-160));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    aot_gpr[6] = (3840u << 16u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] >> 24u);
    aot_gpr[5] = (aot_gpr[5] & 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(144), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(148), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(152), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088A81BC;
      }
      goto L_088A81A8;
    }
L_088A81A8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088A81B4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088A810C;
L_088A81B4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[2]);
      if (branch_taken) {
          goto L_088A81D8;
      }
      goto L_088A81BC;
    }
L_088A81BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A81D8;
      }
      goto L_088A81C8;
    }
L_088A81C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x088A81D4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    goto L_088A810C;
L_088A81D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[2]);
    goto L_088A81D8;
L_088A81D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8204;
      }
      goto L_088A81E4;
    }
L_088A81E4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27228)));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27228), aot_gpr[5]);
      if (branch_taken) {
          goto L_088A829C;
      }
      goto L_088A81FC;
    }
L_088A81FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088A8284;
      }
      goto L_088A8204;
    }
L_088A8204:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x088A8224u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 136u, 0x0894BA84u>(ctx, &aot_mem) && ctx.pc == 0x088A8224u) goto L_088A8224;
    return;
L_088A8224:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    aot_gpr[31] = (0x088A8230u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 138u, 0x0894BAACu>(ctx, &aot_mem) && ctx.pc == 0x088A8230u) goto L_088A8230;
    return;
L_088A8230:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x088A8240u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 16u, 0x0893D18Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8240u) goto L_088A8240;
    return;
L_088A8240:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[18] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A8260u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 104u, 0x0894B814u>(ctx, &aot_mem) && ctx.pc == 0x088A8260u) goto L_088A8260;
    return;
L_088A8260:
    aot_gpr[31] = (0x088A8268u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 62u, 0x0894B480u>(ctx, &aot_mem) && ctx.pc == 0x088A8268u) goto L_088A8268;
    return;
L_088A8268:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    aot_gpr[31] = (0x088A8274u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 78u, 0x0894B594u>(ctx, &aot_mem) && ctx.pc == 0x088A8274u) goto L_088A8274;
    return;
L_088A8274:
    aot_gpr[31] = (0x088A827Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 177u, 0x0894BDACu>(ctx, &aot_mem) && ctx.pc == 0x088A827Cu) goto L_088A827C;
    return;
L_088A827C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_088A82B8;
      }
      goto L_088A8284;
    }
L_088A8284:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27228)));
    aot_gpr[5] = (0u | 1000u);
    { const std::uint32_t dividend = aot_gpr[4]; const std::uint32_t divisor = aot_gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[4] = (ctx.hi);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A82B4;
      }
      goto L_088A829C;
    }
L_088A829C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27228)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088A82B4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28896));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x088A82B4u) goto L_088A82B4;
    return;
L_088A82B4:
    aot_gpr[2] = (0u | 0u);
    goto L_088A82B8;
L_088A82B8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A82D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr[4] = (3840u << 16u);
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] >> 24u);
    aot_gpr[6] = (aot_gpr[4] & 2u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8350;
      }
      goto L_088A8304;
    }
L_088A8304:
    aot_gpr[4] = (aot_gpr[4] & 8u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8344;
      }
      goto L_088A8318;
    }
L_088A8318:
    aot_gpr[31] = (0x088A8320u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088A8178;
L_088A8320:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8350;
      }
      goto L_088A8328;
    }
L_088A8328:
    aot_gpr[31] = (0x088A8330u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088A8088;
L_088A8330:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(108)));
    aot_gpr[5] = (512u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(108), aot_gpr[4]);
      if (branch_taken) {
          goto L_088A8350;
      }
      goto L_088A8344;
    }
L_088A8344:
    aot_gpr[4] = (512u << 16u);
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(108), aot_gpr[4]);
    goto L_088A8350;
L_088A8350:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8360:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8378:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-336));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(304), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(288), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(292), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(296), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(300), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(308), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(312), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(316), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(320), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(324), aot_gpr[31]);
    aot_gpr[31] = (0x088A83B0u);
    aot_gpr[21] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x088A83B0u) goto L_088A83B0;
    return;
L_088A83B0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-5008));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4984));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(84), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A83E4;
      }
      goto L_088A83D8;
    }
L_088A83D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A844C;
      }
      goto L_088A83E4;
    }
L_088A83E4:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088A8420;
      }
      goto L_088A83F4;
    }
L_088A83F4:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088A8418u);
    aot_gpr[6] = (0u | 24u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8418u) goto L_088A8418;
    return;
L_088A8418:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088A842C;
      }
      goto L_088A8420;
    }
L_088A8420:
    aot_gpr[31] = (0x088A8428u);
    aot_gpr[4] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088A8428u) goto L_088A8428;
    return;
L_088A8428:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_088A842C;
L_088A842C:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (aot_gpr[4] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(84), aot_gpr[16]);
        goto L_088A8448;
    }
    goto L_088A8438;
L_088A8438:
    aot_gpr[31] = (0x088A8440u);
    // nop
    goto L_088A8360;
L_088A8440:
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(84), aot_gpr[16]);
    goto L_088A8448;
L_088A8448:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(108)));
    goto L_088A844C;
L_088A844C:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088A8674;
      }
      goto L_088A8454;
    }
L_088A8454:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(100)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(68)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(84)));
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(15));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[17] = (aot_gpr[17] & aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(110)));
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[16] = (aot_gpr[21] + aot_gpr[16]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
      if (branch_taken) {
          goto L_088A84E8;
      }
      goto L_088A8488;
    }
L_088A8488:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (ctx.lo);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A84CC;
      }
      goto L_088A849C;
    }
L_088A849C:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[8]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x088A84C0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A84C0u) goto L_088A84C0;
    return;
L_088A84C0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_088A84DC;
      }
      goto L_088A84CC;
    }
L_088A84CC:
    aot_gpr[31] = (0x088A84D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088A84D4u) goto L_088A84D4;
    return;
L_088A84D4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(84)));
    goto L_088A84DC;
L_088A84DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(110)));
    goto L_088A84E8;
L_088A84E8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] << 2u);
      if (branch_taken) {
          goto L_088A8524;
      }
      goto L_088A84F0;
    }
L_088A84F0:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[8]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x088A8518u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8518u) goto L_088A8518;
    return;
L_088A8518:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_088A8534;
      }
      goto L_088A8524;
    }
L_088A8524:
    aot_gpr[31] = (0x088A852Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088A852Cu) goto L_088A852C;
    return;
L_088A852C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(84)));
    goto L_088A8534;
L_088A8534:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(110)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] << 2u);
      if (branch_taken) {
          goto L_088A857C;
      }
      goto L_088A8548;
    }
L_088A8548:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[8]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x088A8570u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8570u) goto L_088A8570;
    return;
L_088A8570:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_088A858C;
      }
      goto L_088A857C;
    }
L_088A857C:
    aot_gpr[31] = (0x088A8584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088A8584u) goto L_088A8584;
    return;
L_088A8584:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(84)));
    goto L_088A858C;
L_088A858C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(110)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (aot_gpr[4] << 2u);
      if (branch_taken) {
          goto L_088A85CC;
      }
      goto L_088A85A0;
    }
L_088A85A0:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088A85C0u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A85C0u) goto L_088A85C0;
    return;
L_088A85C0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_088A85DC;
      }
      goto L_088A85CC;
    }
L_088A85CC:
    aot_gpr[31] = (0x088A85D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x088A85D4u) goto L_088A85D4;
    return;
L_088A85D4:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(84)));
    goto L_088A85DC;
L_088A85DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(110)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088A8670;
      }
      goto L_088A85F4;
    }
L_088A85F4:
    aot_gpr[22] = (0u - aot_gpr[17]);
    goto L_088A85F8;
L_088A85F8:
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_088A861C;
      }
      goto L_088A8600;
    }
L_088A8600:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
      if (branch_taken) {
          goto L_088A8654;
      }
      goto L_088A861C;
    }
L_088A861C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[20] + static_cast<std::uint32_t>(108)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[31] = (0x088A8630u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088A8630u) goto L_088A8630;
    return;
L_088A8630:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(84)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[22]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    goto L_088A8654;
L_088A8654:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(110)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[22] + aot_gpr[17]);
      if (branch_taken) {
          goto L_088A85F8;
      }
      goto L_088A8670;
    }
L_088A8670:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(100), 0u);
    goto L_088A8674;
L_088A8674:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(76)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(108)));
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(76), aot_gpr[4]);
    aot_gpr[4] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[4]);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] >> 30u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[30] = (20563u << 16u);
      if (branch_taken) {
          goto L_088A87E4;
      }
      goto L_088A86A0;
    }
L_088A86A0:
    aot_gpr[23] = (0u | 92u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(20575));
    aot_gpr[18] = (1u << 16u);
    aot_gpr[22] = (2218u << 16u);
    goto L_088A86B4;
L_088A86B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x088A86CCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x088A86CCu) goto L_088A86CC;
    return;
L_088A86CC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A87C4;
      }
      goto L_088A86D8;
    }
L_088A86D8:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088A86E8u);
    aot_gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088A86E8u) goto L_088A86E8;
    return;
L_088A86E8:
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[4]);
    aot_gpr[5] = (0u | 32768u);
    aot_gpr[4] = (24948u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24900));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[30]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[23]));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088A871Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088A871Cu) goto L_088A871C;
    return;
L_088A871C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088A8740u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8740u) goto L_088A8740;
    return;
L_088A8740:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088A8750u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 46u, 0x088C0344u>(ctx, &aot_mem) && ctx.pc == 0x088A8750u) goto L_088A8750;
    return;
L_088A8750:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A87C4;
      }
      goto L_088A878C;
    }
L_088A878C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088A8790;
L_088A8790:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(176)));
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[18]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A87B4;
      }
      goto L_088A87A4;
    }
L_088A87A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[19]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
      if (branch_taken) {
          goto L_088A87C4;
      }
      goto L_088A87B4;
    }
L_088A87B4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A8790;
      }
      goto L_088A87C4;
    }
L_088A87C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(108)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] >> 30u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088A86B4;
      }
      goto L_088A87E4;
    }
L_088A87E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A88A4;
      }
      goto L_088A87F0;
    }
L_088A87F0:
    aot_gpr[4] = (0u | 13u);
    aot_gpr[31] = (0x088A87FCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 158u, 0x08872BF0u>(ctx, &aot_mem) && ctx.pc == 0x088A87FCu) goto L_088A87FC;
    return;
L_088A87FC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A88A4;
      }
      goto L_088A8808;
    }
L_088A8808:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088A881Cu);
    aot_gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x088A881Cu) goto L_088A881C;
    return;
L_088A881C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(72)));
    aot_gpr[5] = (0u | 13u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[5]);
    aot_gpr[4] = (0u | 32768u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(280), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (24948u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24900));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (20563u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20575));
    aot_gpr[5] = (0u | 92u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A8860u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088A8860u) goto L_088A8860;
    return;
L_088A8860:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(64));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088A8888u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8888u) goto L_088A8888;
    return;
L_088A8888:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(72)));
    aot_gpr[31] = (0x088A8894u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-4016)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088A8894u) goto L_088A8894;
    return;
L_088A8894:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088A88A0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x088A88A0u) goto L_088A88A0;
    return;
L_088A88A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    goto L_088A88A4;
L_088A88A4:
    aot_gpr[2] = (aot_gpr[20] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(288)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(292)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(296)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(300)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(304)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(308)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(312)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(316)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(320)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(324)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A88D8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27224), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A88F8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27232), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8918:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088A8940;
      }
      goto L_088A8934;
    }
L_088A8934:
    aot_gpr[31] = (0x088A893Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0586_entry, 586u, 154u, 0x08A4E974u>(ctx, &aot_mem) && ctx.pc == 0x088A893Cu) goto L_088A893C;
    return;
L_088A893C:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_088A8940;
L_088A8940:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8958;
      }
      goto L_088A8948;
    }
L_088A8948:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x088A8954u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0586_entry, 586u, 155u, 0x08A4E97Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8954u) goto L_088A8954;
    return;
L_088A8954:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    goto L_088A8958;
L_088A8958:
    aot_gpr[2] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8968:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(27240), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8988:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x088A89B0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(132)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088A89B0u) goto L_088A89B0;
    return;
L_088A89B0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088A8A3C;
      }
      goto L_088A89B8;
    }
L_088A89B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088A89E0u);
    aot_gpr[6] = (0u | 24u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A89E0u) goto L_088A89E0;
    return;
L_088A89E0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088A8A04;
      }
      goto L_088A89EC;
    }
L_088A89EC:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088A89FCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 141u, 0x088A9A18u>(ctx, &aot_mem) && ctx.pc == 0x088A89FCu) goto L_088A89FC;
    return;
L_088A89FC:
    aot_gpr[19] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_088A8A04;
L_088A8A04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_088A8A3C;
L_088A8A3C:
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
L_088A8A58:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8AB8;
      }
      goto L_088A8A6C;
    }
L_088A8A6C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (49152u << 16u);
    goto L_088A8A74;
L_088A8A74:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(108)));
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[4]);
    aot_gpr[8] = (aot_gpr[8] >> 30u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8AA8;
      }
      goto L_088A8A98;
    }
L_088A8A98:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8A98;
      }
      goto L_088A8AA8;
    }
L_088A8AA8:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A8A74;
      }
      goto L_088A8AB8;
    }
L_088A8AB8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8AC0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088A8B20;
      }
      goto L_088A8AF8;
    }
L_088A8AF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x088A8B0Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 107u, 0x088A7828u>(ctx, &aot_mem) && ctx.pc == 0x088A8B0Cu) goto L_088A8B0C;
    return;
L_088A8B0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A8AF8;
      }
      goto L_088A8B20;
    }
L_088A8B20:
    aot_gpr[31] = (0x088A8B28u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(5288)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 49u, 0x088B8484u>(ctx, &aot_mem) && ctx.pc == 0x088A8B28u) goto L_088A8B28;
    return;
L_088A8B28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8B88;
      }
      goto L_088A8B3C;
    }
L_088A8B3C:
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[18] = (0u | 0u);
    goto L_088A8B44;
L_088A8B44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A8B74;
      }
      goto L_088A8B68;
    }
L_088A8B68:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088A8B74u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(5288)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 81u, 0x088B868Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8B74u) goto L_088A8B74;
    return;
L_088A8B74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A8B44;
      }
      goto L_088A8B88;
    }
L_088A8B88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088A8BE4;
      }
      goto L_088A8BA0;
    }
L_088A8BA0:
    aot_gpr[18] = (0u | 0u);
    goto L_088A8BA4;
L_088A8BA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[31] = (0x088A8BB8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0288_entry, 288u, 118u, 0x08924A10u>(ctx, &aot_mem) && ctx.pc == 0x088A8BB8u) goto L_088A8BB8;
    return;
L_088A8BB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(aot_gpr[19]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_088A8BA4;
      }
      goto L_088A8BE4;
    }
L_088A8BE4:
    aot_gpr[31] = (0x088A8BECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088A8A58;
L_088A8BEC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
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
L_088A8C0C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8C14:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8C1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088A8C38u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    goto L_088A8A58;
L_088A8C38:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[18] = (3840u << 16u);
      if (branch_taken) {
          goto L_088A8C7C;
      }
      goto L_088A8C44;
    }
L_088A8C44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_088A8C48;
L_088A8C48:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(108)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[5] >> 24u);
    aot_gpr[5] = (aot_gpr[5] & 8u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8C70;
      }
      goto L_088A8C68;
    }
L_088A8C68:
    aot_gpr[31] = (0x088A8C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 98u, 0x088A7768u>(ctx, &aot_mem) && ctx.pc == 0x088A8C70u) goto L_088A8C70;
    return;
L_088A8C70:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    if (aot_gpr[17] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_088A8C48;
    }
    goto L_088A8C7C;
L_088A8C7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[9] = (aot_gpr[16] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_088A8C9C;
      }
      goto L_088A8C88;
    }
L_088A8C88:
    aot_gpr[31] = (0x088A8C90u);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 34u, 0x08A4F294u>(ctx, &aot_mem) && ctx.pc == 0x088A8C90u) goto L_088A8C90;
    return;
L_088A8C90:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8C88;
      }
      goto L_088A8C9C;
    }
L_088A8C9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[9] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_088A8CBC;
      }
      goto L_088A8CA8;
    }
L_088A8CA8:
    aot_gpr[31] = (0x088A8CB0u);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 34u, 0x08A4F294u>(ctx, &aot_mem) && ctx.pc == 0x088A8CB0u) goto L_088A8CB0;
    return;
L_088A8CB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8CA8;
      }
      goto L_088A8CBC;
    }
L_088A8CBC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8CE0;
      }
      goto L_088A8CC8;
    }
L_088A8CC8:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (0u | 12u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[31] = (0x088A8CE0u);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 105u, 0x08A2D81Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8CE0u) goto L_088A8CE0;
    return;
L_088A8CE0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8D28;
      }
      goto L_088A8CEC;
    }
L_088A8CEC:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A8D20;
      }
      goto L_088A8CFC;
    }
L_088A8CFC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088A8D18u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A8D18u) goto L_088A8D18;
    return;
L_088A8D18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8D28;
      }
      goto L_088A8D20;
    }
L_088A8D20:
    aot_gpr[31] = (0x088A8D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x088A8D28u) goto L_088A8D28;
    return;
L_088A8D28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8D40;
      }
      goto L_088A8D34;
    }
L_088A8D34:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x088A8D40u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 72u, 0x0887746Cu>(ctx, &aot_mem) && ctx.pc == 0x088A8D40u) goto L_088A8D40;
    return;
L_088A8D40:
    aot_gpr[31] = (0x088A8D48u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 95u, 0x088C07A4u>(ctx, &aot_mem) && ctx.pc == 0x088A8D48u) goto L_088A8D48;
    return;
L_088A8D48:
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
L_088A8D60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x088A8D70u);
    aot_gpr[5] = (0u | 576u);
    if (rt.invoke_chained_direct<&recomp_unit_0277_entry, 277u, 20u, 0x089191B4u>(ctx, &aot_mem) && ctx.pc == 0x088A8D70u) goto L_088A8D70;
    return;
L_088A8D70:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8D7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[31] = (0x088A8DC4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 108u, 0x08884BBCu>(ctx, &aot_mem) && ctx.pc == 0x088A8DC4u) goto L_088A8DC4;
    return;
L_088A8DC4:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8DE4;
      }
      goto L_088A8DD0;
    }
L_088A8DD0:
    aot_gpr[31] = (0x088A8DD8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 161u, 0x088A7CACu>(ctx, &aot_mem) && ctx.pc == 0x088A8DD8u) goto L_088A8DD8;
    return;
L_088A8DD8:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A8DD0;
      }
      goto L_088A8DE4;
    }
L_088A8DE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088A8E1C;
      }
      goto L_088A8DF8;
    }
L_088A8DF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[31] = (0x088A8E08u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 161u, 0x088A7CACu>(ctx, &aot_mem) && ctx.pc == 0x088A8E08u) goto L_088A8E08;
    return;
L_088A8E08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A8DF8;
      }
      goto L_088A8E1C;
    }
L_088A8E1C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8E34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(92)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(92)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A8E5C;
      }
      goto L_088A8E54;
    }
L_088A8E54:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088A8E60;
      }
      goto L_088A8E5C;
    }
L_088A8E5C:
    aot_gpr[2] = (0u | 0u);
    goto L_088A8E60;
L_088A8E60:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A8E68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-400));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(60), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(52), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(364), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(25362)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(372), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(356), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(360), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(368), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(376), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(380), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(384), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(388), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(392), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(396), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 43u, 0x088A93F8u>(ctx, &aot_mem); return;
      }
      goto L_088A8EC8;
    }
L_088A8EC8:
    aot_gpr[4] = (24948u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24932));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (28787u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(28767));
    aot_gpr[5] = (0u | 92u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088A8EF8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28936));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088A8EF8u) goto L_088A8EF8;
    return;
L_088A8EF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(25362)));
    aot_gpr[17] = (0u | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 32768u);
      if (branch_taken) {
          goto L_088A8F10;
      }
      goto L_088A8F08;
    }
L_088A8F08:
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(5896));
    goto L_088A8F10;
L_088A8F10:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088A8F1Cu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088A8F1Cu) goto L_088A8F1C;
    return;
L_088A8F1C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088A8F2Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28944));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 192u, 0x08A3A9F8u>(ctx, &aot_mem) && ctx.pc == 0x088A8F2Cu) goto L_088A8F2C;
    return;
L_088A8F2C:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(20));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x088A8F48u);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 70u, 0x08877444u>(ctx, &aot_mem) && ctx.pc == 0x088A8F48u) goto L_088A8F48;
    return;
L_088A8F48:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 19u, 0x088A9234u>(ctx, &aot_mem); return;
      }
      goto L_088A8F54;
    }
L_088A8F54:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088A8F78;
      }
      goto L_088A8F60;
    }
L_088A8F60:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088A8F74u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    goto L_088A8918;
L_088A8F74:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088A8F78;
L_088A8F78:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088A8F9C;
      }
      goto L_088A8F88;
    }
L_088A8F88:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x088A8F94u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 91u, 0x088C0738u>(ctx, &aot_mem) && ctx.pc == 0x088A8F94u) goto L_088A8F94;
    return;
L_088A8F94:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088A8FA8;
      }
      goto L_088A8F9C;
    }
L_088A8F9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), 0u);
    goto L_088A8FA8;
L_088A8FA8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[22]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2214u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 12u, 0x088A9154u>(ctx, &aot_mem); return;
      }
      goto L_088A8FBC;
    }
L_088A8FBC:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(28960));
    aot_gpr[23] = (61696u << 16u);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(352), aot_gpr[5]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    aot_gpr[30] = (256u << 16u);
    goto L_088A8FDC;
L_088A8FDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088A8FF4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x088A8FF4u) goto L_088A8FF4;
    return;
L_088A8FF4:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 3u, 0x088A9040u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 1u, 0x088A9000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0164(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0164_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_164(Runtime &runtime) {
    runtime.register_generated_unit(164u, 0x088A8000u, 4096u, &recomp_unit_0164, &recomp_unit_0164_entry);
    runtime.register_function(0x088A8000u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A801Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8034u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A803Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A804Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A805Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8088u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A80A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A80ACu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A80B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A80C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A80D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A80E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A80F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A80FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A810Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8120u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A812Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8138u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A814Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8154u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A816Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8170u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8178u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A81A8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A81B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A81BCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A81C8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A81D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A81D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A81E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A81FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8204u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8224u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8230u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8240u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8260u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8268u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8274u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A827Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8284u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A829Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A82B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A82B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A82D0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8304u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8318u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8320u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8328u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8330u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8344u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8350u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8360u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8378u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A83B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A83D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A83E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A83F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8418u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8420u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8428u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A842Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8438u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8440u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8448u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A844Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8454u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8488u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A849Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A84C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A84CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A84D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A84DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A84E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A84F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8518u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8524u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A852Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8534u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8548u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8570u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A857Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8584u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A858Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A85A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A85C0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A85CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A85D4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A85DCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A85F4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A85F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8600u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A861Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8630u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8654u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8670u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8674u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A86A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A86B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A86CCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A86D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A86E8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A871Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8740u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8750u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A878Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8790u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A87A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A87B4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A87C4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A87E4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A87F0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A87FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8808u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A881Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8860u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8888u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8894u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A88A0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A88A4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A88D8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A88F8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8918u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8934u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A893Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8940u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8948u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8954u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8958u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8968u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8988u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A89B0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A89B8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A89E0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A89ECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A89FCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8A04u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8A3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8A58u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8A6Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8A74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8A98u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8AA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8AB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8AC0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8AF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8B0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8B20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8B28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8B3Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8B44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8B68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8B74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8B88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8BA0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8BA4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8BB8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8BE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8BECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8C0Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8C14u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8C1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8C38u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8C44u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8C48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8C68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8C70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8C7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8C88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8C90u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8C9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8CA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8CB0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8CBCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8CC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8CE0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8CECu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8CFCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8D18u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8D20u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8D28u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8D34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8D40u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8D48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8D60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8D70u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8D7Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8DC4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8DD0u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8DD8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8DE4u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8DF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8E08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8E1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8E34u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8E54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8E5Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8E60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8E68u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8EC8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8EF8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8F08u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8F10u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8F1Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8F2Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8F48u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8F54u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8F60u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8F74u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8F78u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8F88u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8F94u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8F9Cu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8FA8u, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8FBCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8FDCu, &recomp_unit_0164, "recomp_unit_0164");
    runtime.register_function(0x088A8FF4u, &recomp_unit_0164, "recomp_unit_0164");
}
} // namespace psprecomp
