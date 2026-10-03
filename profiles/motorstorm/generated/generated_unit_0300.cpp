#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0300[1022] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6, 7, 0,
    0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 15, 0, 0, 0, 0, 0, 16, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 23, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0,
    0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 34,
    0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0,
    0, 0, 0, 0, 41, 42, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0,
    0, 0, 50, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0,
    0, 56, 57, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0,
    0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 67, 0, 0, 68, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 71, 0,
    0, 72, 0, 73, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 78, 0, 0, 79, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81,
    0, 82, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 87, 0, 0, 0, 0, 0, 0,
    0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 96, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 0, 0, 0,
    0, 0, 106, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 135, 0,
    0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 143, 0, 0, 0,
    0, 0, 0, 144, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 149, 0, 0, 150, 0, 151, 0, 0, 0, 0,
    0, 0, 152, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0,
    0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169,
    0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 173,
};
void recomp_unit_0300_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08930000u;
        entry_id = (entry_delta < 4088u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0300[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08930000;
    case 2u: goto L_08930024;
    case 3u: goto L_08930040;
    case 4u: goto L_089300E4;
    case 5u: goto L_089300EC;
    case 6u: goto L_089300F4;
    case 7u: goto L_089300F8;
    case 8u: goto L_08930114;
    case 9u: goto L_0893013C;
    case 10u: goto L_08930144;
    case 11u: goto L_0893014C;
    case 12u: goto L_08930154;
    case 13u: goto L_089301D4;
    case 14u: goto L_089301DC;
    case 15u: goto L_089301E0;
    case 16u: goto L_089301F8;
    case 17u: goto L_08930220;
    case 18u: goto L_08930228;
    case 19u: goto L_08930230;
    case 20u: goto L_08930238;
    case 21u: goto L_089302B8;
    case 22u: goto L_089302C0;
    case 23u: goto L_089302C4;
    case 24u: goto L_089302DC;
    case 25u: goto L_089302E8;
    case 26u: goto L_089302F8;
    case 27u: goto L_08930304;
    case 28u: goto L_08930314;
    case 29u: goto L_08930324;
    case 30u: goto L_0893032C;
    case 31u: goto L_08930358;
    case 32u: goto L_0893036C;
    case 33u: goto L_08930378;
    case 34u: goto L_0893037C;
    case 35u: goto L_08930388;
    case 36u: goto L_089303A4;
    case 37u: goto L_089303B4;
    case 38u: goto L_089303E0;
    case 39u: goto L_089303F0;
    case 40u: goto L_089303F8;
    case 41u: goto L_08930410;
    case 42u: goto L_08930414;
    case 43u: goto L_08930420;
    case 44u: goto L_08930428;
    case 45u: goto L_08930438;
    case 46u: goto L_08930440;
    case 47u: goto L_08930454;
    case 48u: goto L_08930468;
    case 49u: goto L_08930470;
    case 50u: goto L_08930488;
    case 51u: goto L_0893048C;
    case 52u: goto L_089304A0;
    case 53u: goto L_089304CC;
    case 54u: goto L_089304DC;
    case 55u: goto L_089304E4;
    case 56u: goto L_08930504;
    case 57u: goto L_08930508;
    case 58u: goto L_0893051C;
    case 59u: goto L_08930524;
    case 60u: goto L_08930534;
    case 61u: goto L_08930540;
    case 62u: goto L_089305B0;
    case 63u: goto L_089305F4;
    case 64u: goto L_08930604;
    case 65u: goto L_08930620;
    case 66u: goto L_08930630;
    case 67u: goto L_08930638;
    case 68u: goto L_08930644;
    case 69u: goto L_08930658;
    case 70u: goto L_08930660;
    case 71u: goto L_08930678;
    case 72u: goto L_08930684;
    case 73u: goto L_0893068C;
    case 74u: goto L_08930694;
    case 75u: goto L_0893069C;
    case 76u: goto L_08930760;
    case 77u: goto L_08930768;
    case 78u: goto L_0893076C;
    case 79u: goto L_08930778;
    case 80u: goto L_089307C0;
    case 81u: goto L_089307FC;
    case 82u: goto L_08930804;
    case 83u: goto L_0893080C;
    case 84u: goto L_08930814;
    case 85u: goto L_089308D8;
    case 86u: goto L_089308E0;
    case 87u: goto L_089308E4;
    case 88u: goto L_08930904;
    case 89u: goto L_0893090C;
    case 90u: goto L_08930934;
    case 91u: goto L_0893093C;
    case 92u: goto L_08930980;
    case 93u: goto L_08930998;
    case 94u: goto L_089309B8;
    case 95u: goto L_089309C0;
    case 96u: goto L_089309C8;
    case 97u: goto L_089309CC;
    case 98u: goto L_089309D8;
    case 99u: goto L_089309F8;
    case 100u: goto L_08930A00;
    case 101u: goto L_08930A28;
    case 102u: goto L_08930A44;
    case 103u: goto L_08930A58;
    case 104u: goto L_08930A64;
    case 105u: goto L_08930A6C;
    case 106u: goto L_08930A88;
    case 107u: goto L_08930A8C;
    case 108u: goto L_08930A9C;
    case 109u: goto L_08930AD4;
    case 110u: goto L_08930ADC;
    case 111u: goto L_08930AE4;
    case 112u: goto L_08930AEC;
    case 113u: goto L_08930B2C;
    case 114u: goto L_08930B34;
    case 115u: goto L_08930B38;
    case 116u: goto L_08930B50;
    case 117u: goto L_08930B78;
    case 118u: goto L_08930BAC;
    case 119u: goto L_08930BBC;
    case 120u: goto L_08930BC4;
    case 121u: goto L_08930BEC;
    case 122u: goto L_08930BF8;
    case 123u: goto L_08930C20;
    case 124u: goto L_08930C28;
    case 125u: goto L_08930C40;
    case 126u: goto L_08930C68;
    case 127u: goto L_08930C70;
    case 128u: goto L_08930C94;
    case 129u: goto L_08930CA4;
    case 130u: goto L_08930CB0;
    case 131u: goto L_08930CC0;
    case 132u: goto L_08930CCC;
    case 133u: goto L_08930CDC;
    case 134u: goto L_08930CE8;
    case 135u: goto L_08930CF8;
    case 136u: goto L_08930D04;
    case 137u: goto L_08930D0C;
    case 138u: goto L_08930D28;
    case 139u: goto L_08930D38;
    case 140u: goto L_08930D40;
    case 141u: goto L_08930D5C;
    case 142u: goto L_08930D68;
    case 143u: goto L_08930D70;
    case 144u: goto L_08930D8C;
    case 145u: goto L_08930D9C;
    case 146u: goto L_08930DA4;
    case 147u: goto L_08930DC0;
    case 148u: goto L_08930DD0;
    case 149u: goto L_08930DD8;
    case 150u: goto L_08930DE4;
    case 151u: goto L_08930DEC;
    case 152u: goto L_08930E08;
    case 153u: goto L_08930E18;
    case 154u: goto L_08930E20;
    case 155u: goto L_08930E3C;
    case 156u: goto L_08930E4C;
    case 157u: goto L_08930E54;
    case 158u: goto L_08930E70;
    case 159u: goto L_08930E78;
    case 160u: goto L_08930E9C;
    case 161u: goto L_08930EB0;
    case 162u: goto L_08930EB8;
    case 163u: goto L_08930EC0;
    case 164u: goto L_08930ED0;
    case 165u: goto L_08930EDC;
    case 166u: goto L_08930EE4;
    case 167u: goto L_08930EF4;
    case 168u: goto L_08930F70;
    case 169u: goto L_08930F7C;
    case 170u: goto L_08930F84;
    case 171u: goto L_08930F8C;
    case 172u: goto L_08930FF0;
    case 173u: goto L_08930FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08930000:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<5u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<6u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<7u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 2u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 2u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<5u, 2u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 2u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<5u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<6u, 2u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 2u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<6u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 2u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 2u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<7u, 2u>(vfpu_d); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08930040;
      }
      goto L_08930024;
    }
L_08930024:
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<38u, 3u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<5u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<45u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<6u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<45u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<38u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<7u, 2u>(vfpu_d); }
    goto L_08930040;
L_08930040:
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 48u, 3u);
      ctx.read_vfpu_vector_ct<4u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 8u, vfpu_side); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 48u, 3u);
      ctx.read_vfpu_vector_ct<5u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 9u, vfpu_side); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 48u, 3u);
      ctx.read_vfpu_vector_ct<6u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 10u, vfpu_side); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 48u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 11u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<8u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<8u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<9u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<9u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<10u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<10u, 3u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<11u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<11u, 3u>(vfpu_d); }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<14u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<110u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), ctx.vfpu_scalar_bits_ct<109u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), ctx.vfpu_scalar_bits_ct<8u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), ctx.vfpu_scalar_bits_ct<40u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), ctx.vfpu_scalar_bits_ct<72u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), ctx.vfpu_scalar_bits_ct<78u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), ctx.vfpu_scalar_bits_ct<110u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), ctx.vfpu_scalar_bits_ct<109u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), ctx.vfpu_scalar_bits_ct<9u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), ctx.vfpu_scalar_bits_ct<41u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), ctx.vfpu_scalar_bits_ct<73u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), ctx.vfpu_scalar_bits_ct<14u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), ctx.vfpu_scalar_bits_ct<46u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), ctx.vfpu_scalar_bits_ct<109u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), ctx.vfpu_scalar_bits_ct<10u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), ctx.vfpu_scalar_bits_ct<42u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), ctx.vfpu_scalar_bits_ct<74u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), ctx.vfpu_scalar_bits_ct<78u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), ctx.vfpu_scalar_bits_ct<46u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(80), ctx.vfpu_scalar_bits_ct<109u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), ctx.vfpu_scalar_bits_ct<11u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), ctx.vfpu_scalar_bits_ct<43u>());
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), ctx.vfpu_scalar_bits_ct<75u>());
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[18] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 149u, 0x0892FFB0u>(ctx, &aot_mem); return;
      }
      goto L_089300E4;
    }
L_089300E4:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_089300F8;
      }
      goto L_089300EC;
    }
L_089300EC:
    aot_gpr[31] = (0x089300F4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x089300F4u) goto L_089300F4;
    return;
L_089300F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_089300F8;
L_089300F8:
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
L_08930114:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08930144;
      }
      goto L_0893013C;
    }
L_0893013C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08930154;
      }
      goto L_08930144;
    }
L_08930144:
    aot_gpr[31] = (0x0893014Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0893014Cu) goto L_0893014C;
    return;
L_0893014C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_08930154;
L_08930154:
    aot_gpr[6] = (aot_gpr[17] >> 24u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (4608u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(286));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (1028u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[16] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_089301E0;
      }
      goto L_089301D4;
    }
L_089301D4:
    aot_gpr[31] = (0x089301DCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x089301DCu) goto L_089301DC;
    return;
L_089301DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_089301E0;
L_089301E0:
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
L_089301F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08930228;
      }
      goto L_08930220;
    }
L_08930220:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08930238;
      }
      goto L_08930228;
    }
L_08930228:
    aot_gpr[31] = (0x08930230u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x08930230u) goto L_08930230;
    return;
L_08930230:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_08930238;
L_08930238:
    aot_gpr[6] = (aot_gpr[17] >> 24u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[17] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (4608u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(256));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (1028u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[16] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_089302C4;
      }
      goto L_089302B8;
    }
L_089302B8:
    aot_gpr[31] = (0x089302C0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x089302C0u) goto L_089302C0;
    return;
L_089302C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_089302C4;
L_089302C4:
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
L_089302DC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089302F8;
      }
      goto L_089302E8;
    }
L_089302E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), 0u);
    goto L_089302F8;
L_089302F8:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930304:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[5]);
      if (branch_taken) {
          goto L_08930324;
      }
      goto L_08930314;
    }
L_08930314:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    goto L_08930324;
L_08930324:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893032C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29144), 0u);
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-29140), aot_gpr[6]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29132), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08930378;
      }
      goto L_08930358;
    }
L_08930358:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29140)));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0893036Cu);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x0893036Cu) goto L_0893036C;
    return;
L_0893036C:
    aot_gpr[4] = (2216u << 16u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29136), aot_gpr[2]);
      if (branch_taken) {
          goto L_0893037C;
      }
      goto L_08930378;
    }
L_08930378:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29136), 0u);
    goto L_0893037C;
L_0893037C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930388:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29136)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089303B4;
      }
      goto L_089303A4;
    }
L_089303A4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x089303B4u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(-29136));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x089303B4u) goto L_089303B4;
    return;
L_089303B4:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29144), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29140), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-29136), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29132), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089303E0:
    aot_gpr[10] = (2216u << 16u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(-29136)));
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930468;
      }
      goto L_089303F0;
    }
L_089303F0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930468;
      }
      goto L_089303F8;
    }
L_089303F8:
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-29144)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[8] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08930438;
      }
      goto L_08930410;
    }
L_08930410:
    aot_gpr[5] = (aot_gpr[10] | 0u);
    goto L_08930414;
L_08930414:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[11] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08930428;
      }
      goto L_08930420;
    }
L_08930420:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[9] = (0u | 1u);
      if (branch_taken) {
          goto L_08930438;
      }
      goto L_08930428;
    }
L_08930428:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[8] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08930414;
      }
      goto L_08930438;
    }
L_08930438:
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08930468;
      }
      goto L_08930440;
    }
L_08930440:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29140)));
    aot_gpr[5] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930468;
      }
      goto L_08930454;
    }
L_08930454:
    aot_gpr[5] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-29144), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[10] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08930468;
L_08930468:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930470:
    aot_gpr[9] = (2216u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(-29144)));
    aot_gpr[10] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[10] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089304DC;
      }
      goto L_08930488;
    }
L_08930488:
    aot_gpr[6] = (2216u << 16u);
    goto L_0893048C;
L_0893048C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-29136)));
    aot_gpr[11] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[11] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_089304CC;
      }
      goto L_089304A0;
    }
L_089304A0:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[11] = (aot_gpr[8] << 2u);
    aot_gpr[11] = (aot_gpr[5] + aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(-29144), aot_gpr[8]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (aot_gpr[10] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-4));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(-29144)));
    goto L_089304CC;
L_089304CC:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[10] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893048C;
      }
      goto L_089304DC;
    }
L_089304DC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089304E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-29144)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08930534;
      }
      goto L_08930504;
    }
L_08930504:
    aot_gpr[5] = (2216u << 16u);
    goto L_08930508;
L_08930508:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29136)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930524;
      }
      goto L_0893051C;
    }
L_0893051C:
    aot_gpr[31] = (0x08930524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0298_entry, 298u, 195u, 0x0892EF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08930524u) goto L_08930524;
    return;
L_08930524:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08930508;
      }
      goto L_08930534;
    }
L_08930534:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930540:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-29052));
    aot_gpr[4] = (aot_gpr[4] >> 2u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (aot_gpr[4] >> 24u);
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[7] = (4096u << 16u);
    aot_gpr[8] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[4] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (2048u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089305B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[18] = (aot_gpr[11] | 0u);
    aot_gpr[17] = (aot_gpr[10] | 0u);
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 4u));
    aot_gpr[10] = (aot_gpr[8] | 0u);
    aot_gpr[8] = (aot_gpr[11] >> 28u);
    aot_gpr[19] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[19]) >> 4u));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[9] | 0u);
    aot_gpr[11] = (aot_gpr[7] << 24u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[9] = (aot_gpr[5] | 0u);
    aot_gpr[11] = (aot_gpr[6] | aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x089305F4u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    goto L_08930540;
L_089305F4:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[21] = (2216u << 16u);
    goto L_08930604;
L_08930604:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[6] = (aot_gpr[6] >> 31u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_gpr[7] = (aot_gpr[4] & 1u);
      if (branch_taken) {
          goto L_08930630;
      }
      goto L_08930620;
    }
L_08930620:
    aot_gpr[7] = (0u - aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[6] << 5u);
      if (branch_taken) {
          goto L_08930638;
      }
      goto L_08930630;
    }
L_08930630:
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] << 5u);
    goto L_08930638;
L_08930638:
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[6]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_gpr[6] = (aot_gpr[4] & 1u);
      if (branch_taken) {
          goto L_08930658;
      }
      goto L_08930644;
    }
L_08930644:
    aot_gpr[6] = (0u - aot_gpr[6]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08930660;
      }
      goto L_08930658;
    }
L_08930658:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[6] = (ctx.lo);
    goto L_08930660;
L_08930660:
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08930604;
      }
      goto L_08930678;
    }
L_08930678:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-29052)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893068C;
      }
      goto L_08930684;
    }
L_08930684:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0893069C;
      }
      goto L_0893068C;
    }
L_0893068C:
    aot_gpr[31] = (0x08930694u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x08930694u) goto L_08930694;
    return;
L_08930694:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_0893069C;
L_0893069C:
    aot_gpr[6] = (aot_gpr[17] << 9u);
    aot_gpr[7] = (aot_gpr[16] << 8u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[18] << 10u);
    aot_gpr[5] = (aot_gpr[21] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[8] = (54016u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (4736u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(284));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[20] >> 24u);
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[20] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (1030u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[19] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (54016u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_0893076C;
      }
      goto L_08930760;
    }
L_08930760:
    aot_gpr[31] = (0x08930768u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x08930768u) goto L_08930768;
    return;
L_08930768:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_0893076C;
L_0893076C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930778:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[12] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[4] = (aot_gpr[9] << 24u);
    aot_gpr[16] = (aot_gpr[11] | 0u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[9] = (aot_gpr[8] | aot_gpr[4]);
    aot_gpr[11] = (aot_gpr[7] | 0u);
    aot_gpr[3] = (aot_gpr[6] | 0u);
    aot_gpr[13] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x089307C0u);
    aot_gpr[4] = (0u | 24u);
    goto L_08930540;
L_089307C0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[10]));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(12), aot_gpr[9]);
    aot_gpr[4] = (aot_gpr[3] + aot_gpr[12]);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[11] + aot_gpr[13]);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[10]));
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29052)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930804;
      }
      goto L_089307FC;
    }
L_089307FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08930814;
      }
      goto L_08930804;
    }
L_08930804:
    aot_gpr[31] = (0x0893080Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x0893080Cu) goto L_0893080C;
    return;
L_0893080C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_08930814;
L_08930814:
    aot_gpr[6] = (aot_gpr[20] << 9u);
    aot_gpr[7] = (aot_gpr[16] << 8u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[19] << 10u);
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[8] = (54016u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (4736u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(284));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[18] >> 24u);
    aot_gpr[6] = (aot_gpr[6] & 15u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (4096u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[18] & aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (1030u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (54016u << 16u);
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
      if (branch_taken) {
          goto L_089308E4;
      }
      goto L_089308D8;
    }
L_089308D8:
    aot_gpr[31] = (0x089308E0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x089308E0u) goto L_089308E0;
    return;
L_089308E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_089308E4;
L_089308E4:
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
L_08930904:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893090C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08930934u);
    aot_gpr[4] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0281_entry, 281u, 43u, 0x0891D338u>(ctx, &aot_mem) && ctx.pc == 0x08930934u) goto L_08930934;
    return;
L_08930934:
    aot_gpr[31] = (0x0893093Cu);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    ctx.pc = 0x08A5AF1Cu;
    return;
L_0893093C:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(21372)));
    aot_gpr[5] = (32u << 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4096));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-29072), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[6] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-29068), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[19] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-29064), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08930980u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x08930980u) goto L_08930980;
    return;
L_08930980:
    aot_gpr[18] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29056), aot_gpr[2]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089309C0;
      }
      goto L_08930998;
    }
L_08930998:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x089309B8u);
    aot_gpr[6] = (0u | 92u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089309B8u) goto L_089309B8;
    return;
L_089309B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_089309CC;
      }
      goto L_089309C0;
    }
L_089309C0:
    aot_gpr[31] = (0x089309C8u);
    aot_gpr[4] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x089309C8u) goto L_089309C8;
    return;
L_089309C8:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    goto L_089309CC;
L_089309CC:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (2216u << 16u);
        goto L_08930A00;
    }
    goto L_089309D8;
L_089309D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29072)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29064)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29056)));
    aot_gpr[8] = (aot_gpr[21] | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (0u | 0u);
    aot_gpr[31] = (0x089309F8u);
    aot_gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 111u, 0x0891C6D0u>(ctx, &aot_mem) && ctx.pc == 0x089309F8u) goto L_089309F8;
    return;
L_089309F8:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (2216u << 16u);
    goto L_08930A00;
L_08930A00:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29060), aot_gpr[17]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930A28:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29056)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (2216u << 16u);
      if (branch_taken) {
          goto L_08930A58;
      }
      goto L_08930A44;
    }
L_08930A44:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-29056));
    aot_gpr[31] = (0x08930A58u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08930A58u) goto L_08930A58;
    return;
L_08930A58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29060)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930A8C;
      }
      goto L_08930A64;
    }
L_08930A64:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930A88;
      }
      goto L_08930A6C;
    }
L_08930A6C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08930A88u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930A88u) goto L_08930A88;
    return;
L_08930A88:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-29060), 0u);
    goto L_08930A8C;
L_08930A8C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930A9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(21320), aot_gpr[4]);
    aot_gpr[6] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(21324), aot_gpr[5]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08930ADC;
      }
      goto L_08930AD4;
    }
L_08930AD4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08930AEC;
      }
      goto L_08930ADC;
    }
L_08930ADC:
    aot_gpr[31] = (0x08930AE4u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x08930AE4u) goto L_08930AE4;
    return;
L_08930AE4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    aot_gpr[4] = (0u | 1u);
    goto L_08930AEC;
L_08930AEC:
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(-29052));
    aot_gpr[6] = (aot_gpr[17] << 4u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (19456u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[16] << 4u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (19712u << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08930B38;
      }
      goto L_08930B2C;
    }
L_08930B2C:
    aot_gpr[31] = (0x08930B34u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29052)));
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 176u, 0x08A47DE4u>(ctx, &aot_mem) && ctx.pc == 0x08930B34u) goto L_08930B34;
    return;
L_08930B34:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-29052), 0u);
    goto L_08930B38;
L_08930B38:
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
L_08930B50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-29124)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_08930C28;
      }
      goto L_08930B78;
    }
L_08930B78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-22112)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-29092), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28792)));
    aot_gpr[17] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-29088), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-29084), aot_gpr[5]);
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[31] = (0x08930BACu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29096)));
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 55u, 0x08945B58u>(ctx, &aot_mem) && ctx.pc == 0x08930BACu) goto L_08930BAC;
    return;
L_08930BAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29088)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08930BBCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29096)));
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 56u, 0x08945B60u>(ctx, &aot_mem) && ctx.pc == 0x08930BBCu) goto L_08930BBC;
    return;
L_08930BBC:
    aot_gpr[31] = (0x08930BC4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-29096)));
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 16u, 0x08940218u>(ctx, &aot_mem) && ctx.pc == 0x08930BC4u) goto L_08930BC4;
    return;
L_08930BC4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7912)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-29112));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (0u | 1u);
    aot_gpr[31] = (0x08930BECu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 19u, 0x08940244u>(ctx, &aot_mem) && ctx.pc == 0x08930BECu) goto L_08930BEC;
    return;
L_08930BEC:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x08930BF8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 50u, 0x0893F5DCu>(ctx, &aot_mem) && ctx.pc == 0x08930BF8u) goto L_08930BF8;
    return;
L_08930BF8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29120)));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[5] = (0u | 4096u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-29116)));
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] >> 1u);
    aot_gpr[31] = (0x08930C20u);
    aot_gpr[5] = (aot_gpr[5] >> 1u);
    goto L_08930A9C;
L_08930C20:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-29122), static_cast<std::uint8_t>(aot_gpr[17]));
    goto L_08930C28;
L_08930C28:
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
L_08930C40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08930C68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 99u, 0x0893DF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08930C68u) goto L_08930C68;
    return;
L_08930C68:
    aot_gpr[31] = (0x08930C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 166u, 0x08A47D14u>(ctx, &aot_mem) && ctx.pc == 0x08930C70u) goto L_08930C70;
    return;
L_08930C70:
    aot_gpr[16] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(21288)));
    aot_gpr[17] = (2219u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(21288));
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(21304));
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[20] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[21] = (2218u << 16u);
      if (branch_taken) {
          goto L_08930CA4;
      }
      goto L_08930C94;
    }
L_08930C94:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08930CA4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08930CA4u) goto L_08930CA4;
    return;
L_08930CA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930CC0;
      }
      goto L_08930CB0;
    }
L_08930CB0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08930CC0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08930CC0u) goto L_08930CC0;
    return;
L_08930CC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(21304)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930CDC;
      }
      goto L_08930CCC;
    }
L_08930CCC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08930CDCu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08930CDCu) goto L_08930CDC;
    return;
L_08930CDC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930CF8;
      }
      goto L_08930CE8;
    }
L_08930CE8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x08930CF8u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x08930CF8u) goto L_08930CF8;
    return;
L_08930CF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-29112)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930D28;
      }
      goto L_08930D04;
    }
L_08930D04:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930D28;
      }
      goto L_08930D0C;
    }
L_08930D0C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08930D28u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930D28u) goto L_08930D28;
    return;
L_08930D28:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-29112));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930D5C;
      }
      goto L_08930D38;
    }
L_08930D38:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930D5C;
      }
      goto L_08930D40;
    }
L_08930D40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08930D5Cu);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930D5Cu) goto L_08930D5C;
    return;
L_08930D5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-29104)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930D8C;
      }
      goto L_08930D68;
    }
L_08930D68:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930D8C;
      }
      goto L_08930D70;
    }
L_08930D70:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08930D8Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930D8Cu) goto L_08930D8C;
    return;
L_08930D8C:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-29104));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930DC0;
      }
      goto L_08930D9C;
    }
L_08930D9C:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930DC0;
      }
      goto L_08930DA4;
    }
L_08930DA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08930DC0u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930DC0u) goto L_08930DC0;
    return;
L_08930DC0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29096)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930DD8;
      }
      goto L_08930DD0;
    }
L_08930DD0:
    aot_gpr[31] = (0x08930DD8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0321_entry, 321u, 50u, 0x08945AF0u>(ctx, &aot_mem) && ctx.pc == 0x08930DD8u) goto L_08930DD8;
    return;
L_08930DD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(7920)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930E08;
      }
      goto L_08930DE4;
    }
L_08930DE4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930E08;
      }
      goto L_08930DEC;
    }
L_08930DEC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08930E08u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930E08u) goto L_08930E08;
    return;
L_08930E08:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(7920));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930E3C;
      }
      goto L_08930E18;
    }
L_08930E18:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930E3C;
      }
      goto L_08930E20;
    }
L_08930E20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08930E3Cu);
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930E3Cu) goto L_08930E3C;
    return;
L_08930E3C:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-12896)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930E70;
      }
      goto L_08930E4C;
    }
L_08930E4C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930E70;
      }
      goto L_08930E54;
    }
L_08930E54:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08930E70u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08930E70u) goto L_08930E70;
    return;
L_08930E70:
    aot_gpr[31] = (0x08930E78u);
    // nop
    goto L_08930A28;
L_08930E78:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930E9C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08930EB0u);
    aot_gpr[16] = (aot_gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 83u, 0x08935850u>(ctx, &aot_mem) && ctx.pc == 0x08930EB0u) goto L_08930EB0;
    return;
L_08930EB0:
    aot_gpr[31] = (0x08930EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 100u, 0x0893DF14u>(ctx, &aot_mem) && ctx.pc == 0x08930EB8u) goto L_08930EB8;
    return;
L_08930EB8:
    aot_gpr[31] = (0x08930EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 70u, 0x0893F74Cu>(ctx, &aot_mem) && ctx.pc == 0x08930EC0u) goto L_08930EC0;
    return;
L_08930EC0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-29123)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08930EE4;
      }
      goto L_08930ED0;
    }
L_08930ED0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-29124)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930EE4;
      }
      goto L_08930EDC;
    }
L_08930EDC:
    aot_gpr[31] = (0x08930EE4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08930B50;
L_08930EE4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08930EF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] & 65535u);
    aot_gpr[4] = (aot_gpr[7] & 65535u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[22]);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[5] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[21] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-29052)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[30]);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[19] = (aot_gpr[6] & 65535u);
    aot_gpr[17] = (aot_gpr[10] & 65535u);
    aot_gpr[23] = (aot_gpr[11] & 65535u);
    aot_gpr[22] = (aot_gpr[22] & 65535u);
    aot_gpr[30] = (0u | 1u);
    aot_gpr[16] = (0u | 3u);
    aot_gpr[20] = (0u | 31u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[9]);
      if (branch_taken) {
          goto L_08930F7C;
      }
      goto L_08930F70;
    }
L_08930F70:
    aot_gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08930F8C;
      }
      goto L_08930F7C;
    }
L_08930F7C:
    aot_gpr[31] = (0x08930F84u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 173u, 0x08A47DA8u>(ctx, &aot_mem) && ctx.pc == 0x08930F84u) goto L_08930F84;
    return;
L_08930F84:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(-29052), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[30]));
    goto L_08930F8C;
L_08930F8C:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 32u);
    aot_gpr[5] = (static_cast<std::uint32_t>(std::countl_zero(aot_gpr[5])));
    aot_gpr[3] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (static_cast<std::uint32_t>(std::countl_zero(aot_gpr[5])));
    aot_gpr[7] = (static_cast<std::uint32_t>(std::countl_zero(aot_gpr[7])));
    aot_gpr[10] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr[7] = (static_cast<std::uint32_t>(std::countl_zero(aot_gpr[7])));
    aot_gpr[5] = (aot_gpr[30] << (aot_gpr[5] & 31u));
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (aot_gpr[30] << (aot_gpr[6] & 31u));
    aot_gpr[9] = (aot_gpr[21] + static_cast<std::uint32_t>(-29052));
    aot_gpr[4] = (aot_gpr[12] | 0u);
    aot_gpr[3] = (aot_gpr[3] & 65535u);
    aot_gpr[10] = (aot_gpr[10] & 65535u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[5]) < 64 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] & 65535u);
      if (branch_taken) {
          goto L_08930FF4;
      }
      goto L_08930FF0;
    }
L_08930FF0:
    aot_gpr[5] = (0u | 64u);
    goto L_08930FF4;
L_08930FF4:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 512 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 2u, 0x08931004u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 1u, 0x08931000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0300(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0300_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_300(Runtime &runtime) {
    runtime.register_generated_unit(300u, 0x08930000u, 4096u, &recomp_unit_0300, &recomp_unit_0300_entry);
    runtime.register_function(0x08930000u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930024u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930040u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089300E4u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089300ECu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089300F4u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089300F8u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930114u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x0893013Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930144u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x0893014Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930154u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089301D4u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089301DCu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089301E0u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089301F8u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930220u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930228u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930230u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930238u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089302B8u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089302C0u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089302C4u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089302DCu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089302E8u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089302F8u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930304u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930314u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930324u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x0893032Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930358u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x0893036Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930378u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x0893037Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930388u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089303A4u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089303B4u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089303E0u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089303F0u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089303F8u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930410u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930414u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930420u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930428u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930438u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930440u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930454u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930468u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930470u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930488u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x0893048Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089304A0u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089304CCu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089304DCu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089304E4u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930504u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930508u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x0893051Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930524u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930534u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930540u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089305B0u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089305F4u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930604u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930620u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930630u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930638u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930644u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930658u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930660u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930678u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930684u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x0893068Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930694u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x0893069Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930760u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930768u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x0893076Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930778u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089307C0u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089307FCu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930804u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x0893080Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930814u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089308D8u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089308E0u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089308E4u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930904u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x0893090Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930934u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x0893093Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930980u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930998u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089309B8u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089309C0u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089309C8u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089309CCu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089309D8u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x089309F8u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930A00u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930A28u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930A44u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930A58u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930A64u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930A6Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930A88u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930A8Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930A9Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930AD4u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930ADCu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930AE4u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930AECu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930B2Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930B34u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930B38u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930B50u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930B78u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930BACu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930BBCu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930BC4u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930BECu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930BF8u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930C20u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930C28u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930C40u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930C68u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930C70u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930C94u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930CA4u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930CB0u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930CC0u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930CCCu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930CDCu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930CE8u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930CF8u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930D04u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930D0Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930D28u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930D38u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930D40u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930D5Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930D68u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930D70u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930D8Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930D9Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930DA4u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930DC0u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930DD0u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930DD8u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930DE4u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930DECu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930E08u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930E18u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930E20u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930E3Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930E4Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930E54u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930E70u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930E78u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930E9Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930EB0u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930EB8u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930EC0u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930ED0u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930EDCu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930EE4u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930EF4u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930F70u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930F7Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930F84u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930F8Cu, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930FF0u, &recomp_unit_0300, "recomp_unit_0300");
    runtime.register_function(0x08930FF4u, &recomp_unit_0300, "recomp_unit_0300");
}
} // namespace psprecomp
