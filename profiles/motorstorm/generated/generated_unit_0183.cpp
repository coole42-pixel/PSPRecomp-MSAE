#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0183[1023] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 0,
    0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0,
    0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 28, 0,
    0, 0, 0, 0, 29, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 33, 0, 0, 34, 0, 35, 0, 0, 0, 0,
    0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0,
    0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0,
    0, 0, 0, 0, 55, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 61, 62, 0, 63, 64, 0, 0, 0, 65, 0, 66, 0, 0, 0, 67, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    70, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 81, 0, 82, 0, 0, 83, 0,
    0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 90, 0,
    0, 0, 0, 0, 91, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 104, 0, 0,
    0, 0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0,
    112, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 0, 0, 118, 0, 119, 0, 120, 0,
    0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0,
    0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 0, 142, 143, 0, 0, 0, 0, 144, 0, 145, 0, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0,
    158, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0,
    172, 0, 0, 0, 173, 174, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0,
    0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 184, 0, 0, 0, 0, 185, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 188, 0, 189, 190, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 202, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0,
    0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 217,
};
void recomp_unit_0183_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088BB004u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0183[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088BB004;
    case 2u: goto L_088BB014;
    case 3u: goto L_088BB024;
    case 4u: goto L_088BB034;
    case 5u: goto L_088BB044;
    case 6u: goto L_088BB084;
    case 7u: goto L_088BB090;
    case 8u: goto L_088BB0A8;
    case 9u: goto L_088BB0BC;
    case 10u: goto L_088BB0D0;
    case 11u: goto L_088BB0DC;
    case 12u: goto L_088BB0EC;
    case 13u: goto L_088BB0F4;
    case 14u: goto L_088BB110;
    case 15u: goto L_088BB12C;
    case 16u: goto L_088BB138;
    case 17u: goto L_088BB13C;
    case 18u: goto L_088BB14C;
    case 19u: goto L_088BB15C;
    case 20u: goto L_088BB168;
    case 21u: goto L_088BB188;
    case 22u: goto L_088BB198;
    case 23u: goto L_088BB1AC;
    case 24u: goto L_088BB1C4;
    case 25u: goto L_088BB1DC;
    case 26u: goto L_088BB1EC;
    case 27u: goto L_088BB1F4;
    case 28u: goto L_088BB1FC;
    case 29u: goto L_088BB214;
    case 30u: goto L_088BB218;
    case 31u: goto L_088BB240;
    case 32u: goto L_088BB248;
    case 33u: goto L_088BB25C;
    case 34u: goto L_088BB268;
    case 35u: goto L_088BB270;
    case 36u: goto L_088BB290;
    case 37u: goto L_088BB2A8;
    case 38u: goto L_088BB2B8;
    case 39u: goto L_088BB2C4;
    case 40u: goto L_088BB2E0;
    case 41u: goto L_088BB308;
    case 42u: goto L_088BB318;
    case 43u: goto L_088BB330;
    case 44u: goto L_088BB344;
    case 45u: goto L_088BB360;
    case 46u: goto L_088BB370;
    case 47u: goto L_088BB388;
    case 48u: goto L_088BB398;
    case 49u: goto L_088BB3A8;
    case 50u: goto L_088BB3B8;
    case 51u: goto L_088BB3C8;
    case 52u: goto L_088BB3E0;
    case 53u: goto L_088BB3F0;
    case 54u: goto L_088BB3FC;
    case 55u: goto L_088BB414;
    case 56u: goto L_088BB418;
    case 57u: goto L_088BB43C;
    case 58u: goto L_088BB448;
    case 59u: goto L_088BB464;
    case 60u: goto L_088BB47C;
    case 61u: goto L_088BB490;
    case 62u: goto L_088BB494;
    case 63u: goto L_088BB49C;
    case 64u: goto L_088BB4A0;
    case 65u: goto L_088BB4B0;
    case 66u: goto L_088BB4B8;
    case 67u: goto L_088BB4C8;
    case 68u: goto L_088BB4CC;
    case 69u: goto L_088BB4F4;
    case 70u: goto L_088BB504;
    case 71u: goto L_088BB50C;
    case 72u: goto L_088BB524;
    case 73u: goto L_088BB548;
    case 74u: goto L_088BB56C;
    case 75u: goto L_088BB580;
    case 76u: goto L_088BB594;
    case 77u: goto L_088BB5AC;
    case 78u: goto L_088BB5BC;
    case 79u: goto L_088BB5C8;
    case 80u: goto L_088BB5D4;
    case 81u: goto L_088BB5E8;
    case 82u: goto L_088BB5F0;
    case 83u: goto L_088BB5FC;
    case 84u: goto L_088BB620;
    case 85u: goto L_088BB63C;
    case 86u: goto L_088BB644;
    case 87u: goto L_088BB64C;
    case 88u: goto L_088BB65C;
    case 89u: goto L_088BB674;
    case 90u: goto L_088BB67C;
    case 91u: goto L_088BB694;
    case 92u: goto L_088BB698;
    case 93u: goto L_088BB6BC;
    case 94u: goto L_088BB6C4;
    case 95u: goto L_088BB6D0;
    case 96u: goto L_088BB6E4;
    case 97u: goto L_088BB6EC;
    case 98u: goto L_088BB6F4;
    case 99u: goto L_088BB728;
    case 100u: goto L_088BB734;
    case 101u: goto L_088BB744;
    case 102u: goto L_088BB764;
    case 103u: goto L_088BB76C;
    case 104u: goto L_088BB778;
    case 105u: goto L_088BB78C;
    case 106u: goto L_088BB794;
    case 107u: goto L_088BB79C;
    case 108u: goto L_088BB7B8;
    case 109u: goto L_088BB7C8;
    case 110u: goto L_088BB7E8;
    case 111u: goto L_088BB7F0;
    case 112u: goto L_088BB804;
    case 113u: goto L_088BB80C;
    case 114u: goto L_088BB824;
    case 115u: goto L_088BB844;
    case 116u: goto L_088BB84C;
    case 117u: goto L_088BB858;
    case 118u: goto L_088BB86C;
    case 119u: goto L_088BB874;
    case 120u: goto L_088BB87C;
    case 121u: goto L_088BB8A0;
    case 122u: goto L_088BB8BC;
    case 123u: goto L_088BB8D4;
    case 124u: goto L_088BB8E8;
    case 125u: goto L_088BB910;
    case 126u: goto L_088BB920;
    case 127u: goto L_088BB92C;
    case 128u: goto L_088BB944;
    case 129u: goto L_088BB958;
    case 130u: goto L_088BB960;
    case 131u: goto L_088BB96C;
    case 132u: goto L_088BB990;
    case 133u: goto L_088BB9AC;
    case 134u: goto L_088BB9B4;
    case 135u: goto L_088BB9BC;
    case 136u: goto L_088BB9DC;
    case 137u: goto L_088BB9F8;
    case 138u: goto L_088BBA0C;
    case 139u: goto L_088BBA30;
    case 140u: goto L_088BBA38;
    case 141u: goto L_088BBA40;
    case 142u: goto L_088BBA58;
    case 143u: goto L_088BBA5C;
    case 144u: goto L_088BBA70;
    case 145u: goto L_088BBA78;
    case 146u: goto L_088BBA84;
    case 147u: goto L_088BBAA4;
    case 148u: goto L_088BBAAC;
    case 149u: goto L_088BBAB4;
    case 150u: goto L_088BBABC;
    case 151u: goto L_088BBAD8;
    case 152u: goto L_088BBB04;
    case 153u: goto L_088BBB0C;
    case 154u: goto L_088BBB20;
    case 155u: goto L_088BBB44;
    case 156u: goto L_088BBB4C;
    case 157u: goto L_088BBB6C;
    case 158u: goto L_088BBB84;
    case 159u: goto L_088BBB8C;
    case 160u: goto L_088BBB94;
    case 161u: goto L_088BBBB0;
    case 162u: goto L_088BBBC8;
    case 163u: goto L_088BBBD8;
    case 164u: goto L_088BBBE8;
    case 165u: goto L_088BBC04;
    case 166u: goto L_088BBC1C;
    case 167u: goto L_088BBC2C;
    case 168u: goto L_088BBC3C;
    case 169u: goto L_088BBC54;
    case 170u: goto L_088BBC68;
    case 171u: goto L_088BBC78;
    case 172u: goto L_088BBC84;
    case 173u: goto L_088BBC94;
    case 174u: goto L_088BBC98;
    case 175u: goto L_088BBCAC;
    case 176u: goto L_088BBCBC;
    case 177u: goto L_088BBCC8;
    case 178u: goto L_088BBCD0;
    case 179u: goto L_088BBCE4;
    case 180u: goto L_088BBCF8;
    case 181u: goto L_088BBD08;
    case 182u: goto L_088BBD30;
    case 183u: goto L_088BBD38;
    case 184u: goto L_088BBD3C;
    case 185u: goto L_088BBD50;
    case 186u: goto L_088BBD58;
    case 187u: goto L_088BBD60;
    case 188u: goto L_088BBD88;
    case 189u: goto L_088BBD90;
    case 190u: goto L_088BBD94;
    case 191u: goto L_088BBD9C;
    case 192u: goto L_088BBDA4;
    case 193u: goto L_088BBDE0;
    case 194u: goto L_088BBE00;
    case 195u: goto L_088BBE1C;
    case 196u: goto L_088BBE34;
    case 197u: goto L_088BBE40;
    case 198u: goto L_088BBE60;
    case 199u: goto L_088BBE74;
    case 200u: goto L_088BBE90;
    case 201u: goto L_088BBEA8;
    case 202u: goto L_088BBEB0;
    case 203u: goto L_088BBEB4;
    case 204u: goto L_088BBECC;
    case 205u: goto L_088BBEEC;
    case 206u: goto L_088BBF0C;
    case 207u: goto L_088BBF2C;
    case 208u: goto L_088BBF48;
    case 209u: goto L_088BBF58;
    case 210u: goto L_088BBF68;
    case 211u: goto L_088BBF78;
    case 212u: goto L_088BBFA0;
    case 213u: goto L_088BBFA8;
    case 214u: goto L_088BBFB0;
    case 215u: goto L_088BBFDC;
    case 216u: goto L_088BBFF8;
    case 217u: goto L_088BBFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088BB004:
    aot_gpr[4] = (16102u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 26214u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_088BB044;
      }
      goto L_088BB014;
    }
L_088BB014:
    aot_gpr[4] = (16076u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_088BB044;
      }
      goto L_088BB024;
    }
L_088BB024:
    aot_gpr[4] = (16051u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 13107u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_088BB044;
      }
      goto L_088BB034;
    }
L_088BB034:
    aot_gpr[4] = (16025u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_088BB044;
      }
      goto L_088BB044;
    }
L_088BB044:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[4] = (2215u << 16u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28080)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(116)));
    aot_gpr[4] = (20224u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[15] + aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_088BB090;
      }
      goto L_088BB084;
    }
L_088BB084:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088BB0A8;
      }
      goto L_088BB090;
    }
L_088BB090:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[4] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    goto L_088BB0A8;
L_088BB0A8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28076)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BB13C;
      }
      goto L_088BB0BC;
    }
L_088BB0BC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28076)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_088BB0DC;
      }
      goto L_088BB0D0;
    }
L_088BB0D0:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    goto L_088BB0DC;
L_088BB0DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088BB0ECu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 40u, 0x0882C3D8u>(ctx, &aot_mem) && ctx.pc == 0x088BB0ECu) goto L_088BB0EC;
    return;
L_088BB0EC:
    aot_gpr[31] = (0x088BB0F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088BB0F4u) goto L_088BB0F4;
    return;
L_088BB0F4:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1900)));
    aot_gpr[31] = (0x088BB110u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 21u, 0x088BC15Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB110u) goto L_088BB110;
    return;
L_088BB110:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[4] = (aot_gpr[4] ^ 3u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB13C;
      }
      goto L_088BB12C;
    }
L_088BB12C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x088BB138u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1900)));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 43u, 0x088BC2B4u>(ctx, &aot_mem) && ctx.pc == 0x088BB138u) goto L_088BB138;
    return;
L_088BB138:
    aot_gpr[17] = (0u | 1u);
    goto L_088BB13C;
L_088BB13C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2272)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_088BB218;
    }
    goto L_088BB14C;
L_088BB14C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    if (aot_gpr[4] != aot_gpr[5]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_088BB218;
    }
    goto L_088BB15C;
L_088BB15C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(96)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_088BB218;
    }
    goto L_088BB168;
L_088BB168:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2272)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27468)));
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(152), aot_gpr[22]);
      if (branch_taken) {
          goto L_088BB1F4;
      }
      goto L_088BB188;
    }
L_088BB188:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27468)));
    aot_gpr[31] = (0x088BB198u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(152), aot_gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088BB198u) goto L_088BB198;
    return;
L_088BB198:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[4]);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(80)));
    aot_gpr[31] = (0x088BB1ACu);
    aot_gpr[23] = (aot_gpr[23] + aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088BB1ACu) goto L_088BB1AC;
    return;
L_088BB1AC:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), aot_gpr[23]);
    aot_gpr[4] = (aot_gpr[23] < aot_gpr[22] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BB1DC;
      }
      goto L_088BB1C4;
    }
L_088BB1C4:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27468)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(148), 0u);
      if (branch_taken) {
          goto L_088BB1EC;
      }
      goto L_088BB1DC;
    }
L_088BB1DC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27468)));
    aot_gpr[4] = (aot_gpr[22] - aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(148), aot_gpr[4]);
    goto L_088BB1EC;
L_088BB1EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB214;
      }
      goto L_088BB1F4;
    }
L_088BB1F4:
    aot_gpr[31] = (0x088BB1FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088BB1FCu) goto L_088BB1FC;
    return;
L_088BB1FC:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(80), 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27468)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(148), aot_gpr[22]);
    goto L_088BB214;
L_088BB214:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_088BB218;
L_088BB218:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(384)));
    aot_fpr[22] = aot_fpr[20] - aot_fpr[12];
    aot_fpr[22] = aot_fpr[22] / aot_fpr[20];
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_088BB248;
      }
      goto L_088BB240;
    }
L_088BB240:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_088BB25C;
      }
      goto L_088BB248;
    }
L_088BB248:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[22] = __builtin_bit_cast(float, 0u);
        goto L_088BB25C;
    }
    goto L_088BB25C;
L_088BB25C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB270;
      }
      goto L_088BB268;
    }
L_088BB268:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BB49C;
      }
      goto L_088BB270;
    }
L_088BB270:
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (16000u << 16u);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088BB464;
      }
      goto L_088BB290;
    }
L_088BB290:
    aot_gpr[4] = (16192u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[24] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BB464;
      }
      goto L_088BB2A8;
    }
L_088BB2A8:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[23]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB464;
      }
      goto L_088BB2B8;
    }
L_088BB2B8:
    aot_gpr[23] = (aot_gpr[22] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[23]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088BB360;
      }
      goto L_088BB2C4;
    }
L_088BB2C4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[4] = (aot_gpr[4] ^ 1u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB308;
      }
      goto L_088BB2E0;
    }
L_088BB2E0:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7504));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[21] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    goto L_088BB308;
L_088BB308:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088BB360;
      }
      goto L_088BB318;
    }
L_088BB318:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[4] = (aot_gpr[4] ^ 1u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB360;
      }
      goto L_088BB330;
    }
L_088BB330:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28044)));
    aot_gpr[4] = (aot_gpr[23] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB360;
      }
      goto L_088BB344;
    }
L_088BB344:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(27416)));
    aot_gpr[5] = (aot_gpr[4] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[31] = (0x088BB360u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 157u, 0x088B1AE8u>(ctx, &aot_mem) && ctx.pc == 0x088BB360u) goto L_088BB360;
    return;
L_088BB360:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088BB464;
      }
      goto L_088BB370;
    }
L_088BB370:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2072)));
    aot_gpr[4] = (aot_gpr[4] ^ 1u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB464;
      }
      goto L_088BB388;
    }
L_088BB388:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088BB3E0;
      }
      goto L_088BB398;
    }
L_088BB398:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28044)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_088BB3E0;
      }
      goto L_088BB3A8;
    }
L_088BB3A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28044)));
    aot_gpr[4] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BB3E0;
      }
      goto L_088BB3B8;
    }
L_088BB3B8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(28084)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BB3E0;
      }
      goto L_088BB3C8;
    }
L_088BB3C8:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(28084), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088BB3E0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27476)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 118u, 0x088AFA14u>(ctx, &aot_mem) && ctx.pc == 0x088BB3E0u) goto L_088BB3E0;
    return;
L_088BB3E0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28044)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_088BB464;
      }
      goto L_088BB3F0;
    }
L_088BB3F0:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x088BB3FCu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 40u, 0x0882C3D8u>(ctx, &aot_mem) && ctx.pc == 0x088BB3FCu) goto L_088BB3FC;
    return;
L_088BB3FC:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28044)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088BB43C;
      }
      goto L_088BB414;
    }
L_088BB414:
    aot_gpr[6] = (aot_gpr[5] << 2u);
    goto L_088BB418;
L_088BB418:
    aot_gpr[6] = (aot_gpr[21] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28044)));
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_088BB418;
      }
      goto L_088BB43C;
    }
L_088BB43C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(128)));
    aot_gpr[31] = (0x088BB448u);
    aot_gpr[30] = (aot_gpr[4] + aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088BB448u) goto L_088BB448;
    return;
L_088BB448:
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(64), aot_gpr[30]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1900)));
    aot_gpr[31] = (0x088BB464u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 21u, 0x088BC15Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB464u) goto L_088BB464;
    return;
L_088BB464:
    aot_gpr[4] = (16192u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (16000u << 16u);
      if (branch_taken) {
          goto L_088BB494;
      }
      goto L_088BB47C;
    }
L_088BB47C:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[24] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BB494;
      }
      goto L_088BB490;
    }
L_088BB490:
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_088BB494;
L_088BB494:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[23]);
    goto L_088BB49C;
L_088BB49C:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    goto L_088BB4A0;
L_088BB4A0:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[19] << 5u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 161u, 0x088BAE28u>(ctx, &aot_mem); return;
      }
      goto L_088BB4B0;
    }
L_088BB4B0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB504;
      }
      goto L_088BB4B8;
    }
L_088BB4B8:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB504;
      }
      goto L_088BB4C8;
    }
L_088BB4C8:
    aot_gpr[4] = (aot_gpr[16] << 5u);
    goto L_088BB4CC;
L_088BB4CC:
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x088BB4F4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 40u, 0x0882C3D8u>(ctx, &aot_mem) && ctx.pc == 0x088BB4F4u) goto L_088BB4F4;
    return;
L_088BB4F4:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[16] << 5u);
      if (branch_taken) {
          goto L_088BB4CC;
      }
      goto L_088BB504;
    }
L_088BB504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBAB4;
      }
      goto L_088BB50C;
    }
L_088BB50C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BBAAC;
      }
      goto L_088BB524;
    }
L_088BB524:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(704)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7456));
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BB580;
      }
      goto L_088BB548;
    }
L_088BB548:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(704)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6880));
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088BB580;
      }
      goto L_088BB56C;
    }
L_088BB56C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28056)));
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28056), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088BB580;
L_088BB580:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27464)));
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[31] = (0x088BB594u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28056)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 14u, 0x088AF150u>(ctx, &aot_mem) && ctx.pc == 0x088BB594u) goto L_088BB594;
    return;
L_088BB594:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28056)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BB64C;
      }
      goto L_088BB5AC;
    }
L_088BB5AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088BB5BCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0233_entry, 233u, 46u, 0x088ED59Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB5BCu) goto L_088BB5BC;
    return;
L_088BB5BC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088BB5C8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 40u, 0x0882C3D8u>(ctx, &aot_mem) && ctx.pc == 0x088BB5C8u) goto L_088BB5C8;
    return;
L_088BB5C8:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(28037), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (0u | 0u);
    goto L_088BB5D4;
L_088BB5D4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088BB5F0;
      }
      goto L_088BB5E8;
    }
L_088BB5E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_088BB5F0;
L_088BB5F0:
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088BB644;
      }
      goto L_088BB5FC;
    }
L_088BB5FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    aot_gpr[5] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088BB63C;
      }
      goto L_088BB620;
    }
L_088BB620:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    aot_gpr[5] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x088BB63Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 75u, 0x088B979Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB63Cu) goto L_088BB63C;
    return;
L_088BB63C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088BB5D4;
      }
      goto L_088BB644;
    }
L_088BB644:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBAAC;
      }
      goto L_088BB64C;
    }
L_088BB64C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(28038)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BBA58;
      }
      goto L_088BB65C;
    }
L_088BB65C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(368)));
    aot_gpr[31] = (0x088BB674u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 65u, 0x0894B49Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB674u) goto L_088BB674;
    return;
L_088BB674:
    aot_gpr[31] = (0x088BB67Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 63u, 0x0894B488u>(ctx, &aot_mem) && ctx.pc == 0x088BB67Cu) goto L_088BB67C;
    return;
L_088BB67C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28096)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_088BBA58;
      }
      goto L_088BB694;
    }
L_088BB694:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
    goto L_088BB698;
L_088BB698:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28048)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[19]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088BB6C4;
      }
      goto L_088BB6BC;
    }
L_088BB6BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_088BB6C4;
L_088BB6C4:
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088BB6F4;
      }
      goto L_088BB6D0;
    }
L_088BB6D0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088BB6EC;
      }
      goto L_088BB6E4;
    }
L_088BB6E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_088BB6EC;
L_088BB6EC:
    aot_gpr[20] = (aot_gpr[20] - aot_gpr[5]);
    aot_gpr[4] = (2215u << 16u);
    goto L_088BB6F4;
L_088BB6F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    aot_gpr[5] = (aot_gpr[20] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[9] = (16928u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(129));
    aot_gpr[31] = (0x088BB728u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 62u, 0x088B962Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB728u) goto L_088BB728;
    return;
L_088BB728:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBA40;
      }
      goto L_088BB734;
    }
L_088BB734:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BB7C8;
      }
      goto L_088BB744;
    }
L_088BB744:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28048)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28040)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088BB76C;
      }
      goto L_088BB764;
    }
L_088BB764:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_088BB76C;
L_088BB76C:
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_088BB79C;
      }
      goto L_088BB778;
    }
L_088BB778:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28040)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088BB794;
      }
      goto L_088BB78C;
    }
L_088BB78C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_088BB794;
L_088BB794:
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    aot_gpr[5] = (2215u << 16u);
    goto L_088BB79C;
L_088BB79C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28040)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[31] = (0x088BB7B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 75u, 0x088B979Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB7B8u) goto L_088BB7B8;
    return;
L_088BB7B8:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB744;
      }
      goto L_088BB7C8;
    }
L_088BB7C8:
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28048), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28040)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088BB7F0;
      }
      goto L_088BB7E8;
    }
L_088BB7E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_088BB7F0;
L_088BB7F0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28048)));
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BB80C;
      }
      goto L_088BB804;
    }
L_088BB804:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28048), 0u);
    goto L_088BB80C;
L_088BB80C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28096)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB8D4;
      }
      goto L_088BB824;
    }
L_088BB824:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28048)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28040)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088BB84C;
      }
      goto L_088BB844;
    }
L_088BB844:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_088BB84C;
L_088BB84C:
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_088BB87C;
      }
      goto L_088BB858;
    }
L_088BB858:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28040)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088BB874;
      }
      goto L_088BB86C;
    }
L_088BB86C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_088BB874;
L_088BB874:
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    aot_gpr[5] = (2215u << 16u);
    goto L_088BB87C;
L_088BB87C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28040)));
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_088BB8BC;
      }
      goto L_088BB8A0;
    }
L_088BB8A0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28040)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[31] = (0x088BB8BCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 74u, 0x088B9784u>(ctx, &aot_mem) && ctx.pc == 0x088BB8BCu) goto L_088BB8BC;
    return;
L_088BB8BC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28096)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BB824;
      }
      goto L_088BB8D4;
    }
L_088BB8D4:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28100), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(129)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088BBA38;
      }
      goto L_088BB8E8;
    }
L_088BB8E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28052)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28052), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(27460)));
    aot_gpr[6] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(148), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28072)));
    if (aot_gpr[5] != aot_gpr[4]) {
    aot_gpr[16] = (2215u << 16u);
        goto L_088BB9BC;
    }
    goto L_088BB910;
L_088BB910:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1900)));
    aot_gpr[31] = (0x088BB920u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 21u, 0x088BC15Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB920u) goto L_088BB920;
    return;
L_088BB920:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088BB92Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 40u, 0x0882C3D8u>(ctx, &aot_mem) && ctx.pc == 0x088BB92Cu) goto L_088BB92C;
    return;
L_088BB92C:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(28037), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28056)));
    aot_gpr[16] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(120), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088BB944;
L_088BB944:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088BB960;
      }
      goto L_088BB958;
    }
L_088BB958:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_088BB960;
L_088BB960:
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088BB9B4;
      }
      goto L_088BB96C;
    }
L_088BB96C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    aot_gpr[5] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088BB9AC;
      }
      goto L_088BB990;
    }
L_088BB990:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    aot_gpr[5] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[31] = (0x088BB9ACu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 75u, 0x088B979Cu>(ctx, &aot_mem) && ctx.pc == 0x088BB9ACu) goto L_088BB9AC;
    return;
L_088BB9AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088BB944;
      }
      goto L_088BB9B4;
    }
L_088BB9B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBA38;
      }
      goto L_088BB9BC;
    }
L_088BB9BC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28068)));
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28056)));
    aot_gpr[17] = (2215u << 16u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(27464)));
    aot_gpr[31] = (0x088BB9DCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(28056), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 14u, 0x088AF150u>(ctx, &aot_mem) && ctx.pc == 0x088BB9DCu) goto L_088BB9DC;
    return;
L_088BB9DC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28068)));
    aot_gpr[5] = (20224u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(27464)));
      if (branch_taken) {
          goto L_088BBA0C;
      }
      goto L_088BB9F8;
    }
L_088BB9F8:
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28068)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088BBA30;
      }
      goto L_088BBA0C;
    }
L_088BBA0C:
    aot_gpr[5] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28068)));
    aot_gpr[5] = (20224u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    aot_gpr[5] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    goto L_088BBA30;
L_088BBA30:
    aot_gpr[31] = (0x088BBA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 18u, 0x088AF194u>(ctx, &aot_mem) && ctx.pc == 0x088BBA38u) goto L_088BBA38;
    return;
L_088BBA38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBA58;
      }
      goto L_088BBA40;
    }
L_088BBA40:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28096)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
        goto L_088BB698;
    }
    goto L_088BBA58;
L_088BBA58:
    aot_gpr[16] = (0u | 0u);
    goto L_088BBA5C;
L_088BBA5C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088BBA78;
      }
      goto L_088BBA70;
    }
L_088BBA70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_088BBA78;
L_088BBA78:
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_088BBAAC;
      }
      goto L_088BBA84;
    }
L_088BBA84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28040)));
    aot_gpr[6] = (aot_gpr[16] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[31] = (0x088BBAA4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 7u, 0x088B9090u>(ctx, &aot_mem) && ctx.pc == 0x088BBAA4u) goto L_088BBAA4;
    return;
L_088BBAA4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088BBA5C;
      }
      goto L_088BBAAC;
    }
L_088BBAAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBAB4;
      }
      goto L_088BBAB4;
    }
L_088BBAB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBD9C;
      }
      goto L_088BBABC;
    }
L_088BBABC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BBD94;
      }
      goto L_088BBAD8;
    }
L_088BBAD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(384)));
    aot_fpr[12] = aot_fpr[20] - aot_fpr[12];
    aot_fpr[20] = aot_fpr[12] / aot_fpr[20];
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_088BBB0C;
      }
      goto L_088BBB04;
    }
L_088BBB04:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_088BBB20;
      }
      goto L_088BBB0C;
    }
L_088BBB0C:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
        goto L_088BBB20;
    }
    goto L_088BBB20;
L_088BBB20:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-7504));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (aot_gpr[18] - aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(100), aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBB4C;
      }
      goto L_088BBB44;
    }
L_088BBB44:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BBD90;
      }
      goto L_088BBB4C;
    }
L_088BBB4C:
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (16192u << 16u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088BBB8C;
      }
      goto L_088BBB6C;
    }
L_088BBB6C:
    aot_gpr[4] = (16000u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BBB8C;
      }
      goto L_088BBB84;
    }
L_088BBB84:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088BBC3C;
      }
      goto L_088BBB8C;
    }
L_088BBB8C:
    { const bool branch_taken = aot_gpr[20] != aot_gpr[21];
    // nop
      if (branch_taken) {
          goto L_088BBC3C;
      }
      goto L_088BBB94;
    }
L_088BBB94:
    aot_gpr[4] = (16042u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 32506u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (16042u << 16u);
      if (branch_taken) {
          goto L_088BBBE8;
      }
      goto L_088BBBB0;
    }
L_088BBBB0:
    aot_gpr[4] = (aot_gpr[4] | 32506u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BBBE8;
      }
      goto L_088BBBC8;
    }
L_088BBBC8:
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(27472)));
    aot_gpr[31] = (0x088BBBD8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 73u, 0x088B2670u>(ctx, &aot_mem) && ctx.pc == 0x088BBBD8u) goto L_088BBBD8;
    return;
L_088BBBD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(27472)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x088BBBE8u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 72u, 0x088B265Cu>(ctx, &aot_mem) && ctx.pc == 0x088BBBE8u) goto L_088BBBE8;
    return;
L_088BBBE8:
    aot_gpr[4] = (16170u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 32506u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (16170u << 16u);
      if (branch_taken) {
          goto L_088BBC3C;
      }
      goto L_088BBC04;
    }
L_088BBC04:
    aot_gpr[4] = (aot_gpr[4] | 32506u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[22] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BBC3C;
      }
      goto L_088BBC1C;
    }
L_088BBC1C:
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(27472)));
    aot_gpr[31] = (0x088BBC2Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 73u, 0x088B2670u>(ctx, &aot_mem) && ctx.pc == 0x088BBC2Cu) goto L_088BBC2C;
    return;
L_088BBC2C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(27472)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[31] = (0x088BBC3Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 72u, 0x088B265Cu>(ctx, &aot_mem) && ctx.pc == 0x088BBC3Cu) goto L_088BBC3C;
    return;
L_088BBC3C:
    aot_gpr[4] = (16000u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[20] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (16192u << 16u);
      if (branch_taken) {
          goto L_088BBD88;
      }
      goto L_088BBC54;
    }
L_088BBC54:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[22] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088BBD88;
      }
      goto L_088BBC68;
    }
L_088BBC68:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[20]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBD88;
      }
      goto L_088BBC78;
    }
L_088BBC78:
    aot_gpr[21] = (aot_gpr[20] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[21]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088BBD58;
      }
      goto L_088BBC84;
    }
L_088BBC84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(108)));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBC98;
      }
      goto L_088BBC94;
    }
L_088BBC94:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(108), aot_gpr[19]);
    goto L_088BBC98;
L_088BBC98:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(27472)));
    aot_gpr[31] = (0x088BBCACu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 73u, 0x088B2670u>(ctx, &aot_mem) && ctx.pc == 0x088BBCACu) goto L_088BBCAC;
    return;
L_088BBCAC:
    aot_gpr[5] = (16512u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(27472)));
    aot_gpr[31] = (0x088BBCBCu);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 79u, 0x088B26D0u>(ctx, &aot_mem) && ctx.pc == 0x088BBCBCu) goto L_088BBCBC;
    return;
L_088BBCBC:
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[31] = (0x088BBCC8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 54u, 0x088B03BCu>(ctx, &aot_mem) && ctx.pc == 0x088BBCC8u) goto L_088BBCC8;
    return;
L_088BBCC8:
    aot_gpr[31] = (0x088BBCD0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(27472)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 79u, 0x088B26D0u>(ctx, &aot_mem) && ctx.pc == 0x088BBCD0u) goto L_088BBCD0;
    return;
L_088BBCD0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(27472)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088BBCE4u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 72u, 0x088B265Cu>(ctx, &aot_mem) && ctx.pc == 0x088BBCE4u) goto L_088BBCE4;
    return;
L_088BBCE4:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (0u | 7u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088BBD50;
      }
      goto L_088BBCF8;
    }
L_088BBCF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    { const bool branch_taken = aot_gpr[16] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088BBD50;
      }
      goto L_088BBD08;
    }
L_088BBD08:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[21]);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27416)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), aot_gpr[6]);
      if (branch_taken) {
          goto L_088BBD38;
      }
      goto L_088BBD30;
    }
L_088BBD30:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(132));
      if (branch_taken) {
          goto L_088BBD3C;
      }
      goto L_088BBD38;
    }
L_088BBD38:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(136));
    goto L_088BBD3C;
L_088BBD3C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[31] = (0x088BBD50u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 157u, 0x088B1AE8u>(ctx, &aot_mem) && ctx.pc == 0x088BBD50u) goto L_088BBD50;
    return;
L_088BBD50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBD88;
      }
      goto L_088BBD58;
    }
L_088BBD58:
    { const bool branch_taken = aot_gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_088BBD88;
      }
      goto L_088BBD60;
    }
L_088BBD60:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-7504));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(27472)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088BBD88u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 72u, 0x088B265Cu>(ctx, &aot_mem) && ctx.pc == 0x088BBD88u) goto L_088BBD88;
    return;
L_088BBD88:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[21]);
    goto L_088BBD90;
L_088BBD90:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_088BBD94;
L_088BBD94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBD9C;
      }
      goto L_088BBD9C;
    }
L_088BBD9C:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(28038), static_cast<std::uint8_t>(0u));
    goto L_088BBDA4;
L_088BBDA4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(140)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(144)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(148)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(152)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(160)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(164)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(168)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BBDE0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28032), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BBE00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088BBE60;
      }
      goto L_088BBE1C;
    }
L_088BBE1C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3432));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088BBE34u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x088BBE34u) goto L_088BBE34;
    return;
L_088BBE34:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088BBE60;
      }
      goto L_088BBE40;
    }
L_088BBE40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088BBE60u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088BBE60u) goto L_088BBE60;
    return;
L_088BBE60:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BBE74:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x088BBE90u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x088BBE90u) goto L_088BBE90;
    return;
L_088BBE90:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3432));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBEB4;
      }
      goto L_088BBEA8;
    }
L_088BBEA8:
    aot_gpr[31] = (0x088BBEB0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0587_entry, 587u, 185u, 0x08A4FE4Cu>(ctx, &aot_mem) && ctx.pc == 0x088BBEB0u) goto L_088BBEB0;
    return;
L_088BBEB0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(96), aot_gpr[2]);
    goto L_088BBEB4;
L_088BBEB4:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BBECC:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28112), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BBEEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x088BBF0Cu);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 58u, 0x0886D3ACu>(ctx, &aot_mem) && ctx.pc == 0x088BBF0Cu) goto L_088BBF0C;
    return;
L_088BBF0C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(104));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_088BBFB0;
    }
    goto L_088BBF2C;
L_088BBF2C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(104));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_088BBFB0;
    }
    goto L_088BBF48;
L_088BBF48:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBFA8;
      }
      goto L_088BBF58;
    }
L_088BBF58:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[31] = (0x088BBF68u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(26508)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 115u, 0x088A2788u>(ctx, &aot_mem) && ctx.pc == 0x088BBF68u) goto L_088BBF68;
    return;
L_088BBF68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(26508)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088BBF78u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 115u, 0x088A2788u>(ctx, &aot_mem) && ctx.pc == 0x088BBF78u) goto L_088BBF78;
    return;
L_088BBF78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(26508)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(85));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (0u | 1u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_088BBFA0;
    }
    goto L_088BBFA0;
L_088BBFA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 10u, 0x088BC094u>(ctx, &aot_mem); return;
      }
      goto L_088BBFA8;
    }
L_088BBFA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 10u, 0x088BC094u>(ctx, &aot_mem); return;
      }
      goto L_088BBFB0;
    }
L_088BBFB0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(104));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(104));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_088BBFFC;
    }
    goto L_088BBFDC;
L_088BBFDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(104));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 4u, 0x088BC04Cu>(ctx, &aot_mem); return;
      }
      goto L_088BBFF8;
    }
L_088BBFF8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088BBFFC;
L_088BBFFC:
    aot_gpr[6] = (aot_gpr[4] << 2u);
    ctx.pc = 0x088BC000u; return;
}

void recomp_unit_0183(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0183_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_183(Runtime &runtime) {
    runtime.register_generated_unit(183u, 0x088BB000u, 4096u, &recomp_unit_0183, &recomp_unit_0183_entry);
    runtime.register_function(0x088BB004u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB014u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB024u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB034u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB044u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB084u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB090u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB0A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB0BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB0D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB0DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB0ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB0F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB110u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB12Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB138u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB13Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB14Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB15Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB168u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB188u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB198u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB1ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB1C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB1DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB1ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB1F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB1FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB214u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB218u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB240u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB248u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB25Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB268u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB270u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB290u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB2A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB2B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB2C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB2E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB308u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB318u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB330u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB344u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB360u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB370u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB388u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB398u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB3A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB3B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB3C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB3E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB3F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB3FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB414u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB418u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB43Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB448u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB464u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB47Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB490u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB494u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB49Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB4A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB4B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB4B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB4C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB4CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB4F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB504u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB50Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB524u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB548u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB56Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB580u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB594u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB5ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB5BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB5C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB5D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB5E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB5F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB5FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB620u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB63Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB644u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB64Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB65Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB674u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB67Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB694u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB698u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB6BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB6C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB6D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB6E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB6ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB6F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB728u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB734u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB744u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB764u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB76Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB778u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB78Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB794u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB79Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB7B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB7C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB7E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB7F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB804u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB80Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB824u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB844u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB84Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB858u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB86Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB874u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB87Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB8A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB8BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB8D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB8E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB910u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB920u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB92Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB944u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB958u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB960u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB96Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB990u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB9ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB9B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB9BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB9DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BB9F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBA0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBA30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBA38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBA40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBA58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBA5Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBA70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBA78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBA84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBAA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBAACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBAB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBABCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBAD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBB04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBB0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBB20u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBB44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBB4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBB6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBB84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBB8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBB94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBBB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBBC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBBD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBBE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBC04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBC1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBC2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBC3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBC54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBC68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBC78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBC84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBC94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBC98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBCACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBCBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBCC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBCD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBCE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBCF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBD08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBD30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBD38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBD3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBD50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBD58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBD60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBD88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBD90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBD94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBD9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBDA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBDE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBE00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBE1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBE34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBE40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBE60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBE74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBE90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBEA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBEB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBEB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBECCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBEECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBF0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBF2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBF48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBF58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBF68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBF78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBFA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBFA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBFB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBFDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBFF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x088BBFFCu, &recomp_unit_0183, "recomp_unit_0183");
}
} // namespace psprecomp
