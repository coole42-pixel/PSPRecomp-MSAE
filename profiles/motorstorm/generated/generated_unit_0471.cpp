#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0471[1021] = {
    1, 2, 0, 0, 0, 3, 4, 0, 0, 0, 5, 6, 0, 0, 7, 8, 0, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0,
    13, 14, 0, 15, 0, 16, 0, 0, 0, 17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 24, 0,
    0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0, 31,
    0, 32, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0,
    0, 46, 0, 47, 48, 49, 0, 50, 51, 0, 52, 0, 53, 54, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0,
    0, 0, 60, 0, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 65, 0, 66, 0, 67, 0, 68, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71,
    0, 72, 0, 0, 0, 0, 73, 74, 0, 75, 0, 76, 0, 0, 77, 78, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 81, 0, 0, 0, 82, 0,
    0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 86, 0, 87, 0, 0, 0, 88, 89, 0, 90, 0, 0, 91, 0, 92, 0, 93, 0,
    0, 94, 0, 95, 0, 0, 96, 0, 97, 0, 0, 98, 99, 0, 0, 100, 0, 101, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 106, 0,
    0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 113, 0, 0,
    114, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 119, 0, 120, 0, 121, 0, 0, 122, 0, 123, 0, 124, 0,
    0, 0, 0, 125, 0, 126, 0, 127, 0, 0, 0, 0, 0, 128, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0,
    0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 136, 0, 0, 0, 137, 0, 138, 0, 139, 0, 0,
    0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 144, 0, 145, 0, 146, 147, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0,
    153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 157, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0,
    0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0,
    0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183,
    0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 189,
    0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 192, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 197, 0, 198,
    0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 216, 0, 0, 217, 0, 0, 0, 0, 218, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222,
    0, 0, 223, 0, 0, 224, 0, 225, 0, 0, 226, 0, 0, 227, 0, 228, 0, 229, 0, 0, 230, 0, 231, 232, 0, 233, 234, 0, 0, 0, 235, 0,
    0, 236, 0, 237, 0, 0, 238, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 242, 243, 0, 0, 244, 0, 245, 0, 246, 0, 0, 247, 0,
    0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 252, 0, 0, 253, 254, 0, 0, 255, 0, 0, 0, 0,
    256, 0, 0, 0, 257, 0, 258, 0, 259, 0, 260, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 265, 0,
    0, 0, 266, 0, 267, 0, 268, 0, 0, 0, 0, 0, 269, 0, 270, 0, 271, 0, 272, 0, 0, 273, 0, 274, 0, 275, 0, 276, 277, 0, 278, 0,
    279, 0, 280, 0, 0, 281, 0, 282, 0, 283, 0, 284, 0, 0, 285, 0, 286, 0, 0, 0, 287, 288, 0, 289, 0, 290, 0, 0, 291,
};
void recomp_unit_0471_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x089DB000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0471[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089DB000;
    case 2u: goto L_089DB004;
    case 3u: goto L_089DB014;
    case 4u: goto L_089DB018;
    case 5u: goto L_089DB028;
    case 6u: goto L_089DB02C;
    case 7u: goto L_089DB038;
    case 8u: goto L_089DB03C;
    case 9u: goto L_089DB048;
    case 10u: goto L_089DB054;
    case 11u: goto L_089DB064;
    case 12u: goto L_089DB070;
    case 13u: goto L_089DB080;
    case 14u: goto L_089DB084;
    case 15u: goto L_089DB08C;
    case 16u: goto L_089DB094;
    case 17u: goto L_089DB0A4;
    case 18u: goto L_089DB0AC;
    case 19u: goto L_089DB0B4;
    case 20u: goto L_089DB0BC;
    case 21u: goto L_089DB0C4;
    case 22u: goto L_089DB0E0;
    case 23u: goto L_089DB0F4;
    case 24u: goto L_089DB0F8;
    case 25u: goto L_089DB110;
    case 26u: goto L_089DB11C;
    case 27u: goto L_089DB134;
    case 28u: goto L_089DB154;
    case 29u: goto L_089DB15C;
    case 30u: goto L_089DB170;
    case 31u: goto L_089DB17C;
    case 32u: goto L_089DB184;
    case 33u: goto L_089DB18C;
    case 34u: goto L_089DB194;
    case 35u: goto L_089DB1B4;
    case 36u: goto L_089DB1BC;
    case 37u: goto L_089DB1D0;
    case 38u: goto L_089DB1DC;
    case 39u: goto L_089DB220;
    case 40u: goto L_089DB228;
    case 41u: goto L_089DB230;
    case 42u: goto L_089DB244;
    case 43u: goto L_089DB250;
    case 44u: goto L_089DB26C;
    case 45u: goto L_089DB278;
    case 46u: goto L_089DB284;
    case 47u: goto L_089DB28C;
    case 48u: goto L_089DB290;
    case 49u: goto L_089DB294;
    case 50u: goto L_089DB29C;
    case 51u: goto L_089DB2A0;
    case 52u: goto L_089DB2A8;
    case 53u: goto L_089DB2B0;
    case 54u: goto L_089DB2B4;
    case 55u: goto L_089DB2C4;
    case 56u: goto L_089DB2CC;
    case 57u: goto L_089DB2E8;
    case 58u: goto L_089DB2F0;
    case 59u: goto L_089DB2F8;
    case 60u: goto L_089DB308;
    case 61u: goto L_089DB314;
    case 62u: goto L_089DB31C;
    case 63u: goto L_089DB324;
    case 64u: goto L_089DB32C;
    case 65u: goto L_089DB338;
    case 66u: goto L_089DB340;
    case 67u: goto L_089DB348;
    case 68u: goto L_089DB350;
    case 69u: goto L_089DB354;
    case 70u: goto L_089DB364;
    case 71u: goto L_089DB37C;
    case 72u: goto L_089DB384;
    case 73u: goto L_089DB398;
    case 74u: goto L_089DB39C;
    case 75u: goto L_089DB3A4;
    case 76u: goto L_089DB3AC;
    case 77u: goto L_089DB3B8;
    case 78u: goto L_089DB3BC;
    case 79u: goto L_089DB3D0;
    case 80u: goto L_089DB3E0;
    case 81u: goto L_089DB3E8;
    case 82u: goto L_089DB3F8;
    case 83u: goto L_089DB408;
    case 84u: goto L_089DB418;
    case 85u: goto L_089DB42C;
    case 86u: goto L_089DB438;
    case 87u: goto L_089DB440;
    case 88u: goto L_089DB450;
    case 89u: goto L_089DB454;
    case 90u: goto L_089DB45C;
    case 91u: goto L_089DB468;
    case 92u: goto L_089DB470;
    case 93u: goto L_089DB478;
    case 94u: goto L_089DB484;
    case 95u: goto L_089DB48C;
    case 96u: goto L_089DB498;
    case 97u: goto L_089DB4A0;
    case 98u: goto L_089DB4AC;
    case 99u: goto L_089DB4B0;
    case 100u: goto L_089DB4BC;
    case 101u: goto L_089DB4C4;
    case 102u: goto L_089DB4CC;
    case 103u: goto L_089DB4D8;
    case 104u: goto L_089DB4E4;
    case 105u: goto L_089DB4F0;
    case 106u: goto L_089DB4F8;
    case 107u: goto L_089DB50C;
    case 108u: goto L_089DB514;
    case 109u: goto L_089DB538;
    case 110u: goto L_089DB554;
    case 111u: goto L_089DB560;
    case 112u: goto L_089DB56C;
    case 113u: goto L_089DB574;
    case 114u: goto L_089DB580;
    case 115u: goto L_089DB594;
    case 116u: goto L_089DB59C;
    case 117u: goto L_089DB5B4;
    case 118u: goto L_089DB5BC;
    case 119u: goto L_089DB5CC;
    case 120u: goto L_089DB5D4;
    case 121u: goto L_089DB5DC;
    case 122u: goto L_089DB5E8;
    case 123u: goto L_089DB5F0;
    case 124u: goto L_089DB5F8;
    case 125u: goto L_089DB60C;
    case 126u: goto L_089DB614;
    case 127u: goto L_089DB61C;
    case 128u: goto L_089DB634;
    case 129u: goto L_089DB63C;
    case 130u: goto L_089DB644;
    case 131u: goto L_089DB658;
    case 132u: goto L_089DB668;
    case 133u: goto L_089DB684;
    case 134u: goto L_089DB690;
    case 135u: goto L_089DB6D0;
    case 136u: goto L_089DB6D4;
    case 137u: goto L_089DB6E4;
    case 138u: goto L_089DB6EC;
    case 139u: goto L_089DB6F4;
    case 140u: goto L_089DB714;
    case 141u: goto L_089DB71C;
    case 142u: goto L_089DB72C;
    case 143u: goto L_089DB738;
    case 144u: goto L_089DB740;
    case 145u: goto L_089DB748;
    case 146u: goto L_089DB750;
    case 147u: goto L_089DB754;
    case 148u: goto L_089DB758;
    case 149u: goto L_089DB760;
    case 150u: goto L_089DB768;
    case 151u: goto L_089DB770;
    case 152u: goto L_089DB778;
    case 153u: goto L_089DB780;
    case 154u: goto L_089DB790;
    case 155u: goto L_089DB7A8;
    case 156u: goto L_089DB7B0;
    case 157u: goto L_089DB7C0;
    case 158u: goto L_089DB7C8;
    case 159u: goto L_089DB7D0;
    case 160u: goto L_089DB7FC;
    case 161u: goto L_089DB838;
    case 162u: goto L_089DB848;
    case 163u: goto L_089DB854;
    case 164u: goto L_089DB860;
    case 165u: goto L_089DB86C;
    case 166u: goto L_089DB878;
    case 167u: goto L_089DB884;
    case 168u: goto L_089DB88C;
    case 169u: goto L_089DB894;
    case 170u: goto L_089DB89C;
    case 171u: goto L_089DB8A4;
    case 172u: goto L_089DB8B0;
    case 173u: goto L_089DB8BC;
    case 174u: goto L_089DB8E0;
    case 175u: goto L_089DB8E8;
    case 176u: goto L_089DB904;
    case 177u: goto L_089DB94C;
    case 178u: goto L_089DB964;
    case 179u: goto L_089DB9B4;
    case 180u: goto L_089DB9C0;
    case 181u: goto L_089DB9D0;
    case 182u: goto L_089DB9DC;
    case 183u: goto L_089DB9FC;
    case 184u: goto L_089DBA04;
    case 185u: goto L_089DBA1C;
    case 186u: goto L_089DBA50;
    case 187u: goto L_089DBA58;
    case 188u: goto L_089DBA64;
    case 189u: goto L_089DBA7C;
    case 190u: goto L_089DBA94;
    case 191u: goto L_089DBAA8;
    case 192u: goto L_089DBAB0;
    case 193u: goto L_089DBAB4;
    case 194u: goto L_089DBAC0;
    case 195u: goto L_089DBAE8;
    case 196u: goto L_089DBAF0;
    case 197u: goto L_089DBAF4;
    case 198u: goto L_089DBAFC;
    case 199u: goto L_089DBB1C;
    case 200u: goto L_089DBB24;
    case 201u: goto L_089DBB70;
    case 202u: goto L_089DBB88;
    case 203u: goto L_089DBB90;
    case 204u: goto L_089DBB98;
    case 205u: goto L_089DBBA0;
    case 206u: goto L_089DBBB8;
    case 207u: goto L_089DBBC0;
    case 208u: goto L_089DBBC8;
    case 209u: goto L_089DBBCC;
    case 210u: goto L_089DBBE8;
    case 211u: goto L_089DBBF4;
    case 212u: goto L_089DBC10;
    case 213u: goto L_089DBC1C;
    case 214u: goto L_089DBC48;
    case 215u: goto L_089DBC50;
    case 216u: goto L_089DBC58;
    case 217u: goto L_089DBC64;
    case 218u: goto L_089DBC78;
    case 219u: goto L_089DBC90;
    case 220u: goto L_089DBCC0;
    case 221u: goto L_089DBCD0;
    case 222u: goto L_089DBCFC;
    case 223u: goto L_089DBD08;
    case 224u: goto L_089DBD14;
    case 225u: goto L_089DBD1C;
    case 226u: goto L_089DBD28;
    case 227u: goto L_089DBD34;
    case 228u: goto L_089DBD3C;
    case 229u: goto L_089DBD44;
    case 230u: goto L_089DBD50;
    case 231u: goto L_089DBD58;
    case 232u: goto L_089DBD5C;
    case 233u: goto L_089DBD64;
    case 234u: goto L_089DBD68;
    case 235u: goto L_089DBD78;
    case 236u: goto L_089DBD84;
    case 237u: goto L_089DBD8C;
    case 238u: goto L_089DBD98;
    case 239u: goto L_089DBDA0;
    case 240u: goto L_089DBDAC;
    case 241u: goto L_089DBDB8;
    case 242u: goto L_089DBDCC;
    case 243u: goto L_089DBDD0;
    case 244u: goto L_089DBDDC;
    case 245u: goto L_089DBDE4;
    case 246u: goto L_089DBDEC;
    case 247u: goto L_089DBDF8;
    case 248u: goto L_089DBE08;
    case 249u: goto L_089DBE10;
    case 250u: goto L_089DBE34;
    case 251u: goto L_089DBE48;
    case 252u: goto L_089DBE50;
    case 253u: goto L_089DBE5C;
    case 254u: goto L_089DBE60;
    case 255u: goto L_089DBE6C;
    case 256u: goto L_089DBE80;
    case 257u: goto L_089DBE90;
    case 258u: goto L_089DBE98;
    case 259u: goto L_089DBEA0;
    case 260u: goto L_089DBEA8;
    case 261u: goto L_089DBEB4;
    case 262u: goto L_089DBEBC;
    case 263u: goto L_089DBED8;
    case 264u: goto L_089DBEE4;
    case 265u: goto L_089DBEF8;
    case 266u: goto L_089DBF08;
    case 267u: goto L_089DBF10;
    case 268u: goto L_089DBF18;
    case 269u: goto L_089DBF30;
    case 270u: goto L_089DBF38;
    case 271u: goto L_089DBF40;
    case 272u: goto L_089DBF48;
    case 273u: goto L_089DBF54;
    case 274u: goto L_089DBF5C;
    case 275u: goto L_089DBF64;
    case 276u: goto L_089DBF6C;
    case 277u: goto L_089DBF70;
    case 278u: goto L_089DBF78;
    case 279u: goto L_089DBF80;
    case 280u: goto L_089DBF88;
    case 281u: goto L_089DBF94;
    case 282u: goto L_089DBF9C;
    case 283u: goto L_089DBFA4;
    case 284u: goto L_089DBFAC;
    case 285u: goto L_089DBFB8;
    case 286u: goto L_089DBFC0;
    case 287u: goto L_089DBFD0;
    case 288u: goto L_089DBFD4;
    case 289u: goto L_089DBFDC;
    case 290u: goto L_089DBFE4;
    case 291u: goto L_089DBFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089DB000:
    aot_gpr[2] = (2217u << 16u);
    goto L_089DB004;
L_089DB004:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089DB2F0;
      }
      goto L_089DB014;
    }
L_089DB014:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089DB018;
L_089DB018:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-4));
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(260)));
        goto L_089DB2CC;
    }
    goto L_089DB028;
L_089DB028:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    goto L_089DB02C;
L_089DB02C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    if (aot_gpr[4] == aot_gpr[5]) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_089DB080;
    }
    goto L_089DB038;
L_089DB038:
    aot_gpr[2] = (aot_gpr[5] - aot_gpr[4]);
    goto L_089DB03C;
L_089DB03C:
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 222u, 0x089DAD7Cu>(ctx, &aot_mem); return;
      }
      goto L_089DB048;
    }
L_089DB048:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[2] + aot_gpr[4]);
      if (branch_taken) {
          goto L_089DB498;
      }
      goto L_089DB054;
    }
L_089DB054:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[3] & 4096u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DB31C;
      }
      goto L_089DB064;
    }
L_089DB064:
    aot_gpr[2] = (aot_gpr[3] & 8192u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[6] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089DB478;
      }
      goto L_089DB070;
    }
L_089DB070:
    aot_gpr[3] = (aot_gpr[3] & 65535u);
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[3]))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089DB338;
      }
      goto L_089DB080;
    }
L_089DB080:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), 0u);
    goto L_089DB084;
L_089DB084:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 222u, 0x089DAD7Cu>(ctx, &aot_mem); return;
      }
      goto L_089DB08C;
    }
L_089DB08C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 223u, 0x089DAD80u>(ctx, &aot_mem); return;
      }
      goto L_089DB094;
    }
L_089DB094:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 222u, 0x089DAD7Cu>(ctx, &aot_mem); return;
      }
      goto L_089DB0A4;
    }
L_089DB0A4:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 222u, 0x089DAD7Cu>(ctx, &aot_mem); return;
      }
      goto L_089DB0AC;
    }
L_089DB0AC:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 222u, 0x089DAD7Cu>(ctx, &aot_mem); return;
      }
      goto L_089DB0B4;
    }
L_089DB0B4:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 222u, 0x089DAD7Cu>(ctx, &aot_mem); return;
      }
      goto L_089DB0BC;
    }
L_089DB0BC:
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 222u, 0x089DAD7Cu>(ctx, &aot_mem); return;
      }
      goto L_089DB0C4;
    }
L_089DB0C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(112)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(2792)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[5]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DB4F0;
      }
      goto L_089DB0E0;
    }
L_089DB0E0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 223u, 0x089DAD80u>(ctx, &aot_mem); return;
      }
      goto L_089DB0F4;
    }
L_089DB0F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    goto L_089DB0F8;
L_089DB0F8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    aot_gpr[21] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089DB110u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 130u, 0x089DF764u>(ctx, &aot_mem) && ctx.pc == 0x089DB110u) goto L_089DB110;
    return;
L_089DB110:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089DB11Cu);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DB11Cu) goto L_089DB11C;
    return;
L_089DB11C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = ((aot_gpr[2] & ~0x000007FFu) | ((0u & 0x000007FFu) << 0u));
    aot_gpr[31] = (0x089DB134u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 112u, 0x089DF600u>(ctx, &aot_mem) && ctx.pc == 0x089DB134u) goto L_089DB134;
    return;
L_089DB134:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) < 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[4]);
      if (branch_taken) {
          goto L_089DB61C;
      }
      goto L_089DB154;
    }
L_089DB154:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_gpr[3] = (0u + 0u);
    goto L_089DB15C;
L_089DB15C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(228)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 222u, 0x089DAD7Cu>(ctx, &aot_mem); return;
      }
      goto L_089DB170;
    }
L_089DB170:
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[16];
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
      if (branch_taken) {
          goto L_089DB5F8;
      }
      goto L_089DB17C;
    }
L_089DB17C:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
      if (branch_taken) {
          goto L_089DB1BC;
      }
      goto L_089DB184;
    }
L_089DB184:
    aot_gpr[31] = (0x089DB18Cu);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 224u, 0x089DFD80u>(ctx, &aot_mem) && ctx.pc == 0x089DB18Cu) goto L_089DB18C;
    return;
L_089DB18C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (2217u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 222u, 0x089DAD7Cu>(ctx, &aot_mem); return;
      }
      goto L_089DB194;
    }
L_089DB194:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(204)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(208)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089DB1B4u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DB1B4u) goto L_089DB1B4;
    return;
L_089DB1B4:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 222u, 0x089DAD7Cu>(ctx, &aot_mem); return;
      }
      goto L_089DB1BC;
    }
L_089DB1BC:
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[21] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    aot_gpr[31] = (0x089DB1D0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 122u, 0x089DF6D4u>(ctx, &aot_mem) && ctx.pc == 0x089DB1D0u) goto L_089DB1D0;
    return;
L_089DB1D0:
    aot_gpr[4] = (aot_gpr[21] + 0u);
    aot_gpr[31] = (0x089DB1DCu);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 112u, 0x089DF600u>(ctx, &aot_mem) && ctx.pc == 0x089DB1DCu) goto L_089DB1DC;
    return;
L_089DB1DC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(10)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[8] + aot_gpr[2]);
    aot_gpr[9] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[5] = (aot_gpr[21] + 0u);
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[21]);
    aot_gpr[31] = (0x089DB220u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 123u, 0x089DA7A8u>(ctx, &aot_mem) && ctx.pc == 0x089DB220u) goto L_089DB220;
    return;
L_089DB220:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 222u, 0x089DAD7Cu>(ctx, &aot_mem); return;
      }
      goto L_089DB228;
    }
L_089DB228:
    aot_gpr[31] = (0x089DB230u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DB230u) goto L_089DB230;
    return;
L_089DB230:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(6)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[2] = (aot_gpr[5] & 63488u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[2]));
      if (branch_taken) {
          goto L_089DB4A0;
      }
      goto L_089DB244;
    }
L_089DB244:
    aot_gpr[2] = (aot_gpr[5] & 16384u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
      if (branch_taken) {
          goto L_089DB50C;
      }
      goto L_089DB250;
    }
L_089DB250:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1474));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
        goto L_089DB2B4;
    }
    goto L_089DB26C;
L_089DB26C:
    aot_gpr[2] = (aot_gpr[5] & 8192u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089DB294;
      }
      goto L_089DB278;
    }
L_089DB278:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB770;
      }
      goto L_089DB284;
    }
L_089DB284:
    aot_gpr[31] = (0x089DB28Cu);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 124u, 0x089DF704u>(ctx, &aot_mem) && ctx.pc == 0x089DB28Cu) goto L_089DB28C;
    return;
L_089DB28C:
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(122), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089DB290;
L_089DB290:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    goto L_089DB294;
L_089DB294:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089DB2A0;
      }
      goto L_089DB29C;
    }
L_089DB29C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    goto L_089DB2A0;
L_089DB2A0:
    aot_gpr[31] = (0x089DB2A8u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 152u, 0x08A437CCu>(ctx, &aot_mem) && ctx.pc == 0x089DB2A8u) goto L_089DB2A8;
    return;
L_089DB2A8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 223u, 0x089DAD80u>(ctx, &aot_mem); return;
      }
      goto L_089DB2B0;
    }
L_089DB2B0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    goto L_089DB2B4;
L_089DB2B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
      if (branch_taken) {
          goto L_089DB0F8;
      }
      goto L_089DB2C4;
    }
L_089DB2C4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 223u, 0x089DAD80u>(ctx, &aot_mem); return;
L_089DB2CC:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(264)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(72), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[2] = (aot_gpr[5] - aot_gpr[4]);
      if (branch_taken) {
          goto L_089DB03C;
      }
      goto L_089DB2E8;
    }
L_089DB2E8:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089DB080;
L_089DB2F0:
    aot_gpr[31] = (0x089DB2F8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 136u, 0x089DF7ECu>(ctx, &aot_mem) && ctx.pc == 0x089DB2F8u) goto L_089DB2F8;
    return;
L_089DB2F8:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(112)));
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089DB018;
    }
    goto L_089DB308;
L_089DB308:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(110)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[3];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
      if (branch_taken) {
          goto L_089DB02C;
      }
      goto L_089DB314;
    }
L_089DB314:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_089DB018;
L_089DB31C:
    aot_gpr[31] = (0x089DB324u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 184u, 0x089E0CF4u>(ctx, &aot_mem) && ctx.pc == 0x089DB324u) goto L_089DB324;
    return;
L_089DB324:
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
        (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 223u, 0x089DAD80u>(ctx, &aot_mem); return;
    }
    goto L_089DB32C;
L_089DB32C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089DB064;
L_089DB338:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[2] = (aot_gpr[3] & 2048u);
      if (branch_taken) {
          goto L_089DB63C;
      }
      goto L_089DB340;
    }
L_089DB340:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DB4CC;
      }
      goto L_089DB348;
    }
L_089DB348:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[2]);
    goto L_089DB084;
L_089DB350:
    aot_gpr[21] = (0u + 0u);
    goto L_089DB354;
L_089DB354:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(6));
    aot_gpr[31] = (0x089DB364u);
    aot_gpr[17] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DB364u) goto L_089DB364;
    return;
L_089DB364:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(216)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(6)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(216), aot_gpr[4]);
    goto L_089DB3A4;
L_089DB37C:
    aot_gpr[31] = (0x089DB384u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DB384u) goto L_089DB384;
    return;
L_089DB384:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(102));
    aot_gpr[3] = (aot_gpr[3] & 16384u);
    { const bool branch_taken = aot_gpr[3] != 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DB3E0;
      }
      goto L_089DB398;
    }
L_089DB398:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089DB39C;
L_089DB39C:
    { const bool branch_taken = aot_gpr[21] == aot_gpr[17];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
      if (branch_taken) {
          goto L_089DB3BC;
      }
      goto L_089DB3A4;
    }
L_089DB3A4:
    { const bool branch_taken = aot_gpr[17] != 0u;
    aot_gpr[5] = (aot_gpr[29] + 0u);
      if (branch_taken) {
          goto L_089DB37C;
      }
      goto L_089DB3AC;
    }
L_089DB3AC:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = aot_gpr[21] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_089DB37C;
      }
      goto L_089DB3B8;
    }
L_089DB3B8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    goto L_089DB3BC;
L_089DB3BC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[3] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[3]);
      if (branch_taken) {
          goto L_089DB354;
      }
      goto L_089DB3D0;
    }
L_089DB3D0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(212)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[5]);
    goto L_089DB000;
L_089DB3E0:
    aot_gpr[31] = (0x089DB3E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DB3E8u) goto L_089DB3E8;
    return;
L_089DB3E8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    if (aot_gpr[3] != aot_gpr[5]) {
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089DB39C;
    }
    goto L_089DB3F8;
L_089DB3F8:
    aot_gpr[2] = (aot_gpr[17] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[21] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089DB3B8;
      }
      goto L_089DB408;
    }
L_089DB408:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(6)));
      if (branch_taken) {
          goto L_089DB780;
      }
      goto L_089DB418;
    }
L_089DB418:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[2] = (aot_gpr[3] & 2048u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[3] & 8192u);
      if (branch_taken) {
          goto L_089DB438;
      }
      goto L_089DB42C;
    }
L_089DB42C:
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[3]))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[2]) < 0;
    aot_gpr[2] = (aot_gpr[3] & 8192u);
      if (branch_taken) {
          goto L_089DB838;
      }
      goto L_089DB438;
    }
L_089DB438:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089DB454;
      }
      goto L_089DB440;
    }
L_089DB440:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_089DB5DC;
      }
      goto L_089DB450;
    }
L_089DB450:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    goto L_089DB454;
L_089DB454:
    { const bool branch_taken = aot_gpr[3] == 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089DB3B8;
      }
      goto L_089DB45C;
    }
L_089DB45C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(208)));
    aot_gpr[31] = (0x089DB468u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 121u, 0x08A4364Cu>(ctx, &aot_mem) && ctx.pc == 0x089DB468u) goto L_089DB468;
    return;
L_089DB468:
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
        goto L_089DB3BC;
    }
    goto L_089DB470;
L_089DB470:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 223u, 0x089DAD80u>(ctx, &aot_mem); return;
L_089DB478:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089DB484u);
    aot_gpr[5] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 196u, 0x089E0DE4u>(ctx, &aot_mem) && ctx.pc == 0x089DB484u) goto L_089DB484;
    return;
L_089DB484:
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
        (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 223u, 0x089DAD80u>(ctx, &aot_mem); return;
    }
    goto L_089DB48C;
L_089DB48C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089DB070;
L_089DB498:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_089DB070;
L_089DB4A0:
    aot_gpr[2] = (aot_gpr[5] & 16384u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
      if (branch_taken) {
          goto L_089DB2B4;
      }
      goto L_089DB4AC;
    }
L_089DB4AC:
    aot_gpr[6] = (aot_gpr[21] + 0u);
    goto L_089DB4B0;
L_089DB4B0:
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089DB4BCu);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 202u, 0x089DAC44u>(ctx, &aot_mem) && ctx.pc == 0x089DB4BCu) goto L_089DB4BC;
    return;
L_089DB4BC:
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
        goto L_089DB2B4;
    }
    goto L_089DB4C4;
L_089DB4C4:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 223u, 0x089DAD80u>(ctx, &aot_mem); return;
L_089DB4CC:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089DB4D8u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 122u, 0x089DF6D4u>(ctx, &aot_mem) && ctx.pc == 0x089DB4D8u) goto L_089DB4D8;
    return;
L_089DB4D8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089DB080;
      }
      goto L_089DB4E4;
    }
L_089DB4E4:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[3]);
    goto L_089DB084;
L_089DB4F0:
    aot_gpr[31] = (0x089DB4F8u);
    aot_gpr[4] = (aot_gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 136u, 0x089DF7ECu>(ctx, &aot_mem) && ctx.pc == 0x089DB4F8u) goto L_089DB4F8;
    return;
L_089DB4F8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(112)));
    aot_gpr[3] = (aot_gpr[3] ^ aot_gpr[2]);
    aot_gpr[3] = (aot_gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[3]);
    goto L_089DB0E0;
L_089DB50C:
    aot_gpr[31] = (0x089DB514u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 124u, 0x089DF704u>(ctx, &aot_mem) && ctx.pc == 0x089DB514u) goto L_089DB514;
    return;
L_089DB514:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[2]);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[17] + static_cast<std::uint32_t>(120)));
    aot_gpr[4] = (aot_gpr[2] ^ 65535u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    if (aot_gpr[4] == 0u) aot_gpr[2] = (aot_gpr[3]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[3];
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(156)));
      if (branch_taken) {
          goto L_089DB72C;
      }
      goto L_089DB538;
    }
L_089DB538:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(52)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[4]);
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1474));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[3] ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
        goto L_089DB2B4;
    }
    goto L_089DB554;
L_089DB554:
    aot_gpr[30] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089DB754;
      }
      goto L_089DB560;
    }
L_089DB560:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB748;
      }
      goto L_089DB56C;
    }
L_089DB56C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), 0u);
    goto L_089DB580;
L_089DB574:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB748;
      }
      goto L_089DB580;
    }
L_089DB580:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[23] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (aot_gpr[23] + 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089DB574;
      }
      goto L_089DB594;
    }
L_089DB594:
    aot_gpr[31] = (0x089DB59Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DB59Cu) goto L_089DB59C;
    return;
L_089DB59C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (aot_gpr[23] + 0u);
    aot_gpr[2] = (aot_gpr[3] & 16384u);
    aot_gpr[3] = (aot_gpr[3] & 63488u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[3]));
      if (branch_taken) {
          goto L_089DB574;
      }
      goto L_089DB5B4;
    }
L_089DB5B4:
    aot_gpr[31] = (0x089DB5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 124u, 0x089DF704u>(ctx, &aot_mem) && ctx.pc == 0x089DB5BCu) goto L_089DB5BC;
    return;
L_089DB5BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[3] = (aot_gpr[2] - aot_gpr[4]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_gpr[3]))));
      if (branch_taken) {
          goto L_089DB5D4;
      }
      goto L_089DB5CC;
    }
L_089DB5CC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[3]) >= 0;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_089DB884;
      }
      goto L_089DB5D4;
    }
L_089DB5D4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[16]);
    goto L_089DB574;
L_089DB5DC:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089DB454;
L_089DB5E8:
    if (aot_gpr[3] != 0u) {
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 245u, 0x089DAF3Cu>(ctx, &aot_mem); return;
    }
    goto L_089DB5F0;
L_089DB5F0:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 251u, 0x089DAF78u>(ctx, &aot_mem); return;
L_089DB5F8:
    aot_gpr[7] = (aot_gpr[21] + 0u);
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    aot_gpr[31] = (0x089DB60Cu);
    aot_gpr[8] = (aot_gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0478_entry, 478u, 2u, 0x089E2008u>(ctx, &aot_mem) && ctx.pc == 0x089DB60Cu) goto L_089DB60C;
    return;
L_089DB60C:
    if (aot_gpr[2] == 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(224)));
        goto L_089DB2B4;
    }
    goto L_089DB614;
L_089DB614:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 223u, 0x089DAD80u>(ctx, &aot_mem); return;
L_089DB61C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(224), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (0x089DB634u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 20u, 0x08990278u>(ctx, &aot_mem) && ctx.pc == 0x089DB634u) goto L_089DB634;
    return;
L_089DB634:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    goto L_089DB15C;
L_089DB63C:
    aot_gpr[31] = (0x089DB644u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 136u, 0x089DF7ECu>(ctx, &aot_mem) && ctx.pc == 0x089DB644u) goto L_089DB644;
    return;
L_089DB644:
    aot_gpr[3] = (aot_gpr[2] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[2] & 2048u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (aot_gpr[3] + static_cast<std::uint32_t>(-451));
      if (branch_taken) {
          goto L_089DB6F4;
      }
      goto L_089DB658;
    }
L_089DB658:
    aot_gpr[2] = (aot_gpr[2] & 65535u);
    aot_gpr[2] = (aot_gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089DB080;
      }
      goto L_089DB668;
    }
L_089DB668:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(aot_gpr[3]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(76), aot_gpr[30]);
    aot_gpr[31] = (0x089DB684u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 122u, 0x089DF6D4u>(ctx, &aot_mem) && ctx.pc == 0x089DB684u) goto L_089DB684;
    return;
L_089DB684:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089DB690u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 112u, 0x089DF600u>(ctx, &aot_mem) && ctx.pc == 0x089DB690u) goto L_089DB690;
    return;
L_089DB690:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[18] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[29] + static_cast<std::uint32_t>(76));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[2]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    aot_gpr[7] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(160), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[4]);
      if (branch_taken) {
          goto L_089DB6D4;
      }
      goto L_089DB6D0;
    }
L_089DB6D0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    goto L_089DB6D4;
L_089DB6D4:
    aot_gpr[4] = (aot_gpr[6] + 0u);
    aot_gpr[5] = (aot_gpr[7] + 0u);
    aot_gpr[31] = (0x089DB6E4u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 152u, 0x08A437CCu>(ctx, &aot_mem) && ctx.pc == 0x089DB6E4u) goto L_089DB6E4;
    return;
L_089DB6E4:
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
        (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 223u, 0x089DAD80u>(ctx, &aot_mem); return;
    }
    goto L_089DB6EC;
L_089DB6EC:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_089DB080;
L_089DB6F4:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(220)));
    aot_gpr[4] = (aot_gpr[19] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(52));
    aot_gpr[8] = (aot_gpr[22] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[23]);
    aot_gpr[31] = (0x089DB714u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0476_entry, 476u, 210u, 0x089E0EE8u>(ctx, &aot_mem) && ctx.pc == 0x089DB714u) goto L_089DB714;
    return;
L_089DB714:
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
        (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 223u, 0x089DAD80u>(ctx, &aot_mem); return;
    }
    goto L_089DB71C;
L_089DB71C:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(228), aot_gpr[2]);
    goto L_089DB084;
L_089DB72C:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    aot_gpr[31] = (0x089DB738u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 178u, 0x08A439B8u>(ctx, &aot_mem) && ctx.pc == 0x089DB738u) goto L_089DB738;
    return;
L_089DB738:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089DB4B0;
      }
      goto L_089DB740;
    }
L_089DB740:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 223u, 0x089DAD80u>(ctx, &aot_mem); return;
L_089DB748:
    { const bool branch_taken = aot_gpr[30] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089DB754;
      }
      goto L_089DB750;
    }
L_089DB750:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(64)));
    goto L_089DB754;
L_089DB754:
    aot_gpr[4] = (aot_gpr[30] + 0u);
    goto L_089DB758;
L_089DB758:
    aot_gpr[31] = (0x089DB760u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 152u, 0x08A437CCu>(ctx, &aot_mem) && ctx.pc == 0x089DB760u) goto L_089DB760;
    return;
L_089DB760:
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (aot_gpr[21] + 0u);
        goto L_089DB4B0;
    }
    goto L_089DB768;
L_089DB768:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 223u, 0x089DAD80u>(ctx, &aot_mem); return;
L_089DB770:
    aot_gpr[31] = (0x089DB778u);
    aot_gpr[4] = (aot_gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 124u, 0x089DF704u>(ctx, &aot_mem) && ctx.pc == 0x089DB778u) goto L_089DB778;
    return;
L_089DB778:
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(116), static_cast<std::uint16_t>(aot_gpr[2]));
    goto L_089DB290;
L_089DB780:
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(16));
    aot_gpr[31] = (0x089DB790u);
    aot_gpr[5] = (aot_gpr[19] + static_cast<std::uint32_t>(260));
    if (rt.invoke_chained_direct<&recomp_unit_0398_entry, 398u, 174u, 0x08992B84u>(ctx, &aot_mem) && ctx.pc == 0x089DB790u) goto L_089DB790;
    return;
L_089DB790:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(100)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    aot_gpr[2] = (aot_gpr[6] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_089DB7B0;
      }
      goto L_089DB7A8;
    }
L_089DB7A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(100), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(260), aot_gpr[6]);
    goto L_089DB7B0;
L_089DB7B0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(96)));
    aot_gpr[2] = (aot_gpr[2] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB7C8;
      }
      goto L_089DB7C0;
    }
L_089DB7C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(96), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(256), aot_gpr[6]);
    goto L_089DB7C8;
L_089DB7C8:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[5] = (aot_gpr[6] >> 1u);
      if (branch_taken) {
          goto L_089DB7FC;
      }
      goto L_089DB7D0;
    }
L_089DB7D0:
    aot_gpr[3] = (aot_gpr[7] - aot_gpr[6]);
    aot_gpr[5] = (0u - aot_gpr[3]);
    aot_gpr[4] = (aot_gpr[8] << 1u);
    aot_gpr[2] = (aot_gpr[7] << 3u);
    aot_gpr[3] = (static_cast<std::int32_t>(aot_gpr[3]) > static_cast<std::int32_t>(aot_gpr[5]) ? aot_gpr[3] : aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[8]);
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[5] = (aot_gpr[4] >> 2u);
    aot_gpr[6] = (aot_gpr[2] >> 3u);
    goto L_089DB7FC;
L_089DB7FC:
    aot_gpr[2] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(16));
    if (aot_gpr[4] != 0u) aot_gpr[2] = (aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[6] + aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(5000) ? 1u : 0u);
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(5000));
    if (aot_gpr[4] != 0u) aot_gpr[2] = (aot_gpr[3]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(252), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(248), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(264), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(92), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(88), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(104), aot_gpr[2]);
    goto L_089DB418;
L_089DB838:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    if (aot_gpr[2] != 0u) {
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
        goto L_089DB454;
    }
    goto L_089DB848;
L_089DB848:
    aot_gpr[2] = (aot_gpr[3] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(14));
      if (branch_taken) {
          goto L_089DB8B0;
      }
      goto L_089DB854;
    }
L_089DB854:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(25));
    if (aot_gpr[3] != aot_gpr[2]) {
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
        goto L_089DB454;
    }
    goto L_089DB860;
L_089DB860:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(26));
      if (branch_taken) {
          goto L_089DB8A4;
      }
      goto L_089DB86C;
    }
L_089DB86C:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[21];
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089DB454;
      }
      goto L_089DB878;
    }
L_089DB878:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(26));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_089DB454;
L_089DB884:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[30] + 0u);
      if (branch_taken) {
          goto L_089DB758;
      }
      goto L_089DB88C;
    }
L_089DB88C:
    aot_gpr[31] = (0x089DB894u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 178u, 0x08A439B8u>(ctx, &aot_mem) && ctx.pc == 0x089DB894u) goto L_089DB894;
    return;
L_089DB894:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[6] = (aot_gpr[21] + 0u);
      if (branch_taken) {
          goto L_089DB4B0;
      }
      goto L_089DB89C;
    }
L_089DB89C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    (void)rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 223u, 0x089DAD80u>(ctx, &aot_mem); return;
L_089DB8A4:
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089DB454;
L_089DB8B0:
    aot_gpr[3] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_089DB454;
L_089DB8BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(36));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089DB94C;
      }
      goto L_089DB8E0;
    }
L_089DB8E0:
    aot_gpr[31] = (0x089DB8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 155u, 0x089DF9A4u>(ctx, &aot_mem) && ctx.pc == 0x089DB8E8u) goto L_089DB8E8;
    return;
L_089DB8E8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(60)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[5] = (0u + 0u);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    aot_gpr[31] = (0x089DB904u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(304));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089DB904u) goto L_089DB904;
    return;
L_089DB904:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(140)));
    aot_gpr[2] = (16384u << 16u);
    aot_gpr[3] = ((aot_gpr[3] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    aot_gpr[3] = (aot_gpr[3] | aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(140), aot_gpr[3]);
    aot_gpr[2] = (10347u << 16u);
    aot_gpr[2] = (aot_gpr[2] | 51739u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(204), 0u);
    aot_gpr[4] = (aot_gpr[16] - aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 4u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(208), 0u);
    aot_gpr[2] = (2216u << 16u);
    aot_gpr[4] = (ctx.lo);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(144), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(-19200)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), aot_gpr[3]);
    goto L_089DB94C;
L_089DB94C:
    aot_gpr[2] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB964:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-208));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(76));
    aot_gpr[4] = (aot_gpr[22] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[6] + 0u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(88));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[9] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(204), aot_gpr[31]);
    aot_gpr[31] = (0x089DB9B4u);
    aot_gpr[19] = (aot_gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089DB9B4u) goto L_089DB9B4;
    return;
L_089DB9B4:
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(aot_gpr[16]));
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(aot_gpr[17]));
      if (branch_taken) {
          goto L_089DB9D0;
      }
      goto L_089DB9C0;
    }
L_089DB9C0:
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[4] = (aot_gpr[22] + 0u);
    aot_gpr[31] = (0x089DB9D0u);
    aot_gpr[5] = (0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 232u, 0x089DFE04u>(ctx, &aot_mem) && ctx.pc == 0x089DB9D0u) goto L_089DB9D0;
    return;
L_089DB9D0:
    aot_gpr[5] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (0x089DB9DCu);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0396_entry, 396u, 17u, 0x08990248u>(ctx, &aot_mem) && ctx.pc == 0x089DB9DCu) goto L_089DB9DC;
    return;
L_089DB9DC:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(68)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(4));
    aot_gpr[3] = (0u + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[9]) <= 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[3]);
      if (branch_taken) {
          goto L_089DBAE8;
      }
      goto L_089DB9FC;
    }
L_089DB9FC:
    aot_gpr[6] = (aot_gpr[21] + 0u);
    aot_gpr[7] = (0u + 0u);
    goto L_089DBA04;
L_089DBA04:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[5] = (aot_gpr[2] + aot_gpr[29]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[9]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089DBA50;
      }
      goto L_089DBA1C;
    }
L_089DBA1C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[2] = (aot_gpr[2] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
    aot_gpr[3] = (aot_gpr[3] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[3]);
    goto L_089DBA50;
L_089DBA50:
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089DBA04;
      }
      goto L_089DBA58;
    }
L_089DBA58:
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[3]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[2] = (aot_gpr[3] << 3u);
      if (branch_taken) {
          goto L_089DBAA8;
      }
      goto L_089DBA64;
    }
L_089DBA64:
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[22]);
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(88));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_089DBAFC;
      }
      goto L_089DBA7C;
    }
L_089DBA7C:
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(88));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089DBAF0;
      }
      goto L_089DBA94;
    }
L_089DBA94:
    aot_gpr[3] = (aot_gpr[2] + aot_gpr[3]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), aot_gpr[3]);
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    goto L_089DBAA8;
L_089DBAA8:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[5] = (0u + 0u);
      if (branch_taken) {
          goto L_089DBAB4;
      }
      goto L_089DBAB0;
    }
L_089DBAB0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(16)));
    goto L_089DBAB4;
L_089DBAB4:
    aot_gpr[4] = (aot_gpr[20] + 0u);
    aot_gpr[31] = (0x089DBAC0u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 152u, 0x08A437CCu>(ctx, &aot_mem) && ctx.pc == 0x089DBAC0u) goto L_089DBAC0;
    return;
L_089DBAC0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(204)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DBAE8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_089DBA58;
L_089DBAF0:
    aot_gpr[2] = (aot_gpr[4] << 2u);
    goto L_089DBAF4;
L_089DBAF4:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(88));
    goto L_089DBA94;
L_089DBAFC:
    aot_gpr[2] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(88));
    aot_gpr[2] = (aot_gpr[3] << 3u);
    aot_gpr[2] = (aot_gpr[2] + aot_gpr[29]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(88));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089DBA94;
      }
      goto L_089DBB1C;
    }
L_089DBB1C:
    aot_gpr[2] = (aot_gpr[4] << 2u);
    goto L_089DBAF4;
L_089DBB24:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(100));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + 0u);
    aot_gpr[5] = (aot_gpr[29] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[7] & 65535u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[21]);
    aot_gpr[21] = (aot_gpr[8] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[9] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[10] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] + static_cast<std::uint32_t>(12));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    aot_gpr[31] = (0x089DBB70u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 122u, 0x089DF6D4u>(ctx, &aot_mem) && ctx.pc == 0x089DBB70u) goto L_089DBB70;
    return;
L_089DBB70:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (aot_gpr[18] + 0u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (0u + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_089DBB90;
      }
      goto L_089DBB88;
    }
L_089DBB88:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[2] + static_cast<std::uint32_t>(-4));
    goto L_089DBB90;
L_089DBB90:
    aot_gpr[31] = (0x089DBB98u);
    aot_gpr[7] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 179u, 0x08A439C4u>(ctx, &aot_mem) && ctx.pc == 0x089DBB98u) goto L_089DBB98;
    return;
L_089DBB98:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[19] = (aot_gpr[2] + 0u);
      if (branch_taken) {
          goto L_089DBC1C;
      }
      goto L_089DBBA0;
    }
L_089DBBA0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(14)));
    aot_gpr[6] = (aot_gpr[20] + 0u);
    aot_gpr[4] = (aot_gpr[17] + 0u);
    aot_gpr[2] = (aot_gpr[21] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[5] = (aot_gpr[16] + 0u);
      if (branch_taken) {
          goto L_089DBC48;
      }
      goto L_089DBBB8;
    }
L_089DBBB8:
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089DBBCC;
      }
      goto L_089DBBC0;
    }
L_089DBBC0:
    aot_gpr[31] = (0x089DBBC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 232u, 0x089DFE04u>(ctx, &aot_mem) && ctx.pc == 0x089DBBC8u) goto L_089DBBC8;
    return;
L_089DBBC8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089DBBCC;
L_089DBBCC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(64)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(100));
    aot_gpr[5] = (aot_gpr[5] & 65535u);
    aot_gpr[31] = (0x089DBBE8u);
    aot_gpr[4] = (aot_gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 144u, 0x089DF8B4u>(ctx, &aot_mem) && ctx.pc == 0x089DBBE8u) goto L_089DBBE8;
    return;
L_089DBBE8:
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[31] = (0x089DBBF4u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 258u, 0x0898FFCCu>(ctx, &aot_mem) && ctx.pc == 0x089DBBF4u) goto L_089DBBF4;
    return;
L_089DBBF4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(2)));
    aot_gpr[4] = (aot_gpr[16] + 0u);
    aot_gpr[2] = (aot_gpr[22] | aot_gpr[2]);
    aot_gpr[2] = (aot_gpr[2] & 63488u);
    aot_gpr[5] = (aot_gpr[2] + 0u);
    aot_gpr[31] = (0x089DBC10u);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 141u, 0x089DF860u>(ctx, &aot_mem) && ctx.pc == 0x089DBC10u) goto L_089DBC10;
    return;
L_089DBC10:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089DBC1Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0475_entry, 475u, 216u, 0x089DFCECu>(ctx, &aot_mem) && ctx.pc == 0x089DBC1Cu) goto L_089DBC1C;
    return;
L_089DBC1C:
    aot_gpr[2] = (aot_gpr[19] + 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DBC48:
    { const bool branch_taken = aot_gpr[20] != 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(aot_gpr[21]));
      if (branch_taken) {
          goto L_089DBBC0;
      }
      goto L_089DBC50;
    }
L_089DBC50:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD16(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089DBBCC;
L_089DBC58:
    aot_gpr[2] = (2216u << 16u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(-19196));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DBC64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x089DBC78u);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0469_entry, 469u, 71u, 0x089D94DCu>(ctx, &aot_mem) && ctx.pc == 0x089DBC78u) goto L_089DBC78;
    return;
L_089DBC78:
    aot_gpr[3] = (2217u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(2792)));
    aot_gpr[2] = (2217u << 16u);
    aot_gpr[5] = (aot_gpr[2] + static_cast<std::uint32_t>(22676));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_089DBCC0;
      }
      goto L_089DBC90;
    }
L_089DBC90:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(252), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(256), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(260), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(264), aot_gpr[4]);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(272), aot_gpr[3]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(276), aot_gpr[4]);
    goto L_089DBCC0;
L_089DBCC0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DBCD0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    { const bool branch_taken = aot_gpr[16] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
      if (branch_taken) {
          goto L_089DBE10;
      }
      goto L_089DBCFC;
    }
L_089DBCFC:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    if (aot_gpr[17] == 0u) {
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_089DBD28;
    }
    goto L_089DBD08;
L_089DBD08:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089DBF10;
      }
      goto L_089DBD14;
    }
L_089DBD14:
    aot_gpr[31] = (0x089DBD1Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089DBD1Cu) goto L_089DBD1C;
    return;
L_089DBD1C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089DBD28;
L_089DBD28:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(108));
      if (branch_taken) {
          goto L_089DBD68;
      }
      goto L_089DBD34;
    }
L_089DBD34:
    aot_gpr[31] = (0x089DBD3Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089DBD3Cu) goto L_089DBD3C;
    return;
L_089DBD3C:
    aot_gpr[31] = (0x089DBD44u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089DBD44u) goto L_089DBD44;
    return;
L_089DBD44:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBD5C;
      }
      goto L_089DBD50;
    }
L_089DBD50:
    aot_gpr[31] = (0x089DBD58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0483_entry, 483u, 148u, 0x089E7768u>(ctx, &aot_mem) && ctx.pc == 0x089DBD58u) goto L_089DBD58;
    return;
L_089DBD58:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(68), 0u);
    goto L_089DBD5C;
L_089DBD5C:
    aot_gpr[31] = (0x089DBD64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0394_entry, 394u, 19u, 0x0898E12Cu>(ctx, &aot_mem) && ctx.pc == 0x089DBD64u) goto L_089DBD64;
    return;
L_089DBD64:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089DBD68;
L_089DBD68:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (aot_gpr[16] + 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[19] = (2217u << 16u);
      if (branch_taken) {
          goto L_089DBD98;
      }
      goto L_089DBD78;
    }
L_089DBD78:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[16] = (0u + 0u);
      if (branch_taken) {
          goto L_089DBE50;
      }
      goto L_089DBD84;
    }
L_089DBD84:
    aot_gpr[31] = (0x089DBD8Cu);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089DBD8Cu) goto L_089DBD8C;
    return;
L_089DBD8C:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[3] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089DBD98;
L_089DBD98:
    aot_gpr[31] = (0x089DBDA0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089DBDA0u) goto L_089DBDA0;
    return;
L_089DBDA0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(14476)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089DBDCC;
      }
      goto L_089DBDAC;
    }
L_089DBDAC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[3] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_089DBE34;
      }
      goto L_089DBDB8;
    }
L_089DBDB8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(104)));
    aot_gpr[2] = (16384u << 16u);
    aot_gpr[4] = ((aot_gpr[4] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089DBDCCu);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DBDCCu) goto L_089DBDCC;
    return;
L_089DBDCC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089DBDD0;
L_089DBDD0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
        goto L_089DBDEC;
    }
    goto L_089DBDDC;
L_089DBDDC:
    aot_gpr[31] = (0x089DBDE4u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 145u, 0x08A43764u>(ctx, &aot_mem) && ctx.pc == 0x089DBDE4u) goto L_089DBDE4;
    return;
L_089DBDE4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_089DBDEC;
L_089DBDEC:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[2];
    aot_gpr[31] = (0x089DBDF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DBDF8u) goto L_089DBDF8;
    return;
L_089DBDF8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089DBE08u);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(268));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089DBE08u) goto L_089DBE08;
    return;
L_089DBE08:
    aot_gpr[31] = (0x089DBE10u);
    aot_gpr[4] = (aot_gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089DBE10u) goto L_089DBE10;
    return;
L_089DBE10:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DBE34:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(104)));
    aot_gpr[2] = (49152u << 16u);
    aot_gpr[4] = ((aot_gpr[4] & ~0xC0000000u) | ((0u & 0x00000003u) << 30u));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089DBE48u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[2]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DBE48u) goto L_089DBE48;
    return;
L_089DBE48:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089DBDD0;
L_089DBE50:
    aot_gpr[20] = (0u + static_cast<std::uint32_t>(5));
    aot_gpr[21] = (49152u << 16u);
    goto L_089DBE80;
L_089DBE5C:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089DBE60;
L_089DBE60:
    aot_gpr[5] = (0u + 0u);
    aot_gpr[31] = (0x089DBE6Cu);
    aot_gpr[6] = (0u + static_cast<std::uint32_t>(304));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x089DBE6Cu) goto L_089DBE6C;
    return;
L_089DBE6C:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(304));
      if (branch_taken) {
          goto L_089DBD84;
      }
      goto L_089DBE80;
    }
L_089DBE80:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089DBE5C;
      }
      goto L_089DBE90;
    }
L_089DBE90:
    aot_gpr[31] = (0x089DBE98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 145u, 0x08A43764u>(ctx, &aot_mem) && ctx.pc == 0x089DBE98u) goto L_089DBE98;
    return;
L_089DBE98:
    aot_gpr[31] = (0x089DBEA0u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 145u, 0x08A43764u>(ctx, &aot_mem) && ctx.pc == 0x089DBEA0u) goto L_089DBEA0;
    return;
L_089DBEA0:
    aot_gpr[31] = (0x089DBEA8u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(280));
    if (rt.invoke_chained_direct<&recomp_unit_0395_entry, 395u, 222u, 0x0898FE38u>(ctx, &aot_mem) && ctx.pc == 0x089DBEA8u) goto L_089DBEA8;
    return;
L_089DBEA8:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[20];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(14476)));
      if (branch_taken) {
          goto L_089DBE5C;
      }
      goto L_089DBEB4;
    }
L_089DBEB4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089DBE60;
      }
      goto L_089DBEBC;
    }
L_089DBEBC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(204), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(208), 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(14476)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(140)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(88)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089DBED8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(144)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DBED8u) goto L_089DBED8;
    return;
L_089DBED8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[17] + 0u);
      if (branch_taken) {
          goto L_089DBE60;
      }
      goto L_089DBEE4;
    }
L_089DBEE4:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(140)));
    aot_gpr[4] = (aot_gpr[2] + 0u);
    aot_gpr[2] = ((aot_gpr[2] & ~0x3FFFFFFFu) | ((0u & 0x3FFFFFFFu) << 0u));
    if (aot_gpr[2] != aot_gpr[21]) {
    aot_gpr[4] = (aot_gpr[17] + 0u);
        goto L_089DBE60;
    }
    goto L_089DBEF8;
L_089DBEF8:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(14476)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(104)));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x089DBF08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DBF08u) goto L_089DBF08;
    return;
L_089DBF08:
    aot_gpr[4] = (aot_gpr[17] + 0u);
    goto L_089DBE60;
L_089DBF10:
    aot_gpr[31] = (0x089DBF18u);
    aot_gpr[5] = (aot_gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0470_entry, 470u, 53u, 0x089DA2F4u>(ctx, &aot_mem) && ctx.pc == 0x089DBF18u) goto L_089DBF18;
    return;
L_089DBF18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[2] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_089DBF10;
      }
      goto L_089DBF30;
    }
L_089DBF30:
    // nop
    goto L_089DBD14;
L_089DBF38:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u | 54002u);
      if (branch_taken) {
          goto L_089DBF70;
      }
      goto L_089DBF40;
    }
L_089DBF40:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBF80;
      }
      goto L_089DBF48;
    }
L_089DBF48:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBF80;
      }
      goto L_089DBF54;
    }
L_089DBF54:
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DBF70;
      }
      goto L_089DBF5C;
    }
L_089DBF5C:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089DBF88;
      }
      goto L_089DBF64;
    }
L_089DBF64:
    { const bool branch_taken = aot_gpr[6] == aot_gpr[2];
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089DBF78;
      }
      goto L_089DBF6C;
    }
L_089DBF6C:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(2));
    goto L_089DBF70;
L_089DBF70:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DBF78:
    aot_gpr[5] = (aot_gpr[7] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 208u, 0x08A43BECu>(ctx, &aot_mem); return;
L_089DBF80:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 54003u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DBF88:
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(28));
    aot_gpr[5] = (aot_gpr[7] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0575_entry, 575u, 208u, 0x08A43BECu>(ctx, &aot_mem); return;
L_089DBF94:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u | 54002u);
      if (branch_taken) {
          goto L_089DBFA4;
      }
      goto L_089DBF9C;
    }
L_089DBF9C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(132), aot_gpr[5]);
    aot_gpr[2] = (0u + 0u);
    goto L_089DBFA4;
L_089DBFA4:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DBFAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (0u | 54002u);
      if (branch_taken) {
          goto L_089DBFD4;
      }
      goto L_089DBFB8;
    }
L_089DBFB8:
    if (aot_gpr[5] == 0u) {
    aot_gpr[8] = (0u | 54003u);
        goto L_089DBFD4;
    }
    goto L_089DBFC0;
L_089DBFC0:
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(27));
    { const bool branch_taken = aot_gpr[3] == aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DBFDC;
      }
      goto L_089DBFD0;
    }
L_089DBFD0:
    aot_gpr[8] = (0u | 54003u);
    goto L_089DBFD4;
L_089DBFD4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[8] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DBFDC:
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[8] = (0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0472_entry, 472u, 1u, 0x089DC004u>(ctx, &aot_mem); return;
      }
      goto L_089DBFE4;
    }
L_089DBFE4:
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[2];
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DBFD4;
      }
      goto L_089DBFF0;
    }
L_089DBFF0:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_gpr[8] = (0u + 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[8] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0471(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0471_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_471(Runtime &runtime) {
    runtime.register_generated_unit(471u, 0x089DB000u, 4096u, &recomp_unit_0471, &recomp_unit_0471_entry);
    runtime.register_function(0x089DB000u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB004u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB014u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB018u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB028u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB02Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB038u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB03Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB048u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB054u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB064u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB070u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB080u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB084u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB08Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB094u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB0A4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB0ACu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB0B4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB0BCu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB0C4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB0E0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB0F4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB0F8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB110u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB11Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB134u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB154u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB15Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB170u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB17Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB184u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB18Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB194u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB1B4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB1BCu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB1D0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB1DCu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB220u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB228u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB230u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB244u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB250u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB26Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB278u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB284u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB28Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB290u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB294u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB29Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB2A0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB2A8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB2B0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB2B4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB2C4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB2CCu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB2E8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB2F0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB2F8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB308u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB314u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB31Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB324u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB32Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB338u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB340u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB348u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB350u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB354u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB364u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB37Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB384u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB398u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB39Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB3A4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB3ACu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB3B8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB3BCu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB3D0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB3E0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB3E8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB3F8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB408u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB418u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB42Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB438u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB440u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB450u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB454u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB45Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB468u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB470u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB478u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB484u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB48Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB498u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB4A0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB4ACu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB4B0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB4BCu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB4C4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB4CCu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB4D8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB4E4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB4F0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB4F8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB50Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB514u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB538u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB554u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB560u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB56Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB574u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB580u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB594u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB59Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB5B4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB5BCu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB5CCu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB5D4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB5DCu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB5E8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB5F0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB5F8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB60Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB614u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB61Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB634u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB63Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB644u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB658u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB668u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB684u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB690u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB6D0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB6D4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB6E4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB6ECu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB6F4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB714u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB71Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB72Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB738u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB740u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB748u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB750u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB754u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB758u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB760u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB768u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB770u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB778u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB780u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB790u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB7A8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB7B0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB7C0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB7C8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB7D0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB7FCu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB838u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB848u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB854u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB860u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB86Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB878u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB884u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB88Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB894u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB89Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB8A4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB8B0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB8BCu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB8E0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB8E8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB904u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB94Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB964u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB9B4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB9C0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB9D0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB9DCu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DB9FCu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBA04u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBA1Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBA50u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBA58u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBA64u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBA7Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBA94u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBAA8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBAB0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBAB4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBAC0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBAE8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBAF0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBAF4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBAFCu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBB1Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBB24u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBB70u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBB88u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBB90u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBB98u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBBA0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBBB8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBBC0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBBC8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBBCCu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBBE8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBBF4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBC10u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBC1Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBC48u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBC50u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBC58u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBC64u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBC78u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBC90u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBCC0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBCD0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBCFCu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBD08u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBD14u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBD1Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBD28u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBD34u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBD3Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBD44u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBD50u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBD58u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBD5Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBD64u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBD68u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBD78u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBD84u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBD8Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBD98u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBDA0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBDACu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBDB8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBDCCu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBDD0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBDDCu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBDE4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBDECu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBDF8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBE08u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBE10u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBE34u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBE48u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBE50u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBE5Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBE60u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBE6Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBE80u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBE90u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBE98u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBEA0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBEA8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBEB4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBEBCu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBED8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBEE4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBEF8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBF08u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBF10u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBF18u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBF30u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBF38u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBF40u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBF48u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBF54u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBF5Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBF64u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBF6Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBF70u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBF78u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBF80u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBF88u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBF94u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBF9Cu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBFA4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBFACu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBFB8u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBFC0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBFD0u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBFD4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBFDCu, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBFE4u, &recomp_unit_0471, "recomp_unit_0471");
    runtime.register_function(0x089DBFF0u, &recomp_unit_0471, "recomp_unit_0471");
}
} // namespace psprecomp
