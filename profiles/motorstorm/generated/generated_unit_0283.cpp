#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0283[1024] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0,
    12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20,
    0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0,
    33, 34, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 39, 40, 0, 41, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 49,
    0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0,
    0, 57, 0, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 67, 68, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 71, 72, 0, 0, 0, 0, 73,
    0, 74, 0, 0, 0, 0, 75, 76, 0, 0, 0, 77, 78, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 88, 0, 0, 0,
    0, 89, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96,
    0, 0, 0, 97, 98, 0, 0, 0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 102, 0, 0, 103, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0,
    0, 0, 0, 106, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 112, 0, 0, 0, 0, 113,
    0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 118,
    0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 121, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0,
    133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0,
    139, 0, 0, 140, 0, 141, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 148, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0,
    0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 158, 0, 159, 0, 160, 0,
    0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0,
    0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 174, 0,
    0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0,
    0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0,
    0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 0,
    0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0,
    212, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0,
    0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 226,
};
void recomp_unit_0283_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0891F000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0283[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0891F000;
    case 2u: goto L_0891F01C;
    case 3u: goto L_0891F030;
    case 4u: goto L_0891F03C;
    case 5u: goto L_0891F050;
    case 6u: goto L_0891F068;
    case 7u: goto L_0891F08C;
    case 8u: goto L_0891F0A0;
    case 9u: goto L_0891F0B4;
    case 10u: goto L_0891F0E0;
    case 11u: goto L_0891F0EC;
    case 12u: goto L_0891F100;
    case 13u: goto L_0891F10C;
    case 14u: goto L_0891F128;
    case 15u: goto L_0891F180;
    case 16u: goto L_0891F188;
    case 17u: goto L_0891F190;
    case 18u: goto L_0891F1B0;
    case 19u: goto L_0891F1C0;
    case 20u: goto L_0891F1FC;
    case 21u: goto L_0891F208;
    case 22u: goto L_0891F218;
    case 23u: goto L_0891F220;
    case 24u: goto L_0891F228;
    case 25u: goto L_0891F258;
    case 26u: goto L_0891F280;
    case 27u: goto L_0891F294;
    case 28u: goto L_0891F2A8;
    case 29u: goto L_0891F2B4;
    case 30u: goto L_0891F2CC;
    case 31u: goto L_0891F2E4;
    case 32u: goto L_0891F2EC;
    case 33u: goto L_0891F300;
    case 34u: goto L_0891F304;
    case 35u: goto L_0891F30C;
    case 36u: goto L_0891F328;
    case 37u: goto L_0891F340;
    case 38u: goto L_0891F348;
    case 39u: goto L_0891F35C;
    case 40u: goto L_0891F360;
    case 41u: goto L_0891F368;
    case 42u: goto L_0891F380;
    case 43u: goto L_0891F394;
    case 44u: goto L_0891F3A4;
    case 45u: goto L_0891F3B8;
    case 46u: goto L_0891F3D0;
    case 47u: goto L_0891F3E8;
    case 48u: goto L_0891F3F0;
    case 49u: goto L_0891F3FC;
    case 50u: goto L_0891F414;
    case 51u: goto L_0891F41C;
    case 52u: goto L_0891F42C;
    case 53u: goto L_0891F440;
    case 54u: goto L_0891F454;
    case 55u: goto L_0891F460;
    case 56u: goto L_0891F470;
    case 57u: goto L_0891F484;
    case 58u: goto L_0891F494;
    case 59u: goto L_0891F49C;
    case 60u: goto L_0891F4AC;
    case 61u: goto L_0891F4D4;
    case 62u: goto L_0891F4DC;
    case 63u: goto L_0891F4E4;
    case 64u: goto L_0891F4F8;
    case 65u: goto L_0891F514;
    case 66u: goto L_0891F51C;
    case 67u: goto L_0891F530;
    case 68u: goto L_0891F534;
    case 69u: goto L_0891F548;
    case 70u: goto L_0891F550;
    case 71u: goto L_0891F564;
    case 72u: goto L_0891F568;
    case 73u: goto L_0891F57C;
    case 74u: goto L_0891F584;
    case 75u: goto L_0891F598;
    case 76u: goto L_0891F59C;
    case 77u: goto L_0891F5AC;
    case 78u: goto L_0891F5B0;
    case 79u: goto L_0891F5C0;
    case 80u: goto L_0891F5C8;
    case 81u: goto L_0891F604;
    case 82u: goto L_0891F618;
    case 83u: goto L_0891F62C;
    case 84u: goto L_0891F638;
    case 85u: goto L_0891F64C;
    case 86u: goto L_0891F658;
    case 87u: goto L_0891F66C;
    case 88u: goto L_0891F670;
    case 89u: goto L_0891F684;
    case 90u: goto L_0891F690;
    case 91u: goto L_0891F6A0;
    case 92u: goto L_0891F6AC;
    case 93u: goto L_0891F6C8;
    case 94u: goto L_0891F6D4;
    case 95u: goto L_0891F6EC;
    case 96u: goto L_0891F6FC;
    case 97u: goto L_0891F70C;
    case 98u: goto L_0891F710;
    case 99u: goto L_0891F724;
    case 100u: goto L_0891F72C;
    case 101u: goto L_0891F734;
    case 102u: goto L_0891F748;
    case 103u: goto L_0891F754;
    case 104u: goto L_0891F758;
    case 105u: goto L_0891F778;
    case 106u: goto L_0891F78C;
    case 107u: goto L_0891F790;
    case 108u: goto L_0891F7A4;
    case 109u: goto L_0891F7BC;
    case 110u: goto L_0891F7D0;
    case 111u: goto L_0891F7E4;
    case 112u: goto L_0891F7E8;
    case 113u: goto L_0891F7FC;
    case 114u: goto L_0891F80C;
    case 115u: goto L_0891F838;
    case 116u: goto L_0891F860;
    case 117u: goto L_0891F874;
    case 118u: goto L_0891F87C;
    case 119u: goto L_0891F890;
    case 120u: goto L_0891F8A0;
    case 121u: goto L_0891F8B4;
    case 122u: goto L_0891F8B8;
    case 123u: goto L_0891F8CC;
    case 124u: goto L_0891F8E8;
    case 125u: goto L_0891F914;
    case 126u: goto L_0891F920;
    case 127u: goto L_0891F92C;
    case 128u: goto L_0891F934;
    case 129u: goto L_0891F93C;
    case 130u: goto L_0891F950;
    case 131u: goto L_0891F964;
    case 132u: goto L_0891F96C;
    case 133u: goto L_0891F980;
    case 134u: goto L_0891F988;
    case 135u: goto L_0891F9A8;
    case 136u: goto L_0891F9CC;
    case 137u: goto L_0891F9D8;
    case 138u: goto L_0891F9EC;
    case 139u: goto L_0891FA00;
    case 140u: goto L_0891FA0C;
    case 141u: goto L_0891FA14;
    case 142u: goto L_0891FA18;
    case 143u: goto L_0891FA2C;
    case 144u: goto L_0891FA44;
    case 145u: goto L_0891FA8C;
    case 146u: goto L_0891FAAC;
    case 147u: goto L_0891FAB8;
    case 148u: goto L_0891FAC0;
    case 149u: goto L_0891FAC8;
    case 150u: goto L_0891FAD8;
    case 151u: goto L_0891FAF8;
    case 152u: goto L_0891FB08;
    case 153u: goto L_0891FB1C;
    case 154u: goto L_0891FB28;
    case 155u: goto L_0891FB34;
    case 156u: goto L_0891FB54;
    case 157u: goto L_0891FB60;
    case 158u: goto L_0891FB68;
    case 159u: goto L_0891FB70;
    case 160u: goto L_0891FB78;
    case 161u: goto L_0891FB88;
    case 162u: goto L_0891FBA8;
    case 163u: goto L_0891FBB8;
    case 164u: goto L_0891FBCC;
    case 165u: goto L_0891FBD8;
    case 166u: goto L_0891FBE4;
    case 167u: goto L_0891FC04;
    case 168u: goto L_0891FC10;
    case 169u: goto L_0891FC18;
    case 170u: goto L_0891FC28;
    case 171u: goto L_0891FC48;
    case 172u: goto L_0891FC58;
    case 173u: goto L_0891FC6C;
    case 174u: goto L_0891FC78;
    case 175u: goto L_0891FC84;
    case 176u: goto L_0891FCA4;
    case 177u: goto L_0891FCB0;
    case 178u: goto L_0891FCB8;
    case 179u: goto L_0891FCC8;
    case 180u: goto L_0891FCE8;
    case 181u: goto L_0891FCF8;
    case 182u: goto L_0891FD0C;
    case 183u: goto L_0891FD18;
    case 184u: goto L_0891FD24;
    case 185u: goto L_0891FD44;
    case 186u: goto L_0891FD50;
    case 187u: goto L_0891FD58;
    case 188u: goto L_0891FD60;
    case 189u: goto L_0891FD68;
    case 190u: goto L_0891FD70;
    case 191u: goto L_0891FD80;
    case 192u: goto L_0891FDA0;
    case 193u: goto L_0891FDB0;
    case 194u: goto L_0891FDC4;
    case 195u: goto L_0891FDD0;
    case 196u: goto L_0891FDDC;
    case 197u: goto L_0891FDF8;
    case 198u: goto L_0891FE04;
    case 199u: goto L_0891FE14;
    case 200u: goto L_0891FE34;
    case 201u: goto L_0891FE44;
    case 202u: goto L_0891FE58;
    case 203u: goto L_0891FE64;
    case 204u: goto L_0891FE70;
    case 205u: goto L_0891FE8C;
    case 206u: goto L_0891FE98;
    case 207u: goto L_0891FEA8;
    case 208u: goto L_0891FEBC;
    case 209u: goto L_0891FED0;
    case 210u: goto L_0891FEDC;
    case 211u: goto L_0891FEEC;
    case 212u: goto L_0891FF00;
    case 213u: goto L_0891FF0C;
    case 214u: goto L_0891FF18;
    case 215u: goto L_0891FF3C;
    case 216u: goto L_0891FF48;
    case 217u: goto L_0891FF54;
    case 218u: goto L_0891FF78;
    case 219u: goto L_0891FF84;
    case 220u: goto L_0891FF90;
    case 221u: goto L_0891FF9C;
    case 222u: goto L_0891FFAC;
    case 223u: goto L_0891FFB4;
    case 224u: goto L_0891FFDC;
    case 225u: goto L_0891FFE8;
    case 226u: goto L_0891FFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0891F000:
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_0891F01C;
L_0891F01C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 258u, 0x0891EFE0u>(ctx, &aot_mem); return;
      }
      goto L_0891F030;
    }
L_0891F030:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F0A0;
      }
      goto L_0891F03C;
    }
L_0891F03C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0891F0A0;
      }
      goto L_0891F050;
    }
L_0891F050:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F08C;
      }
      goto L_0891F068;
    }
L_0891F068:
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[8] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_0891F08C;
L_0891F08C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891F050;
      }
      goto L_0891F0A0;
    }
L_0891F0A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891F0B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891F10C;
      }
      goto L_0891F0E0;
    }
L_0891F0E0:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F10C;
      }
      goto L_0891F0EC;
    }
L_0891F0EC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0891F100u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 117u, 0x089228D4u>(ctx, &aot_mem) && ctx.pc == 0x0891F100u) goto L_0891F100;
    return;
L_0891F100:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F0EC;
      }
      goto L_0891F10C;
    }
L_0891F10C:
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
L_0891F128:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[30]);
    aot_gpr[21] = (aot_gpr[7] | 0u);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[23]);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[23] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[21] ? 1u : 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[31]);
    goto L_0891F180;
L_0891F180:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[20] < aot_gpr[30] ? 1u : 0u);
      if (branch_taken) {
          goto L_0891F228;
      }
      goto L_0891F188;
    }
L_0891F188:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F228;
      }
      goto L_0891F190;
    }
L_0891F190:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[19]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0891F1FC;
      }
      goto L_0891F1B0;
    }
L_0891F1B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0891F1C0u);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0271_entry, 271u, 41u, 0x08913490u>(ctx, &aot_mem) && ctx.pc == 0x0891F1C0u) goto L_0891F1C0;
    return;
L_0891F1C0:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(aot_gpr[23]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[21] ? 1u : 0u);
      if (branch_taken) {
          goto L_0891F220;
      }
      goto L_0891F1FC;
    }
L_0891F1FC:
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F218;
      }
      goto L_0891F208;
    }
L_0891F208:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[21] ? 1u : 0u);
      if (branch_taken) {
          goto L_0891F220;
      }
      goto L_0891F218;
    }
L_0891F218:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    goto L_0891F220;
L_0891F220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F180;
      }
      goto L_0891F228;
    }
L_0891F228:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891F258:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0891F280u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0276_entry, 276u, 11u, 0x0891814Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F280u) goto L_0891F280;
    return;
L_0891F280:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0891F294u);
    aot_gpr[5] = (0u | 0u);
    goto L_0891F128;
L_0891F294:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891F2A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F300;
      }
      goto L_0891F2B4;
    }
L_0891F2B4:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[8] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0891F300;
      }
      goto L_0891F2CC;
    }
L_0891F2CC:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[6]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F2EC;
      }
      goto L_0891F2E4;
    }
L_0891F2E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F304;
      }
      goto L_0891F2EC;
    }
L_0891F2EC:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891F2CC;
      }
      goto L_0891F300;
    }
L_0891F300:
    aot_gpr[2] = (0u | 0u);
    goto L_0891F304;
L_0891F304:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891F30C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[8] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0891F35C;
      }
      goto L_0891F328;
    }
L_0891F328:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[9] + aot_gpr[6]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[2] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F348;
      }
      goto L_0891F340;
    }
L_0891F340:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F360;
      }
      goto L_0891F348;
    }
L_0891F348:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[8] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891F328;
      }
      goto L_0891F35C;
    }
L_0891F35C:
    aot_gpr[2] = (0u | 0u);
    goto L_0891F360;
L_0891F360:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891F368:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[9] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0891F3B8;
      }
      goto L_0891F380;
    }
L_0891F380:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[10] = (aot_gpr[10] + aot_gpr[7]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[10] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F3A4;
      }
      goto L_0891F394;
    }
L_0891F394:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_0891F3A4;
L_0891F3A4:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[9] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891F380;
      }
      goto L_0891F3B8;
    }
L_0891F3B8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[9] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_0891F414;
      }
      goto L_0891F3D0;
    }
L_0891F3D0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[10] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F3FC;
      }
      goto L_0891F3E8;
    }
L_0891F3E8:
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(72), aot_gpr[6]);
      if (branch_taken) {
          goto L_0891F3FC;
      }
      goto L_0891F3F0;
    }
L_0891F3F0:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(88)));
    aot_gpr[10] = (aot_gpr[10] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(88), aot_gpr[10]);
    goto L_0891F3FC;
L_0891F3FC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (aot_gpr[9] < aot_gpr[10] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891F3D0;
      }
      goto L_0891F414;
    }
L_0891F414:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891F41C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (aot_gpr[7] & 255u);
      if (branch_taken) {
          goto L_0891F5C0;
      }
      goto L_0891F42C;
    }
L_0891F42C:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[2] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[2] < aot_gpr[12] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[11] = (0u | 0u);
      if (branch_taken) {
          goto L_0891F5C0;
      }
      goto L_0891F440;
    }
L_0891F440:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[11]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F5B0;
      }
      goto L_0891F454;
    }
L_0891F454:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F5B0;
      }
      goto L_0891F460;
    }
L_0891F460:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(128)));
    aot_gpr[3] = (aot_gpr[8] & 4u);
    { const bool branch_taken = aot_gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F5B0;
      }
      goto L_0891F470;
    }
L_0891F470:
    aot_gpr[3] = (aot_gpr[8] | 0u);
    aot_gpr[8] = (0u | 8u);
    aot_gpr[3] = (aot_gpr[3] & 1u);
    if (aot_gpr[3] != 0u) {
    aot_gpr[8] = (0u | 2u);
        goto L_0891F484;
    }
    goto L_0891F484;
L_0891F484:
    aot_gpr[3] = (0u | 0u);
    aot_gpr[13] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[13] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F5B0;
      }
      goto L_0891F494;
    }
L_0891F494:
    aot_gpr[12] = (0u | 0u);
    aot_gpr[12] = (aot_gpr[9] + aot_gpr[12]);
    goto L_0891F49C;
L_0891F49C:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(128)));
    aot_gpr[13] = (aot_gpr[13] & 2u);
    { const bool branch_taken = aot_gpr[13] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F4D4;
      }
      goto L_0891F4AC;
    }
L_0891F4AC:
    { const std::uint32_t vfpu_address = aot_gpr[10] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[10] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[10] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[10] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[12] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 32u, 3u);
      ctx.read_vfpu_vector_ct<14u, 3u>(vfpu_target_raw);
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 15u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<15u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<14u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<14u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<14u, 3u>(vfpu_d); }
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_0891F4DC;
      }
      goto L_0891F4D4;
    }
L_0891F4D4:
    { const std::uint32_t vfpu_address = aot_gpr[12] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_0891F4DC;
L_0891F4DC:
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F4F8;
      }
      goto L_0891F4E4;
    }
L_0891F4E4:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[7] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_0891F59C;
      }
      goto L_0891F4F8;
    }
L_0891F4F8:
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[15] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0891F51C;
      }
      goto L_0891F514;
    }
L_0891F514:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_0891F534;
      }
      goto L_0891F51C;
    }
L_0891F51C:
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((aot_fpr[15] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F534;
      }
      goto L_0891F530;
    }
L_0891F530:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    goto L_0891F534;
L_0891F534:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F550;
      }
      goto L_0891F548;
    }
L_0891F548:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0891F568;
      }
      goto L_0891F550;
    }
L_0891F550:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((aot_fpr[14] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F568;
      }
      goto L_0891F564;
    }
L_0891F564:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    goto L_0891F568;
L_0891F568:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F584;
      }
      goto L_0891F57C;
    }
L_0891F57C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0891F59C;
      }
      goto L_0891F584;
    }
L_0891F584:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F59C;
      }
      goto L_0891F598;
    }
L_0891F598:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0891F59C;
L_0891F59C:
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[13] = (static_cast<std::int32_t>(aot_gpr[3]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[13] != 0u;
    aot_gpr[12] = (aot_gpr[12] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891F49C;
      }
      goto L_0891F5AC;
    }
L_0891F5AC:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_0891F5B0;
L_0891F5B0:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[2] < aot_gpr[12] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891F440;
      }
      goto L_0891F5C0;
    }
L_0891F5C0:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891F5C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0891F64C;
      }
      goto L_0891F604;
    }
L_0891F604:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0891F64C;
      }
      goto L_0891F618;
    }
L_0891F618:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F638;
      }
      goto L_0891F62C;
    }
L_0891F62C:
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(82), static_cast<std::uint16_t>(0u));
    PSPRECOMP_AOT_STORE16(aot_gpr[7] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_0891F638;
L_0891F638:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891F618;
      }
      goto L_0891F64C;
    }
L_0891F64C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F724;
      }
      goto L_0891F658;
    }
L_0891F658:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0891F724;
      }
      goto L_0891F66C;
    }
L_0891F66C:
    aot_gpr[23] = (16384u << 16u);
    goto L_0891F670;
L_0891F670:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[20]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F710;
      }
      goto L_0891F684;
    }
L_0891F684:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    goto L_0891F690;
L_0891F690:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0891F6A0u);
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891F6A0u) goto L_0891F6A0;
    return;
L_0891F6A0:
    aot_gpr[4] = (aot_gpr[22] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F70C;
      }
      goto L_0891F6AC;
    }
L_0891F6AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[22] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0891F6C8u);
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891F6C8u) goto L_0891F6C8;
    return;
L_0891F6C8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F6FC;
      }
      goto L_0891F6D4;
    }
L_0891F6D4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[23]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F6FC;
      }
      goto L_0891F6EC;
    }
L_0891F6EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(80)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(aot_gpr[5]));
    goto L_0891F6FC;
L_0891F6FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(16)));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0891F690;
      }
      goto L_0891F70C;
    }
L_0891F70C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_0891F710;
L_0891F710:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891F670;
      }
      goto L_0891F724;
    }
L_0891F724:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[4] = (aot_gpr[18] << 2u);
      if (branch_taken) {
          goto L_0891F758;
      }
      goto L_0891F72C;
    }
L_0891F72C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F754;
      }
      goto L_0891F734;
    }
L_0891F734:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0891F748u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x0891F748u) goto L_0891F748;
    return;
L_0891F748:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0891F758;
      }
      goto L_0891F754;
    }
L_0891F754:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), 0u);
    goto L_0891F758;
L_0891F758:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(76), aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr[5] = (aot_gpr[5] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[5] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0891F7E8;
      }
      goto L_0891F778;
    }
L_0891F778:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_0891F7E8;
      }
      goto L_0891F78C;
    }
L_0891F78C:
    aot_gpr[6] = (16384u << 16u);
    goto L_0891F790;
L_0891F790:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    aot_gpr[9] = (aot_gpr[9] + aot_gpr[8]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F7D0;
      }
      goto L_0891F7A4;
    }
L_0891F7A4:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(20)));
    aot_gpr[10] = (aot_gpr[10] & aot_gpr[6]);
    aot_gpr[10] = (0u < aot_gpr[10] ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[10] & 255u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F7D0;
      }
      goto L_0891F7BC;
    }
L_0891F7BC:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD16(aot_gpr[9] + static_cast<std::uint32_t>(80)));
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(84), aot_gpr[5]);
    aot_gpr[9] = (aot_gpr[10] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[9]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_0891F7D0;
L_0891F7D0:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[7] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891F790;
      }
      goto L_0891F7E4;
    }
L_0891F7E4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_0891F7E8;
L_0891F7E8:
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] ^ aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F80C;
      }
      goto L_0891F7FC;
    }
L_0891F7FC:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x0891F80Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26056));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x0891F80Cu) goto L_0891F80C;
    return;
L_0891F80C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891F838:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F8CC;
      }
      goto L_0891F860;
    }
L_0891F860:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (2215u << 16u);
      if (branch_taken) {
          goto L_0891F8CC;
      }
      goto L_0891F874;
    }
L_0891F874:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-26004));
    goto L_0891F87C;
L_0891F87C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F8B8;
      }
      goto L_0891F890;
    }
L_0891F890:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(82)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr[6] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F8B8;
      }
      goto L_0891F8A0;
    }
L_0891F8A0:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0891F8B4u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x0891F8B4u) goto L_0891F8B4;
    return;
L_0891F8B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_0891F8B8;
L_0891F8B8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891F87C;
      }
      goto L_0891F8CC;
    }
L_0891F8CC:
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
L_0891F8E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(72)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891F934;
      }
      goto L_0891F914;
    }
L_0891F914:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0891F920u);
    aot_gpr[5] = (0u | 0u);
    goto L_0891F5C8;
L_0891F920:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F93C;
      }
      goto L_0891F92C;
    }
L_0891F92C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F980;
      }
      goto L_0891F934;
    }
L_0891F934:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F988;
      }
      goto L_0891F93C;
    }
L_0891F93C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0891F980;
      }
      goto L_0891F950;
    }
L_0891F950:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F96C;
      }
      goto L_0891F964;
    }
L_0891F964:
    aot_gpr[31] = (0x0891F96Cu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0311_entry, 311u, 45u, 0x0893B3E0u>(ctx, &aot_mem) && ctx.pc == 0x0891F96Cu) goto L_0891F96C;
    return;
L_0891F96C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891F950;
      }
      goto L_0891F980;
    }
L_0891F980:
    aot_gpr[31] = (0x0891F988u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0891F838;
L_0891F988:
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
L_0891F9A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FA2C;
      }
      goto L_0891F9CC;
    }
L_0891F9CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FA2C;
      }
      goto L_0891F9D8;
    }
L_0891F9D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0891FA2C;
      }
      goto L_0891F9EC;
    }
L_0891F9EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FA18;
      }
      goto L_0891FA00;
    }
L_0891FA00:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FA18;
      }
      goto L_0891FA0C;
    }
L_0891FA0C:
    aot_gpr[31] = (0x0891FA14u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0306_entry, 306u, 52u, 0x089367A4u>(ctx, &aot_mem) && ctx.pc == 0x0891FA14u) goto L_0891FA14;
    return;
L_0891FA14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_0891FA18;
L_0891FA18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[18] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891F9EC;
      }
      goto L_0891FA2C;
    }
L_0891FA2C:
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
L_0891FA44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (0u | 80u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[19] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0891FB28;
      }
      goto L_0891FA8C;
    }
L_0891FA8C:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[20] << 2u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[6] & 15u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[17] & 1u);
      if (branch_taken) {
          goto L_0891FAB8;
      }
      goto L_0891FAAC;
    }
L_0891FAAC:
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_0891FAB8;
L_0891FAB8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[17] & 2u);
      if (branch_taken) {
          goto L_0891FAC8;
      }
      goto L_0891FAC0;
    }
L_0891FAC0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FB08;
      }
      goto L_0891FAC8;
    }
L_0891FAC8:
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_0891FB08;
      }
      goto L_0891FAD8;
    }
L_0891FAD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0891FAF8u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 7u, 0x089440CCu>(ctx, &aot_mem) && ctx.pc == 0x0891FAF8u) goto L_0891FAF8;
    return;
L_0891FAF8:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891FAD8;
      }
      goto L_0891FB08;
    }
L_0891FB08:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_0891FB28;
      }
      goto L_0891FB1C;
    }
L_0891FB1C:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0891FB28;
L_0891FB28:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FBD8;
      }
      goto L_0891FB34;
    }
L_0891FB34:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[20] << 2u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[6] & 15u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[17] & 1u);
      if (branch_taken) {
          goto L_0891FB60;
      }
      goto L_0891FB54;
    }
L_0891FB54:
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_0891FB60;
L_0891FB60:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[17] & 2u);
      if (branch_taken) {
          goto L_0891FB78;
      }
      goto L_0891FB68;
    }
L_0891FB68:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[17] & 8u);
      if (branch_taken) {
          goto L_0891FB78;
      }
      goto L_0891FB70;
    }
L_0891FB70:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FBB8;
      }
      goto L_0891FB78;
    }
L_0891FB78:
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_0891FBB8;
      }
      goto L_0891FB88;
    }
L_0891FB88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0891FBA8u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0306_entry, 306u, 11u, 0x089360C8u>(ctx, &aot_mem) && ctx.pc == 0x0891FBA8u) goto L_0891FBA8;
    return;
L_0891FBA8:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891FB88;
      }
      goto L_0891FBB8;
    }
L_0891FBB8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_0891FBD8;
      }
      goto L_0891FBCC;
    }
L_0891FBCC:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0891FBD8;
L_0891FBD8:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FC78;
      }
      goto L_0891FBE4;
    }
L_0891FBE4:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[20] << 2u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[6] & 15u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[17] & 4u);
      if (branch_taken) {
          goto L_0891FC10;
      }
      goto L_0891FC04;
    }
L_0891FC04:
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_0891FC10;
L_0891FC10:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FC58;
      }
      goto L_0891FC18;
    }
L_0891FC18:
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_0891FC58;
      }
      goto L_0891FC28;
    }
L_0891FC28:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0891FC48u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0309_entry, 309u, 67u, 0x08939964u>(ctx, &aot_mem) && ctx.pc == 0x0891FC48u) goto L_0891FC48;
    return;
L_0891FC48:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891FC28;
      }
      goto L_0891FC58;
    }
L_0891FC58:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_0891FC78;
      }
      goto L_0891FC6C;
    }
L_0891FC6C:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0891FC78;
L_0891FC78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FD18;
      }
      goto L_0891FC84;
    }
L_0891FC84:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[20] << 2u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[6] & 15u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[17] & 4u);
      if (branch_taken) {
          goto L_0891FCB0;
      }
      goto L_0891FCA4;
    }
L_0891FCA4:
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_0891FCB0;
L_0891FCB0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FCF8;
      }
      goto L_0891FCB8;
    }
L_0891FCB8:
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_0891FCF8;
      }
      goto L_0891FCC8;
    }
L_0891FCC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0891FCE8u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0317_entry, 317u, 39u, 0x089413A4u>(ctx, &aot_mem) && ctx.pc == 0x0891FCE8u) goto L_0891FCE8;
    return;
L_0891FCE8:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891FCC8;
      }
      goto L_0891FCF8;
    }
L_0891FCF8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_0891FD18;
      }
      goto L_0891FD0C;
    }
L_0891FD0C:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0891FD18;
L_0891FD18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FDD0;
      }
      goto L_0891FD24;
    }
L_0891FD24:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[20] << 2u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[6] & 15u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[17] & 1u);
      if (branch_taken) {
          goto L_0891FD50;
      }
      goto L_0891FD44;
    }
L_0891FD44:
    aot_gpr[5] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_0891FD50;
L_0891FD50:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[17] & 2u);
      if (branch_taken) {
          goto L_0891FD70;
      }
      goto L_0891FD58;
    }
L_0891FD58:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[17] & 8u);
      if (branch_taken) {
          goto L_0891FD70;
      }
      goto L_0891FD60;
    }
L_0891FD60:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[17] & 4u);
      if (branch_taken) {
          goto L_0891FD70;
      }
      goto L_0891FD68;
    }
L_0891FD68:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FDB0;
      }
      goto L_0891FD70;
    }
L_0891FD70:
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_0891FDB0;
      }
      goto L_0891FD80;
    }
L_0891FD80:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0891FDA0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0311_entry, 311u, 32u, 0x0893B2C8u>(ctx, &aot_mem) && ctx.pc == 0x0891FDA0u) goto L_0891FDA0;
    return;
L_0891FDA0:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891FD80;
      }
      goto L_0891FDB0;
    }
L_0891FDB0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_0891FDD0;
      }
      goto L_0891FDC4;
    }
L_0891FDC4:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0891FDD0;
L_0891FDD0:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FE64;
      }
      goto L_0891FDDC;
    }
L_0891FDDC:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[20] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_0891FE04;
      }
      goto L_0891FDF8;
    }
L_0891FDF8:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0891FE04;
L_0891FE04:
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_0891FE44;
      }
      goto L_0891FE14;
    }
L_0891FE14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[22]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x0891FE34u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0317_entry, 317u, 138u, 0x08941FFCu>(ctx, &aot_mem) && ctx.pc == 0x0891FE34u) goto L_0891FE34;
    return;
L_0891FE34:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891FE14;
      }
      goto L_0891FE44;
    }
L_0891FE44:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_0891FE64;
      }
      goto L_0891FE58;
    }
L_0891FE58:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0891FE64;
L_0891FE64:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FF0C;
      }
      goto L_0891FE70;
    }
L_0891FE70:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_0891FE98;
      }
      goto L_0891FE8C;
    }
L_0891FE8C:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0891FE98;
L_0891FE98:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0891FEEC;
      }
      goto L_0891FEA8;
    }
L_0891FEA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[31] = (0x0891FEBCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 182u, 0x08922D60u>(ctx, &aot_mem) && ctx.pc == 0x0891FEBCu) goto L_0891FEBC;
    return;
L_0891FEBC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_0891FEDC;
      }
      goto L_0891FED0;
    }
L_0891FED0:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0891FEDC;
L_0891FEDC:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891FEA8;
      }
      goto L_0891FEEC;
    }
L_0891FEEC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_0891FF0C;
      }
      goto L_0891FF00;
    }
L_0891FF00:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0891FF0C;
L_0891FF0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FF48;
      }
      goto L_0891FF18;
    }
L_0891FF18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_0891FF48;
      }
      goto L_0891FF3C;
    }
L_0891FF3C:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0891FF48;
L_0891FF48:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FF84;
      }
      goto L_0891FF54;
    }
L_0891FF54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (aot_gpr[5] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_0891FF84;
      }
      goto L_0891FF78;
    }
L_0891FF78:
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0891FF84;
L_0891FF84:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FFB4;
      }
      goto L_0891FF90;
    }
L_0891FF90:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0891FF9Cu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0317_entry, 317u, 4u, 0x0894106Cu>(ctx, &aot_mem) && ctx.pc == 0x0891FF9Cu) goto L_0891FF9C;
    return;
L_0891FF9C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] & 15u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] - aot_gpr[4]);
      if (branch_taken) {
          goto L_0891FFB4;
      }
      goto L_0891FFAC;
    }
L_0891FFAC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0891FFB4;
L_0891FFB4:
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
L_0891FFDC:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0284_entry, 284u, 4u, 0x0892004Cu>(ctx, &aot_mem); return;
      }
      goto L_0891FFE8;
    }
L_0891FFE8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[9] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[8] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0284_entry, 284u, 4u, 0x0892004Cu>(ctx, &aot_mem); return;
      }
      goto L_0891FFFC;
    }
L_0891FFFC:
    aot_gpr[6] = (32u << 16u);
    ctx.pc = 0x08920000u; return;
}

void recomp_unit_0283(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0283_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_283(Runtime &runtime) {
    runtime.register_generated_unit(283u, 0x0891F000u, 4096u, &recomp_unit_0283, &recomp_unit_0283_entry);
    runtime.register_function(0x0891F000u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F01Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F030u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F03Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F050u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F068u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F08Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F0A0u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F0B4u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F0E0u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F0ECu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F100u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F10Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F128u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F180u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F188u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F190u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F1B0u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F1C0u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F1FCu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F208u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F218u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F220u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F228u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F258u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F280u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F294u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F2A8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F2B4u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F2CCu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F2E4u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F2ECu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F300u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F304u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F30Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F328u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F340u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F348u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F35Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F360u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F368u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F380u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F394u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F3A4u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F3B8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F3D0u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F3E8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F3F0u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F3FCu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F414u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F41Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F42Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F440u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F454u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F460u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F470u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F484u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F494u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F49Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F4ACu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F4D4u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F4DCu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F4E4u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F4F8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F514u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F51Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F530u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F534u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F548u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F550u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F564u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F568u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F57Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F584u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F598u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F59Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F5ACu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F5B0u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F5C0u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F5C8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F604u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F618u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F62Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F638u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F64Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F658u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F66Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F670u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F684u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F690u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F6A0u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F6ACu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F6C8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F6D4u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F6ECu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F6FCu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F70Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F710u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F724u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F72Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F734u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F748u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F754u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F758u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F778u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F78Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F790u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F7A4u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F7BCu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F7D0u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F7E4u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F7E8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F7FCu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F80Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F838u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F860u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F874u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F87Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F890u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F8A0u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F8B4u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F8B8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F8CCu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F8E8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F914u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F920u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F92Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F934u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F93Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F950u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F964u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F96Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F980u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F988u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F9A8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F9CCu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F9D8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891F9ECu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FA00u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FA0Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FA14u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FA18u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FA2Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FA44u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FA8Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FAACu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FAB8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FAC0u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FAC8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FAD8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FAF8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FB08u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FB1Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FB28u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FB34u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FB54u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FB60u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FB68u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FB70u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FB78u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FB88u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FBA8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FBB8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FBCCu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FBD8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FBE4u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FC04u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FC10u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FC18u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FC28u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FC48u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FC58u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FC6Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FC78u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FC84u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FCA4u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FCB0u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FCB8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FCC8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FCE8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FCF8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FD0Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FD18u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FD24u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FD44u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FD50u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FD58u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FD60u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FD68u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FD70u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FD80u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FDA0u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FDB0u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FDC4u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FDD0u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FDDCu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FDF8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FE04u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FE14u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FE34u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FE44u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FE58u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FE64u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FE70u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FE8Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FE98u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FEA8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FEBCu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FED0u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FEDCu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FEECu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FF00u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FF0Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FF18u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FF3Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FF48u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FF54u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FF78u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FF84u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FF90u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FF9Cu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FFACu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FFB4u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FFDCu, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FFE8u, &recomp_unit_0283, "recomp_unit_0283");
    runtime.register_function(0x0891FFFCu, &recomp_unit_0283, "recomp_unit_0283");
}
} // namespace psprecomp
