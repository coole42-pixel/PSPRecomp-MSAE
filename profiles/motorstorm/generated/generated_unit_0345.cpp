#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0345[1021] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    0, 0, 0, 13, 14, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0,
    0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 27, 0,
    0, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 40, 0, 0, 0, 41, 0, 42, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0,
    0, 48, 0, 0, 0, 0, 49, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0,
    0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59,
    0, 0, 60, 0, 0, 61, 0, 0, 0, 62, 0, 63, 0, 0, 64, 0, 65, 0, 0, 0, 66, 0, 67, 0, 68, 0, 69, 0, 0, 0, 70, 0,
    0, 0, 0, 71, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 81, 0, 82,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0,
    0, 100, 0, 101, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0,
    0, 118, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0,
    0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0,
    132, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 139,
    0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0,
    0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164,
    0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 171, 172, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 176,
};
void recomp_unit_0345_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0895D000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0345[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0895D000;
    case 2u: goto L_0895D018;
    case 3u: goto L_0895D024;
    case 4u: goto L_0895D0D4;
    case 5u: goto L_0895D0FC;
    case 6u: goto L_0895D138;
    case 7u: goto L_0895D154;
    case 8u: goto L_0895D158;
    case 9u: goto L_0895D174;
    case 10u: goto L_0895D190;
    case 11u: goto L_0895D1B4;
    case 12u: goto L_0895D1F0;
    case 13u: goto L_0895D20C;
    case 14u: goto L_0895D210;
    case 15u: goto L_0895D220;
    case 16u: goto L_0895D228;
    case 17u: goto L_0895D23C;
    case 18u: goto L_0895D264;
    case 19u: goto L_0895D2A0;
    case 20u: goto L_0895D2BC;
    case 21u: goto L_0895D2C0;
    case 22u: goto L_0895D2DC;
    case 23u: goto L_0895D2F8;
    case 24u: goto L_0895D31C;
    case 25u: goto L_0895D358;
    case 26u: goto L_0895D374;
    case 27u: goto L_0895D378;
    case 28u: goto L_0895D388;
    case 29u: goto L_0895D390;
    case 30u: goto L_0895D3A4;
    case 31u: goto L_0895D3CC;
    case 32u: goto L_0895D408;
    case 33u: goto L_0895D424;
    case 34u: goto L_0895D428;
    case 35u: goto L_0895D444;
    case 36u: goto L_0895D460;
    case 37u: goto L_0895D484;
    case 38u: goto L_0895D4C0;
    case 39u: goto L_0895D4DC;
    case 40u: goto L_0895D4E0;
    case 41u: goto L_0895D4F0;
    case 42u: goto L_0895D4F8;
    case 43u: goto L_0895D530;
    case 44u: goto L_0895D534;
    case 45u: goto L_0895D53C;
    case 46u: goto L_0895D568;
    case 47u: goto L_0895D574;
    case 48u: goto L_0895D584;
    case 49u: goto L_0895D598;
    case 50u: goto L_0895D59C;
    case 51u: goto L_0895D5B0;
    case 52u: goto L_0895D5C8;
    case 53u: goto L_0895D5DC;
    case 54u: goto L_0895D5F4;
    case 55u: goto L_0895D60C;
    case 56u: goto L_0895D628;
    case 57u: goto L_0895D64C;
    case 58u: goto L_0895D65C;
    case 59u: goto L_0895D67C;
    case 60u: goto L_0895D688;
    case 61u: goto L_0895D694;
    case 62u: goto L_0895D6A4;
    case 63u: goto L_0895D6AC;
    case 64u: goto L_0895D6B8;
    case 65u: goto L_0895D6C0;
    case 66u: goto L_0895D6D0;
    case 67u: goto L_0895D6D8;
    case 68u: goto L_0895D6E0;
    case 69u: goto L_0895D6E8;
    case 70u: goto L_0895D6F8;
    case 71u: goto L_0895D70C;
    case 72u: goto L_0895D710;
    case 73u: goto L_0895D738;
    case 74u: goto L_0895D744;
    case 75u: goto L_0895D760;
    case 76u: goto L_0895D798;
    case 77u: goto L_0895D7A4;
    case 78u: goto L_0895D7B8;
    case 79u: goto L_0895D7D8;
    case 80u: goto L_0895D7EC;
    case 81u: goto L_0895D7F4;
    case 82u: goto L_0895D7FC;
    case 83u: goto L_0895D830;
    case 84u: goto L_0895D838;
    case 85u: goto L_0895D844;
    case 86u: goto L_0895D868;
    case 87u: goto L_0895D894;
    case 88u: goto L_0895D8A4;
    case 89u: goto L_0895D8B8;
    case 90u: goto L_0895D8C4;
    case 91u: goto L_0895D8D0;
    case 92u: goto L_0895D8D8;
    case 93u: goto L_0895D8F8;
    case 94u: goto L_0895D908;
    case 95u: goto L_0895D92C;
    case 96u: goto L_0895D95C;
    case 97u: goto L_0895D998;
    case 98u: goto L_0895D9EC;
    case 99u: goto L_0895D9F4;
    case 100u: goto L_0895DA04;
    case 101u: goto L_0895DA0C;
    case 102u: goto L_0895DA10;
    case 103u: goto L_0895DA18;
    case 104u: goto L_0895DA8C;
    case 105u: goto L_0895DA98;
    case 106u: goto L_0895DAC0;
    case 107u: goto L_0895DAD0;
    case 108u: goto L_0895DAE4;
    case 109u: goto L_0895DAEC;
    case 110u: goto L_0895DB00;
    case 111u: goto L_0895DB20;
    case 112u: goto L_0895DB2C;
    case 113u: goto L_0895DB38;
    case 114u: goto L_0895DB4C;
    case 115u: goto L_0895DB54;
    case 116u: goto L_0895DB5C;
    case 117u: goto L_0895DB78;
    case 118u: goto L_0895DB84;
    case 119u: goto L_0895DB8C;
    case 120u: goto L_0895DBA0;
    case 121u: goto L_0895DBB8;
    case 122u: goto L_0895DBC8;
    case 123u: goto L_0895DBD0;
    case 124u: goto L_0895DBF8;
    case 125u: goto L_0895DC10;
    case 126u: goto L_0895DC1C;
    case 127u: goto L_0895DC34;
    case 128u: goto L_0895DC40;
    case 129u: goto L_0895DC50;
    case 130u: goto L_0895DC60;
    case 131u: goto L_0895DC70;
    case 132u: goto L_0895DC80;
    case 133u: goto L_0895DC94;
    case 134u: goto L_0895DC9C;
    case 135u: goto L_0895DCAC;
    case 136u: goto L_0895DCB8;
    case 137u: goto L_0895DCE0;
    case 138u: goto L_0895DCF0;
    case 139u: goto L_0895DCFC;
    case 140u: goto L_0895DD0C;
    case 141u: goto L_0895DD1C;
    case 142u: goto L_0895DD2C;
    case 143u: goto L_0895DD3C;
    case 144u: goto L_0895DD54;
    case 145u: goto L_0895DD60;
    case 146u: goto L_0895DD90;
    case 147u: goto L_0895DD9C;
    case 148u: goto L_0895DDA8;
    case 149u: goto L_0895DDBC;
    case 150u: goto L_0895DDC4;
    case 151u: goto L_0895DDDC;
    case 152u: goto L_0895DDE8;
    case 153u: goto L_0895DDF4;
    case 154u: goto L_0895DE14;
    case 155u: goto L_0895DE1C;
    case 156u: goto L_0895DE2C;
    case 157u: goto L_0895DE4C;
    case 158u: goto L_0895DE60;
    case 159u: goto L_0895DE88;
    case 160u: goto L_0895DE98;
    case 161u: goto L_0895DEA4;
    case 162u: goto L_0895DEBC;
    case 163u: goto L_0895DED8;
    case 164u: goto L_0895DEFC;
    case 165u: goto L_0895DF08;
    case 166u: goto L_0895DF20;
    case 167u: goto L_0895DF30;
    case 168u: goto L_0895DF44;
    case 169u: goto L_0895DF90;
    case 170u: goto L_0895DF98;
    case 171u: goto L_0895DFAC;
    case 172u: goto L_0895DFB0;
    case 173u: goto L_0895DFB8;
    case 174u: goto L_0895DFCC;
    case 175u: goto L_0895DFE0;
    case 176u: goto L_0895DFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0895D000:
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[31] = (0x0895D018u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 141u, 0x08A40848u>(ctx, &aot_mem) && ctx.pc == 0x0895D018u) goto L_0895D018;
    return;
L_0895D018:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D024:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(4)));
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 32u, 4u);
      ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
      constexpr std::uint32_t vfpu_input_length = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 21u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 32u, 4u);
      ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
      constexpr std::uint32_t vfpu_input_length = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 21u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 4u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (14545u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (aot_gpr[5] | 46871u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D174;
      }
      goto L_0895D0D4;
    }
L_0895D0D4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[16];
    aot_fpr[13] = aot_fpr[12] / aot_fpr[13];
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D220;
      }
      goto L_0895D0FC;
    }
L_0895D0FC:
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<21u, 21u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (0u | 0u);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]) & 0x7FFFFFFFu);
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D158;
      }
      goto L_0895D138;
    }
L_0895D138:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) & 0x7FFFFFFFu);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D158;
      }
      goto L_0895D154;
    }
L_0895D154:
    aot_gpr[4] = (0u | 1u);
    goto L_0895D158;
L_0895D158:
    aot_gpr[5] = (49024u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0895D220;
      }
      goto L_0895D174;
    }
L_0895D174:
    aot_gpr[5] = (47313u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 46871u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D220;
      }
      goto L_0895D190;
    }
L_0895D190:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[16];
    aot_fpr[13] = aot_fpr[12] / aot_fpr[13];
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D220;
      }
      goto L_0895D1B4;
    }
L_0895D1B4:
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<21u, 21u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (0u | 0u);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]) & 0x7FFFFFFFu);
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D210;
      }
      goto L_0895D1F0;
    }
L_0895D1F0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) & 0x7FFFFFFFu);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D210;
      }
      goto L_0895D20C;
    }
L_0895D20C:
    aot_gpr[4] = (0u | 1u);
    goto L_0895D210;
L_0895D210:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0895D220;
L_0895D220:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D388;
      }
      goto L_0895D228;
    }
L_0895D228:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D2DC;
      }
      goto L_0895D23C;
    }
L_0895D23C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[16];
    aot_fpr[13] = aot_fpr[12] / aot_fpr[13];
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D388;
      }
      goto L_0895D264;
    }
L_0895D264:
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<21u, 21u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (0u | 0u);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]) & 0x7FFFFFFFu);
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D2C0;
      }
      goto L_0895D2A0;
    }
L_0895D2A0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) & 0x7FFFFFFFu);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D2C0;
      }
      goto L_0895D2BC;
    }
L_0895D2BC:
    aot_gpr[4] = (0u | 1u);
    goto L_0895D2C0;
L_0895D2C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (49024u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0895D388;
      }
      goto L_0895D2DC;
    }
L_0895D2DC:
    aot_gpr[5] = (47313u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 46871u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D388;
      }
      goto L_0895D2F8;
    }
L_0895D2F8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[16];
    aot_fpr[13] = aot_fpr[12] / aot_fpr[13];
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D388;
      }
      goto L_0895D31C;
    }
L_0895D31C:
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<21u, 21u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<21u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (0u | 0u);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[16]) & 0x7FFFFFFFu);
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D378;
      }
      goto L_0895D358;
    }
L_0895D358:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) & 0x7FFFFFFFu);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D378;
      }
      goto L_0895D374;
    }
L_0895D374:
    aot_gpr[4] = (0u | 1u);
    goto L_0895D378;
L_0895D378:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    goto L_0895D388;
L_0895D388:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D4F0;
      }
      goto L_0895D390;
    }
L_0895D390:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D444;
      }
      goto L_0895D3A4;
    }
L_0895D3A4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]) ^ 0x80000000u);
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
    aot_fpr[13] = aot_fpr[12] / aot_fpr[13];
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D4F0;
      }
      goto L_0895D3CC;
    }
L_0895D3CC:
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<21u, 21u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (0u | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) & 0x7FFFFFFFu);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D428;
      }
      goto L_0895D408;
    }
L_0895D408:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) & 0x7FFFFFFFu);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D428;
      }
      goto L_0895D424;
    }
L_0895D424:
    aot_gpr[4] = (0u | 1u);
    goto L_0895D428;
L_0895D428:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (49024u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_0895D4F0;
      }
      goto L_0895D444;
    }
L_0895D444:
    aot_gpr[5] = (47313u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 46871u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D4F0;
      }
      goto L_0895D460;
    }
L_0895D460:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
    aot_fpr[13] = aot_fpr[12] / aot_fpr[13];
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D4F0;
      }
      goto L_0895D484;
    }
L_0895D484:
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_gpr[4]);
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<21u, 21u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (0u | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) & 0x7FFFFFFFu);
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D4E0;
      }
      goto L_0895D4C0;
    }
L_0895D4C0:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) & 0x7FFFFFFFu);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D4E0;
      }
      goto L_0895D4DC;
    }
L_0895D4DC:
    aot_gpr[4] = (0u | 1u);
    goto L_0895D4E0;
L_0895D4E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_0895D4F0;
L_0895D4F0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D530;
      }
      goto L_0895D4F8;
    }
L_0895D4F8:
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[2] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[10] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[10] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const bool branch_taken = 0u == 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[10] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
      if (branch_taken) {
          goto L_0895D534;
      }
      goto L_0895D530;
    }
L_0895D530:
    aot_gpr[2] = (0u | 0u);
    goto L_0895D534;
L_0895D534:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D53C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[7] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0895D60C;
      }
      goto L_0895D568;
    }
L_0895D568:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0895D574u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0585_entry, 585u, 155u, 0x08A4DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0895D574u) goto L_0895D574;
    return;
L_0895D574:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0895D59C;
      }
      goto L_0895D584;
    }
L_0895D584:
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0895D598u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0284_entry, 284u, 83u, 0x08920718u>(ctx, &aot_mem) && ctx.pc == 0x0895D598u) goto L_0895D598;
    return;
L_0895D598:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_0895D59C;
L_0895D59C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0895D5B0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 228u, 0x08A58F3Cu>(ctx, &aot_mem) && ctx.pc == 0x0895D5B0u) goto L_0895D5B0;
    return;
L_0895D5B0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0895D60C;
      }
      goto L_0895D5C8;
    }
L_0895D5C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[31] = (0x0895D5DCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 229u, 0x08A58F44u>(ctx, &aot_mem) && ctx.pc == 0x0895D5DCu) goto L_0895D5DC;
    return;
L_0895D5DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[8] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[31] = (0x0895D5F4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 103u, 0x08A546ECu>(ctx, &aot_mem) && ctx.pc == 0x0895D5F4u) goto L_0895D5F4;
    return;
L_0895D5F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[6] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0895D5C8;
      }
      goto L_0895D60C;
    }
L_0895D60C:
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
L_0895D628:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0895D744;
      }
      goto L_0895D64C;
    }
L_0895D64C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-28431)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D744;
      }
      goto L_0895D65C;
    }
L_0895D65C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28436)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-29332), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(268)));
    aot_gpr[18] = (aot_gpr[16] << 2u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[18]);
      if (branch_taken) {
          goto L_0895D6E8;
      }
      goto L_0895D67C;
    }
L_0895D67C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(269)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D6E8;
      }
      goto L_0895D688;
    }
L_0895D688:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895D6E8;
      }
      goto L_0895D694;
    }
L_0895D694:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    goto L_0895D6A4;
L_0895D6A4:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_0895D6C0;
      }
      goto L_0895D6AC;
    }
L_0895D6AC:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4508)));
    { const bool branch_taken = aot_gpr[9] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_0895D6C0;
      }
      goto L_0895D6B8;
    }
L_0895D6B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0895D6D0;
      }
      goto L_0895D6C0;
    }
L_0895D6C0:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[6] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895D6A4;
      }
      goto L_0895D6D0;
    }
L_0895D6D0:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D6E8;
      }
      goto L_0895D6D8;
    }
L_0895D6D8:
    aot_gpr[31] = (0x0895D6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 138u, 0x089337B8u>(ctx, &aot_mem) && ctx.pc == 0x0895D6E0u) goto L_0895D6E0;
    return;
L_0895D6E0:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(260), aot_gpr[4]);
    goto L_0895D6E8;
L_0895D6E8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4476)));
    aot_gpr[19] = (aot_gpr[5] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0895D710;
      }
      goto L_0895D6F8;
    }
L_0895D6F8:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4524)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0895D70Cu);
    aot_gpr[7] = (0u | 0u);
    goto L_0895D53C;
L_0895D70C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_0895D710;
L_0895D710:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4492)));
    aot_gpr[5] = (aot_gpr[5] << 6u);
    aot_gpr[5] = (aot_gpr[17] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(344), aot_gpr[16]);
    aot_gpr[5] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4508), aot_gpr[5]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28420)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D744;
      }
      goto L_0895D738;
    }
L_0895D738:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x0895D744u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895D744u) goto L_0895D744;
    return;
L_0895D744:
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
L_0895D760:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(320)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0895D844;
      }
      goto L_0895D798;
    }
L_0895D798:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D844;
      }
      goto L_0895D7A4;
    }
L_0895D7A4:
    aot_gpr[21] = (aot_gpr[16] << 2u);
    aot_gpr[21] = (aot_gpr[18] + aot_gpr[21]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4508)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D844;
      }
      goto L_0895D7B8;
    }
L_0895D7B8:
    aot_gpr[4] = (aot_gpr[17] << 6u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(336)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(340)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(260)));
    aot_gpr[20] = (aot_gpr[20] >> 11u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_gpr[19] = (aot_gpr[19] >> 11u);
      if (branch_taken) {
          goto L_0895D7F4;
      }
      goto L_0895D7D8;
    }
L_0895D7D8:
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0895D7ECu);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 146u, 0x08933840u>(ctx, &aot_mem) && ctx.pc == 0x0895D7ECu) goto L_0895D7EC;
    return;
L_0895D7EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(260), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_0895D7F4;
L_0895D7F4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895D844;
      }
      goto L_0895D7FC;
    }
L_0895D7FC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(264)));
    aot_gpr[5] = (aot_gpr[20] << 11u);
    aot_gpr[5] = (0u + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[19] << 11u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[9] = (2198u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4476)));
    aot_gpr[7] = (0u + aot_gpr[7]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[18] | 0u);
    aot_gpr[11] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0895D830u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(-10712));
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 233u, 0x08933F88u>(ctx, &aot_mem) && ctx.pc == 0x0895D830u) goto L_0895D830;
    return;
L_0895D830:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D844;
      }
      goto L_0895D838;
    }
L_0895D838:
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4492), aot_gpr[17]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4508), aot_gpr[4]);
    goto L_0895D844;
L_0895D844:
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
L_0895D868:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] << 2u);
    aot_gpr[18] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4508)));
    aot_gpr[6] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0895D8D8;
      }
      goto L_0895D894;
    }
L_0895D894:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28420)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0895D8B8;
      }
      goto L_0895D8A4;
    }
L_0895D8A4:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4476)));
    aot_gpr[5] = (0u | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0895D8B8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895D8B8u) goto L_0895D8B8;
    return;
L_0895D8B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4492)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_0895D8D0;
      }
      goto L_0895D8C4;
    }
L_0895D8C4:
    aot_gpr[4] = (aot_gpr[4] << 6u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(344), aot_gpr[17]);
    goto L_0895D8D0;
L_0895D8D0:
    aot_gpr[31] = (0x0895D8D8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4524)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 59u, 0x08927620u>(ctx, &aot_mem) && ctx.pc == 0x0895D8D8u) goto L_0895D8D8;
    return;
L_0895D8D8:
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4508), aot_gpr[4]);
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
L_0895D8F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0895D908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 17u, 0x0893F128u>(ctx, &aot_mem) && ctx.pc == 0x0895D908u) goto L_0895D908;
    return;
L_0895D908:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-12864));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<22u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<23u, 4u>(vfpu_value); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<55u, 4u>(vfpu_value); }
    aot_gpr[31] = (0x0895D92Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 14u, 0x089401B8u>(ctx, &aot_mem) && ctx.pc == 0x0895D92Cu) goto L_0895D92C;
    return;
L_0895D92C:
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 20u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 28u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 16u, 4u);
      ctx.eat_vfpu_prefixes(); }
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28788)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(132)));
    aot_gpr[5] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-28428), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(136)));
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28424), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D95C:
    aot_gpr[8] = (0u | 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[7] | 0u);
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_value); }
    aot_gpr[9] = (2216u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(-28428)));
    ctx.set_vfpu_scalar_bits_ct<11u>(aot_gpr[9]);
    aot_gpr[9] = (2216u << 16u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(-28424)));
    ctx.set_vfpu_scalar_bits_ct<43u>(aot_gpr[9]);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[10] = (aot_gpr[9] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D9EC;
      }
      goto L_0895D998;
    }
L_0895D998:
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 16u, 4u);
      ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
      constexpr std::uint32_t vfpu_input_length = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 3u, vfpu_side); }
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[9] << 4u);
    aot_gpr[10] = (aot_gpr[5] + aot_gpr[10]);
    { const std::uint32_t vfpu_address = aot_gpr[10] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_value); }
    ctx.execute_vfpu_compare3(5u, 63u, 3u, 4u, 6u);
    ctx.execute_vfpu_compare3(6u, 11u, 65u, 1u, 6u);
    ctx.execute_vfpu_compare3(38u, 43u, 65u, 1u, 7u);
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<5u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(24u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (19u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(5u, 4u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<6u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(24u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (19u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(6u, 2u, vfpu_i)] = __builtin_bit_cast(float, static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    ctx.execute_vfpu_vi2x(75u, 5u, 4u, 0u);
    ctx.execute_vfpu_vi2x(107u, 6u, 2u, 2u);
    aot_gpr[10] = (ctx.vfpu_scalar_bits_ct<75u>());
    aot_gpr[11] = (ctx.vfpu_scalar_bits_ct<107u>());
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[10]);
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[10]);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[11]);
    aot_gpr[10] = (aot_gpr[9] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D998;
      }
      goto L_0895D9EC;
    }
L_0895D9EC:
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895DA10;
      }
      goto L_0895D9F4;
    }
L_0895D9F4:
    aot_gpr[5] = (65535u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DA10;
      }
      goto L_0895DA04;
    }
L_0895DA04:
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0895DA10;
      }
      goto L_0895DA0C;
    }
L_0895DA0C:
    aot_gpr[2] = (0u | 3u);
    goto L_0895DA10;
L_0895DA10:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895DA18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(128), aot_gpr[31]);
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<5u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<6u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<7u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<36u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<34u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<36u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<35u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<6u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<36u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(32);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(48);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<4u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<5u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(80);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<6u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<7u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0895DA8Cu);
    aot_gpr[6] = (0u | 8u);
    goto L_0895D95C;
L_0895DA8C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895DA98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[3] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0895DAC0u);
    aot_gpr[6] = (aot_gpr[3] + static_cast<std::uint32_t>(16));
    goto L_0895DA18;
L_0895DAC0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DB54;
      }
      goto L_0895DAD0;
    }
L_0895DAD0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[5] & 2u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0895DAEC;
      }
      goto L_0895DAE4;
    }
L_0895DAE4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_0895DB5C;
      }
      goto L_0895DAEC;
    }
L_0895DAEC:
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[3] + static_cast<std::uint32_t>(32))))));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0895DB5C;
      }
      goto L_0895DB00;
    }
L_0895DB00:
    aot_gpr[4] = (aot_gpr[3] << 4u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4472)));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[18] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[17] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[18] + aot_gpr[17]);
    goto L_0895DB20;
L_0895DB20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DB38;
      }
      goto L_0895DB2C;
    }
L_0895DB2C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0895DB38u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_0895DA98;
L_0895DB38:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0895DB20;
      }
      goto L_0895DB4C;
    }
L_0895DB4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DB5C;
      }
      goto L_0895DB54;
    }
L_0895DB54:
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[3] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_0895DB5C;
L_0895DB5C:
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
L_0895DB78:
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0895DBC8;
      }
      goto L_0895DB84;
    }
L_0895DB84:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0895DBC8;
      }
      goto L_0895DB8C;
    }
L_0895DB8C:
    aot_gpr[5] = (aot_gpr[5] << 6u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(344)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0895DBC8;
      }
      goto L_0895DBA0;
    }
L_0895DBA0:
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4508)));
    aot_gpr[7] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0895DBC8;
      }
      goto L_0895DBB8;
    }
L_0895DBB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4476)));
    aot_gpr[2] = (aot_gpr[6] << 4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[2]);
    goto L_0895DBC8;
L_0895DBC8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895DBD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[9] = (aot_gpr[8] | 0u);
    aot_gpr[8] = (aot_gpr[5] & 65535u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(43)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[4] = (aot_gpr[9] | 0u);
      if (branch_taken) {
          goto L_0895DCAC;
      }
      goto L_0895DBF8;
    }
L_0895DBF8:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(32))))));
    aot_gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[9] == aot_gpr[10];
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0895DCAC;
      }
      goto L_0895DC10;
    }
L_0895DC10:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DCAC;
      }
      goto L_0895DC1C;
    }
L_0895DC1C:
    aot_gpr[7] = (aot_gpr[9] << 4u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4472)));
    aot_gpr[10] = (aot_gpr[7] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[10]);
    aot_gpr[7] = (aot_gpr[9] + aot_gpr[7]);
    aot_gpr[9] = (0u | 0u);
    goto L_0895DC34;
L_0895DC34:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DC9C;
      }
      goto L_0895DC40;
    }
L_0895DC40:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(34)));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DC9C;
      }
      goto L_0895DC50;
    }
L_0895DC50:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(38)));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DC9C;
      }
      goto L_0895DC60;
    }
L_0895DC60:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(36)));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DC9C;
      }
      goto L_0895DC70;
    }
L_0895DC70:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(40)));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DC9C;
      }
      goto L_0895DC80;
    }
L_0895DC80:
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x0895DC94u);
    aot_gpr[8] = (aot_gpr[9] | 0u);
    goto L_0895DBD0;
L_0895DC94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DCAC;
      }
      goto L_0895DC9C;
    }
L_0895DC9C:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[9]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0895DC34;
      }
      goto L_0895DCAC;
    }
L_0895DCAC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895DCB8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[5] & 65535u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4468)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[2] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_0895DD54;
      }
      goto L_0895DCE0;
    }
L_0895DCE0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4472)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DD54;
      }
      goto L_0895DCF0;
    }
L_0895DCF0:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(43)));
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DD54;
      }
      goto L_0895DCFC;
    }
L_0895DCFC:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(34)));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DD54;
      }
      goto L_0895DD0C;
    }
L_0895DD0C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(38)));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DD54;
      }
      goto L_0895DD1C;
    }
L_0895DD1C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(36)));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DD54;
      }
      goto L_0895DD2C;
    }
L_0895DD2C:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD16(aot_gpr[8] + static_cast<std::uint32_t>(40)));
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DD54;
      }
      goto L_0895DD3C;
    }
L_0895DD3C:
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x0895DD54u);
    aot_gpr[8] = (aot_gpr[9] | 0u);
    goto L_0895DBD0;
L_0895DD54:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895DD60:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x0895DD90u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    goto L_0895D8F8;
L_0895DD90:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4472)));
    aot_gpr[31] = (0x0895DD9Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0895DA98;
L_0895DD9C:
    aot_gpr[22] = (2216u << 16u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-28448), 0u);
      if (branch_taken) {
          goto L_0895DE60;
      }
      goto L_0895DDA8;
    }
L_0895DDA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[21] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (2219u << 16u);
      if (branch_taken) {
          goto L_0895DE60;
      }
      goto L_0895DDBC;
    }
L_0895DDBC:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(26296));
    goto L_0895DDC4;
L_0895DDC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_gpr[31] = (0x0895DDDCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0895DB78;
L_0895DDDC:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DE4C;
      }
      goto L_0895DDE8;
    }
L_0895DDE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DE4C;
      }
      goto L_0895DDF4;
    }
L_0895DDF4:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[19] + static_cast<std::uint32_t>(2))))));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[6] = (aot_gpr[6] & 65535u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0895DE14u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    goto L_0895DCB8;
L_0895DE14:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DE4C;
      }
      goto L_0895DE1C;
    }
L_0895DE1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-28448)));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(1024) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DE4C;
      }
      goto L_0895DE2C;
    }
L_0895DE2C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[4] << 3u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[18]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[7]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(-28448), aot_gpr[4]);
    goto L_0895DE4C;
L_0895DE4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895DDC4;
      }
      goto L_0895DE60;
    }
L_0895DE60:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895DE88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DEFC;
      }
      goto L_0895DE98;
    }
L_0895DE98:
    aot_gpr[8] = (0u | 0u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    goto L_0895DEA4;
L_0895DEA4:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4492), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4508), 0u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[8] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895DEA4;
      }
      goto L_0895DEBC;
    }
L_0895DEBC:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4464), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4448), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4452), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4456), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0895DEFC;
      }
      goto L_0895DED8;
    }
L_0895DED8:
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x0895DEFCu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895DEFCu) goto L_0895DEFC;
    return;
L_0895DEFC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895DF08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0895DF20u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4436)));
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 229u, 0x08A58F44u>(ctx, &aot_mem) && ctx.pc == 0x0895DF20u) goto L_0895DF20;
    return;
L_0895DF20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4472)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4436), aot_gpr[2]);
    aot_gpr[31] = (0x0895DF30u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0596_entry, 596u, 230u, 0x08A58F4Cu>(ctx, &aot_mem) && ctx.pc == 0x0895DF30u) goto L_0895DF30;
    return;
L_0895DF30:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4472), aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895DF44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-384));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(356), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[7] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(348), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(352), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-28420), aot_gpr[8]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(340), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(344), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(360), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(364), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(368), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(372), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(376), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0895DF98;
      }
      goto L_0895DF90;
    }
L_0895DF90:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_0895DFB0;
      }
      goto L_0895DF98;
    }
L_0895DF98:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0895DFACu);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 146u, 0x08933840u>(ctx, &aot_mem) && ctx.pc == 0x0895DFACu) goto L_0895DFAC;
    return;
L_0895DFAC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_0895DFB0;
L_0895DFB0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 37u, 0x0895E2F8u>(ctx, &aot_mem); return;
      }
      goto L_0895DFB8;
    }
L_0895DFB8:
    aot_gpr[21] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-29308)));
    aot_gpr[5] = (0u | 2048u);
    aot_gpr[31] = (0x0895DFCCu);
    aot_gpr[6] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 141u, 0x0891CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x0895DFCCu) goto L_0895DFCC;
    return;
L_0895DFCC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[30] = (0u | 3u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[23] = (2216u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 1u, 0x0895E004u>(ctx, &aot_mem); return;
      }
      goto L_0895DFE0;
    }
L_0895DFE0:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0895DFF0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0288_entry, 288u, 4u, 0x08924058u>(ctx, &aot_mem) && ctx.pc == 0x0895DFF0u) goto L_0895DFF0;
    return;
L_0895DFF0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 2u, 0x0895E00Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0346_entry, 346u, 1u, 0x0895E004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0345(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0345_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_345(Runtime &runtime) {
    runtime.register_generated_unit(345u, 0x0895D000u, 4096u, &recomp_unit_0345, &recomp_unit_0345_entry);
    runtime.register_function(0x0895D000u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D018u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D024u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D0D4u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D0FCu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D138u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D154u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D158u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D174u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D190u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D1B4u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D1F0u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D20Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D210u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D220u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D228u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D23Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D264u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D2A0u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D2BCu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D2C0u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D2DCu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D2F8u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D31Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D358u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D374u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D378u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D388u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D390u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D3A4u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D3CCu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D408u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D424u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D428u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D444u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D460u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D484u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D4C0u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D4DCu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D4E0u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D4F0u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D4F8u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D530u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D534u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D53Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D568u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D574u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D584u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D598u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D59Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D5B0u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D5C8u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D5DCu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D5F4u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D60Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D628u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D64Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D65Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D67Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D688u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D694u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D6A4u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D6ACu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D6B8u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D6C0u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D6D0u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D6D8u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D6E0u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D6E8u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D6F8u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D70Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D710u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D738u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D744u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D760u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D798u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D7A4u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D7B8u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D7D8u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D7ECu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D7F4u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D7FCu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D830u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D838u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D844u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D868u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D894u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D8A4u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D8B8u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D8C4u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D8D0u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D8D8u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D8F8u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D908u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D92Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D95Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D998u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D9ECu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895D9F4u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DA04u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DA0Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DA10u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DA18u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DA8Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DA98u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DAC0u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DAD0u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DAE4u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DAECu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DB00u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DB20u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DB2Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DB38u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DB4Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DB54u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DB5Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DB78u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DB84u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DB8Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DBA0u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DBB8u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DBC8u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DBD0u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DBF8u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DC10u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DC1Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DC34u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DC40u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DC50u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DC60u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DC70u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DC80u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DC94u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DC9Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DCACu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DCB8u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DCE0u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DCF0u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DCFCu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DD0Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DD1Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DD2Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DD3Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DD54u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DD60u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DD90u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DD9Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DDA8u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DDBCu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DDC4u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DDDCu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DDE8u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DDF4u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DE14u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DE1Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DE2Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DE4Cu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DE60u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DE88u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DE98u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DEA4u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DEBCu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DED8u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DEFCu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DF08u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DF20u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DF30u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DF44u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DF90u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DF98u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DFACu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DFB0u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DFB8u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DFCCu, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DFE0u, &recomp_unit_0345, "recomp_unit_0345");
    runtime.register_function(0x0895DFF0u, &recomp_unit_0345, "recomp_unit_0345");
}
} // namespace psprecomp
