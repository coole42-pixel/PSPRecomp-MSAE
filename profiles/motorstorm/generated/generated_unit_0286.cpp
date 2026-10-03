#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0286[1023] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0,
    9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 17, 0, 18, 0, 19, 0, 0, 0, 20,
    21, 0, 0, 0, 22, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0,
    27, 0, 0, 0, 28, 0, 29, 0, 30, 0, 31, 0, 0, 32, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37,
    0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41,
    0, 0, 0, 0, 0, 42, 0, 43, 44, 0, 0, 45, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 49, 50, 0, 0, 51, 52, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 58, 0, 59, 0,
    0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 67, 0, 0, 68,
    69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74,
    0, 0, 75, 0, 76, 0, 0, 0, 0, 77, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0,
    0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 98, 99, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 103, 0, 104, 0, 0, 105, 0, 0,
    0, 0, 106, 0, 0, 107, 0, 108, 0, 109, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0,
    0, 0, 113, 0, 114, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122,
    0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 126, 127, 0, 128, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0,
    0, 132, 0, 133, 0, 134, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0,
    0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0,
    0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0,
    0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 161, 0,
    0, 162, 163, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0,
    168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 174, 0, 175, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0,
    0, 184, 185, 0, 186, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0,
    0, 191, 0, 192, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0,
    0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 204, 0, 0,
    0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 209, 0, 210,
    0, 0, 211, 212, 0, 213, 0, 0, 214, 215, 0, 216, 0, 0, 217, 218, 0, 219, 0, 0, 220, 221, 0, 0, 0, 0, 0, 0, 0, 222, 223,
};
void recomp_unit_0286_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08922000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0286[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08922000;
    case 2u: goto L_0892201C;
    case 3u: goto L_0892203C;
    case 4u: goto L_08922048;
    case 5u: goto L_08922054;
    case 6u: goto L_089220A4;
    case 7u: goto L_089220B0;
    case 8u: goto L_089220F4;
    case 9u: goto L_08922100;
    case 10u: goto L_08922148;
    case 11u: goto L_08922180;
    case 12u: goto L_08922188;
    case 13u: goto L_089221A0;
    case 14u: goto L_089221B0;
    case 15u: goto L_089221C4;
    case 16u: goto L_089221D4;
    case 17u: goto L_089221DC;
    case 18u: goto L_089221E4;
    case 19u: goto L_089221EC;
    case 20u: goto L_089221FC;
    case 21u: goto L_08922200;
    case 22u: goto L_08922210;
    case 23u: goto L_08922214;
    case 24u: goto L_08922220;
    case 25u: goto L_08922264;
    case 26u: goto L_08922270;
    case 27u: goto L_08922280;
    case 28u: goto L_08922290;
    case 29u: goto L_08922298;
    case 30u: goto L_089222A0;
    case 31u: goto L_089222A8;
    case 32u: goto L_089222B4;
    case 33u: goto L_089222BC;
    case 34u: goto L_089222C4;
    case 35u: goto L_089222D4;
    case 36u: goto L_089222E4;
    case 37u: goto L_089222FC;
    case 38u: goto L_08922304;
    case 39u: goto L_0892230C;
    case 40u: goto L_08922370;
    case 41u: goto L_0892237C;
    case 42u: goto L_08922394;
    case 43u: goto L_0892239C;
    case 44u: goto L_089223A0;
    case 45u: goto L_089223AC;
    case 46u: goto L_089223B4;
    case 47u: goto L_089223C0;
    case 48u: goto L_089223D8;
    case 49u: goto L_089223E0;
    case 50u: goto L_089223E4;
    case 51u: goto L_089223F0;
    case 52u: goto L_089223F4;
    case 53u: goto L_0892241C;
    case 54u: goto L_08922430;
    case 55u: goto L_08922444;
    case 56u: goto L_08922450;
    case 57u: goto L_08922464;
    case 58u: goto L_08922470;
    case 59u: goto L_08922478;
    case 60u: goto L_08922490;
    case 61u: goto L_08922498;
    case 62u: goto L_089224B0;
    case 63u: goto L_089224B8;
    case 64u: goto L_089224C0;
    case 65u: goto L_089224DC;
    case 66u: goto L_089224E4;
    case 67u: goto L_089224F0;
    case 68u: goto L_089224FC;
    case 69u: goto L_08922500;
    case 70u: goto L_08922520;
    case 71u: goto L_08922540;
    case 72u: goto L_08922554;
    case 73u: goto L_0892256C;
    case 74u: goto L_0892257C;
    case 75u: goto L_08922588;
    case 76u: goto L_08922590;
    case 77u: goto L_089225A4;
    case 78u: goto L_089225A8;
    case 79u: goto L_089225B8;
    case 80u: goto L_089225C8;
    case 81u: goto L_08922600;
    case 82u: goto L_08922608;
    case 83u: goto L_08922618;
    case 84u: goto L_0892263C;
    case 85u: goto L_08922648;
    case 86u: goto L_08922654;
    case 87u: goto L_08922664;
    case 88u: goto L_08922670;
    case 89u: goto L_08922680;
    case 90u: goto L_089226B8;
    case 91u: goto L_089226C0;
    case 92u: goto L_089226CC;
    case 93u: goto L_089226D4;
    case 94u: goto L_089226F8;
    case 95u: goto L_0892271C;
    case 96u: goto L_08922728;
    case 97u: goto L_0892273C;
    case 98u: goto L_08922788;
    case 99u: goto L_0892278C;
    case 100u: goto L_08922794;
    case 101u: goto L_089227A4;
    case 102u: goto L_089227DC;
    case 103u: goto L_089227E0;
    case 104u: goto L_089227E8;
    case 105u: goto L_089227F4;
    case 106u: goto L_08922808;
    case 107u: goto L_08922814;
    case 108u: goto L_0892281C;
    case 109u: goto L_08922824;
    case 110u: goto L_08922828;
    case 111u: goto L_08922848;
    case 112u: goto L_08922878;
    case 113u: goto L_08922888;
    case 114u: goto L_08922890;
    case 115u: goto L_08922894;
    case 116u: goto L_089228A4;
    case 117u: goto L_089228D4;
    case 118u: goto L_0892290C;
    case 119u: goto L_0892291C;
    case 120u: goto L_08922924;
    case 121u: goto L_0892292C;
    case 122u: goto L_0892297C;
    case 123u: goto L_0892298C;
    case 124u: goto L_089229A0;
    case 125u: goto L_089229A8;
    case 126u: goto L_089229BC;
    case 127u: goto L_089229C0;
    case 128u: goto L_089229C8;
    case 129u: goto L_089229D0;
    case 130u: goto L_089229E8;
    case 131u: goto L_089229F8;
    case 132u: goto L_08922A04;
    case 133u: goto L_08922A0C;
    case 134u: goto L_08922A14;
    case 135u: goto L_08922A18;
    case 136u: goto L_08922A2C;
    case 137u: goto L_08922A4C;
    case 138u: goto L_08922A58;
    case 139u: goto L_08922A74;
    case 140u: goto L_08922A84;
    case 141u: goto L_08922A9C;
    case 142u: goto L_08922AAC;
    case 143u: goto L_08922AC4;
    case 144u: goto L_08922AD4;
    case 145u: goto L_08922AE0;
    case 146u: goto L_08922AE8;
    case 147u: goto L_08922B08;
    case 148u: goto L_08922B14;
    case 149u: goto L_08922B28;
    case 150u: goto L_08922B34;
    case 151u: goto L_08922B3C;
    case 152u: goto L_08922B44;
    case 153u: goto L_08922B58;
    case 154u: goto L_08922B64;
    case 155u: goto L_08922B84;
    case 156u: goto L_08922BB4;
    case 157u: goto L_08922BBC;
    case 158u: goto L_08922BCC;
    case 159u: goto L_08922BD8;
    case 160u: goto L_08922BEC;
    case 161u: goto L_08922BF8;
    case 162u: goto L_08922C04;
    case 163u: goto L_08922C08;
    case 164u: goto L_08922C18;
    case 165u: goto L_08922C20;
    case 166u: goto L_08922C54;
    case 167u: goto L_08922C60;
    case 168u: goto L_08922C80;
    case 169u: goto L_08922C8C;
    case 170u: goto L_08922CAC;
    case 171u: goto L_08922CB8;
    case 172u: goto L_08922CDC;
    case 173u: goto L_08922CE8;
    case 174u: goto L_08922CF0;
    case 175u: goto L_08922CF8;
    case 176u: goto L_08922D00;
    case 177u: goto L_08922D20;
    case 178u: goto L_08922D2C;
    case 179u: goto L_08922D34;
    case 180u: goto L_08922D40;
    case 181u: goto L_08922D4C;
    case 182u: goto L_08922D60;
    case 183u: goto L_08922D70;
    case 184u: goto L_08922D84;
    case 185u: goto L_08922D88;
    case 186u: goto L_08922D90;
    case 187u: goto L_08922D98;
    case 188u: goto L_08922DA0;
    case 189u: goto L_08922DCC;
    case 190u: goto L_08922DF4;
    case 191u: goto L_08922E04;
    case 192u: goto L_08922E0C;
    case 193u: goto L_08922E18;
    case 194u: goto L_08922E2C;
    case 195u: goto L_08922E38;
    case 196u: goto L_08922E68;
    case 197u: goto L_08922E84;
    case 198u: goto L_08922E94;
    case 199u: goto L_08922EB0;
    case 200u: goto L_08922EB8;
    case 201u: goto L_08922EC4;
    case 202u: goto L_08922ECC;
    case 203u: goto L_08922EF0;
    case 204u: goto L_08922EF4;
    case 205u: goto L_08922F14;
    case 206u: goto L_08922F40;
    case 207u: goto L_08922F68;
    case 208u: goto L_08922F70;
    case 209u: goto L_08922F74;
    case 210u: goto L_08922F7C;
    case 211u: goto L_08922F88;
    case 212u: goto L_08922F8C;
    case 213u: goto L_08922F94;
    case 214u: goto L_08922FA0;
    case 215u: goto L_08922FA4;
    case 216u: goto L_08922FAC;
    case 217u: goto L_08922FB8;
    case 218u: goto L_08922FBC;
    case 219u: goto L_08922FC4;
    case 220u: goto L_08922FD0;
    case 221u: goto L_08922FD4;
    case 222u: goto L_08922FF4;
    case 223u: goto L_08922FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08922000:
    ctx.execute_vfpu_vmmov(0u, 8u, 4u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892203C;
      }
      goto L_0892201C;
    }
L_0892201C:
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(96);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(112);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(128);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(144);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_0892203C;
L_0892203C:
    aot_gpr[6] = (aot_gpr[5] & 4096u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089220F4;
      }
      goto L_08922048;
    }
L_08922048:
    aot_gpr[6] = (aot_gpr[5] & 16384u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (32639u << 16u);
      if (branch_taken) {
          goto L_089220A4;
      }
      goto L_08922054;
    }
L_08922054:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    aot_gpr[6] = (aot_gpr[6] | 65535u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    aot_gpr[6] = (65407u << 16u);
    aot_gpr[6] = (aot_gpr[6] | 65535u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(128)));
    aot_gpr[6] = (aot_gpr[7] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(128), aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_089220A4;
L_089220A4:
    aot_gpr[5] = (aot_gpr[5] & 32768u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922180;
      }
      goto L_089220B0;
    }
L_089220B0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vminmax(14u, 14u, 15u, 3u, false);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vminmax(14u, 14u, 15u, 3u, true);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(128)));
    aot_gpr[6] = (aot_gpr[6] | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(128), aot_gpr[6]);
      if (branch_taken) {
          goto L_08922180;
      }
      goto L_089220F4;
    }
L_089220F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (32639u << 16u);
      if (branch_taken) {
          goto L_08922180;
      }
      goto L_08922100;
    }
L_08922100:
    aot_gpr[6] = (aot_gpr[6] | 65535u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(240), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (65407u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(244), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(248), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (aot_gpr[6] | 65535u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[7] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(256), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(260), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(264), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(128);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    aot_gpr[6] = (0u | 0u);
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(144);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    goto L_08922148;
L_08922148:
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(240);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vminmax(15u, 14u, 15u, 3u, false);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<15u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(240);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(256);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vminmax(14u, 14u, 15u, 3u, true);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(256);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08922148;
      }
      goto L_08922180;
    }
L_08922180:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08922188:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089221E4;
      }
      goto L_089221A0;
    }
L_089221A0:
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089221DC;
      }
      goto L_089221B0;
    }
L_089221B0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(128)));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[7] = (aot_gpr[7] & 1u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_089221EC;
      }
      goto L_089221C4;
    }
L_089221C4:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x089221D4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 54u, 0x089404C8u>(ctx, &aot_mem) && ctx.pc == 0x089221D4u) goto L_089221D4;
    return;
L_089221D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08922200;
      }
      goto L_089221DC;
    }
L_089221DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922214;
      }
      goto L_089221E4;
    }
L_089221E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08922214;
      }
      goto L_089221EC;
    }
L_089221EC:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x089221FCu);
    aot_gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 37u, 0x0894032Cu>(ctx, &aot_mem) && ctx.pc == 0x089221FCu) goto L_089221FC;
    return;
L_089221FC:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_08922200;
L_08922200:
    aot_gpr[2] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[2] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089221DC;
      }
      goto L_08922210;
    }
L_08922210:
    aot_gpr[2] = (aot_gpr[5] | 0u);
    goto L_08922214;
L_08922214:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08922220:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(210)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[7] & 255u);
      if (branch_taken) {
          goto L_08922298;
      }
      goto L_08922264;
    }
L_08922264:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922298;
      }
      goto L_08922270;
    }
L_08922270:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
    aot_gpr[6] = (aot_gpr[6] & 256u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922298;
      }
      goto L_08922280;
    }
L_08922280:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-29280)));
    if (aot_gpr[6] != 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(188)));
        goto L_089222A0;
    }
    goto L_08922290;
L_08922290:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089222A8;
      }
      goto L_08922298;
    }
L_08922298:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089228A4;
      }
      goto L_089222A0;
    }
L_089222A0:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_089222BC;
      }
      goto L_089222A8;
    }
L_089222A8:
    aot_gpr[7] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_089222C4;
      }
      goto L_089222B4;
    }
L_089222B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089222E4;
      }
      goto L_089222BC;
    }
L_089222BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089228A4;
      }
      goto L_089222C4;
    }
L_089222C4:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x089222D4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08922188;
L_089222D4:
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[6] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922304;
      }
      goto L_089222E4;
    }
L_089222E4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
    aot_gpr[5] = (1024u << 16u);
    aot_gpr[5] = (aot_gpr[21] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-29272)));
      if (branch_taken) {
          goto L_0892230C;
      }
      goto L_089222FC;
    }
L_089222FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922490;
      }
      goto L_08922304;
    }
L_08922304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089228A4;
      }
      goto L_0892230C;
    }
L_0892230C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<14u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<15u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<14u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<12u, 14u, 14u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(216))))));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089223B4;
      }
      goto L_08922370;
    }
L_08922370:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(212))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[5] = (16256u << 16u);
      if (branch_taken) {
          goto L_0892239C;
      }
      goto L_0892237C;
    }
L_0892237C:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[5] = (16256u << 16u);
      if (branch_taken) {
          goto L_0892239C;
      }
      goto L_08922394;
    }
L_08922394:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_089223A0;
      }
      goto L_0892239C;
    }
L_0892239C:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    goto L_089223A0;
L_089223A0:
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_089223F4;
      }
      goto L_089223AC;
    }
L_089223AC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_089223F4;
      }
      goto L_089223B4;
    }
L_089223B4:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(214))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[5] = (16256u << 16u);
      if (branch_taken) {
          goto L_089223E0;
      }
      goto L_089223C0;
    }
L_089223C0:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[5] = (16256u << 16u);
      if (branch_taken) {
          goto L_089223E0;
      }
      goto L_089223D8;
    }
L_089223D8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
      if (branch_taken) {
          goto L_089223E4;
      }
      goto L_089223E0;
    }
L_089223E0:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    goto L_089223E4;
L_089223E4:
    aot_gpr[4] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_089223F4;
      }
      goto L_089223F0;
    }
L_089223F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_089223F4;
L_089223F4:
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(220)));
    aot_fpr[14] = aot_fpr[13] - aot_fpr[12];
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]) & 0x7FFFFFFFu);
    aot_gpr[4] = (14545u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 46871u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08922470;
      }
      goto L_0892241C;
    }
L_0892241C:
    aot_gpr[4] = (15744u << 16u);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_08922450;
      }
      goto L_08922430;
    }
L_08922430:
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08922478;
      }
      goto L_08922444;
    }
L_08922444:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08922478;
      }
      goto L_08922450;
    }
L_08922450:
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08922478;
      }
      goto L_08922464;
    }
L_08922464:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08922478;
      }
      goto L_08922470;
    }
L_08922470:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08922478;
L_08922478:
    aot_gpr[4] = (17279u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    goto L_08922490;
L_08922490:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089224B8;
      }
      goto L_08922498;
    }
L_08922498:
    aot_gpr[5] = (0u | 1u);
    aot_gpr[7] = (2048u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (aot_gpr[21] & aot_gpr[7]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089224C0;
      }
      goto L_089224B0;
    }
L_089224B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089224E4;
      }
      goto L_089224B8;
    }
L_089224B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089228A4;
      }
      goto L_089224C0;
    }
L_089224C0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(192)));
    aot_gpr[5] = (2216u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-29276)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089224E4;
      }
      goto L_089224DC;
    }
L_089224DC:
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(aot_gpr[5]));
    goto L_089224E4;
L_089224E4:
    aot_gpr[5] = (aot_gpr[21] & 2u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08922500;
      }
      goto L_089224F0;
    }
L_089224F0:
    aot_gpr[5] = (aot_gpr[6] & 4u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922500;
      }
      goto L_089224FC;
    }
L_089224FC:
    aot_gpr[22] = (0u | 1u);
    goto L_08922500;
L_08922500:
    aot_gpr[5] = (128u << 16u);
    aot_gpr[21] = (aot_gpr[21] & aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(210)));
    aot_gpr[23] = (0u | 0u);
    aot_gpr[22] = (aot_gpr[22] & 255u);
    aot_gpr[6] = (aot_gpr[23] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[21] = (0u < aot_gpr[21] ? 1u : 0u);
      if (branch_taken) {
          goto L_089228A4;
      }
      goto L_08922520;
    }
L_08922520:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 255 ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[18] & 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[4]);
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[6]);
    aot_gpr[30] = (32u << 16u);
    goto L_08922540;
L_08922540:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922894;
      }
      goto L_08922554;
    }
L_08922554:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(192));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0892256Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892256Cu) goto L_0892256C;
    return;
L_0892256C:
    aot_gpr[4] = (8u << 16u);
    aot_gpr[4] = (aot_gpr[2] & aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922590;
      }
      goto L_0892257C;
    }
L_0892257C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922590;
      }
      goto L_08922588;
    }
L_08922588:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(210)));
      if (branch_taken) {
          goto L_08922894;
      }
      goto L_08922590;
    }
L_08922590:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[5] & 4u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089225A8;
      }
      goto L_089225A4;
    }
L_089225A4:
    aot_gpr[19] = (0u | 0u);
    goto L_089225A8;
L_089225A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(191)));
    aot_gpr[6] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08922608;
      }
      goto L_089225B8;
    }
L_089225B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28756)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922608;
      }
      goto L_089225C8;
    }
L_089225C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(192)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (aot_gpr[22] | 0u);
    aot_gpr[10] = (0u | 255u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[31] = (0x08922600u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 175u, 0x08927DDCu>(ctx, &aot_mem) && ctx.pc == 0x08922600u) goto L_08922600;
    return;
L_08922600:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922890;
      }
      goto L_08922608;
    }
L_08922608:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089227E0;
      }
      goto L_08922618;
    }
L_08922618:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(208));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0892263Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892263Cu) goto L_0892263C;
    return;
L_0892263C:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_089226CC;
      }
      goto L_08922648;
    }
L_08922648:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-28752)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089226CC;
      }
      goto L_08922654;
    }
L_08922654:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2104)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089226CC;
      }
      goto L_08922664;
    }
L_08922664:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089226C0;
      }
      goto L_08922670;
    }
L_08922670:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[6] = (aot_gpr[5] & aot_gpr[6]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089226C0;
      }
      goto L_08922680;
    }
L_08922680:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(192)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (aot_gpr[22] | 0u);
    aot_gpr[10] = (0u | 255u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[31] = (0x089226B8u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 175u, 0x08927DDCu>(ctx, &aot_mem) && ctx.pc == 0x089226B8u) goto L_089226B8;
    return;
L_089226B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089226CC;
      }
      goto L_089226C0;
    }
L_089226C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922664;
      }
      goto L_089226CC;
    }
L_089226CC:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089227E0;
      }
      goto L_089226D4;
    }
L_089226D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(192));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x089226F8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089226F8u) goto L_089226F8;
    return;
L_089226F8:
    aot_gpr[4] = (4u << 16u);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[2] & aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(-28939)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[4] | aot_gpr[5]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922728;
      }
      goto L_0892271C;
    }
L_0892271C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892278C;
      }
      goto L_08922728;
    }
L_08922728:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28760)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892278C;
      }
      goto L_0892273C;
    }
L_0892273C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(192)));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[7] + static_cast<std::uint32_t>(-29271)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[11] = (aot_gpr[5] & aot_gpr[7]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[11] = (aot_gpr[11] & 255u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08922788u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 175u, 0x08927DDCu>(ctx, &aot_mem) && ctx.pc == 0x08922788u) goto L_08922788;
    return;
L_08922788:
    aot_gpr[17] = (0u | 1u);
    goto L_0892278C;
L_0892278C:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_089227E0;
      }
      goto L_08922794;
    }
L_08922794:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28764)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089227E0;
      }
      goto L_089227A4;
    }
L_089227A4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(192)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[18]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(200)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[7] = (aot_gpr[20] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (aot_gpr[22] | 0u);
    aot_gpr[10] = (0u | 255u);
    aot_gpr[11] = (0u | 0u);
    aot_gpr[31] = (0x089227DCu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 175u, 0x08927DDCu>(ctx, &aot_mem) && ctx.pc == 0x089227DCu) goto L_089227DC;
    return;
L_089227DC:
    aot_gpr[17] = (0u | 1u);
    goto L_089227E0;
L_089227E0:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08922890;
      }
      goto L_089227E8;
    }
L_089227E8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922808;
      }
      goto L_089227F4;
    }
L_089227F4:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-28938), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[30]);
      if (branch_taken) {
          goto L_08922814;
      }
      goto L_08922808;
    }
L_08922808:
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(-28938), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[30]);
    goto L_08922814;
L_08922814:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_08922828;
      }
      goto L_0892281C;
    }
L_0892281C:
    aot_gpr[31] = (0x08922824u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(204)));
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 71u, 0x0893F780u>(ctx, &aot_mem) && ctx.pc == 0x08922824u) goto L_08922824;
    return;
L_08922824:
    aot_gpr[4] = (2219u << 16u);
    goto L_08922828;
L_08922828:
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(-12880), static_cast<std::uint16_t>(aot_gpr[19]));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[6] = (16u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[31] = (0x08922848u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x08922848u) goto L_08922848;
    return;
L_08922848:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[22] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08922878u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08922878u) goto L_08922878;
    return;
L_08922878:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[30]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922890;
      }
      goto L_08922888;
    }
L_08922888:
    aot_gpr[31] = (0x08922890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 79u, 0x0893F890u>(ctx, &aot_mem) && ctx.pc == 0x08922890u) goto L_08922890;
    return;
L_08922890:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(210)));
    goto L_08922894;
L_08922894:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[23] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08922540;
      }
      goto L_089228A4;
    }
L_089228A4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(76)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089228D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] & 255u);
    aot_gpr[6] = (aot_gpr[4] & 8192u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08922924;
      }
      goto L_0892290C;
    }
L_0892290C:
    aot_gpr[20] = (16384u << 16u);
    aot_gpr[5] = (aot_gpr[4] & aot_gpr[20]);
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (2216u << 16u);
        goto L_0892292C;
    }
    goto L_0892291C;
L_0892291C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892297C;
      }
      goto L_08922924;
    }
L_08922924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922B64;
      }
      goto L_0892292C;
    }
L_0892292C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28788)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<14u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<15u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<14u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<12u, 14u, 14u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<12u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(192), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          goto L_089229C0;
      }
      goto L_0892297C;
    }
L_0892297C:
    aot_gpr[5] = (3072u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089229A8;
      }
      goto L_0892298C;
    }
L_0892298C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x089229A0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_08922220;
L_089229A0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          goto L_089229C0;
      }
      goto L_089229A8;
    }
L_089229A8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089229BCu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_08922220;
L_089229BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(208)));
    goto L_089229C0;
L_089229C0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922B64;
      }
      goto L_089229C8;
    }
L_089229C8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922A18;
      }
      goto L_089229D0;
    }
L_089229D0:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(272));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(288));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x089229E8u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 54u, 0x089404C8u>(ctx, &aot_mem) && ctx.pc == 0x089229E8u) goto L_089229E8;
    return;
L_089229E8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922A0C;
      }
      goto L_089229F8;
    }
L_089229F8:
    aot_gpr[4] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922A14;
      }
      goto L_08922A04;
    }
L_08922A04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922A18;
      }
      goto L_08922A0C;
    }
L_08922A0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922B64;
      }
      goto L_08922A14;
    }
L_08922A14:
    aot_gpr[18] = (0u | 0u);
    goto L_08922A18;
L_08922A18:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
    aot_gpr[4] = (aot_gpr[5] & aot_gpr[4]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(168)));
      if (branch_taken) {
          goto L_08922B3C;
      }
      goto L_08922A2C;
    }
L_08922A2C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(212))))));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(192)));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08922A58;
      }
      goto L_08922A4C;
    }
L_08922A4C:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08922AE0;
      }
      goto L_08922A58;
    }
L_08922A58:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(214))))));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(216))))));
        goto L_08922A84;
    }
    goto L_08922A74;
L_08922A74:
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08922AE0;
      }
      goto L_08922A84;
    }
L_08922A84:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(218))))));
        goto L_08922AAC;
    }
    goto L_08922A9C;
L_08922A9C:
    aot_gpr[5] = (16384u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08922AE0;
      }
      goto L_08922AAC;
    }
L_08922AAC:
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08922AD4;
      }
      goto L_08922AC4;
    }
L_08922AC4:
    aot_gpr[5] = (16448u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(224), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08922AE0;
      }
      goto L_08922AD4;
    }
L_08922AD4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(224)));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08922AE0;
L_08922AE0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (14545u << 16u);
      if (branch_taken) {
          goto L_08922B34;
      }
      goto L_08922AE8;
    }
L_08922AE8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(224)));
    aot_gpr[4] = (aot_gpr[4] | 46871u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(220), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = aot_fpr[12] + aot_fpr[13];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[16] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08922B34;
      }
      goto L_08922B08;
    }
L_08922B08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[20] + static_cast<std::uint32_t>(211)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08922B28;
      }
      goto L_08922B14;
    }
L_08922B14:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08922B28u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_089228D4;
L_08922B28:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922B08;
      }
      goto L_08922B34;
    }
L_08922B34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922B64;
      }
      goto L_08922B3C;
    }
L_08922B3C:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922B64;
      }
      goto L_08922B44;
    }
L_08922B44:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08922B58u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    goto L_089228D4;
L_08922B58:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922B44;
      }
      goto L_08922B64;
    }
L_08922B64:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08922B84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(209)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | aot_gpr[6]);
    aot_gpr[18] = (0u < aot_gpr[18] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08922BBC;
      }
      goto L_08922BB4;
    }
L_08922BB4:
    aot_gpr[31] = (0x08922BBCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0285_entry, 285u, 217u, 0x08921FA0u>(ctx, &aot_mem) && ctx.pc == 0x08922BBCu) goto L_08922BBC;
    return;
L_08922BBC:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(168)));
    aot_gpr[17] = (0u | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08922C18;
      }
      goto L_08922BCC;
    }
L_08922BCC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08922BD8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_08922B84;
L_08922BD8:
    aot_gpr[17] = (aot_gpr[2] | aot_gpr[17]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(208)));
    aot_gpr[17] = (0u < aot_gpr[17] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08922C04;
      }
      goto L_08922BEC;
    }
L_08922BEC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(304)));
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (0u | 1u);
        goto L_08922C08;
    }
    goto L_08922BF8;
L_08922BF8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922C08;
      }
      goto L_08922C04;
    }
L_08922C04:
    aot_gpr[4] = (0u | 1u);
    goto L_08922C08;
L_08922C08:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922BCC;
      }
      goto L_08922C18;
    }
L_08922C18:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (32639u << 16u);
      if (branch_taken) {
          goto L_08922CB8;
      }
      goto L_08922C20;
    }
L_08922C20:
    aot_gpr[4] = (aot_gpr[4] | 65535u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(272), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (65407u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(276), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(280), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] | 65535u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(168)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(288), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(292), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08922CB8;
      }
      goto L_08922C54;
    }
L_08922C54:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922C80;
      }
      goto L_08922C60;
    }
L_08922C60:
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(272);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(240);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vminmax(14u, 14u, 15u, 3u, false);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(272);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(288);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(256);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vminmax(14u, 14u, 15u, 3u, true);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(288);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_08922C80;
L_08922C80:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922CAC;
      }
      goto L_08922C8C;
    }
L_08922C8C:
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(272);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(272);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vminmax(14u, 14u, 15u, 3u, false);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(272);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(288);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(288);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vminmax(14u, 14u, 15u, 3u, true);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(288);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    goto L_08922CAC;
L_08922CAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922C54;
      }
      goto L_08922CB8;
    }
L_08922CB8:
    aot_gpr[2] = (aot_gpr[17] | aot_gpr[18]);
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
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
L_08922CDC:
    aot_gpr[6] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_08922CF0;
      }
      goto L_08922CE8;
    }
L_08922CE8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] | 256u);
      if (branch_taken) {
          goto L_08922CF8;
      }
      goto L_08922CF0;
    }
L_08922CF0:
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(-257));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    goto L_08922CF8;
L_08922CF8:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(176), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08922D00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] & 255u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08922D20u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08922CDC;
L_08922D20:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922D4C;
      }
      goto L_08922D2C;
    }
L_08922D2C:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922D4C;
      }
      goto L_08922D34;
    }
L_08922D34:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08922D40u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08922D00;
L_08922D40:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922D34;
      }
      goto L_08922D4C;
    }
L_08922D4C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08922D60:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(304)));
    aot_gpr[2] = (0u | 320u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(210)));
      if (branch_taken) {
          goto L_08922D88;
      }
      goto L_08922D70;
    }
L_08922D70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    aot_gpr[6] = (4u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922D88;
      }
      goto L_08922D84;
    }
L_08922D84:
    aot_gpr[2] = (0u | 464u);
    goto L_08922D88;
L_08922D88:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08922D98;
      }
      goto L_08922D90;
    }
L_08922D90:
    aot_gpr[4] = (aot_gpr[5] << 2u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    goto L_08922D98;
L_08922D98:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08922DA0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08922DCCu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x08922DCCu) goto L_08922DCC;
    return;
L_08922DCC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1656));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(320));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x08922DF4u);
    aot_gpr[6] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08922DF4u) goto L_08922DF4;
    return;
L_08922DF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] & 15u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
      if (branch_taken) {
          goto L_08922E0C;
      }
      goto L_08922E04;
    }
L_08922E04:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_08922E0C;
L_08922E0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922EB8;
      }
      goto L_08922E18;
    }
L_08922E18:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
    aot_gpr[6] = (4u << 16u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08922E38;
    }
    goto L_08922E2C;
L_08922E2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(304), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(210)));
      if (branch_taken) {
          goto L_08922EC4;
      }
      goto L_08922E38;
    }
L_08922E38:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(304), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(144));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(304)));
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[18] + aot_gpr[7]);
    goto L_08922E68;
L_08922E68:
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<14u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<14u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[6] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[8] = (aot_gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08922E68;
      }
      goto L_08922E84;
    }
L_08922E84:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(128)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(128), aot_gpr[6]);
    aot_gpr[4] = (0u | 0u);
    goto L_08922E94;
L_08922E94:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(132)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(132), aot_gpr[6]);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08922E94;
      }
      goto L_08922EB0;
    }
L_08922EB0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(210)));
      if (branch_taken) {
          goto L_08922EC4;
      }
      goto L_08922EB8;
    }
L_08922EB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(304), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(210)));
      if (branch_taken) {
          goto L_08922EC4;
      }
      goto L_08922EC4;
    }
L_08922EC4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08922EF0;
      }
      goto L_08922ECC;
    }
L_08922ECC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(308), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_08922EF4;
      }
      goto L_08922EF0;
    }
L_08922EF0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(308), 0u);
    goto L_08922EF4;
L_08922EF4:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08922F14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[31]);
    aot_gpr[31] = (0x08922F40u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x08922F40u) goto L_08922F40;
    return;
L_08922F40:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1656));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(160)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(164)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(168)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(304)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_08922F74;
      }
      goto L_08922F68;
    }
L_08922F68:
    aot_gpr[31] = (0x08922F70u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 103u, 0x08A546ECu>(ctx, &aot_mem) && ctx.pc == 0x08922F70u) goto L_08922F70;
    return;
L_08922F70:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(160), aot_gpr[2]);
    goto L_08922F74;
L_08922F74:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922F8C;
      }
      goto L_08922F7C;
    }
L_08922F7C:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08922F88u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 103u, 0x08A546ECu>(ctx, &aot_mem) && ctx.pc == 0x08922F88u) goto L_08922F88;
    return;
L_08922F88:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(164), aot_gpr[2]);
    goto L_08922F8C;
L_08922F8C:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922FA4;
      }
      goto L_08922F94;
    }
L_08922F94:
    aot_gpr[4] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (0x08922FA0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0592_entry, 592u, 103u, 0x08A546ECu>(ctx, &aot_mem) && ctx.pc == 0x08922FA0u) goto L_08922FA0;
    return;
L_08922FA0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(168), aot_gpr[2]);
    goto L_08922FA4;
L_08922FA4:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922FBC;
      }
      goto L_08922FAC;
    }
L_08922FAC:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x08922FB8u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 200u, 0x08A55E6Cu>(ctx, &aot_mem) && ctx.pc == 0x08922FB8u) goto L_08922FB8;
    return;
L_08922FB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(304), aot_gpr[2]);
    goto L_08922FBC;
L_08922FBC:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922FD4;
      }
      goto L_08922FC4;
    }
L_08922FC4:
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x08922FD0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0593_entry, 593u, 201u, 0x08A55E74u>(ctx, &aot_mem) && ctx.pc == 0x08922FD0u) goto L_08922FD0;
    return;
L_08922FD0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(308), aot_gpr[2]);
    goto L_08922FD4;
L_08922FD4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-113));
    aot_gpr[4] = (aot_gpr[19] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(176), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(210)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0287_entry, 287u, 19u, 0x08923114u>(ctx, &aot_mem); return;
      }
      goto L_08922FF4;
    }
L_08922FF4:
    aot_gpr[20] = (0u | 0u);
    goto L_08922FF8;
L_08922FF8:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(308)));
    aot_gpr[21] = (aot_gpr[21] + aot_gpr[20]);
    ctx.pc = 0x08923000u; return;
}

void recomp_unit_0286(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0286_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_286(Runtime &runtime) {
    runtime.register_generated_unit(286u, 0x08922000u, 4096u, &recomp_unit_0286, &recomp_unit_0286_entry);
    runtime.register_function(0x08922000u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x0892201Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x0892203Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922048u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922054u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089220A4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089220B0u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089220F4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922100u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922148u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922180u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922188u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089221A0u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089221B0u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089221C4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089221D4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089221DCu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089221E4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089221ECu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089221FCu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922200u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922210u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922214u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922220u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922264u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922270u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922280u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922290u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922298u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089222A0u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089222A8u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089222B4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089222BCu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089222C4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089222D4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089222E4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089222FCu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922304u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x0892230Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922370u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x0892237Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922394u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x0892239Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089223A0u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089223ACu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089223B4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089223C0u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089223D8u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089223E0u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089223E4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089223F0u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089223F4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x0892241Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922430u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922444u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922450u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922464u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922470u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922478u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922490u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922498u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089224B0u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089224B8u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089224C0u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089224DCu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089224E4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089224F0u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089224FCu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922500u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922520u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922540u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922554u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x0892256Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x0892257Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922588u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922590u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089225A4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089225A8u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089225B8u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089225C8u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922600u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922608u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922618u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x0892263Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922648u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922654u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922664u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922670u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922680u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089226B8u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089226C0u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089226CCu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089226D4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089226F8u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x0892271Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922728u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x0892273Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922788u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x0892278Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922794u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089227A4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089227DCu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089227E0u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089227E8u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089227F4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922808u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922814u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x0892281Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922824u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922828u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922848u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922878u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922888u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922890u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922894u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089228A4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089228D4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x0892290Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x0892291Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922924u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x0892292Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x0892297Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x0892298Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089229A0u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089229A8u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089229BCu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089229C0u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089229C8u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089229D0u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089229E8u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x089229F8u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922A04u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922A0Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922A14u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922A18u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922A2Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922A4Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922A58u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922A74u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922A84u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922A9Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922AACu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922AC4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922AD4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922AE0u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922AE8u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922B08u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922B14u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922B28u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922B34u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922B3Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922B44u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922B58u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922B64u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922B84u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922BB4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922BBCu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922BCCu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922BD8u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922BECu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922BF8u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922C04u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922C08u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922C18u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922C20u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922C54u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922C60u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922C80u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922C8Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922CACu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922CB8u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922CDCu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922CE8u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922CF0u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922CF8u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922D00u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922D20u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922D2Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922D34u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922D40u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922D4Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922D60u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922D70u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922D84u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922D88u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922D90u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922D98u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922DA0u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922DCCu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922DF4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922E04u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922E0Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922E18u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922E2Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922E38u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922E68u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922E84u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922E94u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922EB0u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922EB8u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922EC4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922ECCu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922EF0u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922EF4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922F14u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922F40u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922F68u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922F70u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922F74u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922F7Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922F88u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922F8Cu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922F94u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922FA0u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922FA4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922FACu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922FB8u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922FBCu, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922FC4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922FD0u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922FD4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922FF4u, &recomp_unit_0286, "recomp_unit_0286");
    runtime.register_function(0x08922FF8u, &recomp_unit_0286, "recomp_unit_0286");
}
} // namespace psprecomp
