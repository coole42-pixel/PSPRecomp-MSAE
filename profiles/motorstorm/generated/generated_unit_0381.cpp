#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0381[1021] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 4, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 0, 8, 0, 9, 0, 10, 0, 11, 0, 12,
    0, 13, 0, 14, 0, 15, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0,
    19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 0, 0, 24, 0, 25, 0, 26, 0, 0, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 0, 0,
    0, 32, 0, 0, 33, 0, 34, 0, 35, 36, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 39, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 49, 0, 50, 0, 51, 0, 52, 0,
    53, 0, 54, 0, 55, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0,
    0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 69, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0,
    0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 0, 80, 0, 81, 0, 0, 0, 82, 0,
    0, 83, 0, 84, 0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 88, 0, 89, 0, 90, 0, 91, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0,
    0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 101, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    104, 0, 0, 105, 0, 106, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 111, 0, 0, 0, 112, 0, 0, 113, 0, 114,
    0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 120, 0,
    0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 127, 0, 128,
    0, 129, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 133, 0, 0, 0, 134, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 137, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143,
    0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 0,
    0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0,
    163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 168, 0,
    0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174,
    0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 183, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194,
    0, 195, 0, 0, 0, 0, 196, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208,
    0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0,
    0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0, 0, 228, 229, 0, 230, 0,
    0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 241,
};
void recomp_unit_0381_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08981004u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0381[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08981004;
    case 2u: goto L_08981014;
    case 3u: goto L_08981028;
    case 4u: goto L_08981030;
    case 5u: goto L_0898103C;
    case 6u: goto L_08981044;
    case 7u: goto L_08981054;
    case 8u: goto L_08981060;
    case 9u: goto L_08981068;
    case 10u: goto L_08981070;
    case 11u: goto L_08981078;
    case 12u: goto L_08981080;
    case 13u: goto L_08981088;
    case 14u: goto L_08981090;
    case 15u: goto L_08981098;
    case 16u: goto L_0898109C;
    case 17u: goto L_089810CC;
    case 18u: goto L_089810F8;
    case 19u: goto L_08981104;
    case 20u: goto L_0898110C;
    case 21u: goto L_08981114;
    case 22u: goto L_0898111C;
    case 23u: goto L_08981124;
    case 24u: goto L_08981134;
    case 25u: goto L_0898113C;
    case 26u: goto L_08981144;
    case 27u: goto L_08981154;
    case 28u: goto L_0898115C;
    case 29u: goto L_08981164;
    case 30u: goto L_0898116C;
    case 31u: goto L_08981174;
    case 32u: goto L_08981188;
    case 33u: goto L_08981194;
    case 34u: goto L_0898119C;
    case 35u: goto L_089811A4;
    case 36u: goto L_089811A8;
    case 37u: goto L_089811B4;
    case 38u: goto L_089811C8;
    case 39u: goto L_089811D4;
    case 40u: goto L_089811DC;
    case 41u: goto L_089811F0;
    case 42u: goto L_08981204;
    case 43u: goto L_08981218;
    case 44u: goto L_0898122C;
    case 45u: goto L_08981244;
    case 46u: goto L_089812B8;
    case 47u: goto L_089812C0;
    case 48u: goto L_089812E0;
    case 49u: goto L_089812E4;
    case 50u: goto L_089812EC;
    case 51u: goto L_089812F4;
    case 52u: goto L_089812FC;
    case 53u: goto L_08981304;
    case 54u: goto L_0898130C;
    case 55u: goto L_08981314;
    case 56u: goto L_08981318;
    case 57u: goto L_08981320;
    case 58u: goto L_08981328;
    case 59u: goto L_08981330;
    case 60u: goto L_08981338;
    case 61u: goto L_08981340;
    case 62u: goto L_08981350;
    case 63u: goto L_08981358;
    case 64u: goto L_0898136C;
    case 65u: goto L_08981388;
    case 66u: goto L_08981390;
    case 67u: goto L_089813AC;
    case 68u: goto L_089813B4;
    case 69u: goto L_089813BC;
    case 70u: goto L_089813C4;
    case 71u: goto L_089813D4;
    case 72u: goto L_089813E8;
    case 73u: goto L_089813FC;
    case 74u: goto L_08981414;
    case 75u: goto L_08981424;
    case 76u: goto L_0898142C;
    case 77u: goto L_0898143C;
    case 78u: goto L_08981450;
    case 79u: goto L_08981458;
    case 80u: goto L_08981464;
    case 81u: goto L_0898146C;
    case 82u: goto L_0898147C;
    case 83u: goto L_08981488;
    case 84u: goto L_08981490;
    case 85u: goto L_089814A0;
    case 86u: goto L_089814A8;
    case 87u: goto L_089814B0;
    case 88u: goto L_089814BC;
    case 89u: goto L_089814C4;
    case 90u: goto L_089814CC;
    case 91u: goto L_089814D4;
    case 92u: goto L_089814D8;
    case 93u: goto L_08981508;
    case 94u: goto L_0898154C;
    case 95u: goto L_08981554;
    case 96u: goto L_0898156C;
    case 97u: goto L_08981590;
    case 98u: goto L_089815A0;
    case 99u: goto L_089815C8;
    case 100u: goto L_089815D0;
    case 101u: goto L_089815D8;
    case 102u: goto L_089815DC;
    case 103u: goto L_089815F4;
    case 104u: goto L_08981604;
    case 105u: goto L_08981610;
    case 106u: goto L_08981618;
    case 107u: goto L_0898161C;
    case 108u: goto L_08981628;
    case 109u: goto L_08981650;
    case 110u: goto L_08981658;
    case 111u: goto L_0898165C;
    case 112u: goto L_0898166C;
    case 113u: goto L_08981678;
    case 114u: goto L_08981680;
    case 115u: goto L_08981688;
    case 116u: goto L_08981690;
    case 117u: goto L_089816D0;
    case 118u: goto L_089816DC;
    case 119u: goto L_089816F0;
    case 120u: goto L_089816FC;
    case 121u: goto L_0898170C;
    case 122u: goto L_0898171C;
    case 123u: goto L_08981730;
    case 124u: goto L_08981738;
    case 125u: goto L_08981758;
    case 126u: goto L_08981770;
    case 127u: goto L_08981778;
    case 128u: goto L_08981780;
    case 129u: goto L_08981788;
    case 130u: goto L_08981798;
    case 131u: goto L_089817A4;
    case 132u: goto L_089817B4;
    case 133u: goto L_089817BC;
    case 134u: goto L_089817CC;
    case 135u: goto L_089817D0;
    case 136u: goto L_089817E0;
    case 137u: goto L_0898180C;
    case 138u: goto L_08981818;
    case 139u: goto L_08981820;
    case 140u: goto L_08981844;
    case 141u: goto L_08981850;
    case 142u: goto L_08981874;
    case 143u: goto L_08981880;
    case 144u: goto L_08981888;
    case 145u: goto L_08981890;
    case 146u: goto L_089818E8;
    case 147u: goto L_089818F4;
    case 148u: goto L_08981918;
    case 149u: goto L_08981954;
    case 150u: goto L_08981974;
    case 151u: goto L_08981988;
    case 152u: goto L_089819B8;
    case 153u: goto L_089819C0;
    case 154u: goto L_089819C8;
    case 155u: goto L_089819DC;
    case 156u: goto L_089819E4;
    case 157u: goto L_089819F0;
    case 158u: goto L_08981A08;
    case 159u: goto L_08981A2C;
    case 160u: goto L_08981A50;
    case 161u: goto L_08981A68;
    case 162u: goto L_08981A78;
    case 163u: goto L_08981A84;
    case 164u: goto L_08981A90;
    case 165u: goto L_08981ADC;
    case 166u: goto L_08981AE4;
    case 167u: goto L_08981AF4;
    case 168u: goto L_08981AFC;
    case 169u: goto L_08981B08;
    case 170u: goto L_08981B14;
    case 171u: goto L_08981B30;
    case 172u: goto L_08981B50;
    case 173u: goto L_08981B68;
    case 174u: goto L_08981B80;
    case 175u: goto L_08981B8C;
    case 176u: goto L_08981B98;
    case 177u: goto L_08981BA4;
    case 178u: goto L_08981BB0;
    case 179u: goto L_08981BBC;
    case 180u: goto L_08981BC4;
    case 181u: goto L_08981BDC;
    case 182u: goto L_08981C04;
    case 183u: goto L_08981C0C;
    case 184u: goto L_08981C14;
    case 185u: goto L_08981C24;
    case 186u: goto L_08981C34;
    case 187u: goto L_08981C50;
    case 188u: goto L_08981C68;
    case 189u: goto L_08981C84;
    case 190u: goto L_08981C94;
    case 191u: goto L_08981CB0;
    case 192u: goto L_08981CB8;
    case 193u: goto L_08981CF0;
    case 194u: goto L_08981D00;
    case 195u: goto L_08981D08;
    case 196u: goto L_08981D1C;
    case 197u: goto L_08981D24;
    case 198u: goto L_08981D30;
    case 199u: goto L_08981D40;
    case 200u: goto L_08981D4C;
    case 201u: goto L_08981D5C;
    case 202u: goto L_08981D68;
    case 203u: goto L_08981D9C;
    case 204u: goto L_08981DA8;
    case 205u: goto L_08981DB4;
    case 206u: goto L_08981DC8;
    case 207u: goto L_08981DD4;
    case 208u: goto L_08981E00;
    case 209u: goto L_08981E08;
    case 210u: goto L_08981E18;
    case 211u: goto L_08981E3C;
    case 212u: goto L_08981E54;
    case 213u: goto L_08981E5C;
    case 214u: goto L_08981E7C;
    case 215u: goto L_08981E84;
    case 216u: goto L_08981EA4;
    case 217u: goto L_08981EAC;
    case 218u: goto L_08981ECC;
    case 219u: goto L_08981ED4;
    case 220u: goto L_08981EF0;
    case 221u: goto L_08981EF8;
    case 222u: goto L_08981F18;
    case 223u: goto L_08981F30;
    case 224u: goto L_08981F38;
    case 225u: goto L_08981F48;
    case 226u: goto L_08981F50;
    case 227u: goto L_08981F58;
    case 228u: goto L_08981F70;
    case 229u: goto L_08981F74;
    case 230u: goto L_08981F7C;
    case 231u: goto L_08981F88;
    case 232u: goto L_08981F90;
    case 233u: goto L_08981F98;
    case 234u: goto L_08981FA0;
    case 235u: goto L_08981FA8;
    case 236u: goto L_08981FB0;
    case 237u: goto L_08981FBC;
    case 238u: goto L_08981FC8;
    case 239u: goto L_08981FD8;
    case 240u: goto L_08981FE4;
    case 241u: goto L_08981FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08981004:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20479));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (32770u << 16u);
      if (branch_taken) {
          goto L_08981030;
      }
      goto L_08981014;
    }
L_08981014:
    aot_gpr[4] = (32770u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20480));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 252u, 0x08980FFCu>(ctx, &aot_mem); return;
      }
      goto L_08981028;
    }
L_08981028:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 132u);
      if (branch_taken) {
          goto L_0898109C;
      }
      goto L_08981030;
    }
L_08981030:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20477));
    { const bool branch_taken = aot_gpr[16] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08981028;
      }
      goto L_0898103C;
    }
L_0898103C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 252u, 0x08980FFCu>(ctx, &aot_mem); return;
      }
      goto L_08981044;
    }
L_08981044:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[30]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08981068;
      }
      goto L_08981054;
    }
L_08981054:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[16]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981028;
      }
      goto L_08981060;
    }
L_08981060:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981070;
      }
      goto L_08981068;
    }
L_08981068:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 252u, 0x08980FFCu>(ctx, &aot_mem); return;
      }
      goto L_08981070;
    }
L_08981070:
    aot_gpr[31] = (0x08981078u);
    aot_gpr[4] = (0u | 2u);
    ctx.pc = 0x08A5B2C4u;
    return;
L_08981078:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08981088;
      }
      goto L_08981080;
    }
L_08981080:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08981090;
      }
      goto L_08981088;
    }
L_08981088:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 130u);
      if (branch_taken) {
          goto L_0898109C;
      }
      goto L_08981090;
    }
L_08981090:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 221u, 0x08980E98u>(ctx, &aot_mem); return;
      }
      goto L_08981098;
    }
L_08981098:
    aot_gpr[2] = (0u | 131u);
    goto L_0898109C;
L_0898109C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089810CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[7] = (0u | 3u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08981104;
      }
      goto L_089810F8;
    }
L_089810F8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08981104u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 209u, 0x08980DA4u>(ctx, &aot_mem) && ctx.pc == 0x08981104u) goto L_08981104;
    return;
L_08981104:
    aot_gpr[31] = (0x0898110Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 218u, 0x08980E08u>(ctx, &aot_mem) && ctx.pc == 0x0898110Cu) goto L_0898110C;
    return;
L_0898110C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981124;
      }
      goto L_08981114;
    }
L_08981114:
    aot_gpr[31] = (0x0898111Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 219u, 0x08980E18u>(ctx, &aot_mem) && ctx.pc == 0x0898111Cu) goto L_0898111C;
    return;
L_0898111C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981164;
      }
      goto L_08981124;
    }
L_08981124:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08981134u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5B294u;
    return;
L_08981134:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
      if (branch_taken) {
          goto L_0898115C;
      }
      goto L_0898113C;
    }
L_0898113C:
    aot_gpr[31] = (0x08981144u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08981144u) goto L_08981144;
    return;
L_08981144:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (aot_gpr[5] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (0u | 256u);
      if (branch_taken) {
          goto L_089811A4;
      }
      goto L_08981154;
    }
L_08981154:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089811A8;
      }
      goto L_0898115C;
    }
L_0898115C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 128u);
      if (branch_taken) {
          goto L_0898122C;
      }
      goto L_08981164;
    }
L_08981164:
    aot_gpr[31] = (0x0898116Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 198u, 0x08980D0Cu>(ctx, &aot_mem) && ctx.pc == 0x0898116Cu) goto L_0898116C;
    return;
L_0898116C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898119C;
      }
      goto L_08981174;
    }
L_08981174:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[31] = (0x08981188u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 220u, 0x08980E28u>(ctx, &aot_mem) && ctx.pc == 0x08981188u) goto L_08981188;
    return;
L_08981188:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0898113C;
      }
      goto L_08981194;
    }
L_08981194:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_0898122C;
      }
      goto L_0898119C;
    }
L_0898119C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 129u);
      if (branch_taken) {
          goto L_0898122C;
      }
      goto L_089811A4;
    }
L_089811A4:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_089811A8;
L_089811A8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_089811DC;
      }
      goto L_089811B4;
    }
L_089811B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x089811C8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x089811C8u) goto L_089811C8;
    return;
L_089811C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x089811D4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 46u, 0x0897A29Cu>(ctx, &aot_mem) && ctx.pc == 0x089811D4u) goto L_089811D4;
    return;
L_089811D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_089811DC;
L_089811DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x089811F0u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x089811F0u) goto L_089811F0;
    return;
L_089811F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x08981204u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 142u, 0x0897A8A8u>(ctx, &aot_mem) && ctx.pc == 0x08981204u) goto L_08981204;
    return;
L_08981204:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08981218u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08981218u) goto L_08981218;
    return;
L_08981218:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0898122C;
L_0898122C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981244:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[9] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[16] = (15u << 16u);
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[17] = (2215u << 16u);
    aot_gpr[19] = (32801u << 16u);
    aot_gpr[30] = (32767u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    aot_gpr[23] = (aot_gpr[7] | 0u);
    aot_gpr[20] = (aot_gpr[8] | 0u);
    aot_gpr[22] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(16960));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-19464));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-19416));
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-9));
    aot_gpr[21] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    goto L_089812B8;
L_089812B8:
    aot_gpr[31] = (0x089812C0u);
    // nop
    ctx.pc = 0x08A5B2BCu;
    return;
L_089812C0:
    aot_gpr[6] = (aot_gpr[2] & aot_gpr[19]);
    aot_gpr[6] = (aot_gpr[6] ^ aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[2] & 1u);
    aot_gpr[4] = (aot_gpr[2] & 32u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_0898130C;
      }
      goto L_089812E0;
    }
L_089812E0:
    aot_gpr[4] = (0u | 2u);
    goto L_089812E4;
L_089812E4:
    aot_gpr[31] = (0x089812ECu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = 0x08A5B2D4u;
    return;
L_089812EC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08981340;
      }
      goto L_089812F4;
    }
L_089812F4:
    aot_gpr[31] = (0x089812FCu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x089812FCu) goto L_089812FC;
    return;
L_089812FC:
    aot_gpr[31] = (0x08981304u);
    aot_gpr[4] = (0u | 100u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08981304:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089812E4;
      }
      goto L_0898130C;
    }
L_0898130C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981340;
      }
      goto L_08981314;
    }
L_08981314:
    aot_gpr[4] = (0u | 32u);
    goto L_08981318;
L_08981318:
    aot_gpr[31] = (0x08981320u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = 0x08A5B2D4u;
    return;
L_08981320:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08981340;
      }
      goto L_08981328;
    }
L_08981328:
    aot_gpr[31] = (0x08981330u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x08981330u) goto L_08981330;
    return;
L_08981330:
    aot_gpr[31] = (0x08981338u);
    aot_gpr[4] = (0u | 100u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08981338:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_08981318;
      }
      goto L_08981340;
    }
L_08981340:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-26200)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[31] = (0x08981350u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5B064u;
    return;
L_08981350:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089813BC;
      }
      goto L_08981358;
    }
L_08981358:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x0898136Cu);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08A5B23Cu;
    return;
L_0898136C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 31u));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-26200)));
    aot_gpr[31] = (0x08981388u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = 0x08A5B04Cu;
    return;
L_08981388:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089813B4;
      }
      goto L_08981390;
    }
L_08981390:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (32801u << 16u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (32769u << 16u);
      if (branch_taken) {
          goto L_089813C4;
      }
      goto L_089813AC;
    }
L_089813AC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (32801u << 16u);
      if (branch_taken) {
          goto L_0898146C;
      }
      goto L_089813B4;
    }
L_089813B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 132u);
      if (branch_taken) {
          goto L_089814D8;
      }
      goto L_089813BC;
    }
L_089813BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 132u);
      if (branch_taken) {
          goto L_089814D8;
      }
      goto L_089813C4;
    }
L_089813C4:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(91));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (32770u << 16u);
      if (branch_taken) {
          goto L_0898142C;
      }
      goto L_089813D4;
    }
L_089813D4:
    aot_gpr[5] = (32769u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(22));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (32769u << 16u);
      if (branch_taken) {
          goto L_08981414;
      }
      goto L_089813E8;
    }
L_089813E8:
    aot_gpr[5] = (32769u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[30]);
      if (branch_taken) {
          goto L_08981424;
      }
      goto L_089813FC;
    }
L_089813FC:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-19224)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981414:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(90));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981450;
      }
      goto L_08981424;
    }
L_08981424:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089814C4;
      }
      goto L_0898142C;
    }
L_0898142C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20479));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (32770u << 16u);
      if (branch_taken) {
          goto L_08981458;
      }
      goto L_0898143C;
    }
L_0898143C:
    aot_gpr[5] = (32770u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20480));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981424;
      }
      goto L_08981450;
    }
L_08981450:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 132u);
      if (branch_taken) {
          goto L_089814D8;
      }
      goto L_08981458;
    }
L_08981458:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20477));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08981450;
      }
      goto L_08981464;
    }
L_08981464:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981424;
      }
      goto L_0898146C;
    }
L_0898146C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (32801u << 16u);
      if (branch_taken) {
          goto L_08981490;
      }
      goto L_0898147C;
    }
L_0898147C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981450;
      }
      goto L_08981488;
    }
L_08981488:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089814A0;
      }
      goto L_08981490;
    }
L_08981490:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981424;
      }
      goto L_089814A0;
    }
L_089814A0:
    aot_gpr[31] = (0x089814A8u);
    aot_gpr[4] = (0u | 2u);
    ctx.pc = 0x08A5B2C4u;
    return;
L_089814A8:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089814BC;
      }
      goto L_089814B0;
    }
L_089814B0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089814C4;
      }
      goto L_089814BC;
    }
L_089814BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 130u);
      if (branch_taken) {
          goto L_089814D8;
      }
      goto L_089814C4;
    }
L_089814C4:
    { const bool branch_taken = aot_gpr[6] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_089812B8;
      }
      goto L_089814CC;
    }
L_089814CC:
    { const bool branch_taken = aot_gpr[7] != aot_gpr[23];
    // nop
      if (branch_taken) {
          goto L_089812B8;
      }
      goto L_089814D4;
    }
L_089814D4:
    aot_gpr[2] = (0u | 0u);
    goto L_089814D8;
L_089814D8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981508:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19356)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19360)));
    aot_gpr[11] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[19]);
    aot_gpr[10] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0898154Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 198u, 0x08980D0Cu>(ctx, &aot_mem) && ctx.pc == 0x0898154Cu) goto L_0898154C;
    return;
L_0898154C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981590;
      }
      goto L_08981554;
    }
L_08981554:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    aot_gpr[7] = (aot_gpr[11] | 0u);
    aot_gpr[6] = (aot_gpr[10] | 0u);
    aot_gpr[31] = (0x0898156Cu);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08981244;
L_0898156C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[19] ^ aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
      if (branch_taken) {
          goto L_089815C8;
      }
      goto L_08981590;
    }
L_08981590:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[10] | 0u);
    aot_gpr[31] = (0x089815A0u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    ctx.pc = 0x08A5B23Cu;
    return;
L_089815A0:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[2]) >> 31u));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[19] ^ aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[19] < aot_gpr[5] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    goto L_089815C8;
L_089815C8:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089815D8;
      }
      goto L_089815D0;
    }
L_089815D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 18u);
      if (branch_taken) {
          goto L_089815DC;
      }
      goto L_089815D8;
    }
L_089815D8:
    aot_gpr[2] = (0u | 0u);
    goto L_089815DC;
L_089815DC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089815F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08981604u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08A5B29Cu;
    return;
L_08981604:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08981618;
      }
      goto L_08981610;
    }
L_08981610:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 19u);
      if (branch_taken) {
          goto L_0898161C;
      }
      goto L_08981618;
    }
L_08981618:
    aot_gpr[2] = (0u | 0u);
    goto L_0898161C;
L_0898161C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981628:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-19356)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-19360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08981650u);
    aot_gpr[8] = (0u | 1u);
    ctx.pc = 0x08A5B29Cu;
    return;
L_08981650:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898165C;
      }
      goto L_08981658;
    }
L_08981658:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_0898165C;
L_0898165C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898166C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981688;
      }
      goto L_08981678;
    }
L_08981678:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981688;
      }
      goto L_08981680;
    }
L_08981680:
    aot_gpr[6] = (0u | 45u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08981688;
L_08981688:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981690:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[21]);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-19356)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-19360)));
    aot_gpr[8] = (0u | 1u);
    aot_gpr[7] = (aot_gpr[21] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x089816D0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    ctx.pc = 0x08A5B29Cu;
    return;
L_089816D0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_0898170C;
      }
      goto L_089816DC;
    }
L_089816DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[21] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x089816F0u);
    aot_gpr[8] = (0u | 2u);
    ctx.pc = 0x08A5B29Cu;
    return;
L_089816F0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0898171C;
      }
      goto L_089816FC;
    }
L_089816FC:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19340)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19344)));
      if (branch_taken) {
          goto L_08981738;
      }
      goto L_0898170C;
    }
L_0898170C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19348)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19352)));
      if (branch_taken) {
          goto L_08981738;
      }
      goto L_0898171C;
    }
L_0898171C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[18]) >> 31u));
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08981730u);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = 0x08A5B29Cu;
    return;
L_08981730:
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 31u));
    aot_gpr[2] = (aot_gpr[17] | 0u);
    goto L_08981738;
L_08981738:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981758:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    if (aot_gpr[4] == 0u) {
    aot_gpr[16] = (aot_gpr[29] | 0u);
        goto L_08981770;
    }
    goto L_08981770;
L_08981770:
    aot_gpr[31] = (0x08981778u);
    aot_gpr[4] = (0u | 41u);
    ctx.pc = 0x08A5B2C4u;
    return;
L_08981778:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089817BC;
      }
      goto L_08981780;
    }
L_08981780:
    aot_gpr[31] = (0x08981788u);
    // nop
    ctx.pc = 0x08A5B2BCu;
    return;
L_08981788:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] & 2u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089817B4;
      }
      goto L_08981798;
    }
L_08981798:
    aot_gpr[4] = (aot_gpr[4] & 8u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089817CC;
      }
      goto L_089817A4;
    }
L_089817A4:
    aot_gpr[4] = (0u | 131u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089817D0;
      }
      goto L_089817B4;
    }
L_089817B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089817D0;
      }
      goto L_089817BC;
    }
L_089817BC:
    aot_gpr[4] = (0u | 133u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089817D0;
      }
      goto L_089817CC;
    }
L_089817CC:
    aot_gpr[2] = (0u | 1u);
    goto L_089817D0;
L_089817D0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089817E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0898180Cu);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898180Cu) goto L_0898180C;
    return;
L_0898180C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981818:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981820:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08981844u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981844u) goto L_08981844;
    return;
L_08981844:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981850:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08981874u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981874u) goto L_08981874;
    return;
L_08981874:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981880:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981888:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981890:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19164)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19168)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[4] = (0u | 7u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(368));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x089818E8u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 69u, 0x0897D59Cu>(ctx, &aot_mem) && ctx.pc == 0x089818E8u) goto L_089818E8;
    return;
L_089818E8:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x089818F4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 104u, 0x0897D884u>(ctx, &aot_mem) && ctx.pc == 0x089818F4u) goto L_089818F4;
    return;
L_089818F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(868), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(864), aot_gpr[18]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981918:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[21]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[9] | 0u);
    aot_gpr[21] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[8] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[20] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08981954u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19160));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 223u, 0x08979FCCu>(ctx, &aot_mem) && ctx.pc == 0x08981954u) goto L_08981954;
    return;
L_08981954:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9576));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(364), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(368));
    aot_gpr[31] = (0x08981974u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19136));
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 100u, 0x0897D7FCu>(ctx, &aot_mem) && ctx.pc == 0x08981974u) goto L_08981974;
    return;
L_08981974:
    aot_gpr[5] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(648), 0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(652));
    aot_gpr[31] = (0x08981988u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19108));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 127u, 0x0897985Cu>(ctx, &aot_mem) && ctx.pc == 0x08981988u) goto L_08981988;
    return;
L_08981988:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19164)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19168)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(844), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(840), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(852), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(848), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(860), aot_gpr[11]);
    aot_gpr[3] = (aot_gpr[21] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(856), aot_gpr[10]);
    { const bool branch_taken = aot_gpr[20] != aot_gpr[10];
    aot_gpr[2] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_089819C8;
      }
      goto L_089819B8;
    }
L_089819B8:
    { const bool branch_taken = aot_gpr[21] != aot_gpr[11];
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_089819C8;
      }
      goto L_089819C0;
    }
L_089819C0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19076)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19080)));
    goto L_089819C8;
L_089819C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(868), aot_gpr[3]);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(864), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[10];
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_089819F0;
      }
      goto L_089819DC;
    }
L_089819DC:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[11];
    // nop
      if (branch_taken) {
          goto L_089819F0;
      }
      goto L_089819E4;
    }
L_089819E4:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19068)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19072)));
    goto L_089819F0;
L_089819F0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(868)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(864)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(876), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(872), aot_gpr[4]);
    aot_gpr[31] = (0x08981A08u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08981890;
L_08981A08:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981A2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(364), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08981A78;
      }
      goto L_08981A50;
    }
L_08981A50:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(264));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08981A68u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981A68u) goto L_08981A68;
    return;
L_08981A68:
    aot_gpr[7] = (aot_gpr[3] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(364)));
      if (branch_taken) {
          goto L_08981A84;
      }
      goto L_08981A78;
    }
L_08981A78:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-19164)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-19168)));
    goto L_08981A84;
L_08981A84:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(852), aot_gpr[7]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(848), aot_gpr[6]);
      if (branch_taken) {
          goto L_08981B08;
      }
      goto L_08981A90;
    }
L_08981A90:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(852)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(848)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(844)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(840)));
    aot_gpr[8] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[4] - aot_gpr[6]);
    aot_gpr[9] = (aot_gpr[5] - aot_gpr[7]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19076)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19080)));
    aot_gpr[7] = (aot_gpr[9] - aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[5] ^ aot_gpr[7]);
    aot_gpr[8] = (aot_gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[10] = (aot_gpr[4] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[9] = (aot_gpr[5] < aot_gpr[7] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[10]);
    aot_gpr[8] = (aot_gpr[8] | aot_gpr[9]);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981AE4;
      }
      goto L_08981ADC;
    }
L_08981ADC:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    goto L_08981AE4;
L_08981AE4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(380)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(376)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08981AFC;
      }
      goto L_08981AF4;
    }
L_08981AF4:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08981B08;
      }
      goto L_08981AFC;
    }
L_08981AFC:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(368));
    aot_gpr[31] = (0x08981B08u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 104u, 0x0897D884u>(ctx, &aot_mem) && ctx.pc == 0x08981B08u) goto L_08981B08;
    return;
L_08981B08:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x08981B14u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08981B14u) goto L_08981B14;
    return;
L_08981B14:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(384), aot_gpr[16]);
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981B30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08981BC4;
      }
      goto L_08981B50;
    }
L_08981B50:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(9576));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(368));
    aot_gpr[31] = (0x08981B68u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 125u, 0x0897DA24u>(ctx, &aot_mem) && ctx.pc == 0x08981B68u) goto L_08981B68;
    return;
L_08981B68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(420)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08981B80u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981B80u) goto L_08981B80;
    return;
L_08981B80:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08981B8Cu);
    aot_gpr[5] = (0u | 0u);
    goto L_08981A2C;
L_08981B8C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(652));
    aot_gpr[31] = (0x08981B98u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 156u, 0x08979A74u>(ctx, &aot_mem) && ctx.pc == 0x08981B98u) goto L_08981B98;
    return;
L_08981B98:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08981BA4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 112u, 0x0897D950u>(ctx, &aot_mem) && ctx.pc == 0x08981BA4u) goto L_08981BA4;
    return;
L_08981BA4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08981BB0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0374_entry, 374u, 8u, 0x0897A074u>(ctx, &aot_mem) && ctx.pc == 0x08981BB0u) goto L_08981BB0;
    return;
L_08981BB0:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981BC4;
      }
      goto L_08981BBC;
    }
L_08981BBC:
    aot_gpr[31] = (0x08981BC4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x08981BC4u) goto L_08981BC4;
    return;
L_08981BC4:
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
L_08981BDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08981C04u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981C04u) goto L_08981C04;
    return;
L_08981C04:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981C14;
      }
      goto L_08981C0C;
    }
L_08981C0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08981C24;
      }
      goto L_08981C14;
    }
L_08981C14:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(652));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08981C24u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 163u, 0x08979AE0u>(ctx, &aot_mem) && ctx.pc == 0x08981C24u) goto L_08981C24;
    return;
L_08981C24:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981C34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08981C50u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 125u, 0x0897DA24u>(ctx, &aot_mem) && ctx.pc == 0x08981C50u) goto L_08981C50;
    return;
L_08981C50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(144));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08981C68u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981C68u) goto L_08981C68;
    return;
L_08981C68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08981C84u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981C84u) goto L_08981C84;
    return;
L_08981C84:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981C94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(648), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08981CB0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(652));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 152u, 0x08979A34u>(ctx, &aot_mem) && ctx.pc == 0x08981CB0u) goto L_08981CB0;
    return;
L_08981CB0:
    aot_gpr[31] = (0x08981CB8u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 108u, 0x0897D8D0u>(ctx, &aot_mem) && ctx.pc == 0x08981CB8u) goto L_08981CB8;
    return;
L_08981CB8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19164)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-19168)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(844), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(840), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(860), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(856), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08981CF0u);
    aot_gpr[5] = (0u | 12u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981CF0u) goto L_08981CF0;
    return;
L_08981CF0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981D00:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(648)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981D08:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08981D1Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x08981D1Cu) goto L_08981D1C;
    return;
L_08981D1C:
    aot_gpr[31] = (0x08981D24u);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(252));
    ctx.pc = 0x08A5AE84u;
    return;
L_08981D24:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981D30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08981D40u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 128u, 0x0897DA5Cu>(ctx, &aot_mem) && ctx.pc == 0x08981D40u) goto L_08981D40;
    return;
L_08981D40:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981D4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08981D5Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 148u, 0x0897DBB4u>(ctx, &aot_mem) && ctx.pc == 0x08981D5Cu) goto L_08981D5C;
    return;
L_08981D5C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981D68:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(860)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(856)));
    aot_gpr[5] = (aot_gpr[8] + aot_gpr[6]);
    aot_gpr[10] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[10] + aot_gpr[9]);
    aot_gpr[9] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[8] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(860), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(856), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08981D9Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 171u, 0x0897DE08u>(ctx, &aot_mem) && ctx.pc == 0x08981D9Cu) goto L_08981D9C;
    return;
L_08981D9C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981DA8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(380)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(376)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981DB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(368));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08981DC8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0378_entry, 378u, 6u, 0x0897E050u>(ctx, &aot_mem) && ctx.pc == 0x08981DC8u) goto L_08981DC8;
    return;
L_08981DC8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981DD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08981E00u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981E00u) goto L_08981E00;
    return;
L_08981E00:
    aot_gpr[31] = (0x08981E08u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(652));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 146u, 0x089799E0u>(ctx, &aot_mem) && ctx.pc == 0x08981E08u) goto L_08981E08;
    return;
L_08981E08:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08981E18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(364)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08981F48;
      }
      goto L_08981E3C;
    }
L_08981E3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08981E54u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981E54u) goto L_08981E54;
    return;
L_08981E54:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981F48;
      }
      goto L_08981E5C;
    }
L_08981E5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(364)));
    aot_gpr[5] = (0u | 8u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08981E7Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981E7Cu) goto L_08981E7C;
    return;
L_08981E7C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981F48;
      }
      goto L_08981E84;
    }
L_08981E84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(364)));
    aot_gpr[5] = (0u | 512u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08981EA4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981EA4u) goto L_08981EA4;
    return;
L_08981EA4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981F48;
      }
      goto L_08981EAC;
    }
L_08981EAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(364)));
    aot_gpr[5] = (0u | 256u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08981ECCu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981ECCu) goto L_08981ECC;
    return;
L_08981ECC:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981F48;
      }
      goto L_08981ED4;
    }
L_08981ED4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[5] = (0u | 8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08981EF0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981EF0u) goto L_08981EF0;
    return;
L_08981EF0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08981F48;
      }
      goto L_08981EF8;
    }
L_08981EF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(364)));
    aot_gpr[5] = (0u | 32u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08981F18u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981F18u) goto L_08981F18;
    return;
L_08981F18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(364)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(396)));
    aot_gpr[18] = (aot_gpr[4] ^ 1u);
    aot_gpr[18] = (aot_gpr[18] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08981F58;
      }
      goto L_08981F30;
    }
L_08981F30:
    aot_gpr[31] = (0x08981F38u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08981D08;
L_08981F38:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08981F74;
      }
      goto L_08981F48;
    }
L_08981F48:
    aot_gpr[31] = (0x08981F50u);
    aot_gpr[4] = (0u | 1000u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08981F50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 15u, 0x089820B0u>(ctx, &aot_mem); return;
      }
      goto L_08981F58;
    }
L_08981F58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(184));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08981F70u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08981F70u) goto L_08981F70;
    return;
L_08981F70:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_08981F74;
L_08981F74:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08981F90;
      }
      goto L_08981F7C;
    }
L_08981F7C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08981FA8;
      }
      goto L_08981F88;
    }
L_08981F88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 6u, 0x08982040u>(ctx, &aot_mem); return;
      }
      goto L_08981F90;
    }
L_08981F90:
    aot_gpr[31] = (0x08981F98u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08981DD4;
L_08981F98:
    aot_gpr[31] = (0x08981FA0u);
    aot_gpr[4] = (0u | 4000u);
    ctx.pc = 0x08A5AFBCu;
    return;
L_08981FA0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0382_entry, 382u, 15u, 0x089820B0u>(ctx, &aot_mem); return;
      }
      goto L_08981FA8;
    }
L_08981FA8:
    aot_gpr[31] = (0x08981FB0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(364)));
    if (rt.invoke_chained_direct<&recomp_unit_0370_entry, 370u, 213u, 0x08976D44u>(ctx, &aot_mem) && ctx.pc == 0x08981FB0u) goto L_08981FB0;
    return;
L_08981FB0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08981FBCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08981D00;
L_08981FBC:
    aot_gpr[19] = (aot_gpr[18] - aot_gpr[2]);
    aot_gpr[31] = (0x08981FC8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08981D08;
L_08981FC8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 64u);
    if (aot_gpr[17] != 0u) {
    aot_gpr[5] = (0u | 1024u);
        goto L_08981FD8;
    }
    goto L_08981FD8;
L_08981FD8:
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[19] ? 1u : 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[19] = (aot_gpr[4] | 0u);
        goto L_08981FE4;
    }
    goto L_08981FE4;
L_08981FE4:
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    if (aot_gpr[7] != 0u) {
    aot_gpr[6] = (aot_gpr[5] | 0u);
        goto L_08981FF4;
    }
    goto L_08981FF4;
L_08981FF4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (0u | 0u);
    ctx.pc = 0x08982000u; return;
}

void recomp_unit_0381(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0381_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_381(Runtime &runtime) {
    runtime.register_generated_unit(381u, 0x08981000u, 4096u, &recomp_unit_0381, &recomp_unit_0381_entry);
    runtime.register_function(0x08981004u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981014u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981028u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981030u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x0898103Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981044u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981054u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981060u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981068u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981070u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981078u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981080u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981088u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981090u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981098u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x0898109Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089810CCu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089810F8u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981104u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x0898110Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981114u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x0898111Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981124u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981134u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x0898113Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981144u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981154u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x0898115Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981164u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x0898116Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981174u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981188u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981194u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x0898119Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089811A4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089811A8u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089811B4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089811C8u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089811D4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089811DCu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089811F0u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981204u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981218u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x0898122Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981244u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089812B8u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089812C0u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089812E0u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089812E4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089812ECu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089812F4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089812FCu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981304u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x0898130Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981314u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981318u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981320u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981328u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981330u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981338u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981340u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981350u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981358u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x0898136Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981388u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981390u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089813ACu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089813B4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089813BCu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089813C4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089813D4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089813E8u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089813FCu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981414u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981424u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x0898142Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x0898143Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981450u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981458u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981464u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x0898146Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x0898147Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981488u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981490u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089814A0u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089814A8u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089814B0u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089814BCu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089814C4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089814CCu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089814D4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089814D8u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981508u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x0898154Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981554u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x0898156Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981590u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089815A0u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089815C8u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089815D0u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089815D8u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089815DCu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089815F4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981604u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981610u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981618u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x0898161Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981628u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981650u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981658u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x0898165Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x0898166Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981678u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981680u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981688u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981690u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089816D0u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089816DCu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089816F0u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089816FCu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x0898170Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x0898171Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981730u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981738u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981758u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981770u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981778u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981780u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981788u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981798u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089817A4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089817B4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089817BCu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089817CCu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089817D0u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089817E0u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x0898180Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981818u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981820u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981844u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981850u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981874u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981880u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981888u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981890u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089818E8u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089818F4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981918u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981954u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981974u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981988u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089819B8u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089819C0u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089819C8u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089819DCu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089819E4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x089819F0u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981A08u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981A2Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981A50u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981A68u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981A78u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981A84u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981A90u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981ADCu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981AE4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981AF4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981AFCu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981B08u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981B14u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981B30u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981B50u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981B68u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981B80u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981B8Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981B98u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981BA4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981BB0u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981BBCu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981BC4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981BDCu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981C04u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981C0Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981C14u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981C24u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981C34u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981C50u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981C68u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981C84u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981C94u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981CB0u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981CB8u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981CF0u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981D00u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981D08u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981D1Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981D24u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981D30u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981D40u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981D4Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981D5Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981D68u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981D9Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981DA8u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981DB4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981DC8u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981DD4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981E00u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981E08u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981E18u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981E3Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981E54u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981E5Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981E7Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981E84u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981EA4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981EACu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981ECCu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981ED4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981EF0u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981EF8u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981F18u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981F30u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981F38u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981F48u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981F50u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981F58u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981F70u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981F74u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981F7Cu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981F88u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981F90u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981F98u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981FA0u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981FA8u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981FB0u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981FBCu, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981FC8u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981FD8u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981FE4u, &recomp_unit_0381, "recomp_unit_0381");
    runtime.register_function(0x08981FF4u, &recomp_unit_0381, "recomp_unit_0381");
}
} // namespace psprecomp
