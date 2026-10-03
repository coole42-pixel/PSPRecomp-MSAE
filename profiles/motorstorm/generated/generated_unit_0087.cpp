#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0087[1021] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0,
    0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 10, 11, 0, 0, 12, 0, 0, 0, 13,
    14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 20, 21, 0, 0, 0, 0, 0, 22, 0, 23, 0, 24, 0, 25, 0, 0, 0, 26, 0, 27, 0, 28,
    0, 0, 29, 0, 30, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0,
    0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 54, 0,
    55, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 0, 70, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 78, 79, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0,
    0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 89, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0,
    0, 0, 0, 93, 0, 94, 0, 0, 95, 0, 96, 0, 0, 0, 97, 0, 0, 98, 99, 0, 0, 0, 0, 100, 0, 101, 0, 102, 0, 103, 0, 0,
    104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 111, 112, 0, 0, 0, 113,
    0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 119, 0, 120, 0, 0,
    121, 122, 0, 123, 0, 0, 124, 125, 0, 126, 0, 0, 127, 128, 0, 129, 0, 0, 130, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134,
    135, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 139, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 143, 0, 144, 0, 0, 145, 0, 0, 146, 147,
    0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 155, 0, 0, 156, 0,
    157, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0,
    168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0,
    0, 0, 0, 174, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 178, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0,
    183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 190, 0, 0, 191,
    0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0,
    0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207,
    0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    217, 0, 0, 218, 0, 219, 0, 220, 0, 221, 222, 0, 0, 223, 0, 0, 224, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0, 0, 228,
};
void recomp_unit_0087_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0885B000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0087[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0885B000;
    case 2u: goto L_0885B018;
    case 3u: goto L_0885B034;
    case 4u: goto L_0885B054;
    case 5u: goto L_0885B068;
    case 6u: goto L_0885B08C;
    case 7u: goto L_0885B0AC;
    case 8u: goto L_0885B0CC;
    case 9u: goto L_0885B0D4;
    case 10u: goto L_0885B0DC;
    case 11u: goto L_0885B0E0;
    case 12u: goto L_0885B0EC;
    case 13u: goto L_0885B0FC;
    case 14u: goto L_0885B100;
    case 15u: goto L_0885B11C;
    case 16u: goto L_0885B13C;
    case 17u: goto L_0885B184;
    case 18u: goto L_0885B18C;
    case 19u: goto L_0885B194;
    case 20u: goto L_0885B1A8;
    case 21u: goto L_0885B1AC;
    case 22u: goto L_0885B1C4;
    case 23u: goto L_0885B1CC;
    case 24u: goto L_0885B1D4;
    case 25u: goto L_0885B1DC;
    case 26u: goto L_0885B1EC;
    case 27u: goto L_0885B1F4;
    case 28u: goto L_0885B1FC;
    case 29u: goto L_0885B208;
    case 30u: goto L_0885B210;
    case 31u: goto L_0885B21C;
    case 32u: goto L_0885B22C;
    case 33u: goto L_0885B248;
    case 34u: goto L_0885B250;
    case 35u: goto L_0885B258;
    case 36u: goto L_0885B268;
    case 37u: goto L_0885B288;
    case 38u: goto L_0885B29C;
    case 39u: goto L_0885B2B8;
    case 40u: goto L_0885B2D8;
    case 41u: goto L_0885B2F8;
    case 42u: goto L_0885B318;
    case 43u: goto L_0885B338;
    case 44u: goto L_0885B358;
    case 45u: goto L_0885B378;
    case 46u: goto L_0885B398;
    case 47u: goto L_0885B3A0;
    case 48u: goto L_0885B3A8;
    case 49u: goto L_0885B3B4;
    case 50u: goto L_0885B3C0;
    case 51u: goto L_0885B3CC;
    case 52u: goto L_0885B3DC;
    case 53u: goto L_0885B3E8;
    case 54u: goto L_0885B3F8;
    case 55u: goto L_0885B400;
    case 56u: goto L_0885B404;
    case 57u: goto L_0885B410;
    case 58u: goto L_0885B438;
    case 59u: goto L_0885B458;
    case 60u: goto L_0885B490;
    case 61u: goto L_0885B4B4;
    case 62u: goto L_0885B4D8;
    case 63u: goto L_0885B4E0;
    case 64u: goto L_0885B50C;
    case 65u: goto L_0885B51C;
    case 66u: goto L_0885B538;
    case 67u: goto L_0885B54C;
    case 68u: goto L_0885B558;
    case 69u: goto L_0885B568;
    case 70u: goto L_0885B588;
    case 71u: goto L_0885B58C;
    case 72u: goto L_0885B5A4;
    case 73u: goto L_0885B5B8;
    case 74u: goto L_0885B5E0;
    case 75u: goto L_0885B5EC;
    case 76u: goto L_0885B61C;
    case 77u: goto L_0885B624;
    case 78u: goto L_0885B630;
    case 79u: goto L_0885B634;
    case 80u: goto L_0885B63C;
    case 81u: goto L_0885B654;
    case 82u: goto L_0885B664;
    case 83u: goto L_0885B688;
    case 84u: goto L_0885B690;
    case 85u: goto L_0885B69C;
    case 86u: goto L_0885B6C4;
    case 87u: goto L_0885B71C;
    case 88u: goto L_0885B740;
    case 89u: goto L_0885B744;
    case 90u: goto L_0885B74C;
    case 91u: goto L_0885B768;
    case 92u: goto L_0885B774;
    case 93u: goto L_0885B78C;
    case 94u: goto L_0885B794;
    case 95u: goto L_0885B7A0;
    case 96u: goto L_0885B7A8;
    case 97u: goto L_0885B7B8;
    case 98u: goto L_0885B7C4;
    case 99u: goto L_0885B7C8;
    case 100u: goto L_0885B7DC;
    case 101u: goto L_0885B7E4;
    case 102u: goto L_0885B7EC;
    case 103u: goto L_0885B7F4;
    case 104u: goto L_0885B800;
    case 105u: goto L_0885B818;
    case 106u: goto L_0885B828;
    case 107u: goto L_0885B830;
    case 108u: goto L_0885B83C;
    case 109u: goto L_0885B854;
    case 110u: goto L_0885B864;
    case 111u: goto L_0885B868;
    case 112u: goto L_0885B86C;
    case 113u: goto L_0885B87C;
    case 114u: goto L_0885B88C;
    case 115u: goto L_0885B898;
    case 116u: goto L_0885B8B8;
    case 117u: goto L_0885B8E0;
    case 118u: goto L_0885B8E8;
    case 119u: goto L_0885B8EC;
    case 120u: goto L_0885B8F4;
    case 121u: goto L_0885B900;
    case 122u: goto L_0885B904;
    case 123u: goto L_0885B90C;
    case 124u: goto L_0885B918;
    case 125u: goto L_0885B91C;
    case 126u: goto L_0885B924;
    case 127u: goto L_0885B930;
    case 128u: goto L_0885B934;
    case 129u: goto L_0885B93C;
    case 130u: goto L_0885B948;
    case 131u: goto L_0885B94C;
    case 132u: goto L_0885B95C;
    case 133u: goto L_0885B96C;
    case 134u: goto L_0885B97C;
    case 135u: goto L_0885B980;
    case 136u: goto L_0885B988;
    case 137u: goto L_0885B998;
    case 138u: goto L_0885B9A8;
    case 139u: goto L_0885B9AC;
    case 140u: goto L_0885B9B4;
    case 141u: goto L_0885B9C4;
    case 142u: goto L_0885B9D4;
    case 143u: goto L_0885B9D8;
    case 144u: goto L_0885B9E0;
    case 145u: goto L_0885B9EC;
    case 146u: goto L_0885B9F8;
    case 147u: goto L_0885B9FC;
    case 148u: goto L_0885BA04;
    case 149u: goto L_0885BA14;
    case 150u: goto L_0885BA24;
    case 151u: goto L_0885BA28;
    case 152u: goto L_0885BA30;
    case 153u: goto L_0885BA50;
    case 154u: goto L_0885BA64;
    case 155u: goto L_0885BA6C;
    case 156u: goto L_0885BA78;
    case 157u: goto L_0885BA80;
    case 158u: goto L_0885BA88;
    case 159u: goto L_0885BA9C;
    case 160u: goto L_0885BAB4;
    case 161u: goto L_0885BACC;
    case 162u: goto L_0885BAD8;
    case 163u: goto L_0885BB00;
    case 164u: goto L_0885BB14;
    case 165u: goto L_0885BB2C;
    case 166u: goto L_0885BB4C;
    case 167u: goto L_0885BB6C;
    case 168u: goto L_0885BB80;
    case 169u: goto L_0885BB8C;
    case 170u: goto L_0885BBAC;
    case 171u: goto L_0885BBB8;
    case 172u: goto L_0885BBD8;
    case 173u: goto L_0885BBF8;
    case 174u: goto L_0885BC0C;
    case 175u: goto L_0885BC14;
    case 176u: goto L_0885BC20;
    case 177u: goto L_0885BC2C;
    case 178u: goto L_0885BC40;
    case 179u: goto L_0885BC48;
    case 180u: goto L_0885BC54;
    case 181u: goto L_0885BC60;
    case 182u: goto L_0885BC74;
    case 183u: goto L_0885BC80;
    case 184u: goto L_0885BC8C;
    case 185u: goto L_0885BC98;
    case 186u: goto L_0885BCA4;
    case 187u: goto L_0885BCB0;
    case 188u: goto L_0885BCBC;
    case 189u: goto L_0885BCEC;
    case 190u: goto L_0885BCF0;
    case 191u: goto L_0885BCFC;
    case 192u: goto L_0885BD08;
    case 193u: goto L_0885BD20;
    case 194u: goto L_0885BD3C;
    case 195u: goto L_0885BD64;
    case 196u: goto L_0885BD78;
    case 197u: goto L_0885BD84;
    case 198u: goto L_0885BD98;
    case 199u: goto L_0885BDC8;
    case 200u: goto L_0885BE04;
    case 201u: goto L_0885BE24;
    case 202u: goto L_0885BE30;
    case 203u: goto L_0885BE3C;
    case 204u: goto L_0885BE48;
    case 205u: goto L_0885BE54;
    case 206u: goto L_0885BE5C;
    case 207u: goto L_0885BE7C;
    case 208u: goto L_0885BE98;
    case 209u: goto L_0885BEA4;
    case 210u: goto L_0885BEB0;
    case 211u: goto L_0885BEBC;
    case 212u: goto L_0885BEC8;
    case 213u: goto L_0885BED4;
    case 214u: goto L_0885BEF8;
    case 215u: goto L_0885BF1C;
    case 216u: goto L_0885BF30;
    case 217u: goto L_0885BF80;
    case 218u: goto L_0885BF8C;
    case 219u: goto L_0885BF94;
    case 220u: goto L_0885BF9C;
    case 221u: goto L_0885BFA4;
    case 222u: goto L_0885BFA8;
    case 223u: goto L_0885BFB4;
    case 224u: goto L_0885BFC0;
    case 225u: goto L_0885BFC8;
    case 226u: goto L_0885BFD0;
    case 227u: goto L_0885BFD8;
    case 228u: goto L_0885BFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0885B000:
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[31] = (0x0885B018u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(5228)));
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 250u, 0x0891EF6Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B018u) goto L_0885B018;
    return;
L_0885B018:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3944));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[31] = (0x0885B034u);
    aot_gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 184u, 0x08877D80u>(ctx, &aot_mem) && ctx.pc == 0x0885B034u) goto L_0885B034;
    return;
L_0885B034:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5112));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0885B054u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 22u, 0x088D616Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B054u) goto L_0885B054;
    return;
L_0885B054:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x0885B068u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 167u, 0x088DCD3Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B068u) goto L_0885B068;
    return;
L_0885B068:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B08C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0885B0D4;
      }
      goto L_0885B0AC;
    }
L_0885B0AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0885B0CCu);
    aot_gpr[6] = (0u | 12u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885B0CCu) goto L_0885B0CC;
    return;
L_0885B0CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0885B0E0;
      }
      goto L_0885B0D4;
    }
L_0885B0D4:
    aot_gpr[31] = (0x0885B0DCu);
    aot_gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 115u, 0x08A395F4u>(ctx, &aot_mem) && ctx.pc == 0x0885B0DCu) goto L_0885B0DC;
    return;
L_0885B0DC:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    goto L_0885B0E0;
L_0885B0E0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (39u << 16u);
      if (branch_taken) {
          goto L_0885B100;
      }
      goto L_0885B0EC;
    }
L_0885B0EC:
    aot_gpr[5] = (0u | 1024u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0885B0FCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-32768));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 124u, 0x088C586Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B0FCu) goto L_0885B0FC;
    return;
L_0885B0FC:
    aot_gpr[17] = (aot_gpr[16] | 0u);
    goto L_0885B100;
L_0885B100:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2232), aot_gpr[17]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B11C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24288), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B13C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[21] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(5112));
    aot_gpr[20] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[22] = (2218u << 16u);
      if (branch_taken) {
          goto L_0885B1C4;
      }
      goto L_0885B184;
    }
L_0885B184:
    aot_gpr[16] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[19] + static_cast<std::uint32_t>(5500));
    goto L_0885B18C;
L_0885B18C:
    aot_gpr[31] = (0x0885B194u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 65u, 0x088DA3F8u>(ctx, &aot_mem) && ctx.pc == 0x0885B194u) goto L_0885B194;
    return;
L_0885B194:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B1AC;
      }
      goto L_0885B1A8;
    }
L_0885B1A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(5500), aot_gpr[4]);
    goto L_0885B1AC;
L_0885B1AC:
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[16] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
      if (branch_taken) {
          goto L_0885B18C;
      }
      goto L_0885B1C4;
    }
L_0885B1C4:
    aot_gpr[31] = (0x0885B1CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 102u, 0x088DB970u>(ctx, &aot_mem) && ctx.pc == 0x0885B1CCu) goto L_0885B1CC;
    return;
L_0885B1CC:
    aot_gpr[31] = (0x0885B1D4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 130u, 0x088DBB58u>(ctx, &aot_mem) && ctx.pc == 0x0885B1D4u) goto L_0885B1D4;
    return;
L_0885B1D4:
    aot_gpr[31] = (0x0885B1DCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2232)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 154u, 0x088C5AB8u>(ctx, &aot_mem) && ctx.pc == 0x0885B1DCu) goto L_0885B1DC;
    return;
L_0885B1DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x0885B1ECu);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 107u, 0x088D6754u>(ctx, &aot_mem) && ctx.pc == 0x0885B1ECu) goto L_0885B1EC;
    return;
L_0885B1EC:
    aot_gpr[31] = (0x0885B1F4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2232)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 158u, 0x088C5AF8u>(ctx, &aot_mem) && ctx.pc == 0x0885B1F4u) goto L_0885B1F4;
    return;
L_0885B1F4:
    aot_gpr[31] = (0x0885B1FCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 179u, 0x088D5C40u>(ctx, &aot_mem) && ctx.pc == 0x0885B1FCu) goto L_0885B1FC;
    return;
L_0885B1FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0885B258;
      }
      goto L_0885B208;
    }
L_0885B208:
    aot_gpr[31] = (0x0885B210u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 46u, 0x08A4C368u>(ctx, &aot_mem) && ctx.pc == 0x0885B210u) goto L_0885B210;
    return;
L_0885B210:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0885B21Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 46u, 0x08A4C368u>(ctx, &aot_mem) && ctx.pc == 0x0885B21Cu) goto L_0885B21C;
    return;
L_0885B21C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B250;
      }
      goto L_0885B22C;
    }
L_0885B22C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0885B248u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885B248u) goto L_0885B248;
    return;
L_0885B248:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B258;
      }
      goto L_0885B250;
    }
L_0885B250:
    aot_gpr[31] = (0x0885B258u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0885B258u) goto L_0885B258;
    return;
L_0885B258:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_0885B288;
      }
      goto L_0885B268;
    }
L_0885B268:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0885B288u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885B288u) goto L_0885B288;
    return;
L_0885B288:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0885B29Cu);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 22u, 0x088D616Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B29Cu) goto L_0885B29C;
    return;
L_0885B29C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0885B2B8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885B2B8u) goto L_0885B2B8;
    return;
L_0885B2B8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-3948)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0885B2D8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885B2D8u) goto L_0885B2D8;
    return;
L_0885B2D8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0885B2F8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885B2F8u) goto L_0885B2F8;
    return;
L_0885B2F8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5104)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0885B318u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885B318u) goto L_0885B318;
    return;
L_0885B318:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5236)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0885B338u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885B338u) goto L_0885B338;
    return;
L_0885B338:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5240)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0885B358u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885B358u) goto L_0885B358;
    return;
L_0885B358:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4024)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0885B378u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885B378u) goto L_0885B378;
    return;
L_0885B378:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5244)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0885B398u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885B398u) goto L_0885B398;
    return;
L_0885B398:
    aot_gpr[31] = (0x0885B3A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 93u, 0x08884AC0u>(ctx, &aot_mem) && ctx.pc == 0x0885B3A0u) goto L_0885B3A0;
    return;
L_0885B3A0:
    aot_gpr[31] = (0x0885B3A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 81u, 0x0882BCB4u>(ctx, &aot_mem) && ctx.pc == 0x0885B3A8u) goto L_0885B3A8;
    return;
L_0885B3A8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0885B3B4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5220)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x0885B3B4u) goto L_0885B3B4;
    return;
L_0885B3B4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0885B3C0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5224)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x0885B3C0u) goto L_0885B3C0;
    return;
L_0885B3C0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0885B3CCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5228)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 60u, 0x088773A4u>(ctx, &aot_mem) && ctx.pc == 0x0885B3CCu) goto L_0885B3CC;
    return;
L_0885B3CC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2232)));
    aot_gpr[31] = (0x0885B3DCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3976));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 149u, 0x088C5A40u>(ctx, &aot_mem) && ctx.pc == 0x0885B3DCu) goto L_0885B3DC;
    return;
L_0885B3DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2232)));
    aot_gpr[31] = (0x0885B3E8u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 139u, 0x088C598Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B3E8u) goto L_0885B3E8;
    return;
L_0885B3E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(2232), 0u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B404;
      }
      goto L_0885B3F8;
    }
L_0885B3F8:
    aot_gpr[31] = (0x0885B400u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 216u, 0x08877F7Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B400u) goto L_0885B400;
    return;
L_0885B400:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(16), 0u);
    goto L_0885B404;
L_0885B404:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[31] = (0x0885B410u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 182u, 0x088DCE4Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B410u) goto L_0885B410;
    return;
L_0885B410:
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
L_0885B438:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24296), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B458:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(24316), aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(24320), 0u);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0885B490u);
    aot_gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B490u) goto L_0885B490;
    return;
L_0885B490:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24308), aot_gpr[2]);
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24316)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[31] = (0x0885B4B4u);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B4B4u) goto L_0885B4B4;
    return;
L_0885B4B4:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24312), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24316)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (2215u << 16u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[7] = (2215u << 16u);
      if (branch_taken) {
          goto L_0885B50C;
      }
      goto L_0885B4D8;
    }
L_0885B4D8:
    aot_gpr[9] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    goto L_0885B4E0;
L_0885B4E0:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(24308)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24312)));
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[9]);
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(24316)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(64));
    aot_gpr[10] = (aot_gpr[4] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0885B4E0;
      }
      goto L_0885B50C;
    }
L_0885B50C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B51C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (2215u << 16u);
      if (branch_taken) {
          goto L_0885B54C;
      }
      goto L_0885B538;
    }
L_0885B538:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(24308));
    aot_gpr[31] = (0x0885B54Cu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0885B54Cu) goto L_0885B54C;
    return;
L_0885B54C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24312)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B568;
      }
      goto L_0885B558;
    }
L_0885B558:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[31] = (0x0885B568u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(24312));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0885B568u) goto L_0885B568;
    return;
L_0885B568:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24316), 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24320), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B588:
    aot_gpr[5] = (0u | 0u);
    goto L_0885B58C;
L_0885B58C:
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885B58C;
      }
      goto L_0885B5A4;
    }
L_0885B5A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(11)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr[5]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B5B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (0u | 6u);
    aot_gpr[18] = (2218u << 16u);
    goto L_0885B5E0;
L_0885B5E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x0885B5ECu);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0885B5ECu) goto L_0885B5EC;
    return;
L_0885B5EC:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[19]);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const float fs = aot_fpr[0]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<0u>(aot_fpr[12]));
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[4]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B624;
      }
      goto L_0885B61C;
    }
L_0885B61C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_0885B634;
      }
      goto L_0885B624;
    }
L_0885B624:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885B634;
      }
      goto L_0885B630;
    }
L_0885B630:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0885B634;
L_0885B634:
    { const bool branch_taken = aot_gpr[19] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0885B654;
      }
      goto L_0885B63C;
    }
L_0885B63C:
    aot_gpr[5] = (aot_gpr[19] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[16]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_0885B654;
L_0885B654:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885B5E0;
      }
      goto L_0885B664;
    }
L_0885B664:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
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
L_0885B688:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B744;
      }
      goto L_0885B690;
    }
L_0885B690:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[9] = (2215u << 16u);
      if (branch_taken) {
          goto L_0885B744;
      }
      goto L_0885B69C;
    }
L_0885B69C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(24320)));
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(24312)));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[6] = (0u | 2u);
    goto L_0885B6C4;
L_0885B6C4:
    aot_gpr[10] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[11]) >> 1u));
    aot_gpr[3] = (aot_gpr[3] >> 31u);
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[3]);
    aot_gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[11]) >> 1u));
    aot_gpr[11] = (aot_gpr[11] & 255u);
    aot_gpr[3] = (aot_gpr[6] << 2u);
    aot_gpr[11] = (aot_gpr[11] << 24u);
    aot_gpr[3] = (aot_gpr[8] + aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (aot_gpr[2] << 2u);
    aot_gpr[10] = (aot_gpr[10] & 255u);
    aot_gpr[10] = (aot_gpr[10] << 24u);
    aot_gpr[11] = (aot_gpr[8] + aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(0), aot_gpr[10]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[7]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0885B6C4;
      }
      goto L_0885B71C;
    }
L_0885B71C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(32), aot_gpr[8]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(24320)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24316)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(24320), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885B744;
      }
      goto L_0885B740;
    }
L_0885B740:
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(24320), 0u);
    goto L_0885B744;
L_0885B744:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B74C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(21)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) <= 0;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0885B794;
      }
      goto L_0885B768;
    }
L_0885B768:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (0u | 0u);
    goto L_0885B774;
L_0885B774:
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885B774;
      }
      goto L_0885B78C;
    }
L_0885B78C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B87C;
      }
      goto L_0885B794;
    }
L_0885B794:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885B7F4;
      }
      goto L_0885B7A0;
    }
L_0885B7A0:
    aot_gpr[10] = (0u | 1u);
    aot_gpr[9] = (0u | 0u);
    goto L_0885B7A8;
L_0885B7A8:
    aot_gpr[8] = (aot_gpr[9] + aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0885B7C8;
      }
      goto L_0885B7B8;
    }
L_0885B7B8:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-64));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) >= 0;
    aot_gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_0885B7C8;
      }
      goto L_0885B7C4;
    }
L_0885B7C4:
    aot_gpr[7] = (0u | 0u);
    goto L_0885B7C8;
L_0885B7C8:
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[9]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885B7A8;
      }
      goto L_0885B7DC;
    }
L_0885B7DC:
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B7EC;
      }
      goto L_0885B7E4;
    }
L_0885B7E4:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_0885B7EC;
L_0885B7EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B87C;
      }
      goto L_0885B7F4;
    }
L_0885B7F4:
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B828;
      }
      goto L_0885B800;
    }
L_0885B800:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0885B828;
      }
      goto L_0885B818;
    }
L_0885B818:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(22)));
    goto L_0885B828;
L_0885B828:
    aot_gpr[7] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    goto L_0885B830;
L_0885B830:
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885B86C;
      }
      goto L_0885B83C;
    }
L_0885B83C:
    aot_gpr[10] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD8(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B868;
      }
      goto L_0885B854;
    }
L_0885B854:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(255));
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B868;
      }
      goto L_0885B864;
    }
L_0885B864:
    aot_gpr[9] = (aot_gpr[8] | 0u);
    goto L_0885B868;
L_0885B868:
    PSPRECOMP_AOT_STORE8(aot_gpr[10] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[9]));
    goto L_0885B86C;
L_0885B86C:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885B830;
      }
      goto L_0885B87C;
    }
L_0885B87C:
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0885B88Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_0885B688;
L_0885B88C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B898:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24304), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B8B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(208)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(212)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(216)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(220)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(224)));
      if (branch_taken) {
          goto L_0885B8EC;
      }
      goto L_0885B8E0;
    }
L_0885B8E0:
    aot_gpr[31] = (0x0885B8E8u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 53u, 0x08A4C3C8u>(ctx, &aot_mem) && ctx.pc == 0x0885B8E8u) goto L_0885B8E8;
    return;
L_0885B8E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(208), aot_gpr[2]);
    goto L_0885B8EC;
L_0885B8EC:
    { const bool branch_taken = aot_gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B904;
      }
      goto L_0885B8F4;
    }
L_0885B8F4:
    aot_gpr[4] = (aot_gpr[11] | 0u);
    aot_gpr[31] = (0x0885B900u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 53u, 0x08A4C3C8u>(ctx, &aot_mem) && ctx.pc == 0x0885B900u) goto L_0885B900;
    return;
L_0885B900:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(212), aot_gpr[2]);
    goto L_0885B904;
L_0885B904:
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B91C;
      }
      goto L_0885B90C;
    }
L_0885B90C:
    aot_gpr[4] = (aot_gpr[10] | 0u);
    aot_gpr[31] = (0x0885B918u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 53u, 0x08A4C3C8u>(ctx, &aot_mem) && ctx.pc == 0x0885B918u) goto L_0885B918;
    return;
L_0885B918:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(216), aot_gpr[2]);
    goto L_0885B91C;
L_0885B91C:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B934;
      }
      goto L_0885B924;
    }
L_0885B924:
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x0885B930u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 54u, 0x08A4C3D0u>(ctx, &aot_mem) && ctx.pc == 0x0885B930u) goto L_0885B930;
    return;
L_0885B930:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(220), aot_gpr[2]);
    goto L_0885B934;
L_0885B934:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B94C;
      }
      goto L_0885B93C;
    }
L_0885B93C:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x0885B948u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 55u, 0x08A4C3D8u>(ctx, &aot_mem) && ctx.pc == 0x0885B948u) goto L_0885B948;
    return;
L_0885B948:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(224), aot_gpr[2]);
    goto L_0885B94C;
L_0885B94C:
    aot_gpr[2] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B95C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(228)));
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B97C;
      }
      goto L_0885B96C;
    }
L_0885B96C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(208)));
    aot_gpr[4] = (aot_gpr[5] << 6u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
      if (branch_taken) {
          goto L_0885B980;
      }
      goto L_0885B97C;
    }
L_0885B97C:
    aot_gpr[2] = (0u | 0u);
    goto L_0885B980;
L_0885B980:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B988:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(232)));
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B9A8;
      }
      goto L_0885B998;
    }
L_0885B998:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(212)));
    aot_gpr[4] = (aot_gpr[5] << 6u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
      if (branch_taken) {
          goto L_0885B9AC;
      }
      goto L_0885B9A8;
    }
L_0885B9A8:
    aot_gpr[2] = (0u | 0u);
    goto L_0885B9AC;
L_0885B9AC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B9B4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(236)));
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B9D4;
      }
      goto L_0885B9C4;
    }
L_0885B9C4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(216)));
    aot_gpr[4] = (aot_gpr[5] << 6u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
      if (branch_taken) {
          goto L_0885B9D8;
      }
      goto L_0885B9D4;
    }
L_0885B9D4:
    aot_gpr[2] = (0u | 0u);
    goto L_0885B9D8;
L_0885B9D8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885B9E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885B9F8;
      }
      goto L_0885B9EC;
    }
L_0885B9EC:
    aot_gpr[2] = (aot_gpr[5] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
      if (branch_taken) {
          goto L_0885B9FC;
      }
      goto L_0885B9F8;
    }
L_0885B9F8:
    aot_gpr[2] = (0u | 0u);
    goto L_0885B9FC;
L_0885B9FC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BA04:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(246))))));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885BA24;
      }
      goto L_0885BA14;
    }
L_0885BA14:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(224)));
    aot_gpr[4] = (aot_gpr[5] << 4u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
      if (branch_taken) {
          goto L_0885BA28;
      }
      goto L_0885BA24;
    }
L_0885BA24:
    aot_gpr[2] = (0u | 0u);
    goto L_0885BA28;
L_0885BA28:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BA30:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24328), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BA50:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(148)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[10] == aot_gpr[8];
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(152)));
      if (branch_taken) {
          goto L_0885BA6C;
      }
      goto L_0885BA64;
    }
L_0885BA64:
    aot_gpr[9] = (aot_gpr[10] << 4u);
    aot_gpr[9] = (aot_gpr[5] + aot_gpr[9]);
    goto L_0885BA6C;
L_0885BA6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(140), aot_gpr[9]);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[8];
    aot_gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_0885BA80;
      }
      goto L_0885BA78;
    }
L_0885BA78:
    aot_gpr[9] = (aot_gpr[7] << 5u);
    aot_gpr[9] = (aot_gpr[6] + aot_gpr[9]);
    goto L_0885BA80;
L_0885BA80:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(144), aot_gpr[9]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BA88:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(116)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(120)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(128), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BA9C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(128), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BAB4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(132)));
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7652)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[13];
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(132), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BACC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(116)));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(128), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BAD8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7516)));
    aot_gpr[16] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0885BB00u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0885BB00u) goto L_0885BB00;
    return;
L_0885BB00:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(136)));
    ctx.set_fpu_condition((aot_fpr[0] < aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[16] = (0u | 1u);
        goto L_0885BB14;
    }
    goto L_0885BB14;
L_0885BB14:
    aot_gpr[2] = (aot_gpr[16] & 255u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BB2C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24336), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BB4C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24344), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BB6C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0885BB80u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 93u, 0x08861744u>(ctx, &aot_mem) && ctx.pc == 0x0885BB80u) goto L_0885BB80;
    return;
L_0885BB80:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BB8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(80)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(80), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0885BBACu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 93u, 0x08861744u>(ctx, &aot_mem) && ctx.pc == 0x0885BBACu) goto L_0885BBAC;
    return;
L_0885BBAC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BBB8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24352), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BBD8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24360), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BBF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[9] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0885BC20;
      }
      goto L_0885BC0C;
    }
L_0885BC0C:
    aot_gpr[31] = (0x0885BC14u);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 93u, 0x08A4C630u>(ctx, &aot_mem) && ctx.pc == 0x0885BC14u) goto L_0885BC14;
    return;
L_0885BC14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885BC0C;
      }
      goto L_0885BC20;
    }
L_0885BC20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BC2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[9] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0885BC54;
      }
      goto L_0885BC40;
    }
L_0885BC40:
    aot_gpr[31] = (0x0885BC48u);
    aot_gpr[4] = (aot_gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 99u, 0x08A4C690u>(ctx, &aot_mem) && ctx.pc == 0x0885BC48u) goto L_0885BC48;
    return;
L_0885BC48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885BC40;
      }
      goto L_0885BC54;
    }
L_0885BC54:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BC60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[10] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0885BC74u);
    aot_gpr[5] = (aot_gpr[10] + static_cast<std::uint32_t>(132));
    goto L_0885BBF8;
L_0885BC74:
    aot_gpr[5] = (aot_gpr[10] + static_cast<std::uint32_t>(144));
    aot_gpr[31] = (0x0885BC80u);
    aot_gpr[4] = (aot_gpr[10] | 0u);
    goto L_0885BBF8;
L_0885BC80:
    aot_gpr[5] = (aot_gpr[10] + static_cast<std::uint32_t>(156));
    aot_gpr[31] = (0x0885BC8Cu);
    aot_gpr[4] = (aot_gpr[10] | 0u);
    goto L_0885BBF8;
L_0885BC8C:
    aot_gpr[5] = (aot_gpr[10] + static_cast<std::uint32_t>(96));
    aot_gpr[31] = (0x0885BC98u);
    aot_gpr[4] = (aot_gpr[10] | 0u);
    goto L_0885BC2C;
L_0885BC98:
    aot_gpr[5] = (aot_gpr[10] + static_cast<std::uint32_t>(108));
    aot_gpr[31] = (0x0885BCA4u);
    aot_gpr[4] = (aot_gpr[10] | 0u);
    goto L_0885BC2C;
L_0885BCA4:
    aot_gpr[5] = (aot_gpr[10] + static_cast<std::uint32_t>(120));
    aot_gpr[31] = (0x0885BCB0u);
    aot_gpr[4] = (aot_gpr[10] | 0u);
    goto L_0885BC2C;
L_0885BCB0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BCBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(168)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(312));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(172)));
    aot_gpr[5] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0885BD20;
      }
      goto L_0885BCEC;
    }
L_0885BCEC:
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(132));
    goto L_0885BCF0;
L_0885BCF0:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[31] = (0x0885BCFCu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_0885BB6C;
L_0885BCFC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0885BD08u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 105u, 0x08A4C6F0u>(ctx, &aot_mem) && ctx.pc == 0x0885BD08u) goto L_0885BD08;
    return;
L_0885BD08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(168)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(312));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_0885BCF0;
      }
      goto L_0885BD20;
    }
L_0885BD20:
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
L_0885BD3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0885BD64u);
    aot_gpr[6] = (0u | 312u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x0885BD64u) goto L_0885BD64;
    return;
L_0885BD64:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(168), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[31] = (0x0885BD78u);
    aot_gpr[6] = (0u | 260u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x0885BD78u) goto L_0885BD78;
    return;
L_0885BD78:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(172), aot_gpr[2]);
    aot_gpr[31] = (0x0885BD84u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885BCBC;
L_0885BD84:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BD98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-288));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(260), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(264), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(268), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(272), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(276), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(280), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(284), aot_gpr[31]);
    aot_gpr[31] = (0x0885BDC8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7512)));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 253u, 0x088BEF2Cu>(ctx, &aot_mem) && ctx.pc == 0x0885BDC8u) goto L_0885BDC8;
    return;
L_0885BDC8:
    aot_gpr[21] = (2214u << 16u);
    aot_gpr[20] = (2214u << 16u);
    aot_gpr[19] = (2214u << 16u);
    aot_gpr[18] = (2214u << 16u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(4040));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4052));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4064));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4072));
    aot_gpr[8] = (aot_gpr[2] + static_cast<std::uint32_t>(52));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0885BE04u);
    aot_gpr[9] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0885BE04u) goto L_0885BE04;
    return;
L_0885BE04:
    aot_gpr[17] = (0u | 32768u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0885BE24u);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 70u, 0x08877444u>(ctx, &aot_mem) && ctx.pc == 0x0885BE24u) goto L_0885BE24;
    return;
L_0885BE24:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
      if (branch_taken) {
          goto L_0885BE5C;
      }
      goto L_0885BE30;
    }
L_0885BE30:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885BE54;
      }
      goto L_0885BE3C;
    }
L_0885BE3C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0885BE48u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 72u, 0x0887746Cu>(ctx, &aot_mem) && ctx.pc == 0x0885BE48u) goto L_0885BE48;
    return;
L_0885BE48:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_0885BE5C;
      }
      goto L_0885BE54;
    }
L_0885BE54:
    aot_gpr[31] = (0x0885BE5Cu);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 97u, 0x088617B8u>(ctx, &aot_mem) && ctx.pc == 0x0885BE5Cu) goto L_0885BE5C;
    return;
L_0885BE5C:
    aot_gpr[8] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0885BE7Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4092));
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0885BE7Cu) goto L_0885BE7C;
    return;
L_0885BE7C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[31] = (0x0885BE98u);
    aot_gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 70u, 0x08877444u>(ctx, &aot_mem) && ctx.pc == 0x0885BE98u) goto L_0885BE98;
    return;
L_0885BE98:
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[2]);
      if (branch_taken) {
          goto L_0885BED4;
      }
      goto L_0885BEA4;
    }
L_0885BEA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885BEC8;
      }
      goto L_0885BEB0;
    }
L_0885BEB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x0885BEBCu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 72u, 0x0887746Cu>(ctx, &aot_mem) && ctx.pc == 0x0885BEBCu) goto L_0885BEBC;
    return;
L_0885BEBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_0885BED4;
      }
      goto L_0885BEC8;
    }
L_0885BEC8:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x0885BED4u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 97u, 0x088617B8u>(ctx, &aot_mem) && ctx.pc == 0x0885BED4u) goto L_0885BED4;
    return;
L_0885BED4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(260)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(264)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(268)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(272)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(276)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(280)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(284)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BEF8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0885BF1Cu);
    aot_gpr[6] = (0u | 1792u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x0885BF1Cu) goto L_0885BF1C;
    return;
L_0885BF1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(176), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885BF30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0885BF80u);
    aot_gpr[6] = (0u | 60u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0885BF80u) goto L_0885BF80;
    return;
L_0885BF80:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885BFA8;
      }
      goto L_0885BF8C;
    }
L_0885BF8C:
    aot_gpr[31] = (0x0885BF94u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 92u, 0x08A4C61Cu>(ctx, &aot_mem) && ctx.pc == 0x0885BF94u) goto L_0885BF94;
    return;
L_0885BF94:
    aot_gpr[31] = (0x0885BF9Cu);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 92u, 0x08A4C61Cu>(ctx, &aot_mem) && ctx.pc == 0x0885BF9Cu) goto L_0885BF9C;
    return;
L_0885BF9C:
    aot_gpr[31] = (0x0885BFA4u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0584_entry, 584u, 92u, 0x08A4C61Cu>(ctx, &aot_mem) && ctx.pc == 0x0885BFA4u) goto L_0885BFA4;
    return;
L_0885BFA4:
    aot_gpr[17] = (aot_gpr[5] | 0u);
    goto L_0885BFA8;
L_0885BFA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[31] = (0x0885BFB4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 30u, 0x088601B8u>(ctx, &aot_mem) && ctx.pc == 0x0885BFB4u) goto L_0885BFB4;
    return;
L_0885BFB4:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x0885BFC0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885BC60;
L_0885BFC0:
    aot_gpr[31] = (0x0885BFC8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885BD3C;
L_0885BFC8:
    aot_gpr[31] = (0x0885BFD0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885BD98;
L_0885BFD0:
    aot_gpr[31] = (0x0885BFD8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0885BEF8;
L_0885BFD8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(184), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(196), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (0u | 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0885BFF0;
    }
    goto L_0885BFF0;
L_0885BFF0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(180), aot_gpr[17]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(200), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x0885C000u; return;
}

void recomp_unit_0087(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0087_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_87(Runtime &runtime) {
    runtime.register_generated_unit(87u, 0x0885B000u, 4096u, &recomp_unit_0087, &recomp_unit_0087_entry);
    runtime.register_function(0x0885B000u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B018u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B034u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B054u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B068u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B08Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B0ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B0CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B0D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B0DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B0E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B0ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B0FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B100u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B11Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B13Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B184u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B18Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B194u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B1A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B1ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B1C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B1CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B1D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B1DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B1ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B1F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B1FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B208u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B210u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B21Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B22Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B248u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B250u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B258u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B268u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B288u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B29Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B2B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B2D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B2F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B318u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B338u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B358u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B378u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B398u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B3A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B3A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B3B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B3C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B3CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B3DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B3E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B3F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B400u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B404u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B410u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B438u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B458u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B490u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B4B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B4D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B4E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B50Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B51Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B538u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B54Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B558u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B568u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B588u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B58Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B5A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B5B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B5E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B5ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B61Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B624u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B630u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B634u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B63Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B654u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B664u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B688u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B690u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B69Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B6C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B71Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B740u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B744u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B74Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B768u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B774u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B78Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B794u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B7A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B7A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B7B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B7C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B7C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B7DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B7E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B7ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B7F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B800u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B818u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B828u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B830u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B83Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B854u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B864u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B868u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B86Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B87Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B88Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B898u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B8B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B8E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B8E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B8ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B8F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B900u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B904u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B90Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B918u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B91Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B924u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B930u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B934u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B93Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B948u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B94Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B95Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B96Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B97Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B980u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B988u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B998u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B9A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B9ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B9B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B9C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B9D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B9D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B9E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B9ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B9F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885B9FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BA04u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BA14u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BA24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BA28u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BA30u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BA50u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BA64u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BA6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BA78u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BA80u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BA88u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BA9Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BAB4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BACCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BAD8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BB00u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BB14u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BB2Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BB4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BB6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BB80u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BB8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BBACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BBB8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BBD8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BBF8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BC0Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BC14u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BC20u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BC2Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BC40u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BC48u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BC54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BC60u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BC74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BC80u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BC8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BC98u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BCA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BCB0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BCBCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BCECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BCF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BCFCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BD08u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BD20u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BD3Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BD64u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BD78u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BD84u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BD98u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BDC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BE04u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BE24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BE30u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BE3Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BE48u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BE54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BE5Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BE7Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BE98u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BEA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BEB0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BEBCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BEC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BED4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BEF8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BF1Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BF30u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BF80u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BF8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BF94u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BF9Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BFA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BFA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BFB4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BFC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BFC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BFD0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BFD8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0885BFF0u, &recomp_unit_0087, "recomp_unit_0087");
}
} // namespace psprecomp
