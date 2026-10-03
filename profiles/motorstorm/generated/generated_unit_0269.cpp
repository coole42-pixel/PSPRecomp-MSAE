#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0269[957] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0,
    0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 15, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    20, 21, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 27, 0, 0, 28, 0, 0, 0, 0, 29, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0,
    0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 52, 0, 0,
    0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 57, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 64, 65, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 84, 0, 0,
    0, 85, 0, 86, 0, 0, 0, 87, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 95, 0, 96, 0, 0, 97, 0, 0,
    98, 0, 99, 100, 0, 0, 101, 0, 102, 0, 103, 104, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0,
    112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0,
    125, 0, 126, 0, 0, 0, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 136, 0, 0,
    0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0,
    0, 0, 143, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 146, 147, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 151, 152,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 156, 157, 0, 158, 0, 0, 0, 159, 160, 0, 0, 0, 0, 0, 161,
    0, 162, 0, 163, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 171, 172, 0, 173, 0, 0,
    0, 174, 175, 0, 0, 0, 0, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 186,
    187, 0, 188, 0, 189, 190, 0, 0, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 198, 0, 0, 0, 199, 0, 200, 0, 0,
    0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0,
    0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 216,
};
void recomp_unit_0269_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08911000u;
        entry_id = (entry_delta < 3828u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0269[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08911000;
    case 2u: goto L_08911004;
    case 3u: goto L_08911038;
    case 4u: goto L_08911048;
    case 5u: goto L_08911074;
    case 6u: goto L_0891108C;
    case 7u: goto L_089110A0;
    case 8u: goto L_08911118;
    case 9u: goto L_08911134;
    case 10u: goto L_0891115C;
    case 11u: goto L_08911170;
    case 12u: goto L_089111C4;
    case 13u: goto L_089111E4;
    case 14u: goto L_089111F4;
    case 15u: goto L_089111F8;
    case 16u: goto L_08911218;
    case 17u: goto L_08911220;
    case 18u: goto L_08911234;
    case 19u: goto L_08911274;
    case 20u: goto L_08911280;
    case 21u: goto L_08911284;
    case 22u: goto L_0891129C;
    case 23u: goto L_089112A4;
    case 24u: goto L_089112C0;
    case 25u: goto L_089112C8;
    case 26u: goto L_089112DC;
    case 27u: goto L_08911304;
    case 28u: goto L_08911310;
    case 29u: goto L_08911324;
    case 30u: goto L_08911328;
    case 31u: goto L_08911348;
    case 32u: goto L_08911354;
    case 33u: goto L_0891135C;
    case 34u: goto L_08911368;
    case 35u: goto L_08911388;
    case 36u: goto L_08911394;
    case 37u: goto L_089113C8;
    case 38u: goto L_08911400;
    case 39u: goto L_08911410;
    case 40u: goto L_08911448;
    case 41u: goto L_08911460;
    case 42u: goto L_08911474;
    case 43u: goto L_089114BC;
    case 44u: goto L_089114C4;
    case 45u: goto L_089114CC;
    case 46u: goto L_089114F4;
    case 47u: goto L_0891152C;
    case 48u: goto L_0891153C;
    case 49u: goto L_08911548;
    case 50u: goto L_08911558;
    case 51u: goto L_08911568;
    case 52u: goto L_08911574;
    case 53u: goto L_08911584;
    case 54u: goto L_089115A0;
    case 55u: goto L_089115C4;
    case 56u: goto L_089115CC;
    case 57u: goto L_089115D4;
    case 58u: goto L_089115DC;
    case 59u: goto L_089115EC;
    case 60u: goto L_08911600;
    case 61u: goto L_08911624;
    case 62u: goto L_0891162C;
    case 63u: goto L_08911634;
    case 64u: goto L_0891163C;
    case 65u: goto L_08911640;
    case 66u: goto L_08911648;
    case 67u: goto L_0891165C;
    case 68u: goto L_08911670;
    case 69u: goto L_08911694;
    case 70u: goto L_0891169C;
    case 71u: goto L_089116A8;
    case 72u: goto L_089116B0;
    case 73u: goto L_089116B8;
    case 74u: goto L_089116C0;
    case 75u: goto L_089116C8;
    case 76u: goto L_089116D4;
    case 77u: goto L_089116E4;
    case 78u: goto L_089116FC;
    case 79u: goto L_08911738;
    case 80u: goto L_08911740;
    case 81u: goto L_08911748;
    case 82u: goto L_08911764;
    case 83u: goto L_0891176C;
    case 84u: goto L_08911774;
    case 85u: goto L_08911784;
    case 86u: goto L_0891178C;
    case 87u: goto L_0891179C;
    case 88u: goto L_089117A0;
    case 89u: goto L_089117C4;
    case 90u: goto L_089117F8;
    case 91u: goto L_08911808;
    case 92u: goto L_08911828;
    case 93u: goto L_0891184C;
    case 94u: goto L_08911858;
    case 95u: goto L_08911860;
    case 96u: goto L_08911868;
    case 97u: goto L_08911874;
    case 98u: goto L_08911880;
    case 99u: goto L_08911888;
    case 100u: goto L_0891188C;
    case 101u: goto L_08911898;
    case 102u: goto L_089118A0;
    case 103u: goto L_089118A8;
    case 104u: goto L_089118AC;
    case 105u: goto L_089118B0;
    case 106u: goto L_089118C0;
    case 107u: goto L_089118D8;
    case 108u: goto L_089118E0;
    case 109u: goto L_089118E8;
    case 110u: goto L_089118F0;
    case 111u: goto L_089118F8;
    case 112u: goto L_08911900;
    case 113u: goto L_08911908;
    case 114u: goto L_08911910;
    case 115u: goto L_08911918;
    case 116u: goto L_08911920;
    case 117u: goto L_08911928;
    case 118u: goto L_08911930;
    case 119u: goto L_08911938;
    case 120u: goto L_08911940;
    case 121u: goto L_08911948;
    case 122u: goto L_08911950;
    case 123u: goto L_08911958;
    case 124u: goto L_08911978;
    case 125u: goto L_08911980;
    case 126u: goto L_08911988;
    case 127u: goto L_0891199C;
    case 128u: goto L_089119A4;
    case 129u: goto L_089119AC;
    case 130u: goto L_089119B4;
    case 131u: goto L_089119BC;
    case 132u: goto L_089119C4;
    case 133u: goto L_089119DC;
    case 134u: goto L_089119E4;
    case 135u: goto L_089119EC;
    case 136u: goto L_089119F4;
    case 137u: goto L_08911A0C;
    case 138u: goto L_08911A20;
    case 139u: goto L_08911A44;
    case 140u: goto L_08911A54;
    case 141u: goto L_08911A60;
    case 142u: goto L_08911A6C;
    case 143u: goto L_08911A88;
    case 144u: goto L_08911A98;
    case 145u: goto L_08911AA0;
    case 146u: goto L_08911AB8;
    case 147u: goto L_08911ABC;
    case 148u: goto L_08911AC4;
    case 149u: goto L_08911ADC;
    case 150u: goto L_08911AF0;
    case 151u: goto L_08911AF8;
    case 152u: goto L_08911AFC;
    case 153u: goto L_08911B10;
    case 154u: goto L_08911B30;
    case 155u: goto L_08911B3C;
    case 156u: goto L_08911B44;
    case 157u: goto L_08911B48;
    case 158u: goto L_08911B50;
    case 159u: goto L_08911B60;
    case 160u: goto L_08911B64;
    case 161u: goto L_08911B7C;
    case 162u: goto L_08911B84;
    case 163u: goto L_08911B8C;
    case 164u: goto L_08911B94;
    case 165u: goto L_08911B9C;
    case 166u: goto L_08911BA4;
    case 167u: goto L_08911BAC;
    case 168u: goto L_08911BB4;
    case 169u: goto L_08911BD4;
    case 170u: goto L_08911BE0;
    case 171u: goto L_08911BE8;
    case 172u: goto L_08911BEC;
    case 173u: goto L_08911BF4;
    case 174u: goto L_08911C04;
    case 175u: goto L_08911C08;
    case 176u: goto L_08911C20;
    case 177u: goto L_08911C28;
    case 178u: goto L_08911C30;
    case 179u: goto L_08911C38;
    case 180u: goto L_08911C40;
    case 181u: goto L_08911C48;
    case 182u: goto L_08911C50;
    case 183u: goto L_08911C58;
    case 184u: goto L_08911C68;
    case 185u: goto L_08911C74;
    case 186u: goto L_08911C7C;
    case 187u: goto L_08911C80;
    case 188u: goto L_08911C88;
    case 189u: goto L_08911C90;
    case 190u: goto L_08911C94;
    case 191u: goto L_08911CA4;
    case 192u: goto L_08911CAC;
    case 193u: goto L_08911CB4;
    case 194u: goto L_08911CBC;
    case 195u: goto L_08911CC4;
    case 196u: goto L_08911CCC;
    case 197u: goto L_08911CD4;
    case 198u: goto L_08911CDC;
    case 199u: goto L_08911CEC;
    case 200u: goto L_08911CF4;
    case 201u: goto L_08911D10;
    case 202u: goto L_08911D20;
    case 203u: goto L_08911D28;
    case 204u: goto L_08911D30;
    case 205u: goto L_08911D50;
    case 206u: goto L_08911D5C;
    case 207u: goto L_08911D78;
    case 208u: goto L_08911D84;
    case 209u: goto L_08911D94;
    case 210u: goto L_08911DA4;
    case 211u: goto L_08911DB0;
    case 212u: goto L_08911E60;
    case 213u: goto L_08911EB4;
    case 214u: goto L_08911EDC;
    case 215u: goto L_08911EEC;
    case 216u: goto L_08911EF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08911000:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_08911004;
L_08911004:
    aot_gpr[4] = (17595u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 32768u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_gpr[4] = (17224u << 16u);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[15] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[15] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08911048;
      }
      goto L_08911038;
    }
L_08911038:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(356)));
    aot_gpr[4] = (17224u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    goto L_08911048;
L_08911048:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (13702u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 14269u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_0891108C;
      }
      goto L_08911074;
    }
L_08911074:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_089110A0;
      }
      goto L_0891108C;
    }
L_0891108C:
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_089110A0;
L_089110A0:
    aot_gpr[4] = (48896u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<21u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (16000u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[14] + aot_fpr[22];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<22u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[24] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[24] = fs * ft; }
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    aot_gpr[4] = (16128u << 16u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x08911118u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 24u, 0x088842F0u>(ctx, &aot_mem) && ctx.pc == 0x08911118u) goto L_08911118;
    return;
L_08911118:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(352)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[24];
    aot_gpr[5] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(352), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x08911134u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(368)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 171u, 0x0894BC74u>(ctx, &aot_mem) && ctx.pc == 0x08911134u) goto L_08911134;
    return;
L_08911134:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[20];
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
        goto L_08911170;
    }
    goto L_0891115C;
L_0891115C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (16000u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    goto L_08911170;
L_08911170:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (16608u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[4] = (5u << 16u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x089111C4u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 124u, 0x088CB888u>(ctx, &aot_mem) && ctx.pc == 0x089111C4u) goto L_089111C4;
    return;
L_089111C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(412)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) & 0x7FFFFFFFu);
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089111F8;
    }
    goto L_089111E4;
L_089111E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(416)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911354;
      }
      goto L_089111F4;
    }
L_089111F4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089111F8;
L_089111F8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (16256u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08911220;
      }
      goto L_08911218;
    }
L_08911218:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_08911234;
      }
      goto L_08911220;
    }
L_08911220:
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
        goto L_08911234;
    }
    goto L_08911234;
L_08911234:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = aot_fpr[13] - aot_fpr[20];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (49024u << 16u);
      if (branch_taken) {
          goto L_08911280;
      }
      goto L_08911274;
    }
L_08911274:
    aot_gpr[4] = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_08911284;
      }
      goto L_08911280;
    }
L_08911280:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_08911284;
L_08911284:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(116)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(116));
      if (branch_taken) {
          goto L_089112A4;
      }
      goto L_0891129C;
    }
L_0891129C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_089112A4;
      }
      goto L_089112A4;
    }
L_089112A4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_089112C8;
      }
      goto L_089112C0;
    }
L_089112C0:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_089112DC;
      }
      goto L_089112C8;
    }
L_089112C8:
    aot_fpr[14] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
        goto L_089112DC;
    }
    goto L_089112DC;
L_089112DC:
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (16416u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (49024u << 16u);
      if (branch_taken) {
          goto L_08911310;
      }
      goto L_08911304;
    }
L_08911304:
    aot_gpr[4] = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_08911328;
      }
      goto L_08911310;
    }
L_08911310:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (49024u << 16u);
      if (branch_taken) {
          goto L_08911328;
      }
      goto L_08911324;
    }
L_08911324:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_08911328;
L_08911328:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) & 0x7FFFFFFFu);
    aot_gpr[4] = (15395u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 55050u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08911354;
      }
      goto L_08911348;
    }
L_08911348:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x08911354u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0248_entry, 248u, 27u, 0x088FC218u>(ctx, &aot_mem) && ctx.pc == 0x08911354u) goto L_08911354;
    return;
L_08911354:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0268_entry, 268u, 122u, 0x08910EB8u>(ctx, &aot_mem); return;
      }
      goto L_0891135C;
    }
L_0891135C:
    aot_gpr[17] = (aot_gpr[17] & 65535u);
    aot_gpr[31] = (0x08911368u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 85u, 0x08A4D698u>(ctx, &aot_mem) && ctx.pc == 0x08911368u) goto L_08911368;
    return;
L_08911368:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x08911388u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 163u, 0x0894BBA8u>(ctx, &aot_mem) && ctx.pc == 0x08911388u) goto L_08911388;
    return;
L_08911388:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x08911394u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 193u, 0x0894BE88u>(ctx, &aot_mem) && ctx.pc == 0x08911394u) goto L_08911394;
    return;
L_08911394:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(160);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089114C4;
      }
      goto L_089113C8;
    }
L_089113C8:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = aot_fpr[12] / aot_fpr[13];
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (16000u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_fpr[12] = aot_fpr[15] - aot_fpr[12];
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08911410;
      }
      goto L_08911400;
    }
L_08911400:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (16000u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    goto L_08911410;
L_08911410:
    aot_gpr[4] = (17455u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(160);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (13702u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 14269u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08911460;
      }
      goto L_08911448;
    }
L_08911448:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(160);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(176);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_08911474;
      }
      goto L_08911460;
    }
L_08911460:
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_08911474;
L_08911474:
    aot_gpr[4] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7652)));
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(176);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(176);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (16025u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[4] = (aot_gpr[4] | 39322u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(176));
    aot_fpr[12] = aot_fpr[14] + aot_fpr[12];
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (0x089114BCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 171u, 0x0894BC74u>(ctx, &aot_mem) && ctx.pc == 0x089114BCu) goto L_089114BC;
    return;
L_089114BC:
    aot_gpr[31] = (0x089114C4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 176u, 0x0894BDA0u>(ctx, &aot_mem) && ctx.pc == 0x089114C4u) goto L_089114C4;
    return;
L_089114C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0268_entry, 268u, 122u, 0x08910EB8u>(ctx, &aot_mem); return;
      }
      goto L_089114CC;
    }
L_089114CC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089114F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2219u << 16u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-20704));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-20224), 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0891152Cu);
    aot_gpr[6] = (0u | 480u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0891152Cu) goto L_0891152C;
    return;
L_0891152C:
    aot_gpr[17] = (2193u << 16u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(6084));
    aot_gpr[16] = (5u << 16u);
    goto L_0891153C;
L_0891153C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08911548u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 179u, 0x0894BDC4u>(ctx, &aot_mem) && ctx.pc == 0x08911548u) goto L_08911548;
    return;
L_08911548:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08911558u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 195u, 0x0894BEB4u>(ctx, &aot_mem) && ctx.pc == 0x08911558u) goto L_08911558;
    return;
L_08911558:
    aot_gpr[5] = (aot_gpr[19] & 65535u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x08911568u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 78u, 0x0894B594u>(ctx, &aot_mem) && ctx.pc == 0x08911568u) goto L_08911568;
    return;
L_08911568:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x08911574u);
    aot_gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 67u, 0x0894B4C8u>(ctx, &aot_mem) && ctx.pc == 0x08911574u) goto L_08911574;
    return;
L_08911574:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_0891153C;
      }
      goto L_08911584;
    }
L_08911584:
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
L_089115A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2219u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-20704));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-20224), 0u);
    aot_gpr[17] = (0u | 0u);
    goto L_089115C4;
L_089115C4:
    aot_gpr[31] = (0x089115CCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 60u, 0x0894B468u>(ctx, &aot_mem) && ctx.pc == 0x089115CCu) goto L_089115CC;
    return;
L_089115CC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089115DC;
      }
      goto L_089115D4;
    }
L_089115D4:
    aot_gpr[31] = (0x089115DCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 49u, 0x0894B364u>(ctx, &aot_mem) && ctx.pc == 0x089115DCu) goto L_089115DC;
    return;
L_089115DC:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089115C4;
      }
      goto L_089115EC;
    }
L_089115EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911600:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2219u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-20704));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[4] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-20224), 0u);
    aot_gpr[17] = (0u | 0u);
    goto L_08911624;
L_08911624:
    aot_gpr[31] = (0x0891162Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 60u, 0x0894B468u>(ctx, &aot_mem) && ctx.pc == 0x0891162Cu) goto L_0891162C;
    return;
L_0891162C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08911640;
      }
      goto L_08911634;
    }
L_08911634:
    aot_gpr[31] = (0x0891163Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 49u, 0x0894B364u>(ctx, &aot_mem) && ctx.pc == 0x0891163Cu) goto L_0891163C;
    return;
L_0891163C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08911640;
L_08911640:
    aot_gpr[31] = (0x08911648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 31u, 0x0894B1E8u>(ctx, &aot_mem) && ctx.pc == 0x08911648u) goto L_08911648;
    return;
L_08911648:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08911624;
      }
      goto L_0891165C;
    }
L_0891165C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911670:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-20224)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891169C;
      }
      goto L_08911694;
    }
L_08911694:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089116E4;
      }
      goto L_0891169C;
    }
L_0891169C:
    aot_gpr[16] = (2219u << 16u);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-20704));
    goto L_089116A8;
L_089116A8:
    aot_gpr[31] = (0x089116B0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 60u, 0x0894B468u>(ctx, &aot_mem) && ctx.pc == 0x089116B0u) goto L_089116B0;
    return;
L_089116B0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089116D4;
      }
      goto L_089116B8;
    }
L_089116B8:
    aot_gpr[31] = (0x089116C0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0268_entry, 268u, 108u, 0x08910D70u>(ctx, &aot_mem) && ctx.pc == 0x089116C0u) goto L_089116C0;
    return;
L_089116C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089116D4;
      }
      goto L_089116C8;
    }
L_089116C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-20224)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-20224), aot_gpr[4]);
    goto L_089116D4;
L_089116D4:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_089116A8;
      }
      goto L_089116E4;
    }
L_089116E4:
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
L_089116FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[18] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-20704));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[19] = (0u | 0u);
    goto L_08911738;
L_08911738:
    aot_gpr[31] = (0x08911740u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0327_entry, 327u, 60u, 0x0894B468u>(ctx, &aot_mem) && ctx.pc == 0x08911740u) goto L_08911740;
    return;
L_08911740:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891178C;
      }
      goto L_08911748;
    }
L_08911748:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08911764u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0268_entry, 268u, 103u, 0x08910CD4u>(ctx, &aot_mem) && ctx.pc == 0x08911764u) goto L_08911764;
    return;
L_08911764:
    aot_gpr[31] = (0x0891176Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0268_entry, 268u, 108u, 0x08910D70u>(ctx, &aot_mem) && ctx.pc == 0x0891176Cu) goto L_0891176C;
    return;
L_0891176C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911784;
      }
      goto L_08911774;
    }
L_08911774:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20224)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-20224), aot_gpr[5]);
    goto L_08911784;
L_08911784:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_089117A0;
      }
      goto L_0891178C;
    }
L_0891178C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08911738;
      }
      goto L_0891179C;
    }
L_0891179C:
    aot_gpr[2] = (0u | 0u);
    goto L_089117A0;
L_089117A0:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
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
L_089117C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (aot_gpr[5] << 5u);
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-20704));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089117F8u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0268_entry, 268u, 119u, 0x08910E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089117F8u) goto L_089117F8;
    return;
L_089117F8:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911808:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2216u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-30488), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911828:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[3];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
      if (branch_taken) {
          goto L_08911948;
      }
      goto L_0891184C;
    }
L_0891184C:
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08911930;
      }
      goto L_08911858;
    }
L_08911858:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08911920;
      }
      goto L_08911860;
    }
L_08911860:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_089118C0;
      }
      goto L_08911868;
    }
L_08911868:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[6];
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0891188C;
      }
      goto L_08911874;
    }
L_08911874:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08911910;
      }
      goto L_08911880;
    }
L_08911880:
    { const bool branch_taken = aot_gpr[16] == aot_gpr[8];
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0891188C;
      }
      goto L_08911888;
    }
L_08911888:
    aot_gpr[17] = (aot_gpr[16] + 0u);
    goto L_0891188C;
L_0891188C:
    aot_gpr[9] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[9];
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08911900;
      }
      goto L_08911898;
    }
L_08911898:
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[11] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089118E8;
      }
      goto L_089118A0;
    }
L_089118A0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[11];
    // nop
      if (branch_taken) {
          goto L_089118D8;
      }
      goto L_089118A8;
    }
L_089118A8:
    aot_gpr[2] = (aot_gpr[4] + 0u);
    goto L_089118AC;
L_089118AC:
    aot_gpr[6] = (aot_gpr[18] + 0u);
    goto L_089118B0;
L_089118B0:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[18]) >> 31u));
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089118C0u);
    aot_gpr[8] = (aot_gpr[17] + 0u);
    ctx.pc = 0x08A5B29Cu;
    return;
L_089118C0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089118D8:
    aot_gpr[31] = (0x089118E0u);
    // nop
    ctx.pc = 0x08A5B1C4u;
    return;
L_089118E0:
    aot_gpr[6] = (aot_gpr[18] + 0u);
    goto L_089118B0;
L_089118E8:
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (aot_gpr[4] + 0u);
        goto L_089118AC;
    }
    goto L_089118F0;
L_089118F0:
    aot_gpr[31] = (0x089118F8u);
    // nop
    ctx.pc = 0x08A5B1B4u;
    return;
L_089118F8:
    aot_gpr[6] = (aot_gpr[18] + 0u);
    goto L_089118B0;
L_08911900:
    aot_gpr[31] = (0x08911908u);
    // nop
    ctx.pc = 0x08A5B1BCu;
    return;
L_08911908:
    aot_gpr[6] = (aot_gpr[18] + 0u);
    goto L_089118B0;
L_08911910:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_0891188C;
      }
      goto L_08911918;
    }
L_08911918:
    aot_gpr[17] = (aot_gpr[16] + 0u);
    goto L_0891188C;
L_08911920:
    aot_gpr[31] = (0x08911928u);
    // nop
    ctx.pc = 0x08A5B1C4u;
    return;
L_08911928:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    goto L_08911860;
L_08911930:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08911860;
      }
      goto L_08911938;
    }
L_08911938:
    aot_gpr[31] = (0x08911940u);
    // nop
    ctx.pc = 0x08A5B1B4u;
    return;
L_08911940:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    goto L_08911860;
L_08911948:
    aot_gpr[31] = (0x08911950u);
    // nop
    ctx.pc = 0x08A5B1BCu;
    return;
L_08911950:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    goto L_08911860;
L_08911958:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (0u << 16u);
    aot_gpr[3] = (aot_gpr[4] + static_cast<std::uint32_t>(0));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[3] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
      if (branch_taken) {
          goto L_089119F4;
      }
      goto L_08911978;
    }
L_08911978:
    aot_gpr[31] = (0x08911980u);
    // nop
    ctx.pc = 0x00000000u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08911980u) goto L_08911980;
    return;
L_08911980:
    aot_gpr[31] = (0x08911988u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0562_entry, 562u, 89u, 0x08A364D0u>(ctx, &aot_mem) && ctx.pc == 0x08911988u) goto L_08911988;
    return;
L_08911988:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[3] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(-26696));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[3] + static_cast<std::uint32_t>(-26688));
      if (branch_taken) {
          goto L_089119AC;
      }
      goto L_0891199C;
    }
L_0891199C:
    aot_gpr[31] = (0x089119A4u);
    // nop
    ctx.pc = 0x08A5B164u;
    return;
L_089119A4:
    aot_gpr[31] = (0x089119ACu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = 0x08A5B0E4u;
    return;
L_089119AC:
    aot_gpr[31] = (0x089119B4u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 79u, 0x08A37800u>(ctx, &aot_mem) && ctx.pc == 0x089119B4u) goto L_089119B4;
    return;
L_089119B4:
    aot_gpr[31] = (0x089119BCu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = 0x00000000u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089119BCu) goto L_089119BC;
    return;
L_089119BC:
    aot_gpr[31] = (0x089119C4u);
    aot_gpr[16] = (aot_gpr[2] + 0u);
    ctx.pc = 0x08A5B1DCu;
    return;
L_089119C4:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (aot_gpr[29] + 0u);
    aot_gpr[8] = (0u + 0u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[16];
    aot_gpr[4] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089119F4;
      }
      goto L_089119DC;
    }
L_089119DC:
    aot_gpr[31] = (0x089119E4u);
    // nop
    ctx.pc = 0x08A5B1FCu;
    return;
L_089119E4:
    aot_gpr[31] = (0x089119ECu);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    ctx.pc = 0x08A5B1CCu;
    return;
L_089119EC:
    aot_gpr[31] = (0x089119F4u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    ctx.pc = 0x08A5B0E4u;
    return;
L_089119F4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (0u + 0u);
    aot_gpr[31] = (0x08911A0Cu);
    aot_gpr[8] = (0u + 0u);
    ctx.pc = 0x08A5B1ECu;
    return;
L_08911A0C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911A20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29980)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
      if (branch_taken) {
          goto L_08911AB8;
      }
      goto L_08911A44;
    }
L_08911A44:
    aot_gpr[3] = (0u << 16u);
    aot_gpr[4] = (aot_gpr[3] + static_cast<std::uint32_t>(0));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (1u << 16u);
      if (branch_taken) {
          goto L_08911A6C;
      }
      goto L_08911A54;
    }
L_08911A54:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08911AF8;
      }
      goto L_08911A60;
    }
L_08911A60:
    aot_gpr[17] = (aot_gpr[7] << 10u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29980)));
      if (branch_taken) {
          goto L_08911ABC;
      }
      goto L_08911A6C;
    }
L_08911A6C:
    aot_gpr[2] = (2215u << 16u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(-26640));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(3));
    aot_gpr[7] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x08911A88u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(4096));
    ctx.pc = 0x08A5B17Cu;
    return;
L_08911A88:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(-29972), aot_gpr[2]);
      if (branch_taken) {
          goto L_08911AB8;
      }
      goto L_08911A98;
    }
L_08911A98:
    aot_gpr[31] = (0x08911AA0u);
    // nop
    ctx.pc = 0x08A5B194u;
    return;
L_08911AA0:
    aot_gpr[7] = (aot_gpr[2] + aot_gpr[17]);
    aot_gpr[6] = (2217u << 16u);
    aot_gpr[5] = (2217u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-29976), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-29984), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-29980), aot_gpr[2]);
    goto L_08911AB8;
L_08911AB8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29980)));
    goto L_08911ABC;
L_08911ABC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08911AF8;
    }
    goto L_08911AC4;
L_08911AC4:
    aot_gpr[6] = (2217u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-29984)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08911AF8;
      }
      goto L_08911ADC;
    }
L_08911ADC:
    aot_gpr[11] = (2217u << 16u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(-29976)));
    aot_gpr[9] = (aot_gpr[10] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08911AFC;
      }
      goto L_08911AF0;
    }
L_08911AF0:
    aot_gpr[2] = (aot_gpr[5] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-29984), aot_gpr[4]);
    goto L_08911AF8;
L_08911AF8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08911AFC;
L_08911AFC:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911B10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[3];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
      if (branch_taken) {
          goto L_08911BA4;
      }
      goto L_08911B30;
    }
L_08911B30:
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08911B8C;
      }
      goto L_08911B3C;
    }
L_08911B3C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08911B7C;
      }
      goto L_08911B44;
    }
L_08911B44:
    aot_gpr[2] = (aot_gpr[4] + 0u);
    goto L_08911B48;
L_08911B48:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08911B64;
      }
      goto L_08911B50;
    }
L_08911B50:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08911B60u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    ctx.pc = 0x08A5B23Cu;
    return;
L_08911B60:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_08911B64;
L_08911B64:
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
L_08911B7C:
    aot_gpr[31] = (0x08911B84u);
    // nop
    ctx.pc = 0x08A5B1C4u;
    return;
L_08911B84:
    // nop
    goto L_08911B48;
L_08911B8C:
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (aot_gpr[4] + 0u);
        goto L_08911B48;
    }
    goto L_08911B94;
L_08911B94:
    aot_gpr[31] = (0x08911B9Cu);
    // nop
    ctx.pc = 0x08A5B1B4u;
    return;
L_08911B9C:
    // nop
    goto L_08911B48;
L_08911BA4:
    aot_gpr[31] = (0x08911BACu);
    // nop
    ctx.pc = 0x08A5B1BCu;
    return;
L_08911BAC:
    // nop
    goto L_08911B48;
L_08911BB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[3];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
      if (branch_taken) {
          goto L_08911C48;
      }
      goto L_08911BD4;
    }
L_08911BD4:
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08911C30;
      }
      goto L_08911BE0;
    }
L_08911BE0:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08911C20;
      }
      goto L_08911BE8;
    }
L_08911BE8:
    aot_gpr[2] = (aot_gpr[4] + 0u);
    goto L_08911BEC;
L_08911BEC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08911C08;
      }
      goto L_08911BF4;
    }
L_08911BF4:
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x08911C04u);
    aot_gpr[6] = (aot_gpr[17] + 0u);
    ctx.pc = 0x08A5B22Cu;
    return;
L_08911C04:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_08911C08;
L_08911C08:
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
L_08911C20:
    aot_gpr[31] = (0x08911C28u);
    // nop
    ctx.pc = 0x08A5B1C4u;
    return;
L_08911C28:
    // nop
    goto L_08911BEC;
L_08911C30:
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (aot_gpr[4] + 0u);
        goto L_08911BEC;
    }
    goto L_08911C38;
L_08911C38:
    aot_gpr[31] = (0x08911C40u);
    // nop
    ctx.pc = 0x08A5B1B4u;
    return;
L_08911C40:
    // nop
    goto L_08911BEC;
L_08911C48:
    aot_gpr[31] = (0x08911C50u);
    // nop
    ctx.pc = 0x08A5B1BCu;
    return;
L_08911C50:
    // nop
    goto L_08911BEC;
L_08911C58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[3];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
      if (branch_taken) {
          goto L_08911CCC;
      }
      goto L_08911C68;
    }
L_08911C68:
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08911CB4;
      }
      goto L_08911C74;
    }
L_08911C74:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08911CA4;
      }
      goto L_08911C7C;
    }
L_08911C7C:
    aot_gpr[2] = (aot_gpr[4] + 0u);
    goto L_08911C80;
L_08911C80:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08911C94;
      }
      goto L_08911C88;
    }
L_08911C88:
    aot_gpr[31] = (0x08911C90u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    ctx.pc = 0x08A5B254u;
    return;
L_08911C90:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    goto L_08911C94;
L_08911C94:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] + 0u);
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911CA4:
    aot_gpr[31] = (0x08911CACu);
    // nop
    ctx.pc = 0x08A5B1C4u;
    return;
L_08911CAC:
    // nop
    goto L_08911C80;
L_08911CB4:
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (aot_gpr[4] + 0u);
        goto L_08911C80;
    }
    goto L_08911CBC;
L_08911CBC:
    aot_gpr[31] = (0x08911CC4u);
    // nop
    ctx.pc = 0x08A5B1B4u;
    return;
L_08911CC4:
    // nop
    goto L_08911C80;
L_08911CCC:
    aot_gpr[31] = (0x08911CD4u);
    // nop
    ctx.pc = 0x08A5B1BCu;
    return;
L_08911CD4:
    // nop
    goto L_08911C80;
L_08911CDC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(8192));
    aot_gpr[2] = (0u + 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911CEC:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911CF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2217u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29972)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[4] = (aot_gpr[3] + 0u);
      if (branch_taken) {
          goto L_08911D20;
      }
      goto L_08911D10;
    }
L_08911D10:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911D20:
    aot_gpr[31] = (0x08911D28u);
    // nop
    ctx.pc = 0x08A5B19Cu;
    return;
L_08911D28:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-29972), 0u);
    goto L_08911D10;
L_08911D30:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[10] = (20224u << 16u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-1));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[10]);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[9]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[9]) >= 0;
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
      if (branch_taken) {
          goto L_08911D5C;
      }
      goto L_08911D50;
    }
L_08911D50:
    aot_gpr[9] = (20352u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[15];
    goto L_08911D5C;
L_08911D5C:
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_fpr[13] = aot_fpr[13] / aot_fpr[15];
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
        goto L_08911D84;
    }
    goto L_08911D78;
L_08911D78:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08911D94;
      }
      goto L_08911D84;
    }
L_08911D84:
    aot_gpr[9] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[10] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[9] = (aot_gpr[10] + aot_gpr[9]);
    goto L_08911D94;
L_08911D94:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(96), aot_gpr[9]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[9]) >= 0;
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
      if (branch_taken) {
          goto L_08911DB0;
      }
      goto L_08911DA4;
    }
L_08911DA4:
    aot_gpr[10] = (20352u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[10]);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[14];
    goto L_08911DB0;
L_08911DB0:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const std::uint32_t dividend = aot_gpr[9]; const std::uint32_t divisor = aot_gpr[10]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_fpr[12] = aot_fpr[13] - aot_fpr[12];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(100), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[9] = (ctx.lo);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(96)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const std::uint32_t dividend = aot_gpr[9]; const std::uint32_t divisor = aot_gpr[10]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_gpr[9] = (ctx.hi);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[6] = (aot_gpr[9] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[10] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(88)));
    aot_gpr[6] = (aot_gpr[9] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[10] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (ctx.lo);
    aot_gpr[6] = (aot_gpr[9] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(84)));
    aot_gpr[5] = (ctx.lo);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911E60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1392));
    aot_gpr[3] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28)));
    aot_gpr[11] = (aot_gpr[5] | 0u);
    aot_gpr[2] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[8] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[3] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1344), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1348), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1352), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1356), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1360), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1364), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1368), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1372), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1376), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1380), aot_gpr[31]);
    aot_gpr[31] = (0x08911EB4u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    goto L_08911D30;
L_08911EB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1312), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1316), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1320), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1324), aot_gpr[2]);
    aot_gpr[12] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1328), aot_gpr[11]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0270_entry, 270u, 23u, 0x08912840u>(ctx, &aot_mem); return;
      }
      goto L_08911EDC;
    }
L_08911EDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[12] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0271_entry, 271u, 9u, 0x089132D4u>(ctx, &aot_mem); return;
      }
      goto L_08911EEC;
    }
L_08911EEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(44)));
    goto L_08911EF0;
L_08911EF0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(80)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(76)));
    aot_gpr[7] = (aot_gpr[12] << 2u);
    aot_gpr[6] = (ctx.lo);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[12]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[12]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(28)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[8] << 2u);
    aot_gpr[7] = (aot_gpr[29] + aot_gpr[7]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(116), aot_gpr[10]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(164), aot_gpr[2]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    aot_gpr[14] = (aot_gpr[29] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE8(aot_gpr[14] + static_cast<std::uint32_t>(212), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[14] + static_cast<std::uint32_t>(212)));
    aot_gpr[11] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[30] = (aot_gpr[5] << 3u);
    aot_gpr[2] = (aot_gpr[13] + static_cast<std::uint32_t>(1));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[13] = (ctx.lo);
    aot_gpr[13] = (aot_gpr[30] + aot_gpr[13]);
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(-1));
    aot_gpr[13] = (aot_gpr[13] >> 3u);
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[13]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[10]);
    aot_gpr[10] = (aot_gpr[30] >> 3u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[7] << 2u);
    aot_gpr[2] = (aot_gpr[29] + aot_gpr[2]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(116), aot_gpr[8]);
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(164), aot_gpr[13]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[14] + static_cast<std::uint32_t>(0)));
    aot_gpr[15] = (aot_gpr[29] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE8(aot_gpr[15] + static_cast<std::uint32_t>(212), static_cast<std::uint8_t>(aot_gpr[13]));
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD8(aot_gpr[15] + static_cast<std::uint32_t>(212)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[13] = (aot_gpr[14] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[14] = (ctx.lo);
    aot_gpr[14] = (aot_gpr[30] + aot_gpr[14]);
    aot_gpr[14] = (aot_gpr[14] + static_cast<std::uint32_t>(-1));
    ctx.pc = 0x08912000u; return;
}

void recomp_unit_0269(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0269_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_269(Runtime &runtime) {
    runtime.register_generated_unit(269u, 0x08911000u, 4096u, &recomp_unit_0269, &recomp_unit_0269_entry);
    runtime.register_function(0x08911000u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911004u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911038u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911048u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911074u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x0891108Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089110A0u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911118u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911134u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x0891115Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911170u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089111C4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089111E4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089111F4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089111F8u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911218u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911220u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911234u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911274u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911280u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911284u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x0891129Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089112A4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089112C0u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089112C8u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089112DCu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911304u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911310u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911324u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911328u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911348u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911354u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x0891135Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911368u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911388u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911394u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089113C8u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911400u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911410u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911448u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911460u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911474u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089114BCu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089114C4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089114CCu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089114F4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x0891152Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x0891153Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911548u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911558u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911568u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911574u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911584u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089115A0u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089115C4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089115CCu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089115D4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089115DCu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089115ECu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911600u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911624u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x0891162Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911634u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x0891163Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911640u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911648u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x0891165Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911670u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911694u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x0891169Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089116A8u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089116B0u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089116B8u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089116C0u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089116C8u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089116D4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089116E4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089116FCu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911738u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911740u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911748u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911764u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x0891176Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911774u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911784u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x0891178Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x0891179Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089117A0u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089117C4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089117F8u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911808u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911828u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x0891184Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911858u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911860u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911868u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911874u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911880u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911888u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x0891188Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911898u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089118A0u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089118A8u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089118ACu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089118B0u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089118C0u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089118D8u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089118E0u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089118E8u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089118F0u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089118F8u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911900u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911908u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911910u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911918u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911920u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911928u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911930u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911938u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911940u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911948u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911950u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911958u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911978u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911980u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911988u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x0891199Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089119A4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089119ACu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089119B4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089119BCu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089119C4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089119DCu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089119E4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089119ECu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x089119F4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911A0Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911A20u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911A44u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911A54u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911A60u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911A6Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911A88u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911A98u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911AA0u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911AB8u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911ABCu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911AC4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911ADCu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911AF0u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911AF8u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911AFCu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911B10u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911B30u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911B3Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911B44u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911B48u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911B50u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911B60u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911B64u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911B7Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911B84u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911B8Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911B94u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911B9Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911BA4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911BACu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911BB4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911BD4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911BE0u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911BE8u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911BECu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911BF4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911C04u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911C08u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911C20u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911C28u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911C30u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911C38u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911C40u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911C48u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911C50u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911C58u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911C68u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911C74u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911C7Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911C80u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911C88u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911C90u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911C94u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911CA4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911CACu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911CB4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911CBCu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911CC4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911CCCu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911CD4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911CDCu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911CECu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911CF4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911D10u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911D20u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911D28u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911D30u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911D50u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911D5Cu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911D78u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911D84u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911D94u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911DA4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911DB0u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911E60u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911EB4u, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911EDCu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911EECu, &recomp_unit_0269, "recomp_unit_0269");
    runtime.register_function(0x08911EF0u, &recomp_unit_0269, "recomp_unit_0269");
}
} // namespace psprecomp
