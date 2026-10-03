#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0515[1023] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 7, 0, 0, 0, 0, 0, 8, 0, 9, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0,
    0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 15, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 18, 0, 19, 0, 0, 20, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27,
    0, 28, 0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 35,
    36, 0, 37, 0, 38, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 46, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 0, 57, 0, 0, 58, 0, 59, 0, 60, 0,
    61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 65, 0, 66, 0, 0, 67, 0, 68, 0, 69, 0, 70, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0,
    0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0,
    0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 93, 0, 94, 0,
    0, 0, 0, 0, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 100, 0, 0, 0, 0, 101, 0,
    102, 0, 103, 0, 104, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109,
    0, 110, 0, 0, 0, 0, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 0, 117, 0, 118, 119, 0, 120, 121, 0, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0,
    0, 0, 0, 128, 0, 129, 0, 0, 130, 0, 131, 0, 132, 0, 133, 0, 134, 0, 0, 0, 0, 0, 135, 0, 136, 137, 0, 138, 0, 139, 0, 140,
    0, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 0, 146, 147, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0,
    0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 157, 0, 158, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 165,
    0, 166, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174,
    0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 179, 0, 180, 0,
    0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 186, 0, 187, 0, 0,
    188, 0, 0, 189, 0, 190, 0, 0, 191, 0, 192, 0, 0, 193, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0,
    0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 201, 0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 0, 206, 207, 0, 0, 0,
    0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 211, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 216, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 226, 0, 227, 0, 228, 0, 0, 0, 229, 0, 0, 230,
    231, 0, 0, 0, 0, 232, 0, 233, 0, 234, 0, 0, 235, 0, 0, 236, 0, 237, 0, 0, 238, 0, 239, 0, 0, 0, 0, 240, 0, 241, 0, 0,
    242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 250, 0, 251, 0, 0, 252, 0, 253, 0, 254, 0, 255, 0, 0, 256, 0, 0, 0,
    0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 260, 0, 0, 261, 0, 262, 0, 263, 0, 0, 264, 0, 0, 0, 0, 265, 0,
    0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 270, 0, 271, 0, 0, 272, 0, 273, 0, 0, 274,
};
void recomp_unit_0515_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A07000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0515[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A07000;
    case 2u: goto L_08A07008;
    case 3u: goto L_08A07010;
    case 4u: goto L_08A07018;
    case 5u: goto L_08A07020;
    case 6u: goto L_08A07028;
    case 7u: goto L_08A0702C;
    case 8u: goto L_08A07044;
    case 9u: goto L_08A0704C;
    case 10u: goto L_08A07054;
    case 11u: goto L_08A07064;
    case 12u: goto L_08A07074;
    case 13u: goto L_08A07094;
    case 14u: goto L_08A070AC;
    case 15u: goto L_08A070B4;
    case 16u: goto L_08A070B8;
    case 17u: goto L_08A070CC;
    case 18u: goto L_08A07104;
    case 19u: goto L_08A0710C;
    case 20u: goto L_08A07118;
    case 21u: goto L_08A07120;
    case 22u: goto L_08A07130;
    case 23u: goto L_08A07138;
    case 24u: goto L_08A07154;
    case 25u: goto L_08A0715C;
    case 26u: goto L_08A0716C;
    case 27u: goto L_08A0717C;
    case 28u: goto L_08A07184;
    case 29u: goto L_08A0718C;
    case 30u: goto L_08A07194;
    case 31u: goto L_08A0719C;
    case 32u: goto L_08A071BC;
    case 33u: goto L_08A071DC;
    case 34u: goto L_08A071F4;
    case 35u: goto L_08A071FC;
    case 36u: goto L_08A07200;
    case 37u: goto L_08A07208;
    case 38u: goto L_08A07210;
    case 39u: goto L_08A0721C;
    case 40u: goto L_08A07224;
    case 41u: goto L_08A0722C;
    case 42u: goto L_08A0724C;
    case 43u: goto L_08A0726C;
    case 44u: goto L_08A0729C;
    case 45u: goto L_08A072A8;
    case 46u: goto L_08A072B8;
    case 47u: goto L_08A072C0;
    case 48u: goto L_08A072C8;
    case 49u: goto L_08A072D4;
    case 50u: goto L_08A072E4;
    case 51u: goto L_08A072EC;
    case 52u: goto L_08A07314;
    case 53u: goto L_08A0731C;
    case 54u: goto L_08A07340;
    case 55u: goto L_08A07348;
    case 56u: goto L_08A07350;
    case 57u: goto L_08A0735C;
    case 58u: goto L_08A07368;
    case 59u: goto L_08A07370;
    case 60u: goto L_08A07378;
    case 61u: goto L_08A07380;
    case 62u: goto L_08A073A0;
    case 63u: goto L_08A073C4;
    case 64u: goto L_08A073FC;
    case 65u: goto L_08A07404;
    case 66u: goto L_08A0740C;
    case 67u: goto L_08A07418;
    case 68u: goto L_08A07420;
    case 69u: goto L_08A07428;
    case 70u: goto L_08A07430;
    case 71u: goto L_08A0743C;
    case 72u: goto L_08A07444;
    case 73u: goto L_08A07460;
    case 74u: goto L_08A07468;
    case 75u: goto L_08A07484;
    case 76u: goto L_08A07494;
    case 77u: goto L_08A074A0;
    case 78u: goto L_08A074D0;
    case 79u: goto L_08A074D8;
    case 80u: goto L_08A074E0;
    case 81u: goto L_08A074E8;
    case 82u: goto L_08A074F0;
    case 83u: goto L_08A074F8;
    case 84u: goto L_08A07504;
    case 85u: goto L_08A0750C;
    case 86u: goto L_08A07514;
    case 87u: goto L_08A0751C;
    case 88u: goto L_08A07524;
    case 89u: goto L_08A07530;
    case 90u: goto L_08A07554;
    case 91u: goto L_08A07560;
    case 92u: goto L_08A07568;
    case 93u: goto L_08A07570;
    case 94u: goto L_08A07578;
    case 95u: goto L_08A07594;
    case 96u: goto L_08A0759C;
    case 97u: goto L_08A075A4;
    case 98u: goto L_08A075D8;
    case 99u: goto L_08A075E0;
    case 100u: goto L_08A075E4;
    case 101u: goto L_08A075F8;
    case 102u: goto L_08A07600;
    case 103u: goto L_08A07608;
    case 104u: goto L_08A07610;
    case 105u: goto L_08A07614;
    case 106u: goto L_08A07644;
    case 107u: goto L_08A07648;
    case 108u: goto L_08A07654;
    case 109u: goto L_08A0767C;
    case 110u: goto L_08A07684;
    case 111u: goto L_08A0769C;
    case 112u: goto L_08A076A4;
    case 113u: goto L_08A076AC;
    case 114u: goto L_08A076B4;
    case 115u: goto L_08A076BC;
    case 116u: goto L_08A076C4;
    case 117u: goto L_08A076DC;
    case 118u: goto L_08A076E4;
    case 119u: goto L_08A076E8;
    case 120u: goto L_08A076F0;
    case 121u: goto L_08A076F4;
    case 122u: goto L_08A07718;
    case 123u: goto L_08A07720;
    case 124u: goto L_08A07730;
    case 125u: goto L_08A07744;
    case 126u: goto L_08A07768;
    case 127u: goto L_08A07774;
    case 128u: goto L_08A0778C;
    case 129u: goto L_08A07794;
    case 130u: goto L_08A077A0;
    case 131u: goto L_08A077A8;
    case 132u: goto L_08A077B0;
    case 133u: goto L_08A077B8;
    case 134u: goto L_08A077C0;
    case 135u: goto L_08A077D8;
    case 136u: goto L_08A077E0;
    case 137u: goto L_08A077E4;
    case 138u: goto L_08A077EC;
    case 139u: goto L_08A077F4;
    case 140u: goto L_08A077FC;
    case 141u: goto L_08A07808;
    case 142u: goto L_08A07810;
    case 143u: goto L_08A07818;
    case 144u: goto L_08A07820;
    case 145u: goto L_08A07828;
    case 146u: goto L_08A07834;
    case 147u: goto L_08A07838;
    case 148u: goto L_08A07854;
    case 149u: goto L_08A07868;
    case 150u: goto L_08A07870;
    case 151u: goto L_08A0788C;
    case 152u: goto L_08A0789C;
    case 153u: goto L_08A078B0;
    case 154u: goto L_08A078B8;
    case 155u: goto L_08A078C4;
    case 156u: goto L_08A078D4;
    case 157u: goto L_08A07904;
    case 158u: goto L_08A0790C;
    case 159u: goto L_08A07914;
    case 160u: goto L_08A07920;
    case 161u: goto L_08A0792C;
    case 162u: goto L_08A07940;
    case 163u: goto L_08A07968;
    case 164u: goto L_08A07974;
    case 165u: goto L_08A0797C;
    case 166u: goto L_08A07984;
    case 167u: goto L_08A0798C;
    case 168u: goto L_08A079A0;
    case 169u: goto L_08A079A8;
    case 170u: goto L_08A079B0;
    case 171u: goto L_08A079B8;
    case 172u: goto L_08A079C4;
    case 173u: goto L_08A079D4;
    case 174u: goto L_08A079FC;
    case 175u: goto L_08A07A04;
    case 176u: goto L_08A07A2C;
    case 177u: goto L_08A07A5C;
    case 178u: goto L_08A07A64;
    case 179u: goto L_08A07A70;
    case 180u: goto L_08A07A78;
    case 181u: goto L_08A07A84;
    case 182u: goto L_08A07AA0;
    case 183u: goto L_08A07AA8;
    case 184u: goto L_08A07ACC;
    case 185u: goto L_08A07AE4;
    case 186u: goto L_08A07AEC;
    case 187u: goto L_08A07AF4;
    case 188u: goto L_08A07B00;
    case 189u: goto L_08A07B0C;
    case 190u: goto L_08A07B14;
    case 191u: goto L_08A07B20;
    case 192u: goto L_08A07B28;
    case 193u: goto L_08A07B34;
    case 194u: goto L_08A07B3C;
    case 195u: goto L_08A07B48;
    case 196u: goto L_08A07B54;
    case 197u: goto L_08A07B78;
    case 198u: goto L_08A07B84;
    case 199u: goto L_08A07BA8;
    case 200u: goto L_08A07BB4;
    case 201u: goto L_08A07BBC;
    case 202u: goto L_08A07BC8;
    case 203u: goto L_08A07BD0;
    case 204u: goto L_08A07BD8;
    case 205u: goto L_08A07BE0;
    case 206u: goto L_08A07BEC;
    case 207u: goto L_08A07BF0;
    case 208u: goto L_08A07C0C;
    case 209u: goto L_08A07C34;
    case 210u: goto L_08A07C3C;
    case 211u: goto L_08A07C44;
    case 212u: goto L_08A07C4C;
    case 213u: goto L_08A07C5C;
    case 214u: goto L_08A07C9C;
    case 215u: goto L_08A07CA4;
    case 216u: goto L_08A07CB0;
    case 217u: goto L_08A07CB8;
    case 218u: goto L_08A07CC4;
    case 219u: goto L_08A07CE0;
    case 220u: goto L_08A07CE8;
    case 221u: goto L_08A07D18;
    case 222u: goto L_08A07D24;
    case 223u: goto L_08A07D30;
    case 224u: goto L_08A07D3C;
    case 225u: goto L_08A07D48;
    case 226u: goto L_08A07D50;
    case 227u: goto L_08A07D58;
    case 228u: goto L_08A07D60;
    case 229u: goto L_08A07D70;
    case 230u: goto L_08A07D7C;
    case 231u: goto L_08A07D80;
    case 232u: goto L_08A07D94;
    case 233u: goto L_08A07D9C;
    case 234u: goto L_08A07DA4;
    case 235u: goto L_08A07DB0;
    case 236u: goto L_08A07DBC;
    case 237u: goto L_08A07DC4;
    case 238u: goto L_08A07DD0;
    case 239u: goto L_08A07DD8;
    case 240u: goto L_08A07DEC;
    case 241u: goto L_08A07DF4;
    case 242u: goto L_08A07E00;
    case 243u: goto L_08A07E0C;
    case 244u: goto L_08A07E38;
    case 245u: goto L_08A07E44;
    case 246u: goto L_08A07E50;
    case 247u: goto L_08A07E70;
    case 248u: goto L_08A07E98;
    case 249u: goto L_08A07EAC;
    case 250u: goto L_08A07EB8;
    case 251u: goto L_08A07EC0;
    case 252u: goto L_08A07ECC;
    case 253u: goto L_08A07ED4;
    case 254u: goto L_08A07EDC;
    case 255u: goto L_08A07EE4;
    case 256u: goto L_08A07EF0;
    case 257u: goto L_08A07F04;
    case 258u: goto L_08A07F2C;
    case 259u: goto L_08A07F34;
    case 260u: goto L_08A07F3C;
    case 261u: goto L_08A07F48;
    case 262u: goto L_08A07F50;
    case 263u: goto L_08A07F58;
    case 264u: goto L_08A07F64;
    case 265u: goto L_08A07F78;
    case 266u: goto L_08A07F98;
    case 267u: goto L_08A07FA4;
    case 268u: goto L_08A07FB0;
    case 269u: goto L_08A07FBC;
    case 270u: goto L_08A07FD0;
    case 271u: goto L_08A07FD8;
    case 272u: goto L_08A07FE4;
    case 273u: goto L_08A07FEC;
    case 274u: goto L_08A07FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A07000:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0702C;
      }
      goto L_08A07008;
    }
L_08A07008:
    aot_gpr[31] = (0x08A07010u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 32u, 0x08A08278u>(ctx, &aot_mem) && ctx.pc == 0x08A07010u) goto L_08A07010;
    return;
L_08A07010:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u | 40708u);
      if (branch_taken) {
          goto L_08A0702C;
      }
      goto L_08A07018;
    }
L_08A07018:
    aot_gpr[31] = (0x08A07020u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0521_entry, 521u, 23u, 0x08A0D180u>(ctx, &aot_mem) && ctx.pc == 0x08A07020u) goto L_08A07020;
    return;
L_08A07020:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0702C;
      }
      goto L_08A07028;
    }
L_08A07028:
    aot_gpr[17] = (0u | 1u);
    goto L_08A0702C;
L_08A0702C:
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
L_08A07044:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(732)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0704C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1428)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07054:
    aot_gpr[5] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26188)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07064:
    aot_gpr[6] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26188), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07074:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26172)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A070B8;
      }
      goto L_08A07094;
    }
L_08A07094:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A070ACu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A070ACu) goto L_08A070AC;
    return;
L_08A070AC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A070B8;
      }
      goto L_08A070B4;
    }
L_08A070B4:
    aot_gpr[16] = (0u | 1u);
    goto L_08A070B8;
L_08A070B8:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A070CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(740)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    if (aot_gpr[6] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(740), 0u);
        goto L_08A07104;
    }
    goto L_08A07104;
L_08A07104:
    aot_gpr[31] = (0x08A0710Cu);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(744)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0710Cu) goto L_08A0710C;
    return;
L_08A0710C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(76)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A07118u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A07118u) goto L_08A07118;
    return;
L_08A07118:
    aot_gpr[31] = (0x08A07120u);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(744)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A07120u) goto L_08A07120;
    return;
L_08A07120:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A07130u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A07130u) goto L_08A07130;
    return;
L_08A07130:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (0u | 39368u);
      if (branch_taken) {
          goto L_08A07184;
      }
      goto L_08A07138;
    }
L_08A07138:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(744)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A07154u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A07154u) goto L_08A07154;
    return;
L_08A07154:
    aot_gpr[31] = (0x08A0715Cu);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0715Cu) goto L_08A0715C;
    return;
L_08A0715C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(104)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A0716Cu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0716Cu) goto L_08A0716C;
    return;
L_08A0716C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(740), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A071DC;
      }
      goto L_08A0717C;
    }
L_08A0717C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A07200;
      }
      goto L_08A07184;
    }
L_08A07184:
    aot_gpr[31] = (0x08A0718Cu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 183u, 0x08A0CD58u>(ctx, &aot_mem) && ctx.pc == 0x08A0718Cu) goto L_08A0718C;
    return;
L_08A0718C:
    aot_gpr[31] = (0x08A07194u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A07194u) goto L_08A07194;
    return;
L_08A07194:
    aot_gpr[31] = (0x08A0719Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 239u, 0x089FEEC4u>(ctx, &aot_mem) && ctx.pc == 0x08A0719Cu) goto L_08A0719C;
    return;
L_08A0719C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A071BCu);
    aot_gpr[6] = (0u | 11u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A071BCu) goto L_08A071BC;
    return;
L_08A071BC:
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
L_08A071DC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x08A071F4u);
    aot_gpr[8] = (aot_gpr[17] | 0u);
    goto L_08A0726C;
L_08A071F4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A07200;
      }
      goto L_08A071FC;
    }
L_08A071FC:
    aot_gpr[19] = (0u | 1u);
    goto L_08A07200;
L_08A07200:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (0u | 39368u);
      if (branch_taken) {
          goto L_08A0724C;
      }
      goto L_08A07208;
    }
L_08A07208:
    aot_gpr[31] = (0x08A07210u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 183u, 0x08A0CD58u>(ctx, &aot_mem) && ctx.pc == 0x08A07210u) goto L_08A07210;
    return;
L_08A07210:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0724C;
      }
      goto L_08A0721C;
    }
L_08A0721C:
    aot_gpr[31] = (0x08A07224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A07224u) goto L_08A07224;
    return;
L_08A07224:
    aot_gpr[31] = (0x08A0722Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 239u, 0x089FEEC4u>(ctx, &aot_mem) && ctx.pc == 0x08A0722Cu) goto L_08A0722C;
    return;
L_08A0722C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A0724Cu);
    aot_gpr[6] = (0u | 11u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0724Cu) goto L_08A0724C;
    return;
L_08A0724C:
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
L_08A0726C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[19] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A0729Cu);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0729Cu) goto L_08A0729C;
    return;
L_08A0729C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A072A8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A072A8u) goto L_08A072A8;
    return;
L_08A072A8:
    aot_gpr[4] = (0u | 39368u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A072B8u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 183u, 0x08A0CD58u>(ctx, &aot_mem) && ctx.pc == 0x08A072B8u) goto L_08A072B8;
    return;
L_08A072B8:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A07368;
      }
      goto L_08A072C0;
    }
L_08A072C0:
    aot_gpr[31] = (0x08A072C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A072C8u) goto L_08A072C8;
    return;
L_08A072C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A072D4u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A072D4u) goto L_08A072D4;
    return;
L_08A072D4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
        goto L_08A07340;
    }
    goto L_08A072E4;
L_08A072E4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A0731C;
      }
      goto L_08A072EC;
    }
L_08A072EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x08A07314u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A07314u) goto L_08A07314;
    return;
L_08A07314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07348;
      }
      goto L_08A0731C;
    }
L_08A0731C:
    aot_gpr[2] = (0u | 0u);
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
L_08A07340:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0731C;
      }
      goto L_08A07348;
    }
L_08A07348:
    aot_gpr[31] = (0x08A07350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A07350u) goto L_08A07350;
    return;
L_08A07350:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A0735Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0735Cu) goto L_08A0735C;
    return;
L_08A0735C:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A072C0;
      }
      goto L_08A07368;
    }
L_08A07368:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A073A0;
      }
      goto L_08A07370;
    }
L_08A07370:
    aot_gpr[31] = (0x08A07378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A07378u) goto L_08A07378;
    return;
L_08A07378:
    aot_gpr[31] = (0x08A07380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 239u, 0x089FEEC4u>(ctx, &aot_mem) && ctx.pc == 0x08A07380u) goto L_08A07380;
    return;
L_08A07380:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A073A0u);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A073A0u) goto L_08A073A0;
    return;
L_08A073A0:
    aot_gpr[2] = (0u | 1u);
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
L_08A073C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A073FCu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A073FCu) goto L_08A073FC;
    return;
L_08A073FC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A07468;
      }
      goto L_08A07404;
    }
L_08A07404:
    aot_gpr[31] = (0x08A0740Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 133u, 0x08A089C0u>(ctx, &aot_mem) && ctx.pc == 0x08A0740Cu) goto L_08A0740C;
    return;
L_08A0740C:
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A07468;
      }
      goto L_08A07418;
    }
L_08A07418:
    aot_gpr[31] = (0x08A07420u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 135u, 0x08A089E8u>(ctx, &aot_mem) && ctx.pc == 0x08A07420u) goto L_08A07420;
    return;
L_08A07420:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A07468;
      }
      goto L_08A07428;
    }
L_08A07428:
    aot_gpr[31] = (0x08A07430u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 135u, 0x08A089E8u>(ctx, &aot_mem) && ctx.pc == 0x08A07430u) goto L_08A07430;
    return;
L_08A07430:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A0743Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 239u, 0x08A00FD8u>(ctx, &aot_mem) && ctx.pc == 0x08A0743Cu) goto L_08A0743C;
    return;
L_08A0743C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07460;
      }
      goto L_08A07444;
    }
L_08A07444:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A07460u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A07460u) goto L_08A07460;
    return;
L_08A07460:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A07404;
      }
      goto L_08A07468;
    }
L_08A07468:
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
L_08A07484:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A07494u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1432));
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 200u, 0x089FFCD8u>(ctx, &aot_mem) && ctx.pc == 0x08A07494u) goto L_08A07494;
    return;
L_08A07494:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A074A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08A074D0u);
    aot_gpr[19] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0517_entry, 517u, 2u, 0x08A09010u>(ctx, &aot_mem) && ctx.pc == 0x08A074D0u) goto L_08A074D0;
    return;
L_08A074D0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07654;
      }
      goto L_08A074D8;
    }
L_08A074D8:
    aot_gpr[31] = (0x08A074E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A074E0u) goto L_08A074E0;
    return;
L_08A074E0:
    aot_gpr[31] = (0x08A074E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 231u, 0x089FEE74u>(ctx, &aot_mem) && ctx.pc == 0x08A074E8u) goto L_08A074E8;
    return;
L_08A074E8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[20] = (0u | 0u);
    goto L_08A074F0;
L_08A074F0:
    aot_gpr[31] = (0x08A074F8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 133u, 0x08A089C0u>(ctx, &aot_mem) && ctx.pc == 0x08A074F8u) goto L_08A074F8;
    return;
L_08A074F8:
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A07560;
      }
      goto L_08A07504;
    }
L_08A07504:
    aot_gpr[31] = (0x08A0750Cu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 135u, 0x08A089E8u>(ctx, &aot_mem) && ctx.pc == 0x08A0750Cu) goto L_08A0750C;
    return;
L_08A0750C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07560;
      }
      goto L_08A07514;
    }
L_08A07514:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A07654;
      }
      goto L_08A0751C;
    }
L_08A0751C:
    aot_gpr[31] = (0x08A07524u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 135u, 0x08A089E8u>(ctx, &aot_mem) && ctx.pc == 0x08A07524u) goto L_08A07524;
    return;
L_08A07524:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A07530u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 195u, 0x08A00CC4u>(ctx, &aot_mem) && ctx.pc == 0x08A07530u) goto L_08A07530;
    return;
L_08A07530:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A07554u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A07554u) goto L_08A07554;
    return;
L_08A07554:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A074F0;
      }
      goto L_08A07560;
    }
L_08A07560:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07654;
      }
      goto L_08A07568;
    }
L_08A07568:
    aot_gpr[31] = (0x08A07570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 231u, 0x089FEE74u>(ctx, &aot_mem) && ctx.pc == 0x08A07570u) goto L_08A07570;
    return;
L_08A07570:
    aot_gpr[31] = (0x08A07578u);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A07578u) goto L_08A07578;
    return;
L_08A07578:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(232)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(120));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A07594u);
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A07594u) goto L_08A07594;
    return;
L_08A07594:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(232)));
        goto L_08A075E4;
    }
    goto L_08A0759C;
L_08A0759C:
    if (aot_gpr[20] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(232)));
        goto L_08A075E4;
    }
    goto L_08A075A4;
L_08A075A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4776));
    aot_gpr[6] = (0u | 9u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08A075D8u);
    aot_gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A075D8u) goto L_08A075D8;
    return;
L_08A075D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A07648;
      }
      goto L_08A075E0;
    }
L_08A075E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(232)));
    goto L_08A075E4;
L_08A075E4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(128));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A075F8u);
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A075F8u) goto L_08A075F8;
    return;
L_08A075F8:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A07614;
    }
    goto L_08A07600;
L_08A07600:
    aot_gpr[31] = (0x08A07608u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 224u, 0x08A08F84u>(ctx, &aot_mem) && ctx.pc == 0x08A07608u) goto L_08A07608;
    return;
L_08A07608:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A07648;
      }
      goto L_08A07610;
    }
L_08A07610:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A07614;
L_08A07614:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-4776));
    aot_gpr[6] = (0u | 8u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08A07644u);
    aot_gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A07644u) goto L_08A07644;
    return;
L_08A07644:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A07648;
L_08A07648:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A07654u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 219u, 0x08A08F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A07654u) goto L_08A07654;
    return;
L_08A07654:
    aot_gpr[2] = (aot_gpr[19] | 0u);
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
L_08A0767C:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(736), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07684:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A076F0;
      }
      goto L_08A0769C;
    }
L_08A0769C:
    aot_gpr[31] = (0x08A076A4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A07054;
L_08A076A4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (1u << 16u);
      if (branch_taken) {
          goto L_08A076F4;
      }
      goto L_08A076AC;
    }
L_08A076AC:
    aot_gpr[31] = (0x08A076B4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 32u, 0x08A08278u>(ctx, &aot_mem) && ctx.pc == 0x08A076B4u) goto L_08A076B4;
    return;
L_08A076B4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A076E8;
      }
      goto L_08A076BC;
    }
L_08A076BC:
    aot_gpr[31] = (0x08A076C4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 32u, 0x08A08278u>(ctx, &aot_mem) && ctx.pc == 0x08A076C4u) goto L_08A076C4;
    return;
L_08A076C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A076DCu);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A076DCu) goto L_08A076DC;
    return;
L_08A076DC:
    aot_gpr[31] = (0x08A076E4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 34u, 0x08A08298u>(ctx, &aot_mem) && ctx.pc == 0x08A076E4u) goto L_08A076E4;
    return;
L_08A076E4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A076E8;
L_08A076E8:
    aot_gpr[31] = (0x08A076F0u);
    aot_gpr[5] = (0u | 0u);
    goto L_08A07064;
L_08A076F0:
    aot_gpr[4] = (1u << 16u);
    goto L_08A076F4;
L_08A076F4:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26180), 0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (0u | 39324u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26176), 0u);
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[31] = (0x08A07718u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 28u, 0x08A4616Cu>(ctx, &aot_mem) && ctx.pc == 0x08A07718u) goto L_08A07718;
    return;
L_08A07718:
    aot_gpr[31] = (0x08A07720u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 23u, 0x08A46134u>(ctx, &aot_mem) && ctx.pc == 0x08A07720u) goto L_08A07720;
    return;
L_08A07720:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[31] = (0x08A07730u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26200), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 32u, 0x089FF204u>(ctx, &aot_mem) && ctx.pc == 0x08A07730u) goto L_08A07730;
    return;
L_08A07730:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07744:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A07768u);
    aot_gpr[5] = (0u | 0u);
    goto L_08A07684;
L_08A07768:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(704), 0u);
    aot_gpr[31] = (0x08A07774u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 143u, 0x08A08A84u>(ctx, &aot_mem) && ctx.pc == 0x08A07774u) goto L_08A07774;
    return;
L_08A07774:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(744)));
    aot_gpr[18] = (1u << 16u);
    aot_gpr[17] = (1u << 16u);
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[17]);
      if (branch_taken) {
          goto L_08A077A8;
      }
      goto L_08A0778C;
    }
L_08A0778C:
    aot_gpr[31] = (0x08A07794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A07794u) goto L_08A07794;
    return;
L_08A07794:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A077A0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A077A0u) goto L_08A077A0;
    return;
L_08A077A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(740), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(744), 0u);
    goto L_08A077A8;
L_08A077A8:
    aot_gpr[31] = (0x08A077B0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 32u, 0x08A08278u>(ctx, &aot_mem) && ctx.pc == 0x08A077B0u) goto L_08A077B0;
    return;
L_08A077B0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26196)));
        goto L_08A077E4;
    }
    goto L_08A077B8;
L_08A077B8:
    aot_gpr[31] = (0x08A077C0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 32u, 0x08A08278u>(ctx, &aot_mem) && ctx.pc == 0x08A077C0u) goto L_08A077C0;
    return;
L_08A077C0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A077D8u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A077D8u) goto L_08A077D8;
    return;
L_08A077D8:
    aot_gpr[31] = (0x08A077E0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 34u, 0x08A08298u>(ctx, &aot_mem) && ctx.pc == 0x08A077E0u) goto L_08A077E0;
    return;
L_08A077E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26196)));
    goto L_08A077E4;
L_08A077E4:
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-24832)));
        goto L_08A07810;
    }
    goto L_08A077EC;
L_08A077EC:
    aot_gpr[31] = (0x08A077F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A077F4u) goto L_08A077F4;
    return;
L_08A077F4:
    aot_gpr[31] = (0x08A077FCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A077FCu) goto L_08A077FC;
    return;
L_08A077FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26196)));
    aot_gpr[31] = (0x08A07808u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A07808u) goto L_08A07808;
    return;
L_08A07808:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-26196), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-24832)));
    goto L_08A07810;
L_08A07810:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07838;
      }
      goto L_08A07818;
    }
L_08A07818:
    aot_gpr[31] = (0x08A07820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A07820u) goto L_08A07820;
    return;
L_08A07820:
    aot_gpr[31] = (0x08A07828u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A07828u) goto L_08A07828;
    return;
L_08A07828:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-24832)));
    aot_gpr[31] = (0x08A07834u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A07834u) goto L_08A07834;
    return;
L_08A07834:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-24832), 0u);
    goto L_08A07838;
L_08A07838:
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
L_08A07854:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A07868u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A07868u) goto L_08A07868;
    return;
L_08A07868:
    aot_gpr[31] = (0x08A07870u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A07870u) goto L_08A07870;
    return;
L_08A07870:
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 55u);
    aot_gpr[31] = (0x08A0788Cu);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-4800));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 127u, 0x089EEAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0788Cu) goto L_08A0788C;
    return;
L_08A0788C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0789C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A078B0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A078B0u) goto L_08A078B0;
    return;
L_08A078B0:
    aot_gpr[31] = (0x08A078B8u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A078B8u) goto L_08A078B8;
    return;
L_08A078B8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A078C4u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A078C4u) goto L_08A078C4;
    return;
L_08A078C4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A078D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-976));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(944), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(952), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(948), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(956), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(960), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(964), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(968), aot_gpr[31]);
    aot_gpr[31] = (0x08A07904u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 32u, 0x08A08278u>(ctx, &aot_mem) && ctx.pc == 0x08A07904u) goto L_08A07904;
    return;
L_08A07904:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[21] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A07A04;
      }
      goto L_08A0790C;
    }
L_08A0790C:
    aot_gpr[31] = (0x08A07914u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 80u, 0x089F143Cu>(ctx, &aot_mem) && ctx.pc == 0x08A07914u) goto L_08A07914;
    return;
L_08A07914:
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08A07920u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 65u, 0x08A0C510u>(ctx, &aot_mem) && ctx.pc == 0x08A07920u) goto L_08A07920;
    return;
L_08A07920:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A0792Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x08A0792Cu) goto L_08A0792C;
    return;
L_08A0792C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[19] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(672), 0u);
    aot_gpr[31] = (0x08A07940u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(676), aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 83u, 0x089F1478u>(ctx, &aot_mem) && ctx.pc == 0x08A07940u) goto L_08A07940;
    return;
L_08A07940:
    aot_gpr[16] = (0u | 39368u);
    aot_gpr[16] = (aot_gpr[18] + aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[31] = (0x08A07968u);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 91u, 0x089F14F4u>(ctx, &aot_mem) && ctx.pc == 0x08A07968u) goto L_08A07968;
    return;
L_08A07968:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A07974u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 33u, 0x08A08288u>(ctx, &aot_mem) && ctx.pc == 0x08A07974u) goto L_08A07974;
    return;
L_08A07974:
    aot_gpr[31] = (0x08A0797Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 32u, 0x08A08278u>(ctx, &aot_mem) && ctx.pc == 0x08A0797Cu) goto L_08A0797C;
    return;
L_08A0797C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A079FC;
      }
      goto L_08A07984;
    }
L_08A07984:
    aot_gpr[31] = (0x08A0798Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 68u, 0x08A0C534u>(ctx, &aot_mem) && ctx.pc == 0x08A0798Cu) goto L_08A0798C;
    return;
L_08A0798C:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26040), aot_gpr[2]);
    aot_gpr[31] = (0x08A079A0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 72u, 0x08A0C568u>(ctx, &aot_mem) && ctx.pc == 0x08A079A0u) goto L_08A079A0;
    return;
L_08A079A0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A079B0;
      }
      goto L_08A079A8;
    }
L_08A079A8:
    aot_gpr[31] = (0x08A079B0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 63u, 0x08A0C4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A079B0u) goto L_08A079B0;
    return;
L_08A079B0:
    aot_gpr[31] = (0x08A079B8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 81u, 0x08A0C5FCu>(ctx, &aot_mem) && ctx.pc == 0x08A079B8u) goto L_08A079B8;
    return;
L_08A079B8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A079C4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 182u, 0x08A0CD50u>(ctx, &aot_mem) && ctx.pc == 0x08A079C4u) goto L_08A079C4;
    return;
L_08A079C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(704), aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A079D4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A079D4u) goto L_08A079D4;
    return;
L_08A079D4:
    aot_gpr[2] = (aot_gpr[19] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(944)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(948)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(952)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(956)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(960)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(964)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(968)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(976));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A079FC:
    aot_gpr[31] = (0x08A07A04u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 123u, 0x089F06E8u>(ctx, &aot_mem) && ctx.pc == 0x08A07A04u) goto L_08A07A04;
    return;
L_08A07A04:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(944)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(948)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(952)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(956)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(960)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(964)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(968)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(976));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07A2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x08A07A5Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A07A5Cu) goto L_08A07A5C;
    return;
L_08A07A5C:
    aot_gpr[31] = (0x08A07A64u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 10u, 0x089FF0ACu>(ctx, &aot_mem) && ctx.pc == 0x08A07A64u) goto L_08A07A64;
    return;
L_08A07A64:
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    goto L_08A07A70;
L_08A07A70:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07B54;
      }
      goto L_08A07A78;
    }
L_08A07A78:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07B54;
      }
      goto L_08A07A84;
    }
L_08A07A84:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A07AA0u);
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A07AA0u) goto L_08A07AA0;
    return;
L_08A07AA0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A07B78;
      }
      goto L_08A07AA8;
    }
L_08A07AA8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A07ACCu);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A07ACCu) goto L_08A07ACC;
    return;
L_08A07ACC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A07AE4u);
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A07AE4u) goto L_08A07AE4;
    return;
L_08A07AE4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07B54;
      }
      goto L_08A07AEC;
    }
L_08A07AEC:
    aot_gpr[31] = (0x08A07AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A07AF4u) goto L_08A07AF4;
    return;
L_08A07AF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A07B00u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A07B00u) goto L_08A07B00;
    return;
L_08A07B00:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A07B54;
      }
      goto L_08A07B0C;
    }
L_08A07B0C:
    aot_gpr[31] = (0x08A07B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A07B14u) goto L_08A07B14;
    return;
L_08A07B14:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A07B20u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A07B20u) goto L_08A07B20;
    return;
L_08A07B20:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[19];
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A07B34;
      }
      goto L_08A07B28;
    }
L_08A07B28:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A07B34u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_08A07A2C;
L_08A07B34:
    aot_gpr[31] = (0x08A07B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A07B3Cu) goto L_08A07B3C;
    return;
L_08A07B3C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A07B48u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A07B48u) goto L_08A07B48;
    return;
L_08A07B48:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A07B0C;
      }
      goto L_08A07B54;
    }
L_08A07B54:
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
L_08A07B78:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[19] < static_cast<std::uint32_t>(128) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A07A70;
      }
      goto L_08A07B84;
    }
L_08A07B84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    aot_gpr[18] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08A07BA8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 92u, 0x08A0C6D0u>(ctx, &aot_mem) && ctx.pc == 0x08A07BA8u) goto L_08A07BA8;
    return;
L_08A07BA8:
    aot_gpr[16] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A07BC8;
      }
      goto L_08A07BB4;
    }
L_08A07BB4:
    aot_gpr[31] = (0x08A07BBCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 92u, 0x08A0C6D0u>(ctx, &aot_mem) && ctx.pc == 0x08A07BBCu) goto L_08A07BBC;
    return;
L_08A07BBC:
    aot_gpr[4] = (0u | 2u);
    if (aot_gpr[2] != aot_gpr[4]) {
    aot_gpr[18] = (0u | 0u);
        goto L_08A07BF0;
    }
    goto L_08A07BC8;
L_08A07BC8:
    aot_gpr[31] = (0x08A07BD0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 91u, 0x08A0C6C8u>(ctx, &aot_mem) && ctx.pc == 0x08A07BD0u) goto L_08A07BD0;
    return;
L_08A07BD0:
    { const bool branch_taken = aot_gpr[2] == aot_gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A07BF0;
      }
      goto L_08A07BD8;
    }
L_08A07BD8:
    aot_gpr[31] = (0x08A07BE0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0520_entry, 520u, 91u, 0x08A0C6C8u>(ctx, &aot_mem) && ctx.pc == 0x08A07BE0u) goto L_08A07BE0;
    return;
L_08A07BE0:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A07BF0;
      }
      goto L_08A07BEC;
    }
L_08A07BEC:
    aot_gpr[18] = (0u | 0u);
    goto L_08A07BF0;
L_08A07BF0:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_08A07C0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (0u | 39324u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[16] = (aot_gpr[4] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(-26200), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A07C34u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 39u, 0x08A4621Cu>(ctx, &aot_mem) && ctx.pc == 0x08A07C34u) goto L_08A07C34;
    return;
L_08A07C34:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07C4C;
      }
      goto L_08A07C3C;
    }
L_08A07C3C:
    aot_gpr[31] = (0x08A07C44u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 28u, 0x08A4616Cu>(ctx, &aot_mem) && ctx.pc == 0x08A07C44u) goto L_08A07C44;
    return;
L_08A07C44:
    aot_gpr[31] = (0x08A07C4Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 18u, 0x08A460F8u>(ctx, &aot_mem) && ctx.pc == 0x08A07C4Cu) goto L_08A07C4C;
    return;
L_08A07C4C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07C5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[8] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    aot_gpr[31] = (0x08A07C9Cu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A07C9Cu) goto L_08A07C9C;
    return;
L_08A07C9C:
    aot_gpr[31] = (0x08A07CA4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 10u, 0x089FF0ACu>(ctx, &aot_mem) && ctx.pc == 0x08A07CA4u) goto L_08A07CA4;
    return;
L_08A07CA4:
    aot_gpr[22] = (0u | 0u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[23] = (aot_gpr[2] | 0u);
    goto L_08A07CB0;
L_08A07CB0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07E0C;
      }
      goto L_08A07CB8;
    }
L_08A07CB8:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07E0C;
      }
      goto L_08A07CC4;
    }
L_08A07CC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A07CE0u);
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A07CE0u) goto L_08A07CE0;
    return;
L_08A07CE0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
        goto L_08A07E38;
    }
    goto L_08A07CE8;
L_08A07CE8:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[10];
    aot_gpr[31] = (0x08A07D18u);
    aot_gpr[9] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A07D18u) goto L_08A07D18;
    return;
L_08A07D18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A07E38;
      }
      goto L_08A07D24;
    }
L_08A07D24:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x08A07D30u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 154u, 0x08A06990u>(ctx, &aot_mem) && ctx.pc == 0x08A07D30u) goto L_08A07D30;
    return;
L_08A07D30:
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A07D3Cu);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0494_entry, 494u, 227u, 0x089F2EC8u>(ctx, &aot_mem) && ctx.pc == 0x08A07D3Cu) goto L_08A07D3C;
    return;
L_08A07D3C:
    aot_gpr[5] = (aot_gpr[2] & 255u);
    aot_gpr[31] = (0x08A07D48u);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 7u, 0x08A01058u>(ctx, &aot_mem) && ctx.pc == 0x08A07D48u) goto L_08A07D48;
    return;
L_08A07D48:
    aot_gpr[31] = (0x08A07D50u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 138u, 0x08A06870u>(ctx, &aot_mem) && ctx.pc == 0x08A07D50u) goto L_08A07D50;
    return;
L_08A07D50:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
        goto L_08A07D80;
    }
    goto L_08A07D58;
L_08A07D58:
    aot_gpr[31] = (0x08A07D60u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 138u, 0x08A06870u>(ctx, &aot_mem) && ctx.pc == 0x08A07D60u) goto L_08A07D60;
    return;
L_08A07D60:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
        goto L_08A07D80;
    }
    goto L_08A07D70;
L_08A07D70:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A07D7Cu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 154u, 0x08A06990u>(ctx, &aot_mem) && ctx.pc == 0x08A07D7Cu) goto L_08A07D7C;
    return;
L_08A07D7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    goto L_08A07D80;
L_08A07D80:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A07D94u);
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A07D94u) goto L_08A07D94;
    return;
L_08A07D94:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07E0C;
      }
      goto L_08A07D9C;
    }
L_08A07D9C:
    aot_gpr[31] = (0x08A07DA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A07DA4u) goto L_08A07DA4;
    return;
L_08A07DA4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A07DB0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A07DB0u) goto L_08A07DB0;
    return;
L_08A07DB0:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08A07E0C;
      }
      goto L_08A07DBC;
    }
L_08A07DBC:
    aot_gpr[31] = (0x08A07DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A07DC4u) goto L_08A07DC4;
    return;
L_08A07DC4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A07DD0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A07DD0u) goto L_08A07DD0;
    return;
L_08A07DD0:
    { const bool branch_taken = aot_gpr[2] != aot_gpr[21];
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A07DEC;
      }
      goto L_08A07DD8;
    }
L_08A07DD8:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A07DECu);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    goto L_08A07C5C;
L_08A07DEC:
    aot_gpr[31] = (0x08A07DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A07DF4u) goto L_08A07DF4;
    return;
L_08A07DF4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A07E00u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A07E00u) goto L_08A07E00;
    return;
L_08A07E00:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A07DBC;
      }
      goto L_08A07E0C;
    }
L_08A07E0C:
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
L_08A07E38:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[22] < static_cast<std::uint32_t>(128) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A07CB0;
      }
      goto L_08A07E44;
    }
L_08A07E44:
    aot_gpr[5] = (0u | 1u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1424), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07E50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A07E70u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26048)));
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 179u, 0x08A06B58u>(ctx, &aot_mem) && ctx.pc == 0x08A07E70u) goto L_08A07E70;
    return;
L_08A07E70:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26180), 0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26176), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07E98:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A07EACu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 119u, 0x08A03734u>(ctx, &aot_mem) && ctx.pc == 0x08A07EACu) goto L_08A07EAC;
    return;
L_08A07EAC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A07EB8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 201u, 0x08A03CE4u>(ctx, &aot_mem) && ctx.pc == 0x08A07EB8u) goto L_08A07EB8;
    return;
L_08A07EB8:
    aot_gpr[31] = (0x08A07EC0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 210u, 0x08A08E84u>(ctx, &aot_mem) && ctx.pc == 0x08A07EC0u) goto L_08A07EC0;
    return;
L_08A07EC0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A07ECCu);
    aot_gpr[5] = (0u | 0u);
    goto L_08A0767C;
L_08A07ECC:
    aot_gpr[31] = (0x08A07ED4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(756));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 134u, 0x089F0784u>(ctx, &aot_mem) && ctx.pc == 0x08A07ED4u) goto L_08A07ED4;
    return;
L_08A07ED4:
    aot_gpr[31] = (0x08A07EDCu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(1432));
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 200u, 0x089FFCD8u>(ctx, &aot_mem) && ctx.pc == 0x08A07EDCu) goto L_08A07EDC;
    return;
L_08A07EDC:
    aot_gpr[31] = (0x08A07EE4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0516_entry, 516u, 143u, 0x08A08A84u>(ctx, &aot_mem) && ctx.pc == 0x08A07EE4u) goto L_08A07EE4;
    return;
L_08A07EE4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A07EF0u);
    aot_gpr[5] = (0u | 0u);
    goto L_08A07684;
L_08A07EF0:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07F04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + static_cast<std::uint32_t>(756));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A07F2Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A07F2Cu) goto L_08A07F2C;
    return;
L_08A07F2C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07F64;
      }
      goto L_08A07F34;
    }
L_08A07F34:
    aot_gpr[31] = (0x08A07F3Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 239u, 0x089F0D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A07F3Cu) goto L_08A07F3C;
    return;
L_08A07F3C:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A07F64;
      }
      goto L_08A07F48;
    }
L_08A07F48:
    aot_gpr[31] = (0x08A07F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A07F50u) goto L_08A07F50;
    return;
L_08A07F50:
    aot_gpr[31] = (0x08A07F58u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 8u, 0x089FF04Cu>(ctx, &aot_mem) && ctx.pc == 0x08A07F58u) goto L_08A07F58;
    return;
L_08A07F58:
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(756));
    aot_gpr[31] = (0x08A07F64u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 128u, 0x089F0734u>(ctx, &aot_mem) && ctx.pc == 0x08A07F64u) goto L_08A07F64;
    return;
L_08A07F64:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07F78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[2] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A07FF8;
      }
      goto L_08A07F98;
    }
L_08A07F98:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07FF8;
      }
      goto L_08A07FA4;
    }
L_08A07FA4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A07FEC;
      }
      goto L_08A07FB0;
    }
L_08A07FB0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A07FD8;
      }
      goto L_08A07FBC;
    }
L_08A07FBC:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 40708u);
    aot_gpr[31] = (0x08A07FD0u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0521_entry, 521u, 35u, 0x08A0D234u>(ctx, &aot_mem) && ctx.pc == 0x08A07FD0u) goto L_08A07FD0;
    return;
L_08A07FD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07FE4;
      }
      goto L_08A07FD8;
    }
L_08A07FD8:
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(720));
    aot_gpr[31] = (0x08A07FE4u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 166u, 0x08A0BAF0u>(ctx, &aot_mem) && ctx.pc == 0x08A07FE4u) goto L_08A07FE4;
    return;
L_08A07FE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07FF8;
      }
      goto L_08A07FEC;
    }
L_08A07FEC:
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(708));
    aot_gpr[31] = (0x08A07FF8u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0519_entry, 519u, 166u, 0x08A0BAF0u>(ctx, &aot_mem) && ctx.pc == 0x08A07FF8u) goto L_08A07FF8;
    return;
L_08A07FF8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0515(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0515_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_515(Runtime &runtime) {
    runtime.register_generated_unit(515u, 0x08A07000u, 4096u, &recomp_unit_0515, &recomp_unit_0515_entry);
    runtime.register_function(0x08A07000u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07008u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07010u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07018u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07020u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07028u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0702Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07044u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0704Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07054u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07064u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07074u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07094u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A070ACu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A070B4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A070B8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A070CCu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07104u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0710Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07118u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07120u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07130u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07138u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07154u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0715Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0716Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0717Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07184u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0718Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07194u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0719Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A071BCu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A071DCu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A071F4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A071FCu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07200u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07208u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07210u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0721Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07224u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0722Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0724Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0726Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0729Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A072A8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A072B8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A072C0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A072C8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A072D4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A072E4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A072ECu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07314u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0731Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07340u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07348u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07350u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0735Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07368u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07370u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07378u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07380u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A073A0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A073C4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A073FCu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07404u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0740Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07418u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07420u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07428u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07430u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0743Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07444u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07460u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07468u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07484u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07494u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A074A0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A074D0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A074D8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A074E0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A074E8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A074F0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A074F8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07504u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0750Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07514u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0751Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07524u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07530u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07554u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07560u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07568u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07570u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07578u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07594u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0759Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A075A4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A075D8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A075E0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A075E4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A075F8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07600u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07608u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07610u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07614u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07644u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07648u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07654u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0767Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07684u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0769Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A076A4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A076ACu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A076B4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A076BCu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A076C4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A076DCu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A076E4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A076E8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A076F0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A076F4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07718u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07720u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07730u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07744u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07768u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07774u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0778Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07794u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A077A0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A077A8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A077B0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A077B8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A077C0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A077D8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A077E0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A077E4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A077ECu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A077F4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A077FCu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07808u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07810u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07818u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07820u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07828u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07834u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07838u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07854u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07868u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07870u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0788Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0789Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A078B0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A078B8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A078C4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A078D4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07904u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0790Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07914u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07920u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0792Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07940u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07968u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07974u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0797Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07984u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A0798Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A079A0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A079A8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A079B0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A079B8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A079C4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A079D4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A079FCu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07A04u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07A2Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07A5Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07A64u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07A70u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07A78u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07A84u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07AA0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07AA8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07ACCu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07AE4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07AECu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07AF4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07B00u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07B0Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07B14u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07B20u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07B28u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07B34u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07B3Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07B48u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07B54u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07B78u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07B84u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07BA8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07BB4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07BBCu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07BC8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07BD0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07BD8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07BE0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07BECu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07BF0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07C0Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07C34u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07C3Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07C44u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07C4Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07C5Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07C9Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07CA4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07CB0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07CB8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07CC4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07CE0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07CE8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07D18u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07D24u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07D30u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07D3Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07D48u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07D50u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07D58u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07D60u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07D70u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07D7Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07D80u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07D94u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07D9Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07DA4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07DB0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07DBCu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07DC4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07DD0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07DD8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07DECu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07DF4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07E00u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07E0Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07E38u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07E44u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07E50u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07E70u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07E98u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07EACu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07EB8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07EC0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07ECCu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07ED4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07EDCu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07EE4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07EF0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07F04u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07F2Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07F34u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07F3Cu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07F48u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07F50u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07F58u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07F64u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07F78u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07F98u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07FA4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07FB0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07FBCu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07FD0u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07FD8u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07FE4u, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07FECu, &recomp_unit_0515, "recomp_unit_0515");
    runtime.register_function(0x08A07FF8u, &recomp_unit_0515, "recomp_unit_0515");
}
} // namespace psprecomp
