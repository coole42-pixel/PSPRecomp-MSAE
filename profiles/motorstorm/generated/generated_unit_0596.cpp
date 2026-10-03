#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0596[1020] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0,
    11, 0, 12, 0, 0, 13, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25, 0, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 41,
    0, 0, 0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 65,
    0, 0, 0, 66, 0, 0, 67, 0, 68, 0, 69, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 0, 75, 0, 76, 0, 77, 0, 0, 78, 79, 0, 80, 0, 0, 0, 81, 0, 0, 82, 0, 83, 0, 84, 85, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 92, 0, 93, 0, 0, 94, 0, 95, 0, 96,
    0, 97, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 103, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 109, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 115, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 0, 125,
    0, 0, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 0, 134, 0, 135, 0, 136, 0, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0,
    144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 152, 0, 153, 0, 154, 0, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0,
    0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168,
    0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 175, 0,
    0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188,
    0, 189, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 195, 0, 196, 197, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0,
    0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0,
    205, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 214, 0, 215, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0,
    219, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0,
    0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 229, 0, 230, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0,
    234, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 241, 0, 0, 0, 0, 242,
};
void recomp_unit_0596_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A58004u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0596[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A58004;
    case 2u: goto L_08A58014;
    case 3u: goto L_08A58020;
    case 4u: goto L_08A58040;
    case 5u: goto L_08A58064;
    case 6u: goto L_08A580B0;
    case 7u: goto L_08A580B8;
    case 8u: goto L_08A580E0;
    case 9u: goto L_08A580E8;
    case 10u: goto L_08A580F0;
    case 11u: goto L_08A58104;
    case 12u: goto L_08A5810C;
    case 13u: goto L_08A58118;
    case 14u: goto L_08A58120;
    case 15u: goto L_08A58128;
    case 16u: goto L_08A58130;
    case 17u: goto L_08A58138;
    case 18u: goto L_08A58140;
    case 19u: goto L_08A58148;
    case 20u: goto L_08A58150;
    case 21u: goto L_08A58158;
    case 22u: goto L_08A58160;
    case 23u: goto L_08A58168;
    case 24u: goto L_08A58170;
    case 25u: goto L_08A58178;
    case 26u: goto L_08A5818C;
    case 27u: goto L_08A581A8;
    case 28u: goto L_08A581CC;
    case 29u: goto L_08A581F0;
    case 30u: goto L_08A58224;
    case 31u: goto L_08A58230;
    case 32u: goto L_08A58238;
    case 33u: goto L_08A58254;
    case 34u: goto L_08A58278;
    case 35u: goto L_08A582B4;
    case 36u: goto L_08A582BC;
    case 37u: goto L_08A582C8;
    case 38u: goto L_08A582D4;
    case 39u: goto L_08A582E4;
    case 40u: goto L_08A582EC;
    case 41u: goto L_08A58300;
    case 42u: goto L_08A58310;
    case 43u: goto L_08A58320;
    case 44u: goto L_08A58328;
    case 45u: goto L_08A58338;
    case 46u: goto L_08A58344;
    case 47u: goto L_08A58350;
    case 48u: goto L_08A58380;
    case 49u: goto L_08A583A8;
    case 50u: goto L_08A583B8;
    case 51u: goto L_08A583C4;
    case 52u: goto L_08A583DC;
    case 53u: goto L_08A58414;
    case 54u: goto L_08A58424;
    case 55u: goto L_08A58438;
    case 56u: goto L_08A58440;
    case 57u: goto L_08A5844C;
    case 58u: goto L_08A58464;
    case 59u: goto L_08A58488;
    case 60u: goto L_08A584A8;
    case 61u: goto L_08A584B4;
    case 62u: goto L_08A584CC;
    case 63u: goto L_08A584DC;
    case 64u: goto L_08A584F4;
    case 65u: goto L_08A58500;
    case 66u: goto L_08A58510;
    case 67u: goto L_08A5851C;
    case 68u: goto L_08A58524;
    case 69u: goto L_08A5852C;
    case 70u: goto L_08A58530;
    case 71u: goto L_08A58548;
    case 72u: goto L_08A58558;
    case 73u: goto L_08A58560;
    case 74u: goto L_08A58574;
    case 75u: goto L_08A5858C;
    case 76u: goto L_08A58594;
    case 77u: goto L_08A5859C;
    case 78u: goto L_08A585A8;
    case 79u: goto L_08A585AC;
    case 80u: goto L_08A585B4;
    case 81u: goto L_08A585C4;
    case 82u: goto L_08A585D0;
    case 83u: goto L_08A585D8;
    case 84u: goto L_08A585E0;
    case 85u: goto L_08A585E4;
    case 86u: goto L_08A585FC;
    case 87u: goto L_08A58610;
    case 88u: goto L_08A58620;
    case 89u: goto L_08A58628;
    case 90u: goto L_08A5863C;
    case 91u: goto L_08A58654;
    case 92u: goto L_08A5865C;
    case 93u: goto L_08A58664;
    case 94u: goto L_08A58670;
    case 95u: goto L_08A58678;
    case 96u: goto L_08A58680;
    case 97u: goto L_08A58688;
    case 98u: goto L_08A58690;
    case 99u: goto L_08A58698;
    case 100u: goto L_08A586C8;
    case 101u: goto L_08A586E0;
    case 102u: goto L_08A586E8;
    case 103u: goto L_08A58710;
    case 104u: goto L_08A58714;
    case 105u: goto L_08A5871C;
    case 106u: goto L_08A5874C;
    case 107u: goto L_08A58764;
    case 108u: goto L_08A5876C;
    case 109u: goto L_08A58794;
    case 110u: goto L_08A58798;
    case 111u: goto L_08A587A0;
    case 112u: goto L_08A587D0;
    case 113u: goto L_08A587E8;
    case 114u: goto L_08A587F0;
    case 115u: goto L_08A58818;
    case 116u: goto L_08A5881C;
    case 117u: goto L_08A58824;
    case 118u: goto L_08A5882C;
    case 119u: goto L_08A58834;
    case 120u: goto L_08A5883C;
    case 121u: goto L_08A5884C;
    case 122u: goto L_08A58858;
    case 123u: goto L_08A58864;
    case 124u: goto L_08A58870;
    case 125u: goto L_08A58880;
    case 126u: goto L_08A58898;
    case 127u: goto L_08A588A0;
    case 128u: goto L_08A588A8;
    case 129u: goto L_08A588B4;
    case 130u: goto L_08A588C8;
    case 131u: goto L_08A588D8;
    case 132u: goto L_08A588E0;
    case 133u: goto L_08A588F4;
    case 134u: goto L_08A5890C;
    case 135u: goto L_08A58914;
    case 136u: goto L_08A5891C;
    case 137u: goto L_08A58928;
    case 138u: goto L_08A58930;
    case 139u: goto L_08A58938;
    case 140u: goto L_08A58940;
    case 141u: goto L_08A58948;
    case 142u: goto L_08A58950;
    case 143u: goto L_08A5896C;
    case 144u: goto L_08A58984;
    case 145u: goto L_08A58990;
    case 146u: goto L_08A589B0;
    case 147u: goto L_08A589C4;
    case 148u: goto L_08A589D8;
    case 149u: goto L_08A589E8;
    case 150u: goto L_08A589F0;
    case 151u: goto L_08A58A04;
    case 152u: goto L_08A58A1C;
    case 153u: goto L_08A58A24;
    case 154u: goto L_08A58A2C;
    case 155u: goto L_08A58A38;
    case 156u: goto L_08A58A40;
    case 157u: goto L_08A58A48;
    case 158u: goto L_08A58A50;
    case 159u: goto L_08A58A58;
    case 160u: goto L_08A58A68;
    case 161u: goto L_08A58A74;
    case 162u: goto L_08A58A88;
    case 163u: goto L_08A58A94;
    case 164u: goto L_08A58AA0;
    case 165u: goto L_08A58AC0;
    case 166u: goto L_08A58ACC;
    case 167u: goto L_08A58AE8;
    case 168u: goto L_08A58B00;
    case 169u: goto L_08A58B0C;
    case 170u: goto L_08A58B2C;
    case 171u: goto L_08A58B40;
    case 172u: goto L_08A58B50;
    case 173u: goto L_08A58B5C;
    case 174u: goto L_08A58B70;
    case 175u: goto L_08A58B7C;
    case 176u: goto L_08A58B88;
    case 177u: goto L_08A58BA8;
    case 178u: goto L_08A58BB4;
    case 179u: goto L_08A58BD0;
    case 180u: goto L_08A58BE8;
    case 181u: goto L_08A58BF4;
    case 182u: goto L_08A58C14;
    case 183u: goto L_08A58C28;
    case 184u: goto L_08A58C3C;
    case 185u: goto L_08A58C4C;
    case 186u: goto L_08A58C54;
    case 187u: goto L_08A58C68;
    case 188u: goto L_08A58C80;
    case 189u: goto L_08A58C88;
    case 190u: goto L_08A58C90;
    case 191u: goto L_08A58C9C;
    case 192u: goto L_08A58CA8;
    case 193u: goto L_08A58CB8;
    case 194u: goto L_08A58CC4;
    case 195u: goto L_08A58CCC;
    case 196u: goto L_08A58CD4;
    case 197u: goto L_08A58CD8;
    case 198u: goto L_08A58CF0;
    case 199u: goto L_08A58CFC;
    case 200u: goto L_08A58D20;
    case 201u: goto L_08A58D38;
    case 202u: goto L_08A58D40;
    case 203u: goto L_08A58D4C;
    case 204u: goto L_08A58D6C;
    case 205u: goto L_08A58D84;
    case 206u: goto L_08A58D8C;
    case 207u: goto L_08A58DA8;
    case 208u: goto L_08A58DCC;
    case 209u: goto L_08A58DDC;
    case 210u: goto L_08A58DE8;
    case 211u: goto L_08A58E04;
    case 212u: goto L_08A58E28;
    case 213u: goto L_08A58E38;
    case 214u: goto L_08A58E44;
    case 215u: goto L_08A58E4C;
    case 216u: goto L_08A58E54;
    case 217u: goto L_08A58E64;
    case 218u: goto L_08A58E70;
    case 219u: goto L_08A58E84;
    case 220u: goto L_08A58E90;
    case 221u: goto L_08A58E9C;
    case 222u: goto L_08A58EBC;
    case 223u: goto L_08A58EC8;
    case 224u: goto L_08A58EE4;
    case 225u: goto L_08A58EFC;
    case 226u: goto L_08A58F08;
    case 227u: goto L_08A58F28;
    case 228u: goto L_08A58F3C;
    case 229u: goto L_08A58F44;
    case 230u: goto L_08A58F4C;
    case 231u: goto L_08A58F54;
    case 232u: goto L_08A58F5C;
    case 233u: goto L_08A58F78;
    case 234u: goto L_08A58F84;
    case 235u: goto L_08A58F8C;
    case 236u: goto L_08A58F94;
    case 237u: goto L_08A58F9C;
    case 238u: goto L_08A58FB0;
    case 239u: goto L_08A58FCC;
    case 240u: goto L_08A58FD4;
    case 241u: goto L_08A58FDC;
    case 242u: goto L_08A58FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A58004:
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
    aot_gpr[18] = (aot_gpr[20] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0595_entry, 595u, 191u, 0x08A57FF0u>(ctx, &aot_mem); return;
      }
      goto L_08A58014;
    }
L_08A58014:
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58040;
      }
      goto L_08A58020;
    }
L_08A58020:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0595_entry, 595u, 187u, 0x08A57FCCu>(ctx, &aot_mem); return;
      }
      goto L_08A58040;
    }
L_08A58040:
    aot_gpr[2] = (aot_gpr[19] | 0u);
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
L_08A58064:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] - aot_gpr[16]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    aot_gpr[4] = (aot_gpr[4] >> 30u);
    aot_gpr[20] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < 17 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[19] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A581CC;
      }
      goto L_08A580B0;
    }
L_08A580B0:
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 3u));
      if (branch_taken) {
          goto L_08A580F0;
      }
      goto L_08A580B8;
    }
L_08A580B8:
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[20] = (aot_gpr[4] << 2u);
    aot_gpr[20] = (aot_gpr[16] + aot_gpr[20]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A580E0u);
    aot_gpr[21] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A580E0u) goto L_08A580E0;
    return;
L_08A580E0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A5810C;
      }
      goto L_08A580E8;
    }
L_08A580E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A58148;
      }
      goto L_08A580F0;
    }
L_08A580F0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A58104u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0595_entry, 595u, 184u, 0x08A57F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A58104u) goto L_08A58104;
    return;
L_08A58104:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A581CC;
      }
      goto L_08A5810C;
    }
L_08A5810C:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A58118u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58118u) goto L_08A58118;
    return;
L_08A58118:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08A58128;
    }
    goto L_08A58120;
L_08A58120:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58178;
      }
      goto L_08A58128;
    }
L_08A58128:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A58130u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58130u) goto L_08A58130;
    return;
L_08A58130:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58140;
      }
      goto L_08A58138;
    }
L_08A58138:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58178;
      }
      goto L_08A58140;
    }
L_08A58140:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58178;
      }
      goto L_08A58148;
    }
L_08A58148:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A58150u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58150u) goto L_08A58150;
    return;
L_08A58150:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A58160;
    }
    goto L_08A58158;
L_08A58158:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58178;
      }
      goto L_08A58160;
    }
L_08A58160:
    jump_target = aot_gpr[19];
    aot_gpr[31] = (0x08A58168u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58168u) goto L_08A58168;
    return;
L_08A58168:
    if (aot_gpr[2] == 0u) {
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A58178;
    }
    goto L_08A58170;
L_08A58170:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58178;
      }
      goto L_08A58178;
    }
L_08A58178:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A5818Cu);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0595_entry, 595u, 186u, 0x08A57F9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5818Cu) goto L_08A5818C;
    return;
L_08A5818C:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A581A8u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    goto L_08A58064;
L_08A581A8:
    aot_gpr[4] = (aot_gpr[20] - aot_gpr[16]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[17] = (aot_gpr[20] | 0u);
    aot_gpr[20] = (aot_gpr[5] >> 30u);
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A580B0;
      }
      goto L_08A581CC;
    }
L_08A581CC:
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
L_08A581F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A58224;
L_08A58224:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A58230u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58230u) goto L_08A58230;
    return;
L_08A58230:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58254;
      }
      goto L_08A58238;
    }
L_08A58238:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[19] | 0u);
    aot_gpr[19] = (aot_gpr[20] + static_cast<std::uint32_t>(-4));
    aot_gpr[20] = (aot_gpr[19] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58224;
      }
      goto L_08A58254;
    }
L_08A58254:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[17]);
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
L_08A58278:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A582BC;
      }
      goto L_08A582B4;
    }
L_08A582B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58350;
      }
      goto L_08A582BC;
    }
L_08A582BC:
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A58350;
      }
      goto L_08A582C8;
    }
L_08A582C8:
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(5))))));
    aot_gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(3))))));
    goto L_08A582D4;
L_08A582D4:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A582E4u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A582E4u) goto L_08A582E4;
    return;
L_08A582E4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[30] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A58328;
      }
      goto L_08A582EC;
    }
L_08A582EC:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08A58300u);
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(4))))));
    if (rt.invoke_chained_direct<&recomp_unit_0293_entry, 293u, 130u, 0x089299F0u>(ctx, &aot_mem) && ctx.pc == 0x08A58300u) goto L_08A58300;
    return;
L_08A58300:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[19] = (aot_gpr[19] - aot_gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) <= 0;
    aot_gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8))))));
      if (branch_taken) {
          goto L_08A58320;
      }
      goto L_08A58310;
    }
L_08A58310:
    aot_gpr[4] = (aot_gpr[30] - aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A58320u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x08A58320u) goto L_08A58320;
    return;
L_08A58320:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[20]);
      if (branch_taken) {
          goto L_08A58338;
      }
      goto L_08A58328;
    }
L_08A58328:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A58338u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_08A581F0;
L_08A58338:
    aot_gpr[19] = (aot_gpr[30] | 0u);
    { const bool branch_taken = aot_gpr[19] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A582D4;
      }
      goto L_08A58344;
    }
L_08A58344:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[21]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[22]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[23]));
    goto L_08A58350;
L_08A58350:
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
L_08A58380:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[18] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A583C4;
      }
      goto L_08A583A8;
    }
L_08A583A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A583B8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A581F0;
L_08A583B8:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A583A8;
      }
      goto L_08A583C4;
    }
L_08A583C4:
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
L_08A583DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 2u));
    aot_gpr[8] = (aot_gpr[8] >> 30u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < 17 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A58440;
      }
      goto L_08A58414;
    }
L_08A58414:
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A58424u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A58278;
L_08A58424:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A58438u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_08A58380;
L_08A58438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5844C;
      }
      goto L_08A58440;
    }
L_08A58440:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A5844Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A58278;
L_08A5844C:
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
L_08A58464:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A584DC;
      }
      goto L_08A58488;
    }
L_08A58488:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A584B4;
      }
      goto L_08A584A8;
    }
L_08A584A8:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A584A8;
      }
      goto L_08A584B4;
    }
L_08A584B4:
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A584CCu);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A58064;
L_08A584CC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A584DCu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A583DC;
L_08A584DC:
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
L_08A584F4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58510;
      }
      goto L_08A58500;
    }
L_08A58500:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A5851C;
      }
      goto L_08A58510;
    }
L_08A58510:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08A5851C;
L_08A5851C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5852C;
      }
      goto L_08A58524;
    }
L_08A58524:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A58530;
      }
      goto L_08A5852C;
    }
L_08A5852C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_08A58530;
L_08A58530:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58548:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A5859C;
      }
      goto L_08A58558;
    }
L_08A58558:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5859C;
      }
      goto L_08A58560;
    }
L_08A58560:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58594;
      }
      goto L_08A58574;
    }
L_08A58574:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A5858Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5858Cu) goto L_08A5858C;
    return;
L_08A5858C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5859C;
      }
      goto L_08A58594;
    }
L_08A58594:
    aot_gpr[31] = (0x08A5859Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A5859Cu) goto L_08A5859C;
    return;
L_08A5859C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A585A8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    goto L_08A585AC;
L_08A585AC:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A585C4;
      }
      goto L_08A585B4;
    }
L_08A585B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A585D0;
      }
      goto L_08A585C4;
    }
L_08A585C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_08A585D0;
L_08A585D0:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A585E0;
      }
      goto L_08A585D8;
    }
L_08A585D8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(16), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A585E4;
      }
      goto L_08A585E0;
    }
L_08A585E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_08A585E4;
L_08A585E4:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A585FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58610:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A58664;
      }
      goto L_08A58620;
    }
L_08A58620:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58664;
      }
      goto L_08A58628;
    }
L_08A58628:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5865C;
      }
      goto L_08A5863C;
    }
L_08A5863C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A58654u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58654u) goto L_08A58654;
    return;
L_08A58654:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58664;
      }
      goto L_08A5865C;
    }
L_08A5865C:
    aot_gpr[31] = (0x08A58664u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A58664u) goto L_08A58664;
    return;
L_08A58664:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58670:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58678:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58680:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58688:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58690:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58698:
    aot_gpr[7] = (aot_gpr[6] << 5u);
    aot_gpr[6] = (aot_gpr[6] << 3u);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(15));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58710;
      }
      goto L_08A586C8;
    }
L_08A586C8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08A586E8;
    }
    goto L_08A586E0;
L_08A586E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08A586E8;
L_08A586E8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A58714;
      }
      goto L_08A58710;
    }
L_08A58710:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A58714;
L_08A58714:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5871C:
    aot_gpr[7] = (aot_gpr[6] << 5u);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(15));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58794;
      }
      goto L_08A5874C;
    }
L_08A5874C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08A5876C;
    }
    goto L_08A58764;
L_08A58764:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08A5876C;
L_08A5876C:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A58798;
      }
      goto L_08A58794;
    }
L_08A58794:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A58798;
L_08A58798:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A587A0:
    aot_gpr[7] = (aot_gpr[6] << 6u);
    aot_gpr[6] = (aot_gpr[6] << 3u);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(15));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58818;
      }
      goto L_08A587D0;
    }
L_08A587D0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08A587F0;
    }
    goto L_08A587E8;
L_08A587E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08A587F0;
L_08A587F0:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A5881C;
      }
      goto L_08A58818;
    }
L_08A58818:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A5881C;
L_08A5881C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58824:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5882C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58834:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5883C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A588A8;
      }
      goto L_08A5884C;
    }
L_08A5884C:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25704));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A58864;
      }
      goto L_08A58858;
    }
L_08A58858:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25664));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A58864;
L_08A58864:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A588A8;
      }
      goto L_08A58870;
    }
L_08A58870:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A588A0;
      }
      goto L_08A58880;
    }
L_08A58880:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A58898u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58898u) goto L_08A58898;
    return;
L_08A58898:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A588A8;
      }
      goto L_08A588A0;
    }
L_08A588A0:
    aot_gpr[31] = (0x08A588A8u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A588A8u) goto L_08A588A8;
    return;
L_08A588A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A588B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A588C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A5891C;
      }
      goto L_08A588D8;
    }
L_08A588D8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5891C;
      }
      goto L_08A588E0;
    }
L_08A588E0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58914;
      }
      goto L_08A588F4;
    }
L_08A588F4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A5890Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A5890Cu) goto L_08A5890C;
    return;
L_08A5890C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5891C;
      }
      goto L_08A58914;
    }
L_08A58914:
    aot_gpr[31] = (0x08A5891Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A5891Cu) goto L_08A5891C;
    return;
L_08A5891C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58928:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58930:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58938:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58940:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58948:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58950:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A589B0;
      }
      goto L_08A5896C;
    }
L_08A5896C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(25744));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A58984u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x08A58984u) goto L_08A58984;
    return;
L_08A58984:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A589B0;
      }
      goto L_08A58990;
    }
L_08A58990:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A589B0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A589B0u) goto L_08A589B0;
    return;
L_08A589B0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A589C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A589D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A58A2C;
      }
      goto L_08A589E8;
    }
L_08A589E8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58A2C;
      }
      goto L_08A589F0;
    }
L_08A589F0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58A24;
      }
      goto L_08A58A04;
    }
L_08A58A04:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A58A1Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58A1Cu) goto L_08A58A1C;
    return;
L_08A58A1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58A2C;
      }
      goto L_08A58A24;
    }
L_08A58A24:
    aot_gpr[31] = (0x08A58A2Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A58A2Cu) goto L_08A58A2C;
    return;
L_08A58A2C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58A38:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58A40:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58A48:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58A50:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58A58:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A58AC0;
      }
      goto L_08A58A68;
    }
L_08A58A68:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2776));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A58A94;
      }
      goto L_08A58A74;
    }
L_08A58A74:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2600));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08A58A94;
      }
      goto L_08A58A88;
    }
L_08A58A88:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25296));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A58A94;
L_08A58A94:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A58AC0;
      }
      goto L_08A58AA0;
    }
L_08A58AA0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A58AC0u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58AC0u) goto L_08A58AC0;
    return;
L_08A58AC0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58ACC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A58B2C;
      }
      goto L_08A58AE8;
    }
L_08A58AE8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3136));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(92), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A58B00u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0330_entry, 330u, 61u, 0x0894E8F0u>(ctx, &aot_mem) && ctx.pc == 0x08A58B00u) goto L_08A58B00;
    return;
L_08A58B00:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A58B2C;
      }
      goto L_08A58B0C;
    }
L_08A58B0C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A58B2Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58B2Cu) goto L_08A58B2C;
    return;
L_08A58B2C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58B40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A58BA8;
      }
      goto L_08A58B50;
    }
L_08A58B50:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3320));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A58B7C;
      }
      goto L_08A58B5C;
    }
L_08A58B5C:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2600));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08A58B7C;
      }
      goto L_08A58B70;
    }
L_08A58B70:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25296));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A58B7C;
L_08A58B7C:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A58BA8;
      }
      goto L_08A58B88;
    }
L_08A58B88:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A58BA8u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58BA8u) goto L_08A58BA8;
    return;
L_08A58BA8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58BB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A58C14;
      }
      goto L_08A58BD0;
    }
L_08A58BD0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3472));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(92), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A58BE8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0330_entry, 330u, 61u, 0x0894E8F0u>(ctx, &aot_mem) && ctx.pc == 0x08A58BE8u) goto L_08A58BE8;
    return;
L_08A58BE8:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A58C14;
      }
      goto L_08A58BF4;
    }
L_08A58BF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A58C14u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58C14u) goto L_08A58C14;
    return;
L_08A58C14:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58C28:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58C3C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A58C90;
      }
      goto L_08A58C4C;
    }
L_08A58C4C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58C90;
      }
      goto L_08A58C54;
    }
L_08A58C54:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58C88;
      }
      goto L_08A58C68;
    }
L_08A58C68:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A58C80u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58C80u) goto L_08A58C80;
    return;
L_08A58C80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58C90;
      }
      goto L_08A58C88;
    }
L_08A58C88:
    aot_gpr[31] = (0x08A58C90u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A58C90u) goto L_08A58C90;
    return;
L_08A58C90:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58C9C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58CB8;
      }
      goto L_08A58CA8;
    }
L_08A58CA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A58CC4;
      }
      goto L_08A58CB8;
    }
L_08A58CB8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08A58CC4;
L_08A58CC4:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58CD4;
      }
      goto L_08A58CCC;
    }
L_08A58CCC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[7]);
      if (branch_taken) {
          goto L_08A58CD8;
      }
      goto L_08A58CD4;
    }
L_08A58CD4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    goto L_08A58CD8;
L_08A58CD8:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58CF0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58D20;
      }
      goto L_08A58CFC;
    }
L_08A58CFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A58D38;
      }
      goto L_08A58D20;
    }
L_08A58D20:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A58D38;
L_08A58D38:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58D40:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58D6C;
      }
      goto L_08A58D4C;
    }
L_08A58D4C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A58D84;
      }
      goto L_08A58D6C;
    }
L_08A58D6C:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A58D84;
L_08A58D84:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58D8C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A58DCC;
      }
      goto L_08A58DA8;
    }
L_08A58DA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A58DDC;
      }
      goto L_08A58DCC;
    }
L_08A58DCC:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A58DDCu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_08A58D40;
L_08A58DDC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58DE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A58E28;
      }
      goto L_08A58E04;
    }
L_08A58E04:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A58E38;
      }
      goto L_08A58E28;
    }
L_08A58E28:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A58E38u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_08A58CF0;
L_08A58E38:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58E44:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58E4C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58E54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A58EBC;
      }
      goto L_08A58E64;
    }
L_08A58E64:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3704));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A58E90;
      }
      goto L_08A58E70;
    }
L_08A58E70:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2600));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08A58E90;
      }
      goto L_08A58E84;
    }
L_08A58E84:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(25296));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A58E90;
L_08A58E90:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A58EBC;
      }
      goto L_08A58E9C;
    }
L_08A58E9C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A58EBCu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58EBCu) goto L_08A58EBC;
    return;
L_08A58EBC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58EC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A58F28;
      }
      goto L_08A58EE4;
    }
L_08A58EE4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3904));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(92), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A58EFCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0330_entry, 330u, 61u, 0x0894E8F0u>(ctx, &aot_mem) && ctx.pc == 0x08A58EFCu) goto L_08A58EFC;
    return;
L_08A58EFC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A58F28;
      }
      goto L_08A58F08;
    }
L_08A58F08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A58F28u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58F28u) goto L_08A58F28;
    return;
L_08A58F28:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58F3C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58F44:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58F4C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58F54:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58F5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A58FDC;
      }
      goto L_08A58F78;
    }
L_08A58F78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (aot_gpr[17] & 1u);
        goto L_08A58F94;
    }
    goto L_08A58F84;
L_08A58F84:
    aot_gpr[31] = (0x08A58F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x08A58F8Cu) goto L_08A58F8C;
    return;
L_08A58F8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[17] & 1u);
    goto L_08A58F94;
L_08A58F94:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58FDC;
      }
      goto L_08A58F9C;
    }
L_08A58F9C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58FD4;
      }
      goto L_08A58FB0;
    }
L_08A58FB0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A58FCCu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A58FCCu) goto L_08A58FCC;
    return;
L_08A58FCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A58FDC;
      }
      goto L_08A58FD4;
    }
L_08A58FD4:
    aot_gpr[31] = (0x08A58FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x08A58FDCu) goto L_08A58FDC;
    return;
L_08A58FDC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A58FF0:
    aot_gpr[5] = (0u | 9u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0596(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0596_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_596(Runtime &runtime) {
    runtime.register_generated_unit(596u, 0x08A58000u, 4096u, &recomp_unit_0596, &recomp_unit_0596_entry);
    runtime.register_function(0x08A58004u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58014u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58020u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58040u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58064u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A580B0u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A580B8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A580E0u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A580E8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A580F0u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58104u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A5810Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58118u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58120u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58128u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58130u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58138u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58140u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58148u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58150u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58158u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58160u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58168u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58170u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58178u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A5818Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A581A8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A581CCu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A581F0u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58224u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58230u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58238u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58254u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58278u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A582B4u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A582BCu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A582C8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A582D4u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A582E4u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A582ECu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58300u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58310u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58320u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58328u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58338u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58344u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58350u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58380u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A583A8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A583B8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A583C4u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A583DCu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58414u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58424u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58438u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58440u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A5844Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58464u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58488u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A584A8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A584B4u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A584CCu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A584DCu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A584F4u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58500u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58510u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A5851Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58524u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A5852Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58530u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58548u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58558u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58560u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58574u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A5858Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58594u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A5859Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A585A8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A585ACu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A585B4u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A585C4u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A585D0u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A585D8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A585E0u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A585E4u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A585FCu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58610u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58620u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58628u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A5863Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58654u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A5865Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58664u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58670u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58678u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58680u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58688u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58690u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58698u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A586C8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A586E0u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A586E8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58710u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58714u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A5871Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A5874Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58764u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A5876Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58794u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58798u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A587A0u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A587D0u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A587E8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A587F0u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58818u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A5881Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58824u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A5882Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58834u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A5883Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A5884Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58858u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58864u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58870u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58880u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58898u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A588A0u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A588A8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A588B4u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A588C8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A588D8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A588E0u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A588F4u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A5890Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58914u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A5891Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58928u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58930u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58938u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58940u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58948u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58950u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A5896Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58984u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58990u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A589B0u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A589C4u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A589D8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A589E8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A589F0u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58A04u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58A1Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58A24u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58A2Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58A38u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58A40u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58A48u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58A50u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58A58u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58A68u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58A74u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58A88u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58A94u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58AA0u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58AC0u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58ACCu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58AE8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58B00u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58B0Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58B2Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58B40u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58B50u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58B5Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58B70u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58B7Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58B88u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58BA8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58BB4u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58BD0u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58BE8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58BF4u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58C14u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58C28u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58C3Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58C4Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58C54u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58C68u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58C80u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58C88u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58C90u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58C9Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58CA8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58CB8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58CC4u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58CCCu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58CD4u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58CD8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58CF0u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58CFCu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58D20u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58D38u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58D40u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58D4Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58D6Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58D84u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58D8Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58DA8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58DCCu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58DDCu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58DE8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58E04u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58E28u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58E38u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58E44u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58E4Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58E54u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58E64u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58E70u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58E84u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58E90u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58E9Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58EBCu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58EC8u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58EE4u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58EFCu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58F08u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58F28u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58F3Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58F44u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58F4Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58F54u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58F5Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58F78u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58F84u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58F8Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58F94u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58F9Cu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58FB0u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58FCCu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58FD4u, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58FDCu, &recomp_unit_0596, "recomp_unit_0596");
    runtime.register_function(0x08A58FF0u, &recomp_unit_0596, "recomp_unit_0596");
}
} // namespace psprecomp
