#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0535[1021] = {
    1, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 10,
    0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0,
    0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 20, 0, 21, 0, 0, 22, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 28, 0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 0, 32, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0,
    0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 48, 0,
    0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 58, 59, 0, 60,
    0, 0, 61, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 71, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 75,
    0, 76, 0, 77, 0, 0, 78, 0, 79, 0, 0, 80, 0, 81, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 86, 0, 0,
    87, 0, 88, 0, 89, 0, 0, 90, 0, 91, 0, 0, 92, 0, 93, 0, 94, 0, 0, 95, 0, 96, 0, 0, 97, 0, 98, 0, 99, 0, 100, 0,
    101, 0, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0,
    111, 0, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0,
    119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 0,
    0, 124, 0, 125, 0, 126, 127, 0, 128, 0, 129, 130, 0, 0, 0, 0, 131, 0, 0, 132, 0, 133, 0, 134, 0, 0, 135, 0, 136, 0, 137, 0,
    0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 145, 0, 146,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 150, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0,
    0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0,
    171, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 179, 0,
    0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 0, 0, 186,
    0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 201, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 205, 0, 0, 206, 0, 207, 0, 208,
    0, 0, 209, 0, 0, 210, 0, 211, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 215, 0, 216, 0, 0, 217, 0, 218, 0,
    0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0,
    0, 225, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 230, 0, 231,
    0, 232, 0, 233, 234, 0, 0, 235, 0, 236, 0, 237, 238, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0,
    0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 244, 0, 0, 0, 245, 0, 246, 0, 0, 0, 247, 0, 248, 249, 0, 0, 0, 250, 0, 0, 0, 0,
    0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254,
};
void recomp_unit_0535_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A1B004u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0535[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A1B004;
    case 2u: goto L_08A1B014;
    case 3u: goto L_08A1B01C;
    case 4u: goto L_08A1B024;
    case 5u: goto L_08A1B040;
    case 6u: goto L_08A1B050;
    case 7u: goto L_08A1B05C;
    case 8u: goto L_08A1B06C;
    case 9u: goto L_08A1B074;
    case 10u: goto L_08A1B080;
    case 11u: goto L_08A1B090;
    case 12u: goto L_08A1B0BC;
    case 13u: goto L_08A1B0D8;
    case 14u: goto L_08A1B0E4;
    case 15u: goto L_08A1B0FC;
    case 16u: goto L_08A1B108;
    case 17u: goto L_08A1B120;
    case 18u: goto L_08A1B13C;
    case 19u: goto L_08A1B154;
    case 20u: goto L_08A1B18C;
    case 21u: goto L_08A1B194;
    case 22u: goto L_08A1B1A0;
    case 23u: goto L_08A1B1AC;
    case 24u: goto L_08A1B1B4;
    case 25u: goto L_08A1B1BC;
    case 26u: goto L_08A1B1D4;
    case 27u: goto L_08A1B1DC;
    case 28u: goto L_08A1B20C;
    case 29u: goto L_08A1B214;
    case 30u: goto L_08A1B21C;
    case 31u: goto L_08A1B224;
    case 32u: goto L_08A1B23C;
    case 33u: goto L_08A1B240;
    case 34u: goto L_08A1B248;
    case 35u: goto L_08A1B250;
    case 36u: goto L_08A1B258;
    case 37u: goto L_08A1B260;
    case 38u: goto L_08A1B26C;
    case 39u: goto L_08A1B278;
    case 40u: goto L_08A1B28C;
    case 41u: goto L_08A1B298;
    case 42u: goto L_08A1B2A4;
    case 43u: goto L_08A1B2C0;
    case 44u: goto L_08A1B2C8;
    case 45u: goto L_08A1B2E4;
    case 46u: goto L_08A1B2EC;
    case 47u: goto L_08A1B2F4;
    case 48u: goto L_08A1B2FC;
    case 49u: goto L_08A1B318;
    case 50u: goto L_08A1B320;
    case 51u: goto L_08A1B33C;
    case 52u: goto L_08A1B348;
    case 53u: goto L_08A1B350;
    case 54u: goto L_08A1B358;
    case 55u: goto L_08A1B360;
    case 56u: goto L_08A1B368;
    case 57u: goto L_08A1B370;
    case 58u: goto L_08A1B374;
    case 59u: goto L_08A1B378;
    case 60u: goto L_08A1B380;
    case 61u: goto L_08A1B38C;
    case 62u: goto L_08A1B390;
    case 63u: goto L_08A1B3B4;
    case 64u: goto L_08A1B404;
    case 65u: goto L_08A1B418;
    case 66u: goto L_08A1B444;
    case 67u: goto L_08A1B458;
    case 68u: goto L_08A1B464;
    case 69u: goto L_08A1B4B4;
    case 70u: goto L_08A1B4BC;
    case 71u: goto L_08A1B4C8;
    case 72u: goto L_08A1B4D0;
    case 73u: goto L_08A1B4DC;
    case 74u: goto L_08A1B4F4;
    case 75u: goto L_08A1B500;
    case 76u: goto L_08A1B508;
    case 77u: goto L_08A1B510;
    case 78u: goto L_08A1B51C;
    case 79u: goto L_08A1B524;
    case 80u: goto L_08A1B530;
    case 81u: goto L_08A1B538;
    case 82u: goto L_08A1B544;
    case 83u: goto L_08A1B54C;
    case 84u: goto L_08A1B564;
    case 85u: goto L_08A1B570;
    case 86u: goto L_08A1B578;
    case 87u: goto L_08A1B584;
    case 88u: goto L_08A1B58C;
    case 89u: goto L_08A1B594;
    case 90u: goto L_08A1B5A0;
    case 91u: goto L_08A1B5A8;
    case 92u: goto L_08A1B5B4;
    case 93u: goto L_08A1B5BC;
    case 94u: goto L_08A1B5C4;
    case 95u: goto L_08A1B5D0;
    case 96u: goto L_08A1B5D8;
    case 97u: goto L_08A1B5E4;
    case 98u: goto L_08A1B5EC;
    case 99u: goto L_08A1B5F4;
    case 100u: goto L_08A1B5FC;
    case 101u: goto L_08A1B604;
    case 102u: goto L_08A1B610;
    case 103u: goto L_08A1B61C;
    case 104u: goto L_08A1B62C;
    case 105u: goto L_08A1B638;
    case 106u: goto L_08A1B644;
    case 107u: goto L_08A1B654;
    case 108u: goto L_08A1B660;
    case 109u: goto L_08A1B66C;
    case 110u: goto L_08A1B678;
    case 111u: goto L_08A1B684;
    case 112u: goto L_08A1B694;
    case 113u: goto L_08A1B69C;
    case 114u: goto L_08A1B6AC;
    case 115u: goto L_08A1B6B8;
    case 116u: goto L_08A1B6C0;
    case 117u: goto L_08A1B6CC;
    case 118u: goto L_08A1B6F8;
    case 119u: goto L_08A1B704;
    case 120u: goto L_08A1B70C;
    case 121u: goto L_08A1B740;
    case 122u: goto L_08A1B76C;
    case 123u: goto L_08A1B77C;
    case 124u: goto L_08A1B788;
    case 125u: goto L_08A1B790;
    case 126u: goto L_08A1B798;
    case 127u: goto L_08A1B79C;
    case 128u: goto L_08A1B7A4;
    case 129u: goto L_08A1B7AC;
    case 130u: goto L_08A1B7B0;
    case 131u: goto L_08A1B7C4;
    case 132u: goto L_08A1B7D0;
    case 133u: goto L_08A1B7D8;
    case 134u: goto L_08A1B7E0;
    case 135u: goto L_08A1B7EC;
    case 136u: goto L_08A1B7F4;
    case 137u: goto L_08A1B7FC;
    case 138u: goto L_08A1B814;
    case 139u: goto L_08A1B828;
    case 140u: goto L_08A1B830;
    case 141u: goto L_08A1B844;
    case 142u: goto L_08A1B84C;
    case 143u: goto L_08A1B860;
    case 144u: goto L_08A1B870;
    case 145u: goto L_08A1B878;
    case 146u: goto L_08A1B880;
    case 147u: goto L_08A1B894;
    case 148u: goto L_08A1B8AC;
    case 149u: goto L_08A1B8C0;
    case 150u: goto L_08A1B8D0;
    case 151u: goto L_08A1B8D4;
    case 152u: goto L_08A1B8F4;
    case 153u: goto L_08A1B944;
    case 154u: goto L_08A1B94C;
    case 155u: goto L_08A1B958;
    case 156u: goto L_08A1B960;
    case 157u: goto L_08A1B96C;
    case 158u: goto L_08A1B97C;
    case 159u: goto L_08A1B98C;
    case 160u: goto L_08A1B99C;
    case 161u: goto L_08A1B9B4;
    case 162u: goto L_08A1B9C0;
    case 163u: goto L_08A1B9D0;
    case 164u: goto L_08A1B9DC;
    case 165u: goto L_08A1B9F0;
    case 166u: goto L_08A1BA14;
    case 167u: goto L_08A1BA30;
    case 168u: goto L_08A1BA38;
    case 169u: goto L_08A1BA4C;
    case 170u: goto L_08A1BA68;
    case 171u: goto L_08A1BA84;
    case 172u: goto L_08A1BA8C;
    case 173u: goto L_08A1BA9C;
    case 174u: goto L_08A1BAAC;
    case 175u: goto L_08A1BAC0;
    case 176u: goto L_08A1BACC;
    case 177u: goto L_08A1BADC;
    case 178u: goto L_08A1BAE8;
    case 179u: goto L_08A1BAFC;
    case 180u: goto L_08A1BB18;
    case 181u: goto L_08A1BB34;
    case 182u: goto L_08A1BB3C;
    case 183u: goto L_08A1BB58;
    case 184u: goto L_08A1BB64;
    case 185u: goto L_08A1BB6C;
    case 186u: goto L_08A1BB80;
    case 187u: goto L_08A1BB88;
    case 188u: goto L_08A1BBA0;
    case 189u: goto L_08A1BBBC;
    case 190u: goto L_08A1BBC4;
    case 191u: goto L_08A1BBF4;
    case 192u: goto L_08A1BC18;
    case 193u: goto L_08A1BC30;
    case 194u: goto L_08A1BC38;
    case 195u: goto L_08A1BC4C;
    case 196u: goto L_08A1BC60;
    case 197u: goto L_08A1BC74;
    case 198u: goto L_08A1BC88;
    case 199u: goto L_08A1BC9C;
    case 200u: goto L_08A1BCB0;
    case 201u: goto L_08A1BCB8;
    case 202u: goto L_08A1BCC0;
    case 203u: goto L_08A1BCC8;
    case 204u: goto L_08A1BCDC;
    case 205u: goto L_08A1BCE4;
    case 206u: goto L_08A1BCF0;
    case 207u: goto L_08A1BCF8;
    case 208u: goto L_08A1BD00;
    case 209u: goto L_08A1BD0C;
    case 210u: goto L_08A1BD18;
    case 211u: goto L_08A1BD20;
    case 212u: goto L_08A1BD2C;
    case 213u: goto L_08A1BD40;
    case 214u: goto L_08A1BD58;
    case 215u: goto L_08A1BD60;
    case 216u: goto L_08A1BD68;
    case 217u: goto L_08A1BD74;
    case 218u: goto L_08A1BD7C;
    case 219u: goto L_08A1BD88;
    case 220u: goto L_08A1BD90;
    case 221u: goto L_08A1BDB0;
    case 222u: goto L_08A1BDCC;
    case 223u: goto L_08A1BDE4;
    case 224u: goto L_08A1BDFC;
    case 225u: goto L_08A1BE08;
    case 226u: goto L_08A1BE10;
    case 227u: goto L_08A1BE24;
    case 228u: goto L_08A1BE64;
    case 229u: goto L_08A1BE6C;
    case 230u: goto L_08A1BE78;
    case 231u: goto L_08A1BE80;
    case 232u: goto L_08A1BE88;
    case 233u: goto L_08A1BE90;
    case 234u: goto L_08A1BE94;
    case 235u: goto L_08A1BEA0;
    case 236u: goto L_08A1BEA8;
    case 237u: goto L_08A1BEB0;
    case 238u: goto L_08A1BEB4;
    case 239u: goto L_08A1BEC8;
    case 240u: goto L_08A1BED4;
    case 241u: goto L_08A1BEF8;
    case 242u: goto L_08A1BF18;
    case 243u: goto L_08A1BF24;
    case 244u: goto L_08A1BF2C;
    case 245u: goto L_08A1BF3C;
    case 246u: goto L_08A1BF44;
    case 247u: goto L_08A1BF54;
    case 248u: goto L_08A1BF5C;
    case 249u: goto L_08A1BF60;
    case 250u: goto L_08A1BF70;
    case 251u: goto L_08A1BF90;
    case 252u: goto L_08A1BFB0;
    case 253u: goto L_08A1BFD8;
    case 254u: goto L_08A1BFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A1B004:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(5384));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0534_entry, 534u, 216u, 0x08A1AFC4u>(ctx, &aot_mem); return;
      }
      goto L_08A1B014;
    }
L_08A1B014:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_08A1B090;
      }
      goto L_08A1B01C;
    }
L_08A1B01C:
    { const bool branch_taken = aot_gpr[18] == aot_gpr[4];
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(5384));
      if (branch_taken) {
          goto L_08A1B090;
      }
      goto L_08A1B024;
    }
L_08A1B024:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(68));
    aot_gpr[6] = (0u | 2560u);
    aot_gpr[18] = (ctx.lo);
    aot_gpr[18] = (aot_gpr[16] + aot_gpr[18]);
    aot_gpr[31] = (0x08A1B040u);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(5452));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A1B040u) goto L_08A1B040;
    return;
L_08A1B040:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(10572)));
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(2628));
      if (branch_taken) {
          goto L_08A1B074;
      }
      goto L_08A1B050;
    }
L_08A1B050:
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(8012));
    aot_gpr[31] = (0x08A1B05Cu);
    aot_gpr[6] = (0u | 2560u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A1B05Cu) goto L_08A1B05C;
    return;
L_08A1B05C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1B06Cu);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0534_entry, 534u, 187u, 0x08A1AD9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B06Cu) goto L_08A1B06C;
    return;
L_08A1B06C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B090;
      }
      goto L_08A1B074;
    }
L_08A1B074:
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A1B080u);
    aot_gpr[6] = (0u | 2560u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B080u) goto L_08A1B080;
    return;
L_08A1B080:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1B090u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0534_entry, 534u, 187u, 0x08A1AD9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B090u) goto L_08A1B090;
    return;
L_08A1B090:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1B0BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A1B0D8u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 168u, 0x08A00B34u>(ctx, &aot_mem) && ctx.pc == 0x08A1B0D8u) goto L_08A1B0D8;
    return;
L_08A1B0D8:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B13C;
      }
      goto L_08A1B0E4;
    }
L_08A1B0E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1B0FCu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1B0FCu) goto L_08A1B0FC;
    return;
L_08A1B0FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A1B13C;
      }
      goto L_08A1B108;
    }
L_08A1B108:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(88));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1B120u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1B120u) goto L_08A1B120;
    return;
L_08A1B120:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(64), aot_gpr[2]);
    aot_gpr[2] = (0u | 1u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1B13C:
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
L_08A1B154:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A1B1DC;
      }
      goto L_08A1B18C;
    }
L_08A1B18C:
    aot_gpr[31] = (0x08A1B194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A1B194u) goto L_08A1B194;
    return;
L_08A1B194:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x08A1B1A0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 21u, 0x089FE1C0u>(ctx, &aot_mem) && ctx.pc == 0x08A1B1A0u) goto L_08A1B1A0;
    return;
L_08A1B1A0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08A1B20C;
      }
      goto L_08A1B1AC;
    }
L_08A1B1AC:
    aot_gpr[31] = (0x08A1B1B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A1B1B4u) goto L_08A1B1B4;
    return;
L_08A1B1B4:
    aot_gpr[31] = (0x08A1B1BCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 8u, 0x089FF04Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B1BCu) goto L_08A1B1BC;
    return;
L_08A1B1BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1B1D4u);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1B1D4u) goto L_08A1B1D4;
    return;
L_08A1B1D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A1B240;
      }
      goto L_08A1B1DC;
    }
L_08A1B1DC:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6220), aot_gpr[17]);
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
L_08A1B20C:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A1B240;
      }
      goto L_08A1B214;
    }
L_08A1B214:
    aot_gpr[31] = (0x08A1B21Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A1B21Cu) goto L_08A1B21C;
    return;
L_08A1B21C:
    aot_gpr[31] = (0x08A1B224u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0507_entry, 507u, 7u, 0x089FF044u>(ctx, &aot_mem) && ctx.pc == 0x08A1B224u) goto L_08A1B224;
    return;
L_08A1B224:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1B23Cu);
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1B23Cu) goto L_08A1B23C;
    return;
L_08A1B23C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    goto L_08A1B240;
L_08A1B240:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A1B390;
      }
      goto L_08A1B248;
    }
L_08A1B248:
    aot_gpr[31] = (0x08A1B250u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0534_entry, 534u, 71u, 0x08A1A5ECu>(ctx, &aot_mem) && ctx.pc == 0x08A1B250u) goto L_08A1B250;
    return;
L_08A1B250:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A1B390;
      }
      goto L_08A1B258;
    }
L_08A1B258:
    aot_gpr[31] = (0x08A1B260u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0534_entry, 534u, 84u, 0x08A1A6B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1B260u) goto L_08A1B260;
    return;
L_08A1B260:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1B26Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0534_entry, 534u, 165u, 0x08A1AC48u>(ctx, &aot_mem) && ctx.pc == 0x08A1B26Cu) goto L_08A1B26C;
    return;
L_08A1B26C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1B278u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    goto L_08A1B0BC;
L_08A1B278:
    aot_gpr[21] = (1u << 16u);
    aot_gpr[20] = (1u << 16u);
    aot_gpr[21] = (aot_gpr[16] + aot_gpr[21]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[20] = (aot_gpr[16] + aot_gpr[20]);
      if (branch_taken) {
          goto L_08A1B298;
      }
      goto L_08A1B28C;
    }
L_08A1B28C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1B298u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0534_entry, 534u, 205u, 0x08A1AECCu>(ctx, &aot_mem) && ctx.pc == 0x08A1B298u) goto L_08A1B298;
    return;
L_08A1B298:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-6244)));
    { const bool branch_taken = aot_gpr[21] != aot_gpr[17];
    aot_gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08A1B2EC;
      }
      goto L_08A1B2A4;
    }
L_08A1B2A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1B2C0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1B2C0u) goto L_08A1B2C0;
    return;
L_08A1B2C0:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-6216)));
        goto L_08A1B378;
    }
    goto L_08A1B2C8;
L_08A1B2C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(96));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1B2E4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1B2E4u) goto L_08A1B2E4;
    return;
L_08A1B2E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A1B374;
      }
      goto L_08A1B2EC;
    }
L_08A1B2EC:
    { const bool branch_taken = aot_gpr[21] != aot_gpr[4];
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08A1B348;
      }
      goto L_08A1B2F4;
    }
L_08A1B2F4:
    aot_gpr[31] = (0x08A1B2FCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0534_entry, 534u, 135u, 0x08A1AA18u>(ctx, &aot_mem) && ctx.pc == 0x08A1B2FCu) goto L_08A1B2FC;
    return;
L_08A1B2FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(216));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1B318u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1B318u) goto L_08A1B318;
    return;
L_08A1B318:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-6216)));
        goto L_08A1B378;
    }
    goto L_08A1B320;
L_08A1B320:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(216));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1B33Cu);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1B33Cu) goto L_08A1B33C;
    return;
L_08A1B33C:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A1B374;
      }
      goto L_08A1B348;
    }
L_08A1B348:
    if (aot_gpr[21] != aot_gpr[4]) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-6216)));
        goto L_08A1B378;
    }
    goto L_08A1B350;
L_08A1B350:
    aot_gpr[31] = (0x08A1B358u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0534_entry, 534u, 141u, 0x08A1AAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A1B358u) goto L_08A1B358;
    return;
L_08A1B358:
    aot_gpr[31] = (0x08A1B360u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0537_entry, 537u, 117u, 0x08A1D7BCu>(ctx, &aot_mem) && ctx.pc == 0x08A1B360u) goto L_08A1B360;
    return;
L_08A1B360:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-6216)));
        goto L_08A1B378;
    }
    goto L_08A1B368;
L_08A1B368:
    aot_gpr[31] = (0x08A1B370u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0537_entry, 537u, 117u, 0x08A1D7BCu>(ctx, &aot_mem) && ctx.pc == 0x08A1B370u) goto L_08A1B370;
    return;
L_08A1B370:
    aot_gpr[18] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    goto L_08A1B374;
L_08A1B374:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-6216)));
    goto L_08A1B378;
L_08A1B378:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A1B390;
      }
      goto L_08A1B380;
    }
L_08A1B380:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A1B38Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    goto L_08A1B8F4;
L_08A1B38C:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-6216), 0u);
    goto L_08A1B390;
L_08A1B390:
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
L_08A1B3B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[8]);
    aot_gpr[17] = (aot_gpr[11] | 0u);
    aot_gpr[16] = (aot_gpr[10] | 0u);
    aot_gpr[20] = (aot_gpr[7] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[31]);
    aot_gpr[31] = (0x08A1B404u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0534_entry, 534u, 67u, 0x08A1A518u>(ctx, &aot_mem) && ctx.pc == 0x08A1B404u) goto L_08A1B404;
    return;
L_08A1B404:
    aot_gpr[21] = (aot_gpr[18] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A1B418u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x08A1B418u) goto L_08A1B418;
    return;
L_08A1B418:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[5] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[18] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[21]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A1B464;
      }
      goto L_08A1B444;
    }
L_08A1B444:
    aot_gpr[4] = (0u | 59324u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1B458u);
    aot_gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A1B458u) goto L_08A1B458;
    return;
L_08A1B458:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-5952), aot_gpr[17]);
    goto L_08A1B464;
L_08A1B464:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-5948), aot_gpr[19]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (1u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-892));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[30] = (2215u << 16u);
    aot_gpr[23] = (2215u << 16u);
    aot_gpr[22] = (2215u << 16u);
    aot_gpr[21] = (2215u << 16u);
    aot_gpr[20] = (2215u << 16u);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-880));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-864));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(-848));
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(-836));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-904));
    goto L_08A1B4B4;
L_08A1B4B4:
    aot_gpr[31] = (0x08A1B4BCu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 138u, 0x08A06870u>(ctx, &aot_mem) && ctx.pc == 0x08A1B4BCu) goto L_08A1B4BC;
    return;
L_08A1B4BC:
    aot_gpr[4] = (aot_gpr[17] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A1B604;
      }
      goto L_08A1B4C8;
    }
L_08A1B4C8:
    aot_gpr[31] = (0x08A1B4D0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x08A1B4D0u) goto L_08A1B4D0;
    return;
L_08A1B4D0:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B5FC;
      }
      goto L_08A1B4DC;
    }
L_08A1B4DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1B4F4u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1B4F4u) goto L_08A1B4F4;
    return;
L_08A1B4F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08A1B500u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B500u) goto L_08A1B500;
    return;
L_08A1B500:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(28), aot_gpr[16]);
        goto L_08A1B508;
    }
    goto L_08A1B508;
L_08A1B508:
    aot_gpr[31] = (0x08A1B510u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 222u, 0x08A00E64u>(ctx, &aot_mem) && ctx.pc == 0x08A1B510u) goto L_08A1B510;
    return;
L_08A1B510:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A1B51Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B51Cu) goto L_08A1B51C;
    return;
L_08A1B51C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B530;
      }
      goto L_08A1B524;
    }
L_08A1B524:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6216), aot_gpr[5]);
    goto L_08A1B530;
L_08A1B530:
    aot_gpr[31] = (0x08A1B538u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 222u, 0x08A00E64u>(ctx, &aot_mem) && ctx.pc == 0x08A1B538u) goto L_08A1B538;
    return;
L_08A1B538:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A1B544u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B544u) goto L_08A1B544;
    return;
L_08A1B544:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B570;
      }
      goto L_08A1B54C;
    }
L_08A1B54C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1B564u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1B564u) goto L_08A1B564;
    return;
L_08A1B564:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A1B570u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B570u) goto L_08A1B570;
    return;
L_08A1B570:
    aot_gpr[31] = (0x08A1B578u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 222u, 0x08A00E64u>(ctx, &aot_mem) && ctx.pc == 0x08A1B578u) goto L_08A1B578;
    return;
L_08A1B578:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A1B584u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B584u) goto L_08A1B584;
    return;
L_08A1B584:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B5A0;
      }
      goto L_08A1B58C;
    }
L_08A1B58C:
    aot_gpr[31] = (0x08A1B594u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 8u, 0x08A01064u>(ctx, &aot_mem) && ctx.pc == 0x08A1B594u) goto L_08A1B594;
    return;
L_08A1B594:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-6228), static_cast<std::uint8_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_08A1B5FC;
      }
      goto L_08A1B5A0;
    }
L_08A1B5A0:
    aot_gpr[31] = (0x08A1B5A8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 222u, 0x08A00E64u>(ctx, &aot_mem) && ctx.pc == 0x08A1B5A8u) goto L_08A1B5A8;
    return;
L_08A1B5A8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A1B5B4u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B5B4u) goto L_08A1B5B4;
    return;
L_08A1B5B4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B5D0;
      }
      goto L_08A1B5BC;
    }
L_08A1B5BC:
    aot_gpr[31] = (0x08A1B5C4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 8u, 0x08A01064u>(ctx, &aot_mem) && ctx.pc == 0x08A1B5C4u) goto L_08A1B5C4;
    return;
L_08A1B5C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-6227), static_cast<std::uint8_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_08A1B5FC;
      }
      goto L_08A1B5D0;
    }
L_08A1B5D0:
    aot_gpr[31] = (0x08A1B5D8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 222u, 0x08A00E64u>(ctx, &aot_mem) && ctx.pc == 0x08A1B5D8u) goto L_08A1B5D8;
    return;
L_08A1B5D8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A1B5E4u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B5E4u) goto L_08A1B5E4;
    return;
L_08A1B5E4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B5FC;
      }
      goto L_08A1B5EC;
    }
L_08A1B5EC:
    aot_gpr[31] = (0x08A1B5F4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 8u, 0x08A01064u>(ctx, &aot_mem) && ctx.pc == 0x08A1B5F4u) goto L_08A1B5F4;
    return;
L_08A1B5F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-6226), static_cast<std::uint8_t>(aot_gpr[2]));
    goto L_08A1B5FC;
L_08A1B5FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A1B4B4;
      }
      goto L_08A1B604;
    }
L_08A1B604:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x08A1B610u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 8u, 0x08A01064u>(ctx, &aot_mem) && ctx.pc == 0x08A1B610u) goto L_08A1B610;
    return;
L_08A1B610:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(-6228)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    aot_gpr[5] = (1u << 16u);
      if (branch_taken) {
          goto L_08A1B62C;
      }
      goto L_08A1B61C;
    }
L_08A1B61C:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (aot_gpr[18] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-6244), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A1B678;
      }
      goto L_08A1B62C;
    }
L_08A1B62C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x08A1B638u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 8u, 0x08A01064u>(ctx, &aot_mem) && ctx.pc == 0x08A1B638u) goto L_08A1B638;
    return;
L_08A1B638:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(-6227)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    aot_gpr[5] = (1u << 16u);
      if (branch_taken) {
          goto L_08A1B654;
      }
      goto L_08A1B644;
    }
L_08A1B644:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (aot_gpr[18] + aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-6244), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A1B678;
      }
      goto L_08A1B654;
    }
L_08A1B654:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x08A1B660u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 8u, 0x08A01064u>(ctx, &aot_mem) && ctx.pc == 0x08A1B660u) goto L_08A1B660;
    return;
L_08A1B660:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(-6226)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    aot_gpr[5] = (1u << 16u);
      if (branch_taken) {
          goto L_08A1B678;
      }
      goto L_08A1B66C;
    }
L_08A1B66C:
    aot_gpr[4] = (0u | 3u);
    aot_gpr[5] = (aot_gpr[18] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-6244), aot_gpr[4]);
    goto L_08A1B678;
L_08A1B678:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1B6CC;
      }
      goto L_08A1B684;
    }
L_08A1B684:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1B694u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-824));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B694u) goto L_08A1B694;
    return;
L_08A1B694:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A1B6AC;
      }
      goto L_08A1B69C;
    }
L_08A1B69C:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-6240), aot_gpr[16]);
      if (branch_taken) {
          goto L_08A1B6CC;
      }
      goto L_08A1B6AC;
    }
L_08A1B6AC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1B6B8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-812));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B6B8u) goto L_08A1B6B8;
    return;
L_08A1B6B8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (1u << 16u);
      if (branch_taken) {
          goto L_08A1B6CC;
      }
      goto L_08A1B6C0;
    }
L_08A1B6C0:
    aot_gpr[4] = (0u | 2u);
    aot_gpr[5] = (aot_gpr[18] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-6240), aot_gpr[4]);
    goto L_08A1B6CC;
L_08A1B6CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (1u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[18] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-6236), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(72));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1B6F8u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1B6F8u) goto L_08A1B6F8;
    return;
L_08A1B6F8:
    aot_gpr[4] = (0u | 9u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A1B70C;
      }
      goto L_08A1B704;
    }
L_08A1B704:
    aot_gpr[31] = (0x08A1B70Cu);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0534_entry, 534u, 214u, 0x08A1AF68u>(ctx, &aot_mem) && ctx.pc == 0x08A1B70Cu) goto L_08A1B70C;
    return;
L_08A1B70C:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1B740:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A1B8D4;
      }
      goto L_08A1B76C;
    }
L_08A1B76C:
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 18 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (0u | 27u);
      if (branch_taken) {
          goto L_08A1B79C;
      }
      goto L_08A1B77C;
    }
L_08A1B77C:
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A1B8D4;
      }
      goto L_08A1B788;
    }
L_08A1B788:
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (1u << 16u);
      if (branch_taken) {
          goto L_08A1B7B0;
      }
      goto L_08A1B790;
    }
L_08A1B790:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
      if (branch_taken) {
          goto L_08A1B84C;
      }
      goto L_08A1B798;
    }
L_08A1B798:
    aot_gpr[5] = (0u | 27u);
    goto L_08A1B79C;
L_08A1B79C:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[4] = (1u << 16u);
      if (branch_taken) {
          goto L_08A1B880;
      }
      goto L_08A1B7A4;
    }
L_08A1B7A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B8D4;
      }
      goto L_08A1B7AC;
    }
L_08A1B7AC:
    aot_gpr[4] = (1u << 16u);
    goto L_08A1B7B0;
L_08A1B7B0:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6244)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08A1B7D8;
      }
      goto L_08A1B7C4;
    }
L_08A1B7C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[16];
    aot_gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08A1B7D8;
      }
      goto L_08A1B7D0;
    }
L_08A1B7D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1B8D4;
      }
      goto L_08A1B7D8;
    }
L_08A1B7D8:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1B7F4;
      }
      goto L_08A1B7E0;
    }
L_08A1B7E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[16];
    aot_gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1B7F4;
      }
      goto L_08A1B7EC;
    }
L_08A1B7EC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1B8D4;
      }
      goto L_08A1B7F4;
    }
L_08A1B7F4:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A1B8D4;
      }
      goto L_08A1B7FC;
    }
L_08A1B7FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1B814u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1B814u) goto L_08A1B814;
    return;
L_08A1B814:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-916)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A1B8D4;
      }
      goto L_08A1B828;
    }
L_08A1B828:
    aot_gpr[31] = (0x08A1B830u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 8u, 0x08A01064u>(ctx, &aot_mem) && ctx.pc == 0x08A1B830u) goto L_08A1B830;
    return;
L_08A1B830:
    aot_gpr[4] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-6227)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A1B8D4;
      }
      goto L_08A1B844;
    }
L_08A1B844:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1B8D4;
      }
      goto L_08A1B84C;
    }
L_08A1B84C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1B860u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1B860u) goto L_08A1B860;
    return;
L_08A1B860:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A1B870u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-864));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 203u, 0x08A3AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B870u) goto L_08A1B870;
    return;
L_08A1B870:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B8D4;
      }
      goto L_08A1B878;
    }
L_08A1B878:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1B8D4;
      }
      goto L_08A1B880;
    }
L_08A1B880:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6244)));
    aot_gpr[19] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A1B8D4;
      }
      goto L_08A1B894;
    }
L_08A1B894:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1B8ACu);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1B8ACu) goto L_08A1B8AC;
    return;
L_08A1B8AC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-916)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (1u << 16u);
      if (branch_taken) {
          goto L_08A1B8D4;
      }
      goto L_08A1B8C0;
    }
L_08A1B8C0:
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-6240)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A1B8D4;
      }
      goto L_08A1B8D0;
    }
L_08A1B8D0:
    aot_gpr[18] = (0u | 1u);
    goto L_08A1B8D4;
L_08A1B8D4:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_08A1B8F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    aot_gpr[21] = (1u << 16u);
    aot_gpr[23] = (1u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[20] = (0u | 0u);
    aot_gpr[21] = (aot_gpr[4] + aot_gpr[21]);
    aot_gpr[23] = (aot_gpr[4] + aot_gpr[23]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[22] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    goto L_08A1B944;
L_08A1B944:
    aot_gpr[31] = (0x08A1B94Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 138u, 0x08A06870u>(ctx, &aot_mem) && ctx.pc == 0x08A1B94Cu) goto L_08A1B94C;
    return;
L_08A1B94C:
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A1BBC4;
      }
      goto L_08A1B958;
    }
L_08A1B958:
    aot_gpr[31] = (0x08A1B960u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0514_entry, 514u, 139u, 0x08A06878u>(ctx, &aot_mem) && ctx.pc == 0x08A1B960u) goto L_08A1B960;
    return;
L_08A1B960:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BBBC;
      }
      goto L_08A1B96C;
    }
L_08A1B96C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(-6220)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A1BA8C;
      }
      goto L_08A1B97C;
    }
L_08A1B97C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1B98Cu);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1B98Cu) goto L_08A1B98C;
    return;
L_08A1B98C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-804)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A1BBBC;
      }
      goto L_08A1B99C;
    }
L_08A1B99C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1B9B4u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1B9B4u) goto L_08A1B9B4;
    return;
L_08A1B9B4:
    aot_gpr[30] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08A1B9C0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A1B9C0u) goto L_08A1B9C0;
    return;
L_08A1B9C0:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1B9D0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A1B9D0u) goto L_08A1B9D0;
    return;
L_08A1B9D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(120));
      if (branch_taken) {
          goto L_08A1BA38;
      }
      goto L_08A1B9DC;
    }
L_08A1B9DC:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1B9F0u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1B9F0u) goto L_08A1B9F0;
    return;
L_08A1B9F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-6244)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (aot_gpr[5] ^ 3u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1BA14u);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1BA14u) goto L_08A1BA14;
    return;
L_08A1BA14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1BA30u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1BA30u) goto L_08A1BA30;
    return;
L_08A1BA30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BBBC;
      }
      goto L_08A1BA38;
    }
L_08A1BA38:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1BA4Cu);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1BA4Cu) goto L_08A1BA4C;
    return;
L_08A1BA4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1BA68u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1BA68u) goto L_08A1BA68;
    return;
L_08A1BA68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1BA84u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1BA84u) goto L_08A1BA84;
    return;
L_08A1BA84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BBBC;
      }
      goto L_08A1BA8C;
    }
L_08A1BA8C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1BA9Cu);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1BA9Cu) goto L_08A1BA9C;
    return;
L_08A1BA9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-804)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
      if (branch_taken) {
          goto L_08A1BB88;
      }
      goto L_08A1BAAC;
    }
L_08A1BAAC:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1BAC0u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1BAC0u) goto L_08A1BAC0;
    return;
L_08A1BAC0:
    aot_gpr[30] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (0x08A1BACCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A1BACCu) goto L_08A1BACC;
    return;
L_08A1BACC:
    aot_gpr[4] = (aot_gpr[30] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1BADCu);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 251u, 0x08A3ACCCu>(ctx, &aot_mem) && ctx.pc == 0x08A1BADCu) goto L_08A1BADC;
    return;
L_08A1BADC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(120));
      if (branch_taken) {
          goto L_08A1BB6C;
      }
      goto L_08A1BAE8;
    }
L_08A1BAE8:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1BAFCu);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1BAFCu) goto L_08A1BAFC;
    return;
L_08A1BAFC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1BB18u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1BB18u) goto L_08A1BB18;
    return;
L_08A1BB18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1BB34u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1BB34u) goto L_08A1BB34;
    return;
L_08A1BB34:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BBBC;
      }
      goto L_08A1BB3C;
    }
L_08A1BB3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1BB58u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1BB58u) goto L_08A1BB58;
    return;
L_08A1BB58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BBBC;
      }
      goto L_08A1BB64;
    }
L_08A1BB64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A1BBBC;
      }
      goto L_08A1BB6C;
    }
L_08A1BB6C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1BB80u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1BB80u) goto L_08A1BB80;
    return;
L_08A1BB80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BBBC;
      }
      goto L_08A1BB88;
    }
L_08A1BB88:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1BBA0u);
    aot_gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1BBA0u) goto L_08A1BBA0;
    return;
L_08A1BBA0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1BBBCu);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1BBBCu) goto L_08A1BBBC;
    return;
L_08A1BBBC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A1B944;
      }
      goto L_08A1BBC4;
    }
L_08A1BBC4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1BBF4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A1BC18u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 215u, 0x08A46CCCu>(ctx, &aot_mem) && ctx.pc == 0x08A1BC18u) goto L_08A1BC18;
    return;
L_08A1BC18:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16272));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(460));
    aot_gpr[31] = (0x08A1BC30u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 75u, 0x08A46458u>(ctx, &aot_mem) && ctx.pc == 0x08A1BC30u) goto L_08A1BC30;
    return;
L_08A1BC30:
    aot_gpr[31] = (0x08A1BC38u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0536_entry, 536u, 15u, 0x08A1C0F4u>(ctx, &aot_mem) && ctx.pc == 0x08A1BC38u) goto L_08A1BC38;
    return;
L_08A1BC38:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(320));
    aot_gpr[31] = (0x08A1BC4Cu);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-792));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1BC4Cu) goto L_08A1BC4C;
    return;
L_08A1BC4C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1BC60u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1BC60u) goto L_08A1BC60;
    return;
L_08A1BC60:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(328));
    aot_gpr[31] = (0x08A1BC74u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-780));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1BC74u) goto L_08A1BC74;
    return;
L_08A1BC74:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A1BC88u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1BC88u) goto L_08A1BC88;
    return;
L_08A1BC88:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(324));
    aot_gpr[31] = (0x08A1BC9Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-764));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 103u, 0x08A0063Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1BC9Cu) goto L_08A1BC9C;
    return;
L_08A1BC9C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A1BCB0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-756));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A1BCB0u) goto L_08A1BCB0;
    return;
L_08A1BCB0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(332));
      if (branch_taken) {
          goto L_08A1BCC0;
      }
      goto L_08A1BCB8;
    }
L_08A1BCB8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(304), aot_gpr[4]);
    goto L_08A1BCC0;
L_08A1BCC0:
    aot_gpr[31] = (0x08A1BCC8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0536_entry, 536u, 13u, 0x08A1C0D8u>(ctx, &aot_mem) && ctx.pc == 0x08A1BCC8u) goto L_08A1BCC8;
    return;
L_08A1BCC8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A1BCDCu);
    aot_gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1BCDCu) goto L_08A1BCDC;
    return;
L_08A1BCDC:
    aot_gpr[31] = (0x08A1BCE4u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1BCE4u) goto L_08A1BCE4;
    return;
L_08A1BCE4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1BCF0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1BCF0u) goto L_08A1BCF0;
    return;
L_08A1BCF0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BD88;
      }
      goto L_08A1BCF8;
    }
L_08A1BCF8:
    aot_gpr[31] = (0x08A1BD00u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A1BD00u) goto L_08A1BD00;
    return;
L_08A1BD00:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A1BD0Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1BD0Cu) goto L_08A1BD0C;
    return;
L_08A1BD0C:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BD88;
      }
      goto L_08A1BD18;
    }
L_08A1BD18:
    aot_gpr[31] = (0x08A1BD20u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A1BD20u) goto L_08A1BD20;
    return;
L_08A1BD20:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A1BD7C;
      }
      goto L_08A1BD2C;
    }
L_08A1BD2C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (0u | 74u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1BD40u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-744));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 110u, 0x089F05E8u>(ctx, &aot_mem) && ctx.pc == 0x08A1BD40u) goto L_08A1BD40;
    return;
L_08A1BD40:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(127), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1BD58u);
    aot_gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A1BD58u) goto L_08A1BD58;
    return;
L_08A1BD58:
    aot_gpr[31] = (0x08A1BD60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A1BD60u) goto L_08A1BD60;
    return;
L_08A1BD60:
    aot_gpr[31] = (0x08A1BD68u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1BD68u) goto L_08A1BD68;
    return;
L_08A1BD68:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A1BD74u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A1BD74u) goto L_08A1BD74;
    return;
L_08A1BD74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BD88;
      }
      goto L_08A1BD7C;
    }
L_08A1BD7C:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1BD88u);
    aot_gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A1BD88u) goto L_08A1BD88;
    return;
L_08A1BD88:
    aot_gpr[31] = (0x08A1BD90u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 49u, 0x089EF294u>(ctx, &aot_mem) && ctx.pc == 0x08A1BD90u) goto L_08A1BD90;
    return;
L_08A1BD90:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A1BDB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A1BE10;
      }
      goto L_08A1BDCC;
    }
L_08A1BDCC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16272));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(460));
    aot_gpr[31] = (0x08A1BDE4u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 87u, 0x08A46520u>(ctx, &aot_mem) && ctx.pc == 0x08A1BDE4u) goto L_08A1BDE4;
    return;
L_08A1BDE4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26304));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A1BDFCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A1BDFCu) goto L_08A1BDFC;
    return;
L_08A1BDFC:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BE10;
      }
      goto L_08A1BE08;
    }
L_08A1BE08:
    aot_gpr[31] = (0x08A1BE10u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A1BE10u) goto L_08A1BE10;
    return;
L_08A1BE10:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1BE24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A1BE64u);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1BE64u) goto L_08A1BE64;
    return;
L_08A1BE64:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A1BF90;
      }
      goto L_08A1BE6C;
    }
L_08A1BE6C:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1BE78u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1BE78u) goto L_08A1BE78;
    return;
L_08A1BE78:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A1BE94;
      }
      goto L_08A1BE80;
    }
L_08A1BE80:
    aot_gpr[31] = (0x08A1BE88u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0536_entry, 536u, 13u, 0x08A1C0D8u>(ctx, &aot_mem) && ctx.pc == 0x08A1BE88u) goto L_08A1BE88;
    return;
L_08A1BE88:
    if (aot_gpr[2] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A1BEB4;
    }
    goto L_08A1BE90;
L_08A1BE90:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A1BE94;
L_08A1BE94:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1BEA0u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1BEA0u) goto L_08A1BEA0;
    return;
L_08A1BEA0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A1BF60;
      }
      goto L_08A1BEA8;
    }
L_08A1BEA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A1BF18;
      }
      goto L_08A1BEB0;
    }
L_08A1BEB0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A1BEB4;
L_08A1BEB4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x08A1BEC8u);
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0536_entry, 536u, 9u, 0x08A1C0A0u>(ctx, &aot_mem) && ctx.pc == 0x08A1BEC8u) goto L_08A1BEC8;
    return;
L_08A1BEC8:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A1BED4u);
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0536_entry, 536u, 11u, 0x08A1C0BCu>(ctx, &aot_mem) && ctx.pc == 0x08A1BED4u) goto L_08A1BED4;
    return;
L_08A1BED4:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08A1BEF8u);
    aot_gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1BEF8u) goto L_08A1BEF8;
    return;
L_08A1BEF8:
    aot_gpr[2] = (0u | 0u);
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
L_08A1BF18:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1BF24u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1BF24u) goto L_08A1BF24;
    return;
L_08A1BF24:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A1BF60;
      }
      goto L_08A1BF2C;
    }
L_08A1BF2C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1BF3Cu);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1BF3Cu) goto L_08A1BF3C;
    return;
L_08A1BF3C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A1BF60;
      }
      goto L_08A1BF44;
    }
L_08A1BF44:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A1BF54u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A1BF54u) goto L_08A1BF54;
    return;
L_08A1BF54:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BF90;
      }
      goto L_08A1BF5C;
    }
L_08A1BF5C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_08A1BF60;
L_08A1BF60:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08A1BF70u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 11u, 0x08A0107Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1BF70u) goto L_08A1BF70;
    return;
L_08A1BF70:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
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
L_08A1BF90:
    aot_gpr[2] = (0u | 1u);
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
L_08A1BFB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(332));
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08A1BFD8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A1BFD8u) goto L_08A1BFD8;
    return;
L_08A1BFD8:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(328)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(320)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0536_entry, 536u, 2u, 0x08A1C00Cu>(ctx, &aot_mem); return;
      }
      goto L_08A1BFF4;
    }
L_08A1BFF4:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A1C004u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 59u, 0x08A0E384u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0535(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0535_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_535(Runtime &runtime) {
    runtime.register_generated_unit(535u, 0x08A1B000u, 4096u, &recomp_unit_0535, &recomp_unit_0535_entry);
    runtime.register_function(0x08A1B004u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B014u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B01Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B024u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B040u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B050u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B05Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B06Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B074u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B080u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B090u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B0BCu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B0D8u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B0E4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B0FCu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B108u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B120u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B13Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B154u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B18Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B194u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B1A0u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B1ACu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B1B4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B1BCu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B1D4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B1DCu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B20Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B214u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B21Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B224u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B23Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B240u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B248u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B250u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B258u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B260u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B26Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B278u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B28Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B298u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B2A4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B2C0u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B2C8u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B2E4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B2ECu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B2F4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B2FCu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B318u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B320u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B33Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B348u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B350u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B358u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B360u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B368u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B370u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B374u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B378u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B380u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B38Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B390u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B3B4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B404u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B418u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B444u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B458u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B464u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B4B4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B4BCu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B4C8u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B4D0u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B4DCu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B4F4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B500u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B508u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B510u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B51Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B524u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B530u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B538u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B544u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B54Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B564u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B570u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B578u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B584u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B58Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B594u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B5A0u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B5A8u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B5B4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B5BCu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B5C4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B5D0u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B5D8u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B5E4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B5ECu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B5F4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B5FCu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B604u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B610u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B61Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B62Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B638u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B644u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B654u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B660u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B66Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B678u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B684u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B694u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B69Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B6ACu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B6B8u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B6C0u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B6CCu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B6F8u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B704u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B70Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B740u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B76Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B77Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B788u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B790u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B798u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B79Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B7A4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B7ACu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B7B0u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B7C4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B7D0u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B7D8u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B7E0u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B7ECu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B7F4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B7FCu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B814u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B828u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B830u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B844u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B84Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B860u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B870u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B878u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B880u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B894u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B8ACu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B8C0u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B8D0u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B8D4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B8F4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B944u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B94Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B958u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B960u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B96Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B97Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B98Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B99Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B9B4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B9C0u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B9D0u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B9DCu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1B9F0u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BA14u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BA30u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BA38u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BA4Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BA68u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BA84u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BA8Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BA9Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BAACu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BAC0u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BACCu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BADCu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BAE8u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BAFCu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BB18u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BB34u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BB3Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BB58u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BB64u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BB6Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BB80u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BB88u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BBA0u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BBBCu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BBC4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BBF4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BC18u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BC30u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BC38u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BC4Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BC60u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BC74u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BC88u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BC9Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BCB0u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BCB8u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BCC0u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BCC8u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BCDCu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BCE4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BCF0u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BCF8u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BD00u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BD0Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BD18u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BD20u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BD2Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BD40u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BD58u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BD60u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BD68u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BD74u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BD7Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BD88u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BD90u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BDB0u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BDCCu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BDE4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BDFCu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BE08u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BE10u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BE24u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BE64u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BE6Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BE78u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BE80u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BE88u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BE90u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BE94u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BEA0u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BEA8u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BEB0u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BEB4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BEC8u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BED4u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BEF8u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BF18u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BF24u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BF2Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BF3Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BF44u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BF54u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BF5Cu, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BF60u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BF70u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BF90u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BFB0u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BFD8u, &recomp_unit_0535, "recomp_unit_0535");
    runtime.register_function(0x08A1BFF4u, &recomp_unit_0535, "recomp_unit_0535");
}
} // namespace psprecomp
