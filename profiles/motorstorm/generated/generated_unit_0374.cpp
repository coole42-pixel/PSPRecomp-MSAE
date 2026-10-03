#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0374[1023] = {
    1, 2, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 0, 13, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 17,
    0, 18, 19, 0, 0, 20, 0, 0, 0, 0, 21, 0, 22, 0, 23, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 28,
    0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 34, 0, 35, 0, 0, 36, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 43,
    0, 44, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0,
    50, 0, 0, 0, 51, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 56, 0, 57, 0, 0, 0, 58, 0, 59,
    0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 65, 0, 66, 0, 67, 68, 0, 0, 0, 69, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 78, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81,
    0, 82, 0, 83, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 94, 95, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 98, 0,
    99, 0, 100, 0, 0, 101, 0, 0, 102, 0, 103, 0, 104, 0, 0, 105, 0, 106, 0, 107, 0, 108, 0, 0, 0, 109, 0, 110, 0, 0, 0, 111,
    0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 117, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0,
    0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 138, 0,
    0, 139, 0, 140, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0,
    145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152,
    0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 160, 0, 0,
    161, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 165, 166, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 178, 0,
    179, 0, 180, 0, 181, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189,
    0, 190, 0, 0, 191, 0, 192, 0, 193, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0, 197, 0, 198, 0, 199, 0, 0, 200, 0, 201, 0, 0, 0,
    0, 0, 202, 0, 0, 0, 203, 0, 204, 0, 205, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 211, 0, 212,
    0, 213, 0, 214, 0, 215, 0, 0, 216, 0, 217, 0, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 0, 0, 223, 0, 224, 0, 0, 0, 0, 225,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232,
    0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239,
    0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 247, 0, 248,
    0, 0, 249, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0,
    0, 256, 0, 0, 257, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 261, 0, 262, 263, 0, 0, 0, 0, 0, 0, 0, 264,
};
void recomp_unit_0374_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0897A000u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0374[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0897A000;
    case 2u: goto L_0897A004;
    case 3u: goto L_0897A018;
    case 4u: goto L_0897A024;
    case 5u: goto L_0897A02C;
    case 6u: goto L_0897A03C;
    case 7u: goto L_0897A058;
    case 8u: goto L_0897A074;
    case 9u: goto L_0897A090;
    case 10u: goto L_0897A0A4;
    case 11u: goto L_0897A0B0;
    case 12u: goto L_0897A0BC;
    case 13u: goto L_0897A0C8;
    case 14u: goto L_0897A0D0;
    case 15u: goto L_0897A0E4;
    case 16u: goto L_0897A0F4;
    case 17u: goto L_0897A0FC;
    case 18u: goto L_0897A104;
    case 19u: goto L_0897A108;
    case 20u: goto L_0897A114;
    case 21u: goto L_0897A128;
    case 22u: goto L_0897A130;
    case 23u: goto L_0897A138;
    case 24u: goto L_0897A13C;
    case 25u: goto L_0897A148;
    case 26u: goto L_0897A16C;
    case 27u: goto L_0897A174;
    case 28u: goto L_0897A17C;
    case 29u: goto L_0897A188;
    case 30u: goto L_0897A198;
    case 31u: goto L_0897A1C4;
    case 32u: goto L_0897A1CC;
    case 33u: goto L_0897A1E0;
    case 34u: goto L_0897A208;
    case 35u: goto L_0897A210;
    case 36u: goto L_0897A21C;
    case 37u: goto L_0897A228;
    case 38u: goto L_0897A230;
    case 39u: goto L_0897A248;
    case 40u: goto L_0897A258;
    case 41u: goto L_0897A260;
    case 42u: goto L_0897A274;
    case 43u: goto L_0897A27C;
    case 44u: goto L_0897A284;
    case 45u: goto L_0897A28C;
    case 46u: goto L_0897A29C;
    case 47u: goto L_0897A2CC;
    case 48u: goto L_0897A2DC;
    case 49u: goto L_0897A2F0;
    case 50u: goto L_0897A300;
    case 51u: goto L_0897A310;
    case 52u: goto L_0897A314;
    case 53u: goto L_0897A324;
    case 54u: goto L_0897A340;
    case 55u: goto L_0897A354;
    case 56u: goto L_0897A35C;
    case 57u: goto L_0897A364;
    case 58u: goto L_0897A374;
    case 59u: goto L_0897A37C;
    case 60u: goto L_0897A384;
    case 61u: goto L_0897A398;
    case 62u: goto L_0897A3A8;
    case 63u: goto L_0897A3B8;
    case 64u: goto L_0897A3CC;
    case 65u: goto L_0897A3D4;
    case 66u: goto L_0897A3DC;
    case 67u: goto L_0897A3E4;
    case 68u: goto L_0897A3E8;
    case 69u: goto L_0897A3F8;
    case 70u: goto L_0897A428;
    case 71u: goto L_0897A430;
    case 72u: goto L_0897A450;
    case 73u: goto L_0897A45C;
    case 74u: goto L_0897A474;
    case 75u: goto L_0897A498;
    case 76u: goto L_0897A4A8;
    case 77u: goto L_0897A4B0;
    case 78u: goto L_0897A4C4;
    case 79u: goto L_0897A4CC;
    case 80u: goto L_0897A4D8;
    case 81u: goto L_0897A4FC;
    case 82u: goto L_0897A504;
    case 83u: goto L_0897A50C;
    case 84u: goto L_0897A514;
    case 85u: goto L_0897A520;
    case 86u: goto L_0897A52C;
    case 87u: goto L_0897A53C;
    case 88u: goto L_0897A548;
    case 89u: goto L_0897A56C;
    case 90u: goto L_0897A588;
    case 91u: goto L_0897A594;
    case 92u: goto L_0897A5B8;
    case 93u: goto L_0897A5C4;
    case 94u: goto L_0897A5C8;
    case 95u: goto L_0897A5CC;
    case 96u: goto L_0897A5D8;
    case 97u: goto L_0897A5E0;
    case 98u: goto L_0897A5F8;
    case 99u: goto L_0897A600;
    case 100u: goto L_0897A608;
    case 101u: goto L_0897A614;
    case 102u: goto L_0897A620;
    case 103u: goto L_0897A628;
    case 104u: goto L_0897A630;
    case 105u: goto L_0897A63C;
    case 106u: goto L_0897A644;
    case 107u: goto L_0897A64C;
    case 108u: goto L_0897A654;
    case 109u: goto L_0897A664;
    case 110u: goto L_0897A66C;
    case 111u: goto L_0897A67C;
    case 112u: goto L_0897A684;
    case 113u: goto L_0897A690;
    case 114u: goto L_0897A69C;
    case 115u: goto L_0897A6A8;
    case 116u: goto L_0897A6B4;
    case 117u: goto L_0897A6BC;
    case 118u: goto L_0897A6C0;
    case 119u: goto L_0897A6D8;
    case 120u: goto L_0897A6F4;
    case 121u: goto L_0897A708;
    case 122u: goto L_0897A714;
    case 123u: goto L_0897A720;
    case 124u: goto L_0897A72C;
    case 125u: goto L_0897A738;
    case 126u: goto L_0897A748;
    case 127u: goto L_0897A750;
    case 128u: goto L_0897A764;
    case 129u: goto L_0897A778;
    case 130u: goto L_0897A798;
    case 131u: goto L_0897A7A4;
    case 132u: goto L_0897A7DC;
    case 133u: goto L_0897A804;
    case 134u: goto L_0897A824;
    case 135u: goto L_0897A830;
    case 136u: goto L_0897A858;
    case 137u: goto L_0897A870;
    case 138u: goto L_0897A878;
    case 139u: goto L_0897A884;
    case 140u: goto L_0897A88C;
    case 141u: goto L_0897A8A0;
    case 142u: goto L_0897A8A8;
    case 143u: goto L_0897A8DC;
    case 144u: goto L_0897A8F4;
    case 145u: goto L_0897A900;
    case 146u: goto L_0897A910;
    case 147u: goto L_0897A928;
    case 148u: goto L_0897A93C;
    case 149u: goto L_0897A94C;
    case 150u: goto L_0897A95C;
    case 151u: goto L_0897A96C;
    case 152u: goto L_0897A97C;
    case 153u: goto L_0897A994;
    case 154u: goto L_0897A9AC;
    case 155u: goto L_0897A9B4;
    case 156u: goto L_0897A9C4;
    case 157u: goto L_0897A9D4;
    case 158u: goto L_0897A9E0;
    case 159u: goto L_0897A9EC;
    case 160u: goto L_0897A9F4;
    case 161u: goto L_0897AA00;
    case 162u: goto L_0897AA08;
    case 163u: goto L_0897AA24;
    case 164u: goto L_0897AA2C;
    case 165u: goto L_0897AA3C;
    case 166u: goto L_0897AA40;
    case 167u: goto L_0897AA48;
    case 168u: goto L_0897AA54;
    case 169u: goto L_0897AA5C;
    case 170u: goto L_0897AA74;
    case 171u: goto L_0897AA80;
    case 172u: goto L_0897AAA4;
    case 173u: goto L_0897AAAC;
    case 174u: goto L_0897AAB4;
    case 175u: goto L_0897AACC;
    case 176u: goto L_0897AAD8;
    case 177u: goto L_0897AAF0;
    case 178u: goto L_0897AAF8;
    case 179u: goto L_0897AB00;
    case 180u: goto L_0897AB08;
    case 181u: goto L_0897AB10;
    case 182u: goto L_0897AB18;
    case 183u: goto L_0897AB2C;
    case 184u: goto L_0897AB54;
    case 185u: goto L_0897AB5C;
    case 186u: goto L_0897AB6C;
    case 187u: goto L_0897AB78;
    case 188u: goto L_0897ABF0;
    case 189u: goto L_0897ABFC;
    case 190u: goto L_0897AC04;
    case 191u: goto L_0897AC10;
    case 192u: goto L_0897AC18;
    case 193u: goto L_0897AC20;
    case 194u: goto L_0897AC2C;
    case 195u: goto L_0897AC38;
    case 196u: goto L_0897AC40;
    case 197u: goto L_0897AC4C;
    case 198u: goto L_0897AC54;
    case 199u: goto L_0897AC5C;
    case 200u: goto L_0897AC68;
    case 201u: goto L_0897AC70;
    case 202u: goto L_0897AC88;
    case 203u: goto L_0897AC98;
    case 204u: goto L_0897ACA0;
    case 205u: goto L_0897ACA8;
    case 206u: goto L_0897ACB8;
    case 207u: goto L_0897ACC0;
    case 208u: goto L_0897ACC8;
    case 209u: goto L_0897ACE0;
    case 210u: goto L_0897ACE8;
    case 211u: goto L_0897ACF4;
    case 212u: goto L_0897ACFC;
    case 213u: goto L_0897AD04;
    case 214u: goto L_0897AD0C;
    case 215u: goto L_0897AD14;
    case 216u: goto L_0897AD20;
    case 217u: goto L_0897AD28;
    case 218u: goto L_0897AD34;
    case 219u: goto L_0897AD3C;
    case 220u: goto L_0897AD44;
    case 221u: goto L_0897AD4C;
    case 222u: goto L_0897AD54;
    case 223u: goto L_0897AD60;
    case 224u: goto L_0897AD68;
    case 225u: goto L_0897AD7C;
    case 226u: goto L_0897AD90;
    case 227u: goto L_0897ADA8;
    case 228u: goto L_0897ADB8;
    case 229u: goto L_0897ADC8;
    case 230u: goto L_0897ADD4;
    case 231u: goto L_0897ADEC;
    case 232u: goto L_0897ADFC;
    case 233u: goto L_0897AE1C;
    case 234u: goto L_0897AE24;
    case 235u: goto L_0897AE34;
    case 236u: goto L_0897AE40;
    case 237u: goto L_0897AE50;
    case 238u: goto L_0897AE58;
    case 239u: goto L_0897AE7C;
    case 240u: goto L_0897AE84;
    case 241u: goto L_0897AE94;
    case 242u: goto L_0897AEA0;
    case 243u: goto L_0897AEA8;
    case 244u: goto L_0897AEB0;
    case 245u: goto L_0897AED4;
    case 246u: goto L_0897AEE8;
    case 247u: goto L_0897AEF4;
    case 248u: goto L_0897AEFC;
    case 249u: goto L_0897AF08;
    case 250u: goto L_0897AF10;
    case 251u: goto L_0897AF18;
    case 252u: goto L_0897AF38;
    case 253u: goto L_0897AF4C;
    case 254u: goto L_0897AF70;
    case 255u: goto L_0897AF78;
    case 256u: goto L_0897AF84;
    case 257u: goto L_0897AF90;
    case 258u: goto L_0897AF9C;
    case 259u: goto L_0897AFAC;
    case 260u: goto L_0897AFC0;
    case 261u: goto L_0897AFCC;
    case 262u: goto L_0897AFD4;
    case 263u: goto L_0897AFD8;
    case 264u: goto L_0897AFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0897A000:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20532));
    goto L_0897A004;
L_0897A004:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x0897A018u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-20512));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 127u, 0x0897985Cu>(ctx, &aot_mem) && ctx.pc == 0x0897A018u) goto L_0897A018;
    return;
L_0897A018:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(196));
    { const bool branch_taken = aot_gpr[16] != 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0897A02C;
      }
      goto L_0897A024;
    }
L_0897A024:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20488));
    goto L_0897A02C;
L_0897A02C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0897A03Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 115u, 0x08979768u>(ctx, &aot_mem) && ctx.pc == 0x0897A03Cu) goto L_0897A03C;
    return;
L_0897A03C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(356), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 512u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0897A058u);
    aot_gpr[7] = (0u | 0u);
    ctx.pc = 0x08A5B074u;
    return;
L_0897A058:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[2]);
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
L_0897A074:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897A0D0;
      }
      goto L_0897A090;
    }
L_0897A090:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7400));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(360), aot_gpr[4]);
    aot_gpr[31] = (0x0897A0A4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 193u, 0x08979DA0u>(ctx, &aot_mem) && ctx.pc == 0x0897A0A4u) goto L_0897A0A4;
    return;
L_0897A0A4:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(196));
    aot_gpr[31] = (0x0897A0B0u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 117u, 0x089797B0u>(ctx, &aot_mem) && ctx.pc == 0x0897A0B0u) goto L_0897A0B0;
    return;
L_0897A0B0:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x0897A0BCu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 156u, 0x08979A74u>(ctx, &aot_mem) && ctx.pc == 0x0897A0BCu) goto L_0897A0BC;
    return;
L_0897A0BC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A0D0;
      }
      goto L_0897A0C8;
    }
L_0897A0C8:
    aot_gpr[31] = (0x0897A0D0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x0897A0D0u) goto L_0897A0D0;
    return;
L_0897A0D0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A0E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0897A0F4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08A5AFD4u;
    return;
L_0897A0F4:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0897A104;
      }
      goto L_0897A0FC;
    }
L_0897A0FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 150u);
      if (branch_taken) {
          goto L_0897A108;
      }
      goto L_0897A104;
    }
L_0897A104:
    aot_gpr[2] = (0u | 0u);
    goto L_0897A108;
L_0897A108:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A114:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0897A128u);
    aot_gpr[5] = (~(aot_gpr[5] | 0u));
    ctx.pc = 0x08A5B0ACu;
    return;
L_0897A128:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0897A138;
      }
      goto L_0897A130;
    }
L_0897A130:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 150u);
      if (branch_taken) {
          goto L_0897A13C;
      }
      goto L_0897A138;
    }
L_0897A138:
    aot_gpr[2] = (0u | 0u);
    goto L_0897A13C;
L_0897A13C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A148:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (0u | 52u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    aot_gpr[31] = (0x0897A16Cu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = 0x08A5B0DCu;
    return;
L_0897A16C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0897A17C;
      }
      goto L_0897A174;
    }
L_0897A174:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 150u);
      if (branch_taken) {
          goto L_0897A188;
      }
      goto L_0897A17C;
    }
L_0897A17C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[2] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0897A188;
L_0897A188:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A198:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897A1C4u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A1C4u) goto L_0897A1C4;
    return;
L_0897A1C4:
    aot_gpr[31] = (0x0897A1CCu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 146u, 0x089799E0u>(ctx, &aot_mem) && ctx.pc == 0x0897A1CCu) goto L_0897A1CC;
    return;
L_0897A1CC:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A1E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(120));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897A208u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A208u) goto L_0897A208;
    return;
L_0897A208:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A258;
      }
      goto L_0897A210;
    }
L_0897A210:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_0897A21C;
L_0897A21C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897A228u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A228u) goto L_0897A228;
    return;
L_0897A228:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A258;
      }
      goto L_0897A230;
    }
L_0897A230:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(128));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897A248u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A248u) goto L_0897A248;
    return;
L_0897A248:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(360)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_0897A21C;
      }
      goto L_0897A258;
    }
L_0897A258:
    aot_gpr[31] = (0x0897A260u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0573_entry, 573u, 68u, 0x08A415E4u>(ctx, &aot_mem) && ctx.pc == 0x0897A260u) goto L_0897A260;
    return;
L_0897A260:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A274:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A27C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 151u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A284:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A28C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A29C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x0897A2CCu);
    aot_gpr[7] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A2CCu) goto L_0897A2CC;
    return;
L_0897A2CC:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A2DC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A314;
      }
      goto L_0897A2F0;
    }
L_0897A2F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897A300u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897A300u) goto L_0897A300;
    return;
L_0897A300:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897A310u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_0897A29C;
L_0897A310:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0897A314;
L_0897A314:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A324:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897A384;
      }
      goto L_0897A340;
    }
L_0897A340:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7544));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_0897A35C;
      }
      goto L_0897A354;
    }
L_0897A354:
    aot_gpr[31] = (0x0897A35Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0897A2DC;
L_0897A35C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_0897A374;
      }
      goto L_0897A364;
    }
L_0897A364:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26000));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_0897A374;
L_0897A374:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A384;
      }
      goto L_0897A37C;
    }
L_0897A37C:
    aot_gpr[31] = (0x0897A384u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x0897A384u) goto L_0897A384;
    return;
L_0897A384:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A398:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26312)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A3A8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26308)));
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A3B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0897A3CCu);
    aot_gpr[6] = (0u | 0u);
    goto L_0897A398;
L_0897A3CC:
    if (aot_gpr[2] != 0u) {
    aot_gpr[6] = (0u | 1u);
        goto L_0897A3E8;
    }
    goto L_0897A3D4;
L_0897A3D4:
    aot_gpr[31] = (0x0897A3DCu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    goto L_0897A3A8;
L_0897A3DC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A3E8;
      }
      goto L_0897A3E4;
    }
L_0897A3E4:
    aot_gpr[6] = (0u | 1u);
    goto L_0897A3E8;
L_0897A3E8:
    aot_gpr[2] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A3F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[19] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_0897A474;
      }
      goto L_0897A428;
    }
L_0897A428:
    aot_gpr[17] = (aot_gpr[18] << 2u);
    aot_gpr[17] = (aot_gpr[16] + aot_gpr[17]);
    goto L_0897A430;
L_0897A430:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(56)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(268)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897A450u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A450u) goto L_0897A450;
    return;
L_0897A450:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897A45Cu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    goto L_0897A29C;
L_0897A45C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(56), 0u);
    aot_gpr[18] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
    aot_gpr[19] = (aot_gpr[18] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0897A430;
      }
      goto L_0897A474;
    }
L_0897A474:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), 0u);
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
L_0897A498:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0897A4A8u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    goto L_0897A3B8;
L_0897A4A8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A4C4;
      }
      goto L_0897A4B0;
    }
L_0897A4B0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26316)));
    aot_gpr[5] = (aot_gpr[5] | 8u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26316), aot_gpr[5]);
      if (branch_taken) {
          goto L_0897A4CC;
      }
      goto L_0897A4C4;
    }
L_0897A4C4:
    aot_gpr[31] = (0x0897A4CCu);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_0897A3F8;
L_0897A4CC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A4D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(248)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A5CC;
      }
      goto L_0897A4FC;
    }
L_0897A4FC:
    aot_gpr[31] = (0x0897A504u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    ctx.pc = 0x08A5AE2Cu;
    return;
L_0897A504:
    aot_gpr[31] = (0x0897A50Cu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(252));
    ctx.pc = 0x08A5ADE4u;
    return;
L_0897A50C:
    aot_gpr[31] = (0x0897A514u);
    // nop
    ctx.pc = 0x08A5AE5Cu;
    return;
L_0897A514:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897A520u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897A520u) goto L_0897A520;
    return;
L_0897A520:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(248)));
    aot_gpr[31] = (0x0897A52Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_0897A29C;
L_0897A52C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(248), 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897A53Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897A53Cu) goto L_0897A53C;
    return;
L_0897A53C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(392)));
    aot_gpr[31] = (0x0897A548u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_0897A29C;
L_0897A548:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(392), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20588)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20592)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(404), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(400), aot_gpr[6]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0897A5C8;
      }
      goto L_0897A56C;
    }
L_0897A56C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x0897A588u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A588u) goto L_0897A588;
    return;
L_0897A588:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897A594u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897A594u) goto L_0897A594;
    return;
L_0897A594:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(380)));
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0897A5B8u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A5B8u) goto L_0897A5B8;
    return;
L_0897A5B8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0897A5C4u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_0897A29C;
L_0897A5C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0897A5C8;
L_0897A5C8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(380), 0u);
    goto L_0897A5CC;
L_0897A5CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A630;
      }
      goto L_0897A5D8;
    }
L_0897A5D8:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A630;
      }
      goto L_0897A5E0;
    }
L_0897A5E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(240)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0897A5F8u);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = 0x08A5B1FCu;
    return;
L_0897A5F8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A628;
      }
      goto L_0897A600;
    }
L_0897A600:
    aot_gpr[31] = (0x0897A608u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(240)));
    ctx.pc = 0x08A5B1CCu;
    return;
L_0897A608:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0897A620;
      }
      goto L_0897A614;
    }
L_0897A614:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897A630;
      }
      goto L_0897A620;
    }
L_0897A620:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 68u);
      if (branch_taken) {
          goto L_0897A6C0;
      }
      goto L_0897A628;
    }
L_0897A628:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 68u);
      if (branch_taken) {
          goto L_0897A6C0;
      }
      goto L_0897A630;
    }
L_0897A630:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A654;
      }
      goto L_0897A63C;
    }
L_0897A63C:
    aot_gpr[31] = (0x0897A644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0581_entry, 581u, 14u, 0x08A490E8u>(ctx, &aot_mem) && ctx.pc == 0x0897A644u) goto L_0897A644;
    return;
L_0897A644:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A654;
      }
      goto L_0897A64C;
    }
L_0897A64C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 65u);
      if (branch_taken) {
          goto L_0897A6C0;
      }
      goto L_0897A654;
    }
L_0897A654:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-26320)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A66C;
      }
      goto L_0897A664;
    }
L_0897A664:
    aot_gpr[31] = (0x0897A66Cu);
    // nop
    ctx.pc = 0x08A5AFECu;
    return;
L_0897A66C:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-26320), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A684;
      }
      goto L_0897A67C;
    }
L_0897A67C:
    aot_gpr[31] = (0x0897A684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 166u, 0x08A47D14u>(ctx, &aot_mem) && ctx.pc == 0x0897A684u) goto L_0897A684;
    return;
L_0897A684:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A6BC;
      }
      goto L_0897A690;
    }
L_0897A690:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897A6BC;
      }
      goto L_0897A69C;
    }
L_0897A69C:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897A6A8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897A6A8u) goto L_0897A6A8;
    return;
L_0897A6A8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(432)));
    aot_gpr[31] = (0x0897A6B4u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_0897A29C;
L_0897A6B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(432), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(436), 0u);
    goto L_0897A6BC;
L_0897A6BC:
    aot_gpr[2] = (0u | 0u);
    goto L_0897A6C0;
L_0897A6C0:
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
L_0897A6D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897A750;
      }
      goto L_0897A6F4;
    }
L_0897A6F4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(7608));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(440), aot_gpr[4]);
    aot_gpr[31] = (0x0897A708u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0897A498;
L_0897A708:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0897A714u);
    aot_gpr[5] = (0u | 0u);
    goto L_0897A4D8;
L_0897A714:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A738;
      }
      goto L_0897A720;
    }
L_0897A720:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897A72Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897A72Cu) goto L_0897A72C;
    return;
L_0897A72C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(76)));
    aot_gpr[31] = (0x0897A738u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_0897A29C;
L_0897A738:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(76), 0u);
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_0897A750;
      }
      goto L_0897A748;
    }
L_0897A748:
    aot_gpr[31] = (0x0897A750u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 141u, 0x08A2CEA4u>(ctx, &aot_mem) && ctx.pc == 0x0897A750u) goto L_0897A750;
    return;
L_0897A750:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A764:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26316)));
    aot_gpr[2] = (aot_gpr[4] & 24u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A778:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0897A798u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897A798u) goto L_0897A798;
    return;
L_0897A798:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (2216u << 16u);
      if (branch_taken) {
          goto L_0897A804;
      }
      goto L_0897A7A4;
    }
L_0897A7A4:
    aot_gpr[4] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-26316), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26312), 0u);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26308), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(440)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897A7DCu);
    aot_gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A7DCu) goto L_0897A7DC;
    return;
L_0897A7DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    aot_gpr[6] = (0u | 4u);
    aot_gpr[7] = (0u | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x0897A804u);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A804u) goto L_0897A804;
    return;
L_0897A804:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-26316), 0u);
    aot_gpr[2] = (0u | 0u);
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
L_0897A824:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897A858;
      }
      goto L_0897A830;
    }
L_0897A830:
    aot_gpr[4] = (aot_gpr[5] << 3u);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-26268));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_0897A870;
      }
      goto L_0897A858;
    }
L_0897A858:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20588)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20592)));
    aot_gpr[2] = (0u | 55u);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    goto L_0897A870;
L_0897A870:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A878:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A88C;
      }
      goto L_0897A884;
    }
L_0897A884:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_0897A8A0;
      }
      goto L_0897A88C;
    }
L_0897A88C:
    aot_gpr[4] = (aot_gpr[5] << 3u);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-26300));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_0897A8A0;
L_0897A8A0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A8A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    if (aot_gpr[6] != 0u) {
    aot_gpr[17] = (aot_gpr[6] | 0u);
        goto L_0897A8DC;
    }
    goto L_0897A8DC;
L_0897A8DC:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (0u | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x0897A8F4u);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897A8F4u) goto L_0897A8F4;
    return;
L_0897A8F4:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A910;
      }
      goto L_0897A900;
    }
L_0897A900:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897A910u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20424));
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 176u, 0x08A37EF0u>(ctx, &aot_mem) && ctx.pc == 0x0897A910u) goto L_0897A910;
    return;
L_0897A910:
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
L_0897A928:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897A94C;
      }
      goto L_0897A93C;
    }
L_0897A93C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), 0u);
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(244), aot_gpr[5]);
      if (branch_taken) {
          goto L_0897A9B4;
      }
      goto L_0897A94C;
    }
L_0897A94C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x0897A95Cu);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x0897A95Cu) goto L_0897A95C;
    return;
L_0897A95C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897A96Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897A96Cu) goto L_0897A96C;
    return;
L_0897A96C:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0897A97Cu);
    aot_gpr[6] = (0u | 4u);
    goto L_0897A8A8;
L_0897A97C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x0897A994u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0897A994u) goto L_0897A994;
    return;
L_0897A994:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[16]);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x0897A9ACu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 164u, 0x08980B10u>(ctx, &aot_mem) && ctx.pc == 0x0897A9ACu) goto L_0897A9AC;
    return;
L_0897A9AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(244), aot_gpr[2]);
    goto L_0897A9B4;
L_0897A9B4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897A9C4:
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0897A9E0;
      }
      goto L_0897A9D4;
    }
L_0897A9D4:
    aot_gpr[6] = (2216u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26220)));
      if (branch_taken) {
          goto L_0897A9E0;
      }
      goto L_0897A9E0;
    }
L_0897A9E0:
    aot_gpr[9] = (aot_gpr[6] | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
    goto L_0897A9EC;
L_0897A9EC:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AA24;
      }
      goto L_0897A9F4;
    }
L_0897A9F4:
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AA24;
      }
      goto L_0897AA00;
    }
L_0897AA00:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AA24;
      }
      goto L_0897AA08;
    }
L_0897AA08:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_gpr[10] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0897A9EC;
      }
      goto L_0897AA24;
    }
L_0897AA24:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AA3C;
      }
      goto L_0897AA2C;
    }
L_0897AA2C:
    aot_gpr[6] = (0u | 47u);
    aot_gpr[9] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_0897AA3C;
L_0897AA3C:
    aot_gpr[9] = (aot_gpr[7] | 0u);
    goto L_0897AA40;
L_0897AA40:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AA74;
      }
      goto L_0897AA48;
    }
L_0897AA48:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[8] < aot_gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0897AA74;
      }
      goto L_0897AA54;
    }
L_0897AA54:
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AA74;
      }
      goto L_0897AA5C;
    }
L_0897AA5C:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[6]));
      if (branch_taken) {
          goto L_0897AA40;
      }
      goto L_0897AA74;
    }
L_0897AA74:
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[8]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AA80:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(244)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0897AAB4;
      }
      goto L_0897AAA4;
    }
L_0897AAA4:
    aot_gpr[31] = (0x0897AAACu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0381_entry, 381u, 125u, 0x08981758u>(ctx, &aot_mem) && ctx.pc == 0x0897AAACu) goto L_0897AAAC;
    return;
L_0897AAAC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AB08;
      }
      goto L_0897AAB4;
    }
L_0897AAB4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0897AACCu);
    aot_gpr[6] = (0u | 0u);
    ctx.pc = 0x08A5B1F4u;
    return;
L_0897AACC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_0897AB00;
      }
      goto L_0897AAD8;
    }
L_0897AAD8:
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0897AAF0u);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = 0x08A5B1E4u;
    return;
L_0897AAF0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0897AB10;
      }
      goto L_0897AAF8;
    }
L_0897AAF8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 69u);
      if (branch_taken) {
          goto L_0897AB18;
      }
      goto L_0897AB00;
    }
L_0897AB00:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897AB18;
      }
      goto L_0897AB08;
    }
L_0897AB08:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0897AB18;
      }
      goto L_0897AB10;
    }
L_0897AB10:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    aot_gpr[2] = (0u | 0u);
    goto L_0897AB18;
L_0897AB18:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AB2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1040));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1024), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[7] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1028), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1032), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[17] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0897AB5C;
      }
      goto L_0897AB54;
    }
L_0897AB54:
    aot_gpr[5] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    goto L_0897AB5C;
L_0897AB5C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    if (aot_gpr[5] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0897AB78;
    }
    goto L_0897AB6C;
L_0897AB6C:
    aot_gpr[5] = (0u | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0897AB78;
L_0897AB78:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    aot_gpr[31] = (0x0897ABF0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0572_entry, 572u, 160u, 0x08A40A5Cu>(ctx, &aot_mem) && ctx.pc == 0x0897ABF0u) goto L_0897ABF0;
    return;
L_0897ABF0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AC98;
      }
      goto L_0897ABFC;
    }
L_0897ABFC:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897AC98;
      }
      goto L_0897AC04;
    }
L_0897AC04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (0x0897AC10u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0897A928;
L_0897AC10:
    aot_gpr[31] = (0x0897AC18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0380_entry, 380u, 199u, 0x08980D18u>(ctx, &aot_mem) && ctx.pc == 0x0897AC18u) goto L_0897AC18;
    return;
L_0897AC18:
    aot_gpr[31] = (0x0897AC20u);
    aot_gpr[4] = (0u | 768u);
    ctx.pc = 0x08A5ABE4u;
    return;
L_0897AC20:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_gpr[5] = (32785u << 16u);
      if (branch_taken) {
          goto L_0897AC38;
      }
      goto L_0897AC2C;
    }
L_0897AC2C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4354));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897AC54;
      }
      goto L_0897AC38;
    }
L_0897AC38:
    aot_gpr[31] = (0x0897AC40u);
    aot_gpr[4] = (0u | 771u);
    ctx.pc = 0x08A5ABE4u;
    return;
L_0897AC40:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    aot_gpr[5] = (32785u << 16u);
      if (branch_taken) {
          goto L_0897AC5C;
      }
      goto L_0897AC4C;
    }
L_0897AC4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AC70;
      }
      goto L_0897AC54;
    }
L_0897AC54:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 69u);
      if (branch_taken) {
          goto L_0897AD7C;
      }
      goto L_0897AC5C;
    }
L_0897AC5C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4354));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897AC70;
      }
      goto L_0897AC68;
    }
L_0897AC68:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 69u);
      if (branch_taken) {
          goto L_0897AD7C;
      }
      goto L_0897AC70;
    }
L_0897AC70:
    aot_gpr[7] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 1024u);
    aot_gpr[31] = (0x0897AC88u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-20464));
    goto L_0897A9C4;
L_0897AC88:
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(240));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897AC98u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    goto L_0897AA80;
L_0897AC98:
    aot_gpr[31] = (0x0897ACA0u);
    // nop
    ctx.pc = 0x08A5AE44u;
    return;
L_0897ACA0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897ACC0;
      }
      goto L_0897ACA8;
    }
L_0897ACA8:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-26320)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ACC8;
      }
      goto L_0897ACB8;
    }
L_0897ACB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ACE8;
      }
      goto L_0897ACC0;
    }
L_0897ACC0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 69u);
      if (branch_taken) {
          goto L_0897AD7C;
      }
      goto L_0897ACC8;
    }
L_0897ACC8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (2200u << 16u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-20452));
    aot_gpr[31] = (0x0897ACE0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-19772));
    ctx.pc = 0x08A5AFDCu;
    return;
L_0897ACE0:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-26320), aot_gpr[2]);
      if (branch_taken) {
          goto L_0897ACFC;
      }
      goto L_0897ACE8;
    }
L_0897ACE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897AD04;
      }
      goto L_0897ACF4;
    }
L_0897ACF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AD54;
      }
      goto L_0897ACFC;
    }
L_0897ACFC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 69u);
      if (branch_taken) {
          goto L_0897AD7C;
      }
      goto L_0897AD04;
    }
L_0897AD04:
    aot_gpr[31] = (0x0897AD0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0580_entry, 580u, 143u, 0x08A48EC8u>(ctx, &aot_mem) && ctx.pc == 0x0897AD0Cu) goto L_0897AD0C;
    return;
L_0897AD0C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897AD4C;
      }
      goto L_0897AD14;
    }
L_0897AD14:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897AD20u);
    aot_gpr[5] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0581_entry, 581u, 2u, 0x08A49010u>(ctx, &aot_mem) && ctx.pc == 0x0897AD20u) goto L_0897AD20;
    return;
L_0897AD20:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897AD44;
      }
      goto L_0897AD28;
    }
L_0897AD28:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897AD34u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0581_entry, 581u, 21u, 0x08A4916Cu>(ctx, &aot_mem) && ctx.pc == 0x0897AD34u) goto L_0897AD34;
    return;
L_0897AD34:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AD54;
      }
      goto L_0897AD3C;
    }
L_0897AD3C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 65u);
      if (branch_taken) {
          goto L_0897AD7C;
      }
      goto L_0897AD44;
    }
L_0897AD44:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 65u);
      if (branch_taken) {
          goto L_0897AD7C;
      }
      goto L_0897AD4C;
    }
L_0897AD4C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 65u);
      if (branch_taken) {
          goto L_0897AD7C;
      }
      goto L_0897AD54;
    }
L_0897AD54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AD68;
      }
      goto L_0897AD60;
    }
L_0897AD60:
    aot_gpr[31] = (0x0897AD68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0579_entry, 579u, 45u, 0x08A4726Cu>(ctx, &aot_mem) && ctx.pc == 0x0897AD68u) goto L_0897AD68;
    return;
L_0897AD68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(432), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(436), aot_gpr[5]);
    aot_gpr[2] = (0u | 0u);
    goto L_0897AD7C;
L_0897AD7C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1024)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1028)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1032)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1040));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AD90:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0897ADA8u);
    aot_gpr[5] = (0u | 1u);
    goto L_0897A4D8;
L_0897ADA8:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0897ADB8u);
    aot_gpr[6] = (0u | 1u);
    goto L_0897AB2C;
L_0897ADB8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897ADC8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0897ADEC;
      }
      goto L_0897ADD4;
    }
L_0897ADD4:
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(68), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_0897AE1C;
      }
      goto L_0897ADEC;
    }
L_0897ADEC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (aot_gpr[6] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AE1C;
      }
      goto L_0897ADFC;
    }
L_0897ADFC:
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[8] << 2u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_0897AE1C;
L_0897AE1C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AE24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0897AE34u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    goto L_0897ADC8;
L_0897AE34:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AE40:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(68)));
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_0897AE58;
      }
      goto L_0897AE50;
    }
L_0897AE50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AE7C;
      }
      goto L_0897AE58;
    }
L_0897AE58:
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(68));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[7] << 2u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(36), aot_gpr[5]);
    goto L_0897AE7C;
L_0897AE7C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AE84:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0897AE94u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(80));
    goto L_0897AE40;
L_0897AE94:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AEA0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AEA8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[5] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AEB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897AEFC;
      }
      goto L_0897AED4;
    }
L_0897AED4:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x0897AEE8u);
    aot_gpr[4] = (0u | 272u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 92u, 0x08979644u>(ctx, &aot_mem) && ctx.pc == 0x0897AEE8u) goto L_0897AEE8;
    return;
L_0897AEE8:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0897AF08;
      }
      goto L_0897AEF4;
    }
L_0897AEF4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_0897AF18;
      }
      goto L_0897AEFC;
    }
L_0897AEFC:
    aot_gpr[4] = (2215u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-20616)));
      if (branch_taken) {
          goto L_0897AF38;
      }
      goto L_0897AF08;
    }
L_0897AF08:
    aot_gpr[31] = (0x0897AF10u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0368_entry, 368u, 199u, 0x08974C44u>(ctx, &aot_mem) && ctx.pc == 0x0897AF10u) goto L_0897AF10;
    return;
L_0897AF10:
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    goto L_0897AF18;
L_0897AF18:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(60));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(56), aot_gpr[2]);
    goto L_0897AF38;
L_0897AF38:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897AF4C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(248)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0375_entry, 375u, 16u, 0x0897B10Cu>(ctx, &aot_mem); return;
      }
      goto L_0897AF70;
    }
L_0897AF70:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0375_entry, 375u, 16u, 0x0897B10Cu>(ctx, &aot_mem); return;
      }
      goto L_0897AF78;
    }
L_0897AF78:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897AF84u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897AF84u) goto L_0897AF84;
    return;
L_0897AF84:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    aot_gpr[31] = (0x0897AF90u);
    aot_gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 92u, 0x08979644u>(ctx, &aot_mem) && ctx.pc == 0x0897AF90u) goto L_0897AF90;
    return;
L_0897AF90:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(248), aot_gpr[2]);
    aot_gpr[31] = (0x0897AF9Cu);
    aot_gpr[4] = (0u | 0u);
    ctx.pc = 0x08A5AE94u;
    return;
L_0897AF9C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0897AFACu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 171u, 0x08979C10u>(ctx, &aot_mem) && ctx.pc == 0x0897AFACu) goto L_0897AFAC;
    return;
L_0897AFAC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[31] = (0x0897AFC0u);
    aot_gpr[4] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0373_entry, 373u, 92u, 0x08979644u>(ctx, &aot_mem) && ctx.pc == 0x0897AFC0u) goto L_0897AFC0;
    return;
L_0897AFC0:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0897AFD8;
      }
      goto L_0897AFCC;
    }
L_0897AFCC:
    aot_gpr[31] = (0x0897AFD4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0377_entry, 377u, 57u, 0x0897D494u>(ctx, &aot_mem) && ctx.pc == 0x0897AFD4u) goto L_0897AFD4;
    return;
L_0897AFD4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_0897AFD8;
L_0897AFD8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(380), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(52)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0897AFF8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897AFF8u) goto L_0897AFF8;
    return;
L_0897AFF8:
    aot_gpr[31] = (0x0897B000u);
    aot_gpr[4] = (0u | 1024u);
    ctx.pc = 0x08A5AEA4u;
    return;
}

void recomp_unit_0374(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0374_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_374(Runtime &runtime) {
    runtime.register_generated_unit(374u, 0x0897A000u, 4096u, &recomp_unit_0374, &recomp_unit_0374_entry);
    runtime.register_function(0x0897A000u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A004u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A018u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A024u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A02Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A03Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A058u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A074u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A090u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A0A4u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A0B0u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A0BCu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A0C8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A0D0u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A0E4u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A0F4u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A0FCu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A104u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A108u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A114u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A128u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A130u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A138u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A13Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A148u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A16Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A174u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A17Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A188u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A198u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A1C4u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A1CCu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A1E0u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A208u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A210u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A21Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A228u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A230u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A248u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A258u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A260u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A274u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A27Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A284u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A28Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A29Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A2CCu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A2DCu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A2F0u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A300u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A310u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A314u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A324u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A340u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A354u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A35Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A364u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A374u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A37Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A384u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A398u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A3A8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A3B8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A3CCu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A3D4u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A3DCu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A3E4u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A3E8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A3F8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A428u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A430u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A450u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A45Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A474u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A498u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A4A8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A4B0u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A4C4u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A4CCu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A4D8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A4FCu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A504u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A50Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A514u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A520u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A52Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A53Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A548u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A56Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A588u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A594u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A5B8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A5C4u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A5C8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A5CCu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A5D8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A5E0u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A5F8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A600u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A608u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A614u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A620u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A628u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A630u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A63Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A644u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A64Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A654u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A664u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A66Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A67Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A684u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A690u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A69Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A6A8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A6B4u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A6BCu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A6C0u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A6D8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A6F4u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A708u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A714u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A720u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A72Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A738u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A748u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A750u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A764u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A778u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A798u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A7A4u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A7DCu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A804u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A824u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A830u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A858u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A870u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A878u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A884u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A88Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A8A0u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A8A8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A8DCu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A8F4u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A900u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A910u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A928u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A93Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A94Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A95Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A96Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A97Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A994u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A9ACu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A9B4u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A9C4u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A9D4u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A9E0u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A9ECu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897A9F4u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AA00u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AA08u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AA24u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AA2Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AA3Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AA40u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AA48u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AA54u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AA5Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AA74u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AA80u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AAA4u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AAACu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AAB4u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AACCu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AAD8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AAF0u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AAF8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AB00u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AB08u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AB10u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AB18u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AB2Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AB54u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AB5Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AB6Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AB78u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897ABF0u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897ABFCu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AC04u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AC10u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AC18u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AC20u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AC2Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AC38u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AC40u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AC4Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AC54u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AC5Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AC68u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AC70u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AC88u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AC98u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897ACA0u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897ACA8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897ACB8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897ACC0u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897ACC8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897ACE0u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897ACE8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897ACF4u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897ACFCu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AD04u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AD0Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AD14u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AD20u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AD28u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AD34u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AD3Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AD44u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AD4Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AD54u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AD60u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AD68u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AD7Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AD90u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897ADA8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897ADB8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897ADC8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897ADD4u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897ADECu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897ADFCu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AE1Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AE24u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AE34u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AE40u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AE50u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AE58u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AE7Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AE84u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AE94u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AEA0u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AEA8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AEB0u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AED4u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AEE8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AEF4u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AEFCu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AF08u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AF10u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AF18u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AF38u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AF4Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AF70u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AF78u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AF84u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AF90u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AF9Cu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AFACu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AFC0u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AFCCu, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AFD4u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AFD8u, &recomp_unit_0374, "recomp_unit_0374");
    runtime.register_function(0x0897AFF8u, &recomp_unit_0374, "recomp_unit_0374");
}
} // namespace psprecomp
