#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0601[1021] = {
    1, 0, 2, 0, 3, 0, 4, 0, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 10, 0, 11, 0, 0, 12, 0, 0,
    0, 13, 0, 14, 0, 0, 15, 0, 0, 0, 16, 0, 17, 18, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0,
    0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 40, 0, 41, 0, 0, 42, 43, 0, 44, 0, 45, 46, 47, 0, 48, 0, 49, 0, 50, 0, 51, 0, 0, 52, 0, 0, 0, 0,
    53, 0, 54, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 61, 0, 62, 0,
    0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0,
    0, 68, 69, 0, 0, 0, 0, 0, 0, 70, 71, 0, 72, 0, 0, 73, 0, 0, 0, 74, 75, 0, 0, 76, 0, 0, 77, 0, 78, 0, 0, 0,
    79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 82, 0, 83, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0,
    0, 0, 89, 0, 90, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0,
    0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107,
    0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 111, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115,
    116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0,
    0, 123, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 0,
    0, 132, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 143, 144, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 147,
    0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 152, 153, 0, 154, 0, 0, 0, 155, 0,
    0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 165, 0, 0, 0,
    0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 172, 173,
    0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180,
    0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 187,
    0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0,
    0, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0,
    0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 221,
    0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 224, 225, 0, 0, 226, 0, 227, 0, 0, 228, 229, 0, 0, 230, 0, 231, 0, 0, 0, 232, 0,
    0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238,
    0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243,
    0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253,
};
void recomp_unit_0601_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A5D000u;
        entry_id = (entry_delta < 4084u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0601[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A5D000;
    case 2u: goto L_08A5D008;
    case 3u: goto L_08A5D010;
    case 4u: goto L_08A5D018;
    case 5u: goto L_08A5D028;
    case 6u: goto L_08A5D030;
    case 7u: goto L_08A5D040;
    case 8u: goto L_08A5D048;
    case 9u: goto L_08A5D050;
    case 10u: goto L_08A5D060;
    case 11u: goto L_08A5D068;
    case 12u: goto L_08A5D074;
    case 13u: goto L_08A5D084;
    case 14u: goto L_08A5D08C;
    case 15u: goto L_08A5D098;
    case 16u: goto L_08A5D0A8;
    case 17u: goto L_08A5D0B0;
    case 18u: goto L_08A5D0B4;
    case 19u: goto L_08A5D0C4;
    case 20u: goto L_08A5D0CC;
    case 21u: goto L_08A5D0F8;
    case 22u: goto L_08A5D118;
    case 23u: goto L_08A5D158;
    case 24u: goto L_08A5D178;
    case 25u: goto L_08A5D190;
    case 26u: goto L_08A5D19C;
    case 27u: goto L_08A5D1B4;
    case 28u: goto L_08A5D1BC;
    case 29u: goto L_08A5D1D4;
    case 30u: goto L_08A5D1E0;
    case 31u: goto L_08A5D1F8;
    case 32u: goto L_08A5D208;
    case 33u: goto L_08A5D220;
    case 34u: goto L_08A5D228;
    case 35u: goto L_08A5D240;
    case 36u: goto L_08A5D248;
    case 37u: goto L_08A5D260;
    case 38u: goto L_08A5D268;
    case 39u: goto L_08A5D280;
    case 40u: goto L_08A5D290;
    case 41u: goto L_08A5D298;
    case 42u: goto L_08A5D2A4;
    case 43u: goto L_08A5D2A8;
    case 44u: goto L_08A5D2B0;
    case 45u: goto L_08A5D2B8;
    case 46u: goto L_08A5D2BC;
    case 47u: goto L_08A5D2C0;
    case 48u: goto L_08A5D2C8;
    case 49u: goto L_08A5D2D0;
    case 50u: goto L_08A5D2D8;
    case 51u: goto L_08A5D2E0;
    case 52u: goto L_08A5D2EC;
    case 53u: goto L_08A5D300;
    case 54u: goto L_08A5D308;
    case 55u: goto L_08A5D31C;
    case 56u: goto L_08A5D324;
    case 57u: goto L_08A5D338;
    case 58u: goto L_08A5D340;
    case 59u: goto L_08A5D354;
    case 60u: goto L_08A5D35C;
    case 61u: goto L_08A5D370;
    case 62u: goto L_08A5D378;
    case 63u: goto L_08A5D38C;
    case 64u: goto L_08A5D3A8;
    case 65u: goto L_08A5D3BC;
    case 66u: goto L_08A5D3CC;
    case 67u: goto L_08A5D3E8;
    case 68u: goto L_08A5D404;
    case 69u: goto L_08A5D408;
    case 70u: goto L_08A5D424;
    case 71u: goto L_08A5D428;
    case 72u: goto L_08A5D430;
    case 73u: goto L_08A5D43C;
    case 74u: goto L_08A5D44C;
    case 75u: goto L_08A5D450;
    case 76u: goto L_08A5D45C;
    case 77u: goto L_08A5D468;
    case 78u: goto L_08A5D470;
    case 79u: goto L_08A5D480;
    case 80u: goto L_08A5D490;
    case 81u: goto L_08A5D4A0;
    case 82u: goto L_08A5D4A8;
    case 83u: goto L_08A5D4B0;
    case 84u: goto L_08A5D4BC;
    case 85u: goto L_08A5D4D0;
    case 86u: goto L_08A5D4E0;
    case 87u: goto L_08A5D4EC;
    case 88u: goto L_08A5D4F8;
    case 89u: goto L_08A5D508;
    case 90u: goto L_08A5D510;
    case 91u: goto L_08A5D518;
    case 92u: goto L_08A5D524;
    case 93u: goto L_08A5D530;
    case 94u: goto L_08A5D540;
    case 95u: goto L_08A5D548;
    case 96u: goto L_08A5D558;
    case 97u: goto L_08A5D568;
    case 98u: goto L_08A5D578;
    case 99u: goto L_08A5D584;
    case 100u: goto L_08A5D590;
    case 101u: goto L_08A5D59C;
    case 102u: goto L_08A5D5AC;
    case 103u: goto L_08A5D5B8;
    case 104u: goto L_08A5D5CC;
    case 105u: goto L_08A5D5DC;
    case 106u: goto L_08A5D5EC;
    case 107u: goto L_08A5D5FC;
    case 108u: goto L_08A5D608;
    case 109u: goto L_08A5D618;
    case 110u: goto L_08A5D630;
    case 111u: goto L_08A5D63C;
    case 112u: goto L_08A5D640;
    case 113u: goto L_08A5D658;
    case 114u: goto L_08A5D66C;
    case 115u: goto L_08A5D67C;
    case 116u: goto L_08A5D680;
    case 117u: goto L_08A5D694;
    case 118u: goto L_08A5D6AC;
    case 119u: goto L_08A5D6C8;
    case 120u: goto L_08A5D6D4;
    case 121u: goto L_08A5D6E4;
    case 122u: goto L_08A5D6F4;
    case 123u: goto L_08A5D704;
    case 124u: goto L_08A5D710;
    case 125u: goto L_08A5D720;
    case 126u: goto L_08A5D728;
    case 127u: goto L_08A5D738;
    case 128u: goto L_08A5D748;
    case 129u: goto L_08A5D758;
    case 130u: goto L_08A5D764;
    case 131u: goto L_08A5D774;
    case 132u: goto L_08A5D784;
    case 133u: goto L_08A5D798;
    case 134u: goto L_08A5D7A4;
    case 135u: goto L_08A5D7B4;
    case 136u: goto L_08A5D7C8;
    case 137u: goto L_08A5D7D8;
    case 138u: goto L_08A5D7EC;
    case 139u: goto L_08A5D800;
    case 140u: goto L_08A5D818;
    case 141u: goto L_08A5D830;
    case 142u: goto L_08A5D83C;
    case 143u: goto L_08A5D84C;
    case 144u: goto L_08A5D850;
    case 145u: goto L_08A5D85C;
    case 146u: goto L_08A5D870;
    case 147u: goto L_08A5D87C;
    case 148u: goto L_08A5D88C;
    case 149u: goto L_08A5D8A0;
    case 150u: goto L_08A5D8B8;
    case 151u: goto L_08A5D8C8;
    case 152u: goto L_08A5D8DC;
    case 153u: goto L_08A5D8E0;
    case 154u: goto L_08A5D8E8;
    case 155u: goto L_08A5D8F8;
    case 156u: goto L_08A5D904;
    case 157u: goto L_08A5D910;
    case 158u: goto L_08A5D920;
    case 159u: goto L_08A5D928;
    case 160u: goto L_08A5D938;
    case 161u: goto L_08A5D940;
    case 162u: goto L_08A5D950;
    case 163u: goto L_08A5D958;
    case 164u: goto L_08A5D968;
    case 165u: goto L_08A5D970;
    case 166u: goto L_08A5D984;
    case 167u: goto L_08A5D998;
    case 168u: goto L_08A5D9A8;
    case 169u: goto L_08A5D9BC;
    case 170u: goto L_08A5D9D4;
    case 171u: goto L_08A5D9E8;
    case 172u: goto L_08A5D9F8;
    case 173u: goto L_08A5D9FC;
    case 174u: goto L_08A5DA04;
    case 175u: goto L_08A5DA10;
    case 176u: goto L_08A5DA28;
    case 177u: goto L_08A5DA3C;
    case 178u: goto L_08A5DA50;
    case 179u: goto L_08A5DA68;
    case 180u: goto L_08A5DA7C;
    case 181u: goto L_08A5DA8C;
    case 182u: goto L_08A5DA9C;
    case 183u: goto L_08A5DAB4;
    case 184u: goto L_08A5DACC;
    case 185u: goto L_08A5DAE0;
    case 186u: goto L_08A5DAEC;
    case 187u: goto L_08A5DAFC;
    case 188u: goto L_08A5DB08;
    case 189u: goto L_08A5DB1C;
    case 190u: goto L_08A5DB30;
    case 191u: goto L_08A5DB44;
    case 192u: goto L_08A5DB54;
    case 193u: goto L_08A5DB64;
    case 194u: goto L_08A5DB74;
    case 195u: goto L_08A5DB88;
    case 196u: goto L_08A5DB94;
    case 197u: goto L_08A5DBA4;
    case 198u: goto L_08A5DBB0;
    case 199u: goto L_08A5DBC4;
    case 200u: goto L_08A5DBD8;
    case 201u: goto L_08A5DBEC;
    case 202u: goto L_08A5DC00;
    case 203u: goto L_08A5DC1C;
    case 204u: goto L_08A5DC30;
    case 205u: goto L_08A5DC38;
    case 206u: goto L_08A5DC48;
    case 207u: goto L_08A5DC64;
    case 208u: goto L_08A5DC80;
    case 209u: goto L_08A5DC98;
    case 210u: goto L_08A5DCAC;
    case 211u: goto L_08A5DCB0;
    case 212u: goto L_08A5DCC8;
    case 213u: goto L_08A5DCE0;
    case 214u: goto L_08A5DCF8;
    case 215u: goto L_08A5DD04;
    case 216u: goto L_08A5DD10;
    case 217u: goto L_08A5DD2C;
    case 218u: goto L_08A5DD48;
    case 219u: goto L_08A5DD64;
    case 220u: goto L_08A5DD70;
    case 221u: goto L_08A5DD7C;
    case 222u: goto L_08A5DD8C;
    case 223u: goto L_08A5DDA0;
    case 224u: goto L_08A5DDAC;
    case 225u: goto L_08A5DDB0;
    case 226u: goto L_08A5DDBC;
    case 227u: goto L_08A5DDC4;
    case 228u: goto L_08A5DDD0;
    case 229u: goto L_08A5DDD4;
    case 230u: goto L_08A5DDE0;
    case 231u: goto L_08A5DDE8;
    case 232u: goto L_08A5DDF8;
    case 233u: goto L_08A5DE08;
    case 234u: goto L_08A5DE24;
    case 235u: goto L_08A5DE3C;
    case 236u: goto L_08A5DE50;
    case 237u: goto L_08A5DE68;
    case 238u: goto L_08A5DE7C;
    case 239u: goto L_08A5DE98;
    case 240u: goto L_08A5DEB4;
    case 241u: goto L_08A5DECC;
    case 242u: goto L_08A5DEE8;
    case 243u: goto L_08A5DEFC;
    case 244u: goto L_08A5DF08;
    case 245u: goto L_08A5DF28;
    case 246u: goto L_08A5DF48;
    case 247u: goto L_08A5DF5C;
    case 248u: goto L_08A5DF6C;
    case 249u: goto L_08A5DF90;
    case 250u: goto L_08A5DFA4;
    case 251u: goto L_08A5DFB8;
    case 252u: goto L_08A5DFD4;
    case 253u: goto L_08A5DFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A5D000:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    ctx.execute_vfpu_vhdp(83u, 117u, 114u, 1u);
        (void)rt.invoke_chained_direct<&recomp_unit_0628_entry, 628u, 84u, 0x08A78998u>(ctx, &aot_mem); return;
    }
    goto L_08A5D008;
L_08A5D008:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A5D00Cu, 0x70656544u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 74u, 0x08A75D90u>(ctx, &aot_mem); return;
    }
    goto L_08A5D010;
L_08A5D010:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<119u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<80u, 1u>(vfpu_d); }
    aot_gpr[14] = (0u | 0u);
    goto L_08A5D018;
L_08A5D018:
    rt.unsupported(0x08A5D018u, 0x69766E45u, "unknown not lowered yet"); return;
L_08A5D028:
    rt.unsupported(0x08A5D02Cu, 0x00656349u, "control flow in delay slot"); return;
L_08A5D030:
    rt.unsupported(0x08A5D030u, 0x69766E45u, "unknown not lowered yet"); return;
L_08A5D040:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A5D044u, 0x67756F52u, "vfpu1 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 76u, 0x08A75DC8u>(ctx, &aot_mem); return;
    }
    goto L_08A5D048;
L_08A5D048:
    ctx.execute_vfpu_vscl_ct<104u, 73u, 99u, 1u>();
    // nop
    goto L_08A5D050;
L_08A5D050:
    rt.unsupported(0x08A5D050u, 0x69766E45u, "unknown not lowered yet"); return;
L_08A5D060:
    rt.unsupported(0x08A5D064u, 0x53626F42u, "control flow in delay slot"); return;
L_08A5D068:
    rt.unsupported(0x08A5D068u, 0x6769656Cu, "vfpu1 not lowered yet"); return;
L_08A5D074:
    rt.unsupported(0x08A5D074u, 0x69766E45u, "unknown not lowered yet"); return;
L_08A5D084:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A5D088u, 0x6E617453u, "vfpu3 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 78u, 0x08A75E0Cu>(ctx, &aot_mem); return;
    }
    goto L_08A5D08C;
L_08A5D08C:
    rt.unsupported(0x08A5D08Cu, 0x676E6964u, "vfpu1 not lowered yet"); return;
L_08A5D098:
    rt.unsupported(0x08A5D098u, 0x69766E45u, "unknown not lowered yet"); return;
L_08A5D0A8:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<87u, 1u>(vfpu_d); }
        (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 79u, 0x08A75E30u>(ctx, &aot_mem); return;
    }
    goto L_08A5D0B0;
L_08A5D0B0:
    // nop
    goto L_08A5D0B4;
L_08A5D0B4:
    rt.unsupported(0x08A5D0B4u, 0x69766E45u, "unknown not lowered yet"); return;
L_08A5D0C4:
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A5D0C8u, 0x6174654Du, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0625_entry, 625u, 80u, 0x08A75E4Cu>(ctx, &aot_mem); return;
    }
    goto L_08A5D0CC;
L_08A5D0CC:
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    rt.unsupported(0x08A5D0D0u, 0x696E692Eu, "unknown not lowered yet"); return;
L_08A5D0F8:
    (void)(0u << 16u);
    aot_gpr[19] = (13107u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    aot_gpr[25] = (39322u << 16u);
    aot_gpr[12] = (52429u << 16u);
    aot_gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    goto L_08A5D118;
L_08A5D118:
    // nop
    { const std::uint32_t ll_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      ctx.ll_address = ll_address;
      ctx.ll_reserved = true;
      (void)(PSPRECOMP_AOT_LOAD32(ll_address)); }
    // nop
    // nop
    // nop
    { const std::uint32_t ll_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      ctx.ll_address = ll_address;
      ctx.ll_reserved = true;
      (void)(PSPRECOMP_AOT_LOAD32(ll_address)); }
    // nop
    // nop
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    aot_gpr[19] = (13107u << 16u);
    aot_gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    goto L_08A5D158;
L_08A5D158:
    // nop
    // nop
    rt.unsupported(0x08A5D160u, 0x40800000u, "unknown not lowered yet"); return;
L_08A5D178:
    rt.unsupported(0x08A5D178u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A5D190:
    rt.unsupported(0x08A5D190u, 0x756F435Fu, "unknown not lowered yet"); return;
L_08A5D19C:
    rt.unsupported(0x08A5D19Cu, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A5D1B4:
    rt.unsupported(0x08A5D1B4u, 0x62614C5Fu, "vfpu0 not lowered yet"); return;
L_08A5D1BC:
    rt.unsupported(0x08A5D1BCu, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A5D1D4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<77u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<95u, 1u>(vfpu_d); }
    rt.unsupported(0x08A5D1D8u, 0x626D754Eu, "vfpu0 not lowered yet"); return;
L_08A5D1E0:
    rt.unsupported(0x08A5D1E0u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A5D1F8:
    rt.unsupported(0x08A5D1F8u, 0x616D535Fu, "vfpu0 not lowered yet"); return;
L_08A5D208:
    rt.unsupported(0x08A5D208u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A5D220:
    rt.unsupported(0x08A5D220u, 0x756E654Du, "unknown not lowered yet"); return;
L_08A5D228:
    rt.unsupported(0x08A5D228u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A5D240:
    rt.unsupported(0x08A5D240u, 0x74786554u, "unknown not lowered yet"); return;
L_08A5D248:
    rt.unsupported(0x08A5D248u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A5D260:
    ctx.execute_vfpu_vcmp_ct<105u, 116u, 1u, 4u>();
    (void)(0u | 0u);
    goto L_08A5D268;
L_08A5D268:
    rt.unsupported(0x08A5D268u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08A5D280:
    rt.unsupported(0x08A5D280u, 0x6B636954u, "unknown not lowered yet"); return;
L_08A5D290:
    rt.unsupported(0x08A5D294u, 0x53502E55u, "control flow in delay slot"); return;
L_08A5D298:
    rt.unsupported(0x08A5D298u, 0x4E465F50u, "unknown not lowered yet"); return;
L_08A5D2A4:
    rt.unsupported(0x08A5D2A4u, 0x475F7325u, "cop1? not lowered yet"); return;
L_08A5D2A8:
    if (aot_gpr[26] == aot_gpr[16]) {
    rt.unsupported(0x08A5D2ACu, 0x4E465F50u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0612_entry, 612u, 191u, 0x08A68BF4u>(ctx, &aot_mem); return;
    }
    goto L_08A5D2B0;
L_08A5D2B0:
    rt.unsupported(0x08A5D2B0u, 0x414D5F54u, "unknown not lowered yet"); return;
L_08A5D2B8:
    if (aot_gpr[1] == aot_gpr[14]) {
    rt.unsupported(0x08A5D2BCu, 0x465F5053u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0629_entry, 629u, 96u, 0x08A79F50u>(ctx, &aot_mem); return;
    }
    goto L_08A5D2C0;
L_08A5D2BC:
    rt.unsupported(0x08A5D2BCu, 0x465F5053u, "cop1? not lowered yet"); return;
L_08A5D2C0:
    rt.unsupported(0x08A5D2C0u, 0x4D5F544Eu, "unknown not lowered yet"); return;
L_08A5D2C8:
    if (aot_gpr[18] == aot_gpr[31]) {
    aot_gpr[18] = (aot_gpr[18] < static_cast<std::uint32_t>(18261) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0629_entry, 629u, 97u, 0x08A79F60u>(ctx, &aot_mem); return;
    }
    goto L_08A5D2D0;
L_08A5D2D0:
    rt.unsupported(0x08A5D2D4u, 0x5F544E46u, "control flow in delay slot"); return;
L_08A5D2D8:
    rt.unsupported(0x08A5D2D8u, 0x4E49414Du, "unknown not lowered yet"); return;
L_08A5D2E0:
    rt.unsupported(0x08A5D2E0u, 0x69686556u, "unknown not lowered yet"); return;
L_08A5D2EC:
    rt.unsupported(0x08A5D2ECu, 0x63616C42u, "vfpu0 not lowered yet"); return;
L_08A5D300:
    rt.unsupported(0x08A5D300u, 0x6363415Fu, "vfpu0 not lowered yet"); return;
L_08A5D308:
    rt.unsupported(0x08A5D308u, 0x63616C42u, "vfpu0 not lowered yet"); return;
L_08A5D31C:
    ctx.execute_vfpu_vscl_ct<95u, 83u, 112u, 1u>();
    aot_gpr[12] = (0u | 0u);
    goto L_08A5D324;
L_08A5D324:
    rt.unsupported(0x08A5D324u, 0x63616C42u, "vfpu0 not lowered yet"); return;
L_08A5D338:
    rt.unsupported(0x08A5D338u, 0x756F545Fu, "unknown not lowered yet"); return;
L_08A5D340:
    rt.unsupported(0x08A5D340u, 0x63616C42u, "vfpu0 not lowered yet"); return;
L_08A5D354:
    rt.unsupported(0x08A5D354u, 0x6E61485Fu, "vfpu3 not lowered yet"); return;
L_08A5D35C:
    rt.unsupported(0x08A5D35Cu, 0x63616C42u, "vfpu0 not lowered yet"); return;
L_08A5D370:
    rt.unsupported(0x08A5D370u, 0x636F4C5Fu, "vfpu0 not lowered yet"); return;
L_08A5D378:
    rt.unsupported(0x08A5D378u, 0x72616843u, "unknown not lowered yet"); return;
L_08A5D38C:
    rt.unsupported(0x08A5D38Cu, 0x72616843u, "unknown not lowered yet"); return;
L_08A5D3A8:
    rt.unsupported(0x08A5D3A8u, 0x72616843u, "unknown not lowered yet"); return;
L_08A5D3BC:
    rt.unsupported(0x08A5D3BCu, 0x72616843u, "unknown not lowered yet"); return;
L_08A5D3CC:
    rt.unsupported(0x08A5D3CCu, 0x72616843u, "unknown not lowered yet"); return;
L_08A5D3E8:
    rt.unsupported(0x08A5D3E8u, 0x72616843u, "unknown not lowered yet"); return;
L_08A5D404:
    // nop
    goto L_08A5D408;
L_08A5D408:
    rt.unsupported(0x08A5D408u, 0x72616843u, "unknown not lowered yet"); return;
L_08A5D424:
    aot_gpr[12] = (aot_gpr[3] < aot_gpr[4] ? 1u : 0u);
    goto L_08A5D428;
L_08A5D428:
    rt.unsupported(0x08A5D428u, 0x74496F47u, "unknown not lowered yet"); return;
L_08A5D430:
    rt.unsupported(0x08A5D430u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5D43C:
    rt.unsupported(0x08A5D43Cu, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5D44C:
    rt.unsupported(0x08A5D44Cu, 0x00657275u, "special? not lowered yet"); return;
L_08A5D450:
    rt.unsupported(0x08A5D450u, 0x61726147u, "vfpu0 not lowered yet"); return;
L_08A5D45C:
    rt.unsupported(0x08A5D45Cu, 0x436D654Du, "unknown not lowered yet"); return;
L_08A5D468:
    ctx.execute_vfpu_vscl_ct<116u, 121u, 77u, 1u>();
    { const std::uint64_t accumulator = (static_cast<std::uint64_t>(ctx.hi) << 32u) | ctx.lo; const std::uint64_t product = static_cast<std::uint64_t>(static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u))); const std::uint64_t result = accumulator - product; ctx.lo = static_cast<std::uint32_t>(result); ctx.hi = static_cast<std::uint32_t>(result >> 32u); }
    goto L_08A5D470;
L_08A5D470:
    rt.unsupported(0x08A5D470u, 0x72616843u, "unknown not lowered yet"); return;
L_08A5D480:
    rt.unsupported(0x08A5D480u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A5D490:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<77u, 111u, 100u, 1u>();
    rt.unsupported(0x08A5D498u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5D4A0:
    if (aot_gpr[3] == aot_gpr[13]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0630_entry, 630u, 116u, 0x08A7A9DCu>(ctx, &aot_mem); return;
    }
    goto L_08A5D4A8;
L_08A5D4A8:
    rt.unsupported(0x08A5D4A8u, 0x61447372u, "vfpu0 not lowered yet"); return;
L_08A5D4B0:
    rt.unsupported(0x08A5D4B0u, 0x4C6D754Eu, "unknown not lowered yet"); return;
L_08A5D4BC:
    ctx.execute_vfpu_vscl_ct<68u, 105u, 114u, 1u>();
    ctx.execute_vfpu_compare3(99u, 116u, 105u, 1u, 6u);
    rt.unsupported(0x08A5D4C4u, 0x7461446Eu, "unknown not lowered yet"); return;
L_08A5D4D0:
    rt.unsupported(0x08A5D4D0u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A5D4E0:
    rt.unsupported(0x08A5D4E0u, 0x746E6F43u, "unknown not lowered yet"); return;
L_08A5D4EC:
    rt.unsupported(0x08A5D4ECu, 0x6B636142u, "unknown not lowered yet"); return;
L_08A5D4F8:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<77u, 111u, 100u, 1u>();
    rt.unsupported(0x08A5D500u, 0x61746144u, "vfpu0 not lowered yet"); return;
L_08A5D508:
    if (aot_gpr[3] == aot_gpr[13]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0630_entry, 630u, 120u, 0x08A7AA44u>(ctx, &aot_mem); return;
    }
    goto L_08A5D510;
L_08A5D510:
    rt.unsupported(0x08A5D510u, 0x61447372u, "vfpu0 not lowered yet"); return;
L_08A5D518:
    rt.unsupported(0x08A5D518u, 0x4C6D754Eu, "unknown not lowered yet"); return;
L_08A5D524:
    rt.unsupported(0x08A5D524u, 0x63617254u, "vfpu0 not lowered yet"); return;
L_08A5D530:
    ctx.execute_vfpu_vscl_ct<68u, 105u, 114u, 1u>();
    ctx.execute_vfpu_compare3(99u, 116u, 105u, 1u, 6u);
    rt.unsupported(0x08A5D538u, 0x7461446Eu, "unknown not lowered yet"); return;
L_08A5D540:
    rt.unsupported(0x08A5D540u, 0x4C6D754Eu, "unknown not lowered yet"); return;
L_08A5D548:
    rt.unsupported(0x08A5D548u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A5D558:
    rt.unsupported(0x08A5D558u, 0x69686556u, "unknown not lowered yet"); return;
L_08A5D568:
    rt.unsupported(0x08A5D568u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A5D578:
    rt.unsupported(0x08A5D578u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A5D584:
    rt.unsupported(0x08A5D584u, 0x6E696F4Au, "vfpu3 not lowered yet"); return;
L_08A5D590:
    ctx.execute_vfpu_vminmax(67u, 111u, 109u, 1u, false);
    rt.unsupported(0x08A5D594u, 0x74696E75u, "unknown not lowered yet"); return;
L_08A5D59C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    ctx.execute_vfpu_compare3(101u, 114u, 66u, 1u, 6u);
    rt.unsupported(0x08A5D5A4u, 0x73647261u, "unknown not lowered yet"); return;
L_08A5D5AC:
    rt.unsupported(0x08A5D5ACu, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08A5D5B8:
    rt.unsupported(0x08A5D5B8u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08A5D5CC:
    rt.unsupported(0x08A5D5CCu, 0x61636F4Cu, "vfpu0 not lowered yet"); return;
L_08A5D5DC:
    rt.unsupported(0x08A5D5DCu, 0x6E696F4Au, "vfpu3 not lowered yet"); return;
L_08A5D5EC:
    rt.unsupported(0x08A5D5ECu, 0x6E696F4Au, "vfpu3 not lowered yet"); return;
L_08A5D5FC:
    rt.unsupported(0x08A5D5FCu, 0x6B636142u, "unknown not lowered yet"); return;
L_08A5D608:
    rt.unsupported(0x08A5D608u, 0x746C754Du, "unknown not lowered yet"); return;
L_08A5D618:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<67u, 1u>(vfpu_d); }
    rt.unsupported(0x08A5D61Cu, 0x4D737469u, "unknown not lowered yet"); return;
L_08A5D630:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<67u, 1u>(vfpu_d); }
    if (static_cast<std::int32_t>(aot_gpr[27]) > 0) {
    rt.unsupported(0x08A5D638u, 0x7473614Cu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0630_entry, 630u, 70u, 0x08A7A7DCu>(ctx, &aot_mem); return;
    }
    goto L_08A5D63C;
L_08A5D63C:
    // nop
    goto L_08A5D640;
L_08A5D640:
    rt.unsupported(0x08A5D640u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5D658:
    rt.unsupported(0x08A5D658u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5D66C:
    rt.unsupported(0x08A5D66Cu, 0x74737543u, "unknown not lowered yet"); return;
L_08A5D67C:
    // nop
    goto L_08A5D680;
L_08A5D680:
    rt.unsupported(0x08A5D680u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5D694:
    rt.unsupported(0x08A5D694u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5D6AC:
    rt.unsupported(0x08A5D6ACu, 0x74737543u, "unknown not lowered yet"); return;
L_08A5D6C8:
    rt.unsupported(0x08A5D6C8u, 0x61636544u, "vfpu0 not lowered yet"); return;
L_08A5D6D4:
    rt.unsupported(0x08A5D6D4u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5D6E4:
    rt.unsupported(0x08A5D6E4u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5D6F4:
    rt.unsupported(0x08A5D6F4u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5D704:
    rt.unsupported(0x08A5D704u, 0x75636F46u, "unknown not lowered yet"); return;
L_08A5D710:
    rt.unsupported(0x08A5D710u, 0x75636F46u, "unknown not lowered yet"); return;
L_08A5D720:
    ctx.execute_vfpu_vscl_ct<108u, 95u, 84u, 1u>();
    rt.unsupported(0x08A5D724u, 0x00007478u, "special? not lowered yet"); return;
L_08A5D728:
    rt.unsupported(0x08A5D728u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5D738:
    rt.unsupported(0x08A5D738u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5D748:
    rt.unsupported(0x08A5D748u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5D758:
    rt.unsupported(0x08A5D758u, 0x6B636142u, "unknown not lowered yet"); return;
L_08A5D764:
    rt.unsupported(0x08A5D764u, 0x6B636142u, "unknown not lowered yet"); return;
L_08A5D774:
    rt.unsupported(0x08A5D774u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5D784:
    rt.unsupported(0x08A5D784u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5D798:
    rt.unsupported(0x08A5D798u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5D7A4:
    rt.unsupported(0x08A5D7A4u, 0x63616C42u, "vfpu0 not lowered yet"); return;
L_08A5D7B4:
    ctx.execute_vfpu_vcmp_ct<101u, 108u, 1u, 9u>();
    rt.unsupported(0x08A5D7B8u, 0x6853776Fu, "unknown not lowered yet"); return;
L_08A5D7C8:
    ctx.execute_vfpu_vscl_ct<66u, 108u, 117u, 1u>();
    rt.unsupported(0x08A5D7CCu, 0x70616853u, "unknown not lowered yet"); return;
L_08A5D7D8:
    rt.unsupported(0x08A5D7D8u, 0x74696857u, "unknown not lowered yet"); return;
L_08A5D7EC:
    ctx.execute_vfpu_vscl_ct<66u, 108u, 117u, 1u>();
    rt.unsupported(0x08A5D7F0u, 0x70616853u, "unknown not lowered yet"); return;
L_08A5D800:
    rt.unsupported(0x08A5D800u, 0x776F6E53u, "unknown not lowered yet"); return;
L_08A5D818:
    rt.unsupported(0x08A5D818u, 0x776F6E53u, "unknown not lowered yet"); return;
L_08A5D830:
    rt.unsupported(0x08A5D830u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5D83C:
    rt.unsupported(0x08A5D83Cu, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5D84C:
    rt.unsupported(0x08A5D84Cu, 0x00657275u, "special? not lowered yet"); return;
L_08A5D850:
    rt.unsupported(0x08A5D850u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5D85C:
    rt.unsupported(0x08A5D85Cu, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5D870:
    rt.unsupported(0x08A5D870u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5D87C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<108u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<83u, 1u>(vfpu_d); }
    rt.unsupported(0x08A5D880u, 0x756C5065u, "unknown not lowered yet"); return;
L_08A5D88C:
    rt.unsupported(0x08A5D88Cu, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5D8A0:
    rt.unsupported(0x08A5D8A0u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5D8B8:
    rt.unsupported(0x08A5D8B8u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5D8C8:
    rt.unsupported(0x08A5D8C8u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5D8DC:
    rt.unsupported(0x08A5D8DCu, 0x00006572u, "special? not lowered yet"); return;
L_08A5D8E0:
    rt.unsupported(0x08A5D8E0u, 0x77536F47u, "unknown not lowered yet"); return;
L_08A5D8E8:
    rt.unsupported(0x08A5D8E8u, 0x77536F47u, "unknown not lowered yet"); return;
L_08A5D8F8:
    ctx.execute_vfpu_vscl_ct<71u, 111u, 68u, 1u>();
    rt.unsupported(0x08A5D8FCu, 0x736C6163u, "unknown not lowered yet"); return;
L_08A5D904:
    rt.unsupported(0x08A5D904u, 0x694C6F47u, "unknown not lowered yet"); return;
L_08A5D910:
    rt.unsupported(0x08A5D910u, 0x75636F46u, "unknown not lowered yet"); return;
L_08A5D920:
    ctx.execute_vfpu_vhdp(114u, 76u, 101u, 1u);
    rt.unsupported(0x08A5D924u, 0x00000074u, "special? not lowered yet"); return;
L_08A5D928:
    rt.unsupported(0x08A5D928u, 0x75636F46u, "unknown not lowered yet"); return;
L_08A5D938:
    rt.unsupported(0x08A5D938u, 0x67695272u, "vfpu1 not lowered yet"); return;
L_08A5D940:
    rt.unsupported(0x08A5D940u, 0x75636F46u, "unknown not lowered yet"); return;
L_08A5D950:
    ctx.execute_vfpu_vhdp(114u, 76u, 101u, 1u);
    rt.unsupported(0x08A5D954u, 0x00000074u, "special? not lowered yet"); return;
L_08A5D958:
    rt.unsupported(0x08A5D958u, 0x75636F46u, "unknown not lowered yet"); return;
L_08A5D968:
    rt.unsupported(0x08A5D968u, 0x67695272u, "vfpu1 not lowered yet"); return;
L_08A5D970:
    rt.unsupported(0x08A5D970u, 0x6974704Fu, "unknown not lowered yet"); return;
L_08A5D984:
    rt.unsupported(0x08A5D984u, 0x6974704Fu, "unknown not lowered yet"); return;
L_08A5D998:
    rt.unsupported(0x08A5D998u, 0x6974704Fu, "unknown not lowered yet"); return;
L_08A5D9A8:
    rt.unsupported(0x08A5D9A8u, 0x6974704Fu, "unknown not lowered yet"); return;
L_08A5D9BC:
    rt.unsupported(0x08A5D9BCu, 0x74737543u, "unknown not lowered yet"); return;
L_08A5D9D4:
    rt.unsupported(0x08A5D9D4u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5D9E8:
    rt.unsupported(0x08A5D9E8u, 0x75636F46u, "unknown not lowered yet"); return;
L_08A5D9F8:
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08A5D9FC;
L_08A5D9FC:
    if (static_cast<std::int32_t>(aot_gpr[2]) <= 0) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0618_entry, 618u, 35u, 0x08A6E304u>(ctx, &aot_mem); return;
    }
    goto L_08A5DA04;
L_08A5DA04:
    rt.unsupported(0x08A5DA04u, 0x75636F46u, "unknown not lowered yet"); return;
L_08A5DA10:
    rt.unsupported(0x08A5DA10u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DA28:
    rt.unsupported(0x08A5DA28u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DA3C:
    rt.unsupported(0x08A5DA3Cu, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DA50:
    rt.unsupported(0x08A5DA50u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DA68:
    rt.unsupported(0x08A5DA68u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DA7C:
    rt.unsupported(0x08A5DA7Cu, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DA8C:
    rt.unsupported(0x08A5DA8Cu, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DA9C:
    rt.unsupported(0x08A5DA9Cu, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DAB4:
    rt.unsupported(0x08A5DAB4u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DACC:
    rt.unsupported(0x08A5DACCu, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DAE0:
    rt.unsupported(0x08A5DAE0u, 0x75636F46u, "unknown not lowered yet"); return;
L_08A5DAEC:
    rt.unsupported(0x08A5DAECu, 0x75636F46u, "unknown not lowered yet"); return;
L_08A5DAFC:
    ctx.execute_vfpu_vscl_ct<108u, 95u, 84u, 1u>();
    rt.unsupported(0x08A5DB00u, 0x00007478u, "special? not lowered yet"); return;
L_08A5DB08:
    rt.unsupported(0x08A5DB08u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DB1C:
    rt.unsupported(0x08A5DB1Cu, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DB30:
    rt.unsupported(0x08A5DB30u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DB44:
    rt.unsupported(0x08A5DB44u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DB54:
    rt.unsupported(0x08A5DB54u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DB64:
    rt.unsupported(0x08A5DB64u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DB74:
    rt.unsupported(0x08A5DB74u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DB88:
    rt.unsupported(0x08A5DB88u, 0x75636F46u, "unknown not lowered yet"); return;
L_08A5DB94:
    rt.unsupported(0x08A5DB94u, 0x75636F46u, "unknown not lowered yet"); return;
L_08A5DBA4:
    ctx.execute_vfpu_vscl_ct<108u, 95u, 84u, 1u>();
    rt.unsupported(0x08A5DBA8u, 0x00007478u, "special? not lowered yet"); return;
L_08A5DBB0:
    rt.unsupported(0x08A5DBB0u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DBC4:
    rt.unsupported(0x08A5DBC4u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DBD8:
    rt.unsupported(0x08A5DBD8u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DBEC:
    rt.unsupported(0x08A5DBECu, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DC00:
    rt.unsupported(0x08A5DC00u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DC1C:
    rt.unsupported(0x08A5DC1Cu, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DC30:
    rt.unsupported(0x08A5DC30u, 0x61446E72u, "vfpu0 not lowered yet"); return;
L_08A5DC38:
    rt.unsupported(0x08A5DC38u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DC48:
    rt.unsupported(0x08A5DC48u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DC64:
    rt.unsupported(0x08A5DC64u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DC80:
    rt.unsupported(0x08A5DC80u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DC98:
    rt.unsupported(0x08A5DC98u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DCAC:
    rt.unsupported(0x08A5DCACu, 0x00006E72u, "special? not lowered yet"); return;
L_08A5DCB0:
    rt.unsupported(0x08A5DCB0u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DCC8:
    rt.unsupported(0x08A5DCC8u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DCE0:
    rt.unsupported(0x08A5DCE0u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DCF8:
    rt.unsupported(0x08A5DCF8u, 0x7265764Fu, "unknown not lowered yet"); return;
L_08A5DD04:
    rt.unsupported(0x08A5DD04u, 0x63614268u, "vfpu0 not lowered yet"); return;
L_08A5DD10:
    rt.unsupported(0x08A5DD10u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DD2C:
    rt.unsupported(0x08A5DD2Cu, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DD48:
    rt.unsupported(0x08A5DD48u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DD64:
    ctx.execute_vfpu_compare3(71u, 111u, 67u, 1u, 6u);
    rt.unsupported(0x08A5DD68u, 0x72756F6Cu, "unknown not lowered yet"); return;
L_08A5DD70:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<65u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<71u, 1u>(vfpu_d); }
    rt.unsupported(0x08A5DD74u, 0x7473756Au, "unknown not lowered yet"); return;
L_08A5DD7C:
    ctx.execute_vfpu_vscl_ct<76u, 105u, 118u, 1u>();
    rt.unsupported(0x08A5DD80u, 0x77537972u, "unknown not lowered yet"); return;
L_08A5DD8C:
    ctx.execute_vfpu_vscl_ct<76u, 105u, 118u, 1u>();
    rt.unsupported(0x08A5DD90u, 0x77537972u, "unknown not lowered yet"); return;
L_08A5DDA0:
    rt.unsupported(0x08A5DDA0u, 0x74746150u, "unknown not lowered yet"); return;
L_08A5DDAC:
    rt.unsupported(0x08A5DDACu, 0x00000068u, "special? not lowered yet"); return;
L_08A5DDB0:
    rt.unsupported(0x08A5DDB0u, 0x74746150u, "unknown not lowered yet"); return;
L_08A5DDBC:
    rt.unsupported(0x08A5DDBCu, 0x726F4268u, "unknown not lowered yet"); return;
L_08A5DDC4:
    rt.unsupported(0x08A5DDC4u, 0x7265764Fu, "unknown not lowered yet"); return;
L_08A5DDD0:
    rt.unsupported(0x08A5DDD0u, 0x00000068u, "special? not lowered yet"); return;
L_08A5DDD4:
    rt.unsupported(0x08A5DDD4u, 0x7265764Fu, "unknown not lowered yet"); return;
L_08A5DDE0:
    rt.unsupported(0x08A5DDE0u, 0x726F4268u, "unknown not lowered yet"); return;
L_08A5DDE8:
    rt.unsupported(0x08A5DDE8u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5DDF8:
    rt.unsupported(0x08A5DDF8u, 0x706C6548u, "unknown not lowered yet"); return;
L_08A5DE08:
    rt.unsupported(0x08A5DE08u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DE24:
    rt.unsupported(0x08A5DE24u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DE3C:
    rt.unsupported(0x08A5DE3Cu, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DE50:
    rt.unsupported(0x08A5DE50u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DE68:
    rt.unsupported(0x08A5DE68u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DE7C:
    rt.unsupported(0x08A5DE7Cu, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DE98:
    rt.unsupported(0x08A5DE98u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DEB4:
    rt.unsupported(0x08A5DEB4u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DECC:
    rt.unsupported(0x08A5DECCu, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DEE8:
    rt.unsupported(0x08A5DEE8u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DEFC:
    ctx.execute_vfpu_compare3(114u, 110u, 67u, 1u, 6u);
    rt.unsupported(0x08A5DF00u, 0x72756F6Cu, "unknown not lowered yet"); return;
L_08A5DF08:
    rt.unsupported(0x08A5DF08u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DF28:
    rt.unsupported(0x08A5DF28u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DF48:
    rt.unsupported(0x08A5DF48u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DF5C:
    ctx.execute_vfpu_compare3(114u, 110u, 67u, 1u, 6u);
    rt.unsupported(0x08A5DF60u, 0x72756F6Cu, "unknown not lowered yet"); return;
L_08A5DF6C:
    rt.unsupported(0x08A5DF6Cu, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DF90:
    rt.unsupported(0x08A5DF90u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DFA4:
    rt.unsupported(0x08A5DFA4u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DFB8:
    rt.unsupported(0x08A5DFB8u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DFD4:
    rt.unsupported(0x08A5DFD4u, 0x74737543u, "unknown not lowered yet"); return;
L_08A5DFF0:
    rt.unsupported(0x08A5DFF0u, 0x74737543u, "unknown not lowered yet"); return;
}

void recomp_unit_0601(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0601_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_601(Runtime &runtime) {
    runtime.register_generated_unit(601u, 0x08A5D000u, 4096u, &recomp_unit_0601, &recomp_unit_0601_entry);
    runtime.register_function(0x08A5D000u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D008u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D010u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D018u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D028u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D030u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D040u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D048u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D050u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D060u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D068u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D074u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D084u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D08Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D098u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D0A8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D0B0u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D0B4u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D0C4u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D0CCu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D0F8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D118u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D158u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D178u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D190u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D19Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D1B4u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D1BCu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D1D4u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D1E0u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D1F8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D208u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D220u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D228u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D240u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D248u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D260u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D268u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D280u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D290u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D298u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D2A4u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D2A8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D2B0u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D2B8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D2BCu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D2C0u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D2C8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D2D0u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D2D8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D2E0u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D2ECu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D300u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D308u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D31Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D324u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D338u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D340u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D354u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D35Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D370u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D378u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D38Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D3A8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D3BCu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D3CCu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D3E8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D404u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D408u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D424u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D428u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D430u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D43Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D44Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D450u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D45Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D468u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D470u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D480u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D490u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D4A0u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D4A8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D4B0u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D4BCu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D4D0u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D4E0u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D4ECu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D4F8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D508u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D510u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D518u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D524u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D530u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D540u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D548u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D558u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D568u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D578u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D584u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D590u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D59Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D5ACu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D5B8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D5CCu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D5DCu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D5ECu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D5FCu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D608u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D618u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D630u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D63Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D640u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D658u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D66Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D67Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D680u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D694u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D6ACu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D6C8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D6D4u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D6E4u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D6F4u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D704u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D710u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D720u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D728u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D738u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D748u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D758u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D764u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D774u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D784u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D798u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D7A4u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D7B4u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D7C8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D7D8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D7ECu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D800u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D818u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D830u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D83Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D84Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D850u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D85Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D870u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D87Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D88Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D8A0u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D8B8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D8C8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D8DCu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D8E0u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D8E8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D8F8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D904u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D910u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D920u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D928u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D938u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D940u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D950u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D958u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D968u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D970u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D984u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D998u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D9A8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D9BCu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D9D4u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D9E8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D9F8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5D9FCu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DA04u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DA10u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DA28u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DA3Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DA50u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DA68u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DA7Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DA8Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DA9Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DAB4u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DACCu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DAE0u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DAECu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DAFCu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DB08u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DB1Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DB30u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DB44u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DB54u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DB64u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DB74u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DB88u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DB94u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DBA4u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DBB0u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DBC4u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DBD8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DBECu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DC00u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DC1Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DC30u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DC38u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DC48u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DC64u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DC80u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DC98u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DCACu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DCB0u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DCC8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DCE0u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DCF8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DD04u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DD10u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DD2Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DD48u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DD64u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DD70u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DD7Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DD8Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DDA0u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DDACu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DDB0u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DDBCu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DDC4u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DDD0u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DDD4u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DDE0u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DDE8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DDF8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DE08u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DE24u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DE3Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DE50u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DE68u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DE7Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DE98u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DEB4u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DECCu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DEE8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DEFCu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DF08u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DF28u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DF48u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DF5Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DF6Cu, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DF90u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DFA4u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DFB8u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DFD4u, &recomp_unit_0601, "recomp_unit_0601");
    runtime.register_function(0x08A5DFF0u, &recomp_unit_0601, "recomp_unit_0601");
}
} // namespace psprecomp
