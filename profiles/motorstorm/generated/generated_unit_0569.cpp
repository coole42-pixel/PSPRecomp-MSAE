#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0569[1019] = {
    1, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0,
    7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0,
    13, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0,
    0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 26, 27, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 31, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0,
    35, 0, 0, 36, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 41, 42, 0, 0, 0, 0,
    43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 46, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 50, 0, 0, 51, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 56, 0, 57, 0,
    58, 59, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66,
    67, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 83, 0, 0, 0, 84, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 90, 0, 91, 0, 0, 0, 0, 0,
    0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    95, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0,
    102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 112, 0, 113, 114, 0, 0, 0,
    0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 123,
    0, 0, 124, 0, 125, 0, 0, 126, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 130, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0,
    135, 0, 136, 0, 137, 0, 0, 138, 0, 0, 139, 0, 140, 0, 0, 141, 0, 142, 0, 0, 143, 0, 144, 0, 0, 145, 0, 146, 0, 147, 0, 0,
    0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0,
    0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0,
    161, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 165,
    0, 0, 0, 166, 167, 0, 168, 0, 0, 169, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 0, 0, 0, 173, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 0, 178, 0, 179, 0, 0, 180, 0, 0, 181, 182, 0, 183, 0, 0,
    0, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0,
    0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0,
    0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208,
    0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0,
    0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219,
};
void recomp_unit_0569_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A3D004u;
        entry_id = (entry_delta < 4076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0569[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A3D004;
    case 2u: goto L_08A3D00C;
    case 3u: goto L_08A3D010;
    case 4u: goto L_08A3D034;
    case 5u: goto L_08A3D058;
    case 6u: goto L_08A3D060;
    case 7u: goto L_08A3D084;
    case 8u: goto L_08A3D08C;
    case 9u: goto L_08A3D0B0;
    case 10u: goto L_08A3D0C8;
    case 11u: goto L_08A3D0D0;
    case 12u: goto L_08A3D0F4;
    case 13u: goto L_08A3D104;
    case 14u: goto L_08A3D114;
    case 15u: goto L_08A3D11C;
    case 16u: goto L_08A3D130;
    case 17u: goto L_08A3D14C;
    case 18u: goto L_08A3D158;
    case 19u: goto L_08A3D164;
    case 20u: goto L_08A3D174;
    case 21u: goto L_08A3D17C;
    case 22u: goto L_08A3D190;
    case 23u: goto L_08A3D1A0;
    case 24u: goto L_08A3D1C4;
    case 25u: goto L_08A3D1D0;
    case 26u: goto L_08A3D1DC;
    case 27u: goto L_08A3D1E0;
    case 28u: goto L_08A3D1F4;
    case 29u: goto L_08A3D21C;
    case 30u: goto L_08A3D228;
    case 31u: goto L_08A3D234;
    case 32u: goto L_08A3D238;
    case 33u: goto L_08A3D24C;
    case 34u: goto L_08A3D278;
    case 35u: goto L_08A3D284;
    case 36u: goto L_08A3D290;
    case 37u: goto L_08A3D294;
    case 38u: goto L_08A3D2A8;
    case 39u: goto L_08A3D2D4;
    case 40u: goto L_08A3D2E0;
    case 41u: goto L_08A3D2EC;
    case 42u: goto L_08A3D2F0;
    case 43u: goto L_08A3D304;
    case 44u: goto L_08A3D328;
    case 45u: goto L_08A3D334;
    case 46u: goto L_08A3D340;
    case 47u: goto L_08A3D344;
    case 48u: goto L_08A3D358;
    case 49u: goto L_08A3D384;
    case 50u: goto L_08A3D390;
    case 51u: goto L_08A3D39C;
    case 52u: goto L_08A3D3A0;
    case 53u: goto L_08A3D3B4;
    case 54u: goto L_08A3D3D8;
    case 55u: goto L_08A3D3E4;
    case 56u: goto L_08A3D3F4;
    case 57u: goto L_08A3D3FC;
    case 58u: goto L_08A3D404;
    case 59u: goto L_08A3D408;
    case 60u: goto L_08A3D424;
    case 61u: goto L_08A3D42C;
    case 62u: goto L_08A3D434;
    case 63u: goto L_08A3D43C;
    case 64u: goto L_08A3D444;
    case 65u: goto L_08A3D464;
    case 66u: goto L_08A3D480;
    case 67u: goto L_08A3D484;
    case 68u: goto L_08A3D488;
    case 69u: goto L_08A3D498;
    case 70u: goto L_08A3D4A8;
    case 71u: goto L_08A3D4B8;
    case 72u: goto L_08A3D4D4;
    case 73u: goto L_08A3D50C;
    case 74u: goto L_08A3D518;
    case 75u: goto L_08A3D524;
    case 76u: goto L_08A3D530;
    case 77u: goto L_08A3D558;
    case 78u: goto L_08A3D55C;
    case 79u: goto L_08A3D5A0;
    case 80u: goto L_08A3D5B4;
    case 81u: goto L_08A3D5C8;
    case 82u: goto L_08A3D5DC;
    case 83u: goto L_08A3D5E0;
    case 84u: goto L_08A3D5F0;
    case 85u: goto L_08A3D60C;
    case 86u: goto L_08A3D62C;
    case 87u: goto L_08A3D638;
    case 88u: goto L_08A3D654;
    case 89u: goto L_08A3D660;
    case 90u: goto L_08A3D664;
    case 91u: goto L_08A3D66C;
    case 92u: goto L_08A3D690;
    case 93u: goto L_08A3D698;
    case 94u: goto L_08A3D6B0;
    case 95u: goto L_08A3D704;
    case 96u: goto L_08A3D70C;
    case 97u: goto L_08A3D71C;
    case 98u: goto L_08A3D738;
    case 99u: goto L_08A3D758;
    case 100u: goto L_08A3D764;
    case 101u: goto L_08A3D774;
    case 102u: goto L_08A3D784;
    case 103u: goto L_08A3D798;
    case 104u: goto L_08A3D7E4;
    case 105u: goto L_08A3D7F4;
    case 106u: goto L_08A3D804;
    case 107u: goto L_08A3D820;
    case 108u: goto L_08A3D828;
    case 109u: goto L_08A3D844;
    case 110u: goto L_08A3D854;
    case 111u: goto L_08A3D860;
    case 112u: goto L_08A3D868;
    case 113u: goto L_08A3D870;
    case 114u: goto L_08A3D874;
    case 115u: goto L_08A3D88C;
    case 116u: goto L_08A3D89C;
    case 117u: goto L_08A3D8BC;
    case 118u: goto L_08A3D8CC;
    case 119u: goto L_08A3D8D4;
    case 120u: goto L_08A3D8E4;
    case 121u: goto L_08A3D8EC;
    case 122u: goto L_08A3D8F8;
    case 123u: goto L_08A3D900;
    case 124u: goto L_08A3D90C;
    case 125u: goto L_08A3D914;
    case 126u: goto L_08A3D920;
    case 127u: goto L_08A3D92C;
    case 128u: goto L_08A3D934;
    case 129u: goto L_08A3D93C;
    case 130u: goto L_08A3D94C;
    case 131u: goto L_08A3D958;
    case 132u: goto L_08A3D960;
    case 133u: goto L_08A3D970;
    case 134u: goto L_08A3D978;
    case 135u: goto L_08A3D984;
    case 136u: goto L_08A3D98C;
    case 137u: goto L_08A3D994;
    case 138u: goto L_08A3D9A0;
    case 139u: goto L_08A3D9AC;
    case 140u: goto L_08A3D9B4;
    case 141u: goto L_08A3D9C0;
    case 142u: goto L_08A3D9C8;
    case 143u: goto L_08A3D9D4;
    case 144u: goto L_08A3D9DC;
    case 145u: goto L_08A3D9E8;
    case 146u: goto L_08A3D9F0;
    case 147u: goto L_08A3D9F8;
    case 148u: goto L_08A3DA18;
    case 149u: goto L_08A3DA34;
    case 150u: goto L_08A3DA50;
    case 151u: goto L_08A3DA58;
    case 152u: goto L_08A3DA7C;
    case 153u: goto L_08A3DA9C;
    case 154u: goto L_08A3DAC8;
    case 155u: goto L_08A3DACC;
    case 156u: goto L_08A3DADC;
    case 157u: goto L_08A3DB04;
    case 158u: goto L_08A3DB14;
    case 159u: goto L_08A3DB1C;
    case 160u: goto L_08A3DB7C;
    case 161u: goto L_08A3DB84;
    case 162u: goto L_08A3DB90;
    case 163u: goto L_08A3DBA0;
    case 164u: goto L_08A3DBFC;
    case 165u: goto L_08A3DC00;
    case 166u: goto L_08A3DC10;
    case 167u: goto L_08A3DC14;
    case 168u: goto L_08A3DC1C;
    case 169u: goto L_08A3DC28;
    case 170u: goto L_08A3DC30;
    case 171u: goto L_08A3DC40;
    case 172u: goto L_08A3DC70;
    case 173u: goto L_08A3DC94;
    case 174u: goto L_08A3DC98;
    case 175u: goto L_08A3DCA4;
    case 176u: goto L_08A3DCB4;
    case 177u: goto L_08A3DCC0;
    case 178u: goto L_08A3DCCC;
    case 179u: goto L_08A3DCD4;
    case 180u: goto L_08A3DCE0;
    case 181u: goto L_08A3DCEC;
    case 182u: goto L_08A3DCF0;
    case 183u: goto L_08A3DCF8;
    case 184u: goto L_08A3DD0C;
    case 185u: goto L_08A3DD1C;
    case 186u: goto L_08A3DD28;
    case 187u: goto L_08A3DD30;
    case 188u: goto L_08A3DD54;
    case 189u: goto L_08A3DD88;
    case 190u: goto L_08A3DD98;
    case 191u: goto L_08A3DDB8;
    case 192u: goto L_08A3DDDC;
    case 193u: goto L_08A3DDF0;
    case 194u: goto L_08A3DE08;
    case 195u: goto L_08A3DE14;
    case 196u: goto L_08A3DE3C;
    case 197u: goto L_08A3DE44;
    case 198u: goto L_08A3DE4C;
    case 199u: goto L_08A3DE64;
    case 200u: goto L_08A3DE7C;
    case 201u: goto L_08A3DE88;
    case 202u: goto L_08A3DE9C;
    case 203u: goto L_08A3DEBC;
    case 204u: goto L_08A3DEC4;
    case 205u: goto L_08A3DED8;
    case 206u: goto L_08A3DEF0;
    case 207u: goto L_08A3DEF8;
    case 208u: goto L_08A3DF00;
    case 209u: goto L_08A3DF08;
    case 210u: goto L_08A3DF10;
    case 211u: goto L_08A3DF30;
    case 212u: goto L_08A3DF3C;
    case 213u: goto L_08A3DF48;
    case 214u: goto L_08A3DF60;
    case 215u: goto L_08A3DF68;
    case 216u: goto L_08A3DF88;
    case 217u: goto L_08A3DF94;
    case 218u: goto L_08A3DFB4;
    case 219u: goto L_08A3DFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A3D004:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D0C8;
      }
      goto L_08A3D00C;
    }
L_08A3D00C:
    aot_gpr[4] = (aot_gpr[19] - aot_gpr[18]);
    goto L_08A3D010;
L_08A3D010:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-14804)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[18]);
    aot_gpr[31] = (0x08A3D034u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-14804), aot_gpr[6]);
    goto L_08A3D130;
L_08A3D034:
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
L_08A3D058:
    aot_gpr[31] = (0x08A3D060u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A3D130;
L_08A3D060:
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
L_08A3D084:
    aot_gpr[31] = (0x08A3D08Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A3D130;
L_08A3D08C:
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
L_08A3D0B0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-14816)));
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-14804), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_08A3D0C8;
L_08A3D0C8:
    aot_gpr[31] = (0x08A3D0D0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A3D130;
L_08A3D0D0:
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
L_08A3D0F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A3D104u);
    // nop
    ctx.pc = 0x08A5B214u;
    return;
L_08A3D104:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26500)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[6] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A3D11C;
      }
      goto L_08A3D114;
    }
L_08A3D114:
    aot_gpr[7] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-26496), aot_gpr[6]);
    goto L_08A3D11C;
L_08A3D11C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-26500), aot_gpr[4]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D130:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26500)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[5] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26500), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A3D158;
      }
      goto L_08A3D14C;
    }
L_08A3D14C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08A3D158u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26496)));
    ctx.pc = 0x08A5B21Cu;
    return;
L_08A3D158:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D164:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A3D174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 192u, 0x08A3FE28u>(ctx, &aot_mem) && ctx.pc == 0x08A3D174u) goto L_08A3D174;
    return;
L_08A3D174:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A3D190;
      }
      goto L_08A3D17C;
    }
L_08A3D17C:
    aot_gpr[5] = (aot_gpr[3] + 0u);
    aot_gpr[6] = (0u + 0u);
    aot_gpr[7] = (16880u << 16u);
    aot_gpr[31] = (0x08A3D190u);
    aot_gpr[4] = (aot_gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0571_entry, 571u, 71u, 0x08A3F534u>(ctx, &aot_mem) && ctx.pc == 0x08A3D190u) goto L_08A3D190;
    return;
L_08A3D190:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D1A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-27824), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A3D1C4u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0269_entry, 269u, 183u, 0x08911C58u>(ctx, &aot_mem) && ctx.pc == 0x08A3D1C4u) goto L_08A3D1C4;
    return;
L_08A3D1C4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3D1E0;
      }
      goto L_08A3D1D0;
    }
L_08A3D1D0:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-27824)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D1E0;
      }
      goto L_08A3D1DC;
    }
L_08A3D1DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    goto L_08A3D1E0;
L_08A3D1E0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D1F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-27824), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A3D21Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0269_entry, 269u, 198u, 0x08911CDCu>(ctx, &aot_mem) && ctx.pc == 0x08A3D21Cu) goto L_08A3D21C;
    return;
L_08A3D21C:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3D238;
      }
      goto L_08A3D228;
    }
L_08A3D228:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-27824)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D238;
      }
      goto L_08A3D234;
    }
L_08A3D234:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    goto L_08A3D238;
L_08A3D238:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D24C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (2220u << 16u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-27824), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A3D278u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0269_entry, 269u, 92u, 0x08911828u>(ctx, &aot_mem) && ctx.pc == 0x08A3D278u) goto L_08A3D278;
    return;
L_08A3D278:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3D294;
      }
      goto L_08A3D284;
    }
L_08A3D284:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-27824)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D294;
      }
      goto L_08A3D290;
    }
L_08A3D290:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    goto L_08A3D294;
L_08A3D294:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D2A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (2220u << 16u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-27824), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A3D2D4u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0269_entry, 269u, 153u, 0x08911B10u>(ctx, &aot_mem) && ctx.pc == 0x08A3D2D4u) goto L_08A3D2D4;
    return;
L_08A3D2D4:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3D2F0;
      }
      goto L_08A3D2E0;
    }
L_08A3D2E0:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-27824)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D2F0;
      }
      goto L_08A3D2EC;
    }
L_08A3D2EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    goto L_08A3D2F0;
L_08A3D2F0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D304:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-27824), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A3D328u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0269_entry, 269u, 138u, 0x08911A20u>(ctx, &aot_mem) && ctx.pc == 0x08A3D328u) goto L_08A3D328;
    return;
L_08A3D328:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3D344;
      }
      goto L_08A3D334;
    }
L_08A3D334:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-27824)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D344;
      }
      goto L_08A3D340;
    }
L_08A3D340:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    goto L_08A3D344;
L_08A3D344:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D358:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (2220u << 16u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(-27824), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A3D384u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0269_entry, 269u, 168u, 0x08911BB4u>(ctx, &aot_mem) && ctx.pc == 0x08A3D384u) goto L_08A3D384;
    return;
L_08A3D384:
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3D3A0;
      }
      goto L_08A3D390;
    }
L_08A3D390:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-27824)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D3A0;
      }
      goto L_08A3D39C;
    }
L_08A3D39C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[17]);
    goto L_08A3D3A0;
L_08A3D3A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D3B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[18];
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A3D464;
      }
      goto L_08A3D3D8;
    }
L_08A3D3D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    if (aot_gpr[4] != 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
        goto L_08A3D3F4;
    }
    goto L_08A3D3E4;
L_08A3D3E4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-16724)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(84), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(56)));
    goto L_08A3D3F4;
L_08A3D3F4:
    if (aot_gpr[5] != 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08A3D408;
    }
    goto L_08A3D3FC;
L_08A3D3FC:
    aot_gpr[31] = (0x08A3D404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 122u, 0x08A37A90u>(ctx, &aot_mem) && ctx.pc == 0x08A3D404u) goto L_08A3D404;
    return;
L_08A3D404:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08A3D408;
L_08A3D408:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (aot_gpr[4] & 4u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[4] & 16u);
      if (branch_taken) {
          goto L_08A3D488;
      }
      goto L_08A3D424;
    }
L_08A3D424:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[4] & 8u);
      if (branch_taken) {
          goto L_08A3D464;
      }
      goto L_08A3D42C;
    }
L_08A3D42C:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[4] | 4u);
      if (branch_taken) {
          goto L_08A3D484;
      }
      goto L_08A3D434;
    }
L_08A3D434:
    aot_gpr[31] = (0x08A3D43Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0563_entry, 563u, 103u, 0x08A37910u>(ctx, &aot_mem) && ctx.pc == 0x08A3D43Cu) goto L_08A3D43C;
    return;
L_08A3D43C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D464;
      }
      goto L_08A3D444;
    }
L_08A3D444:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08A3D480;
      }
      goto L_08A3D464;
    }
L_08A3D464:
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
L_08A3D480:
    aot_gpr[4] = (aot_gpr[4] | 4u);
    goto L_08A3D484;
L_08A3D484:
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(aot_gpr[4]));
    goto L_08A3D488;
L_08A3D488:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[17] = (aot_gpr[17] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A3D50C;
      }
      goto L_08A3D498;
    }
L_08A3D498:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A3D4D4;
      }
      goto L_08A3D4A8;
    }
L_08A3D4A8:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[6] = (0u | 68u);
    aot_gpr[31] = (0x08A3D4B8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(9744));
    if (rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 62u, 0x08A3E57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3D4B8u) goto L_08A3D4B8;
    return;
L_08A3D4B8:
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
L_08A3D4D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
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
L_08A3D50C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A3D558;
      }
      goto L_08A3D518;
    }
L_08A3D518:
    aot_gpr[5] = (aot_gpr[5] < aot_gpr[6] ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[4]);
        goto L_08A3D55C;
    }
    goto L_08A3D524;
L_08A3D524:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[6] + static_cast<std::uint32_t>(-1)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[17];
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3D558;
      }
      goto L_08A3D530;
    }
L_08A3D530:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
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
L_08A3D558:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[4]);
    goto L_08A3D55C;
L_08A3D55C:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(64));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), aot_gpr[6]);
    aot_gpr[5] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(66));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[5]);
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
L_08A3D5A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[7] = (aot_gpr[5] << 2u);
      if (branch_taken) {
          goto L_08A3D5E0;
      }
      goto L_08A3D5B4;
    }
L_08A3D5B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (0u | 4u);
    aot_gpr[31] = (0x08A3D5C8u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 50u, 0x08A3E4A0u>(ctx, &aot_mem) && ctx.pc == 0x08A3D5C8u) goto L_08A3D5C8;
    return;
L_08A3D5C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(76), aot_gpr[2]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A3D654;
      }
      goto L_08A3D5DC;
    }
L_08A3D5DC:
    aot_gpr[7] = (aot_gpr[5] << 2u);
    goto L_08A3D5E0;
L_08A3D5E0:
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (0u | 1u);
        goto L_08A3D60C;
    }
    goto L_08A3D5F0;
L_08A3D5F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D60C:
    aot_gpr[6] = (aot_gpr[6] << (aot_gpr[5] & 31u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] << 2u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[31] = (0x08A3D62Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0570_entry, 570u, 50u, 0x08A3E4A0u>(ctx, &aot_mem) && ctx.pc == 0x08A3D62Cu) goto L_08A3D62C;
    return;
L_08A3D62C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A3D654;
      }
      goto L_08A3D638;
    }
L_08A3D638:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D654:
    aot_gpr[2] = (0u | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D660:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08A3D664;
L_08A3D664:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D690;
      }
      goto L_08A3D66C;
    }
L_08A3D66C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_08A3D690;
L_08A3D690:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D698:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[9] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    aot_gpr[8] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A3D6B0;
L_08A3D6B0:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (aot_gpr[11] & 65535u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[11] = (aot_gpr[11] >> 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[2] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[7] = (aot_gpr[2] + aot_gpr[7]);
    aot_gpr[11] = (aot_gpr[7] >> 16u);
    aot_gpr[2] = (aot_gpr[7] & 65535u);
    aot_gpr[7] = (ctx.lo);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[11]);
    aot_gpr[11] = (aot_gpr[7] << 16u);
    aot_gpr[11] = (aot_gpr[11] + aot_gpr[2]);
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    aot_gpr[7] = (aot_gpr[7] >> 16u);
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[8]) < static_cast<std::int32_t>(aot_gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3D6B0;
      }
      goto L_08A3D704;
    }
L_08A3D704:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D784;
      }
      goto L_08A3D70C;
    }
L_08A3D70C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[10]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    if (aot_gpr[6] != 0u) {
    aot_gpr[4] = (aot_gpr[10] << 2u);
        goto L_08A3D774;
    }
    goto L_08A3D71C;
L_08A3D71C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08A3D738u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A3D5A0;
L_08A3D738:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(12));
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x08A3D758u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x08A3D758u) goto L_08A3D758;
    return;
L_08A3D758:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A3D764u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08A3D664;
L_08A3D764:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[10] << 2u);
    goto L_08A3D774;
L_08A3D774:
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[10] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[6]);
    goto L_08A3D784;
L_08A3D784:
    aot_gpr[2] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D798:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[9] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (0u | 9u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr[9]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[5] = (ctx.lo);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3D7F4;
      }
      goto L_08A3D7E4;
    }
L_08A3D7E4:
    aot_gpr[6] = (aot_gpr[6] << 1u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3D7E4;
      }
      goto L_08A3D7F4;
    }
L_08A3D7F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A3D804u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    goto L_08A3D5A0;
L_08A3D804:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[20] = (0u | 9u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A3D860;
      }
      goto L_08A3D820;
    }
L_08A3D820:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(9));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A3D828;
L_08A3D828:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-48));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A3D844u);
    aot_gpr[6] = (0u | 10u);
    goto L_08A3D698;
L_08A3D844:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3D828;
      }
      goto L_08A3D854;
    }
L_08A3D854:
    aot_gpr[17] = (aot_gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3D868;
      }
      goto L_08A3D860;
    }
L_08A3D860:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(10));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
    goto L_08A3D868;
L_08A3D868:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D89C;
      }
      goto L_08A3D870;
    }
L_08A3D870:
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
    goto L_08A3D874;
L_08A3D874:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-48));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A3D88Cu);
    aot_gpr[6] = (0u | 10u);
    goto L_08A3D698;
L_08A3D88C:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < static_cast<std::int32_t>(aot_gpr[19]) ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(0))))));
        goto L_08A3D874;
    }
    goto L_08A3D89C;
L_08A3D89C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D8BC:
    aot_gpr[5] = (65535u << 16u);
    aot_gpr[5] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3D8D4;
      }
      goto L_08A3D8CC;
    }
L_08A3D8CC:
    aot_gpr[2] = (0u | 16u);
    aot_gpr[4] = (aot_gpr[4] << 16u);
    goto L_08A3D8D4;
L_08A3D8D4:
    aot_gpr[5] = (65280u << 16u);
    aot_gpr[5] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (61440u << 16u);
      if (branch_taken) {
          goto L_08A3D8EC;
      }
      goto L_08A3D8E4;
    }
L_08A3D8E4:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[4] << 8u);
    goto L_08A3D8EC;
L_08A3D8EC:
    aot_gpr[5] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (49152u << 16u);
      if (branch_taken) {
          goto L_08A3D900;
      }
      goto L_08A3D8F8;
    }
L_08A3D8F8:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[4] << 4u);
    goto L_08A3D900;
L_08A3D900:
    aot_gpr[5] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (32768u << 16u);
      if (branch_taken) {
          goto L_08A3D914;
      }
      goto L_08A3D90C;
    }
L_08A3D90C:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    goto L_08A3D914;
L_08A3D914:
    aot_gpr[5] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (16384u << 16u);
      if (branch_taken) {
          goto L_08A3D934;
      }
      goto L_08A3D920;
    }
L_08A3D920:
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3D934;
      }
      goto L_08A3D92C;
    }
L_08A3D92C:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 32u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D934:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D93C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] & 7u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[6] = (aot_gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08A3D984;
      }
      goto L_08A3D94C;
    }
L_08A3D94C:
    aot_gpr[6] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[5] & 2u);
      if (branch_taken) {
          goto L_08A3D970;
      }
      goto L_08A3D958;
    }
L_08A3D958:
    if (aot_gpr[6] == 0u) {
    aot_gpr[5] = (aot_gpr[5] >> 2u);
        goto L_08A3D978;
    }
    goto L_08A3D960;
L_08A3D960:
    aot_gpr[5] = (aot_gpr[5] >> 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D970:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D978:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 2u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D984:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3D994;
      }
      goto L_08A3D98C;
    }
L_08A3D98C:
    aot_gpr[2] = (0u | 16u);
    aot_gpr[5] = (aot_gpr[5] >> 16u);
    goto L_08A3D994;
L_08A3D994:
    aot_gpr[6] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[5] & 15u);
      if (branch_taken) {
          goto L_08A3D9AC;
      }
      goto L_08A3D9A0;
    }
L_08A3D9A0:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (aot_gpr[5] >> 8u);
    aot_gpr[6] = (aot_gpr[5] & 15u);
    goto L_08A3D9AC;
L_08A3D9AC:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[5] & 3u);
      if (branch_taken) {
          goto L_08A3D9C0;
      }
      goto L_08A3D9B4;
    }
L_08A3D9B4:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(4));
    aot_gpr[5] = (aot_gpr[5] >> 4u);
    aot_gpr[6] = (aot_gpr[5] & 3u);
    goto L_08A3D9C0;
L_08A3D9C0:
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[6] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A3D9D4;
      }
      goto L_08A3D9C8;
    }
L_08A3D9C8:
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(2));
    aot_gpr[5] = (aot_gpr[5] >> 2u);
    aot_gpr[6] = (aot_gpr[5] & 1u);
    goto L_08A3D9D4;
L_08A3D9D4:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3D9F0;
      }
      goto L_08A3D9DC;
    }
L_08A3D9DC:
    aot_gpr[5] = (aot_gpr[5] >> 1u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3D9F0;
      }
      goto L_08A3D9E8;
    }
L_08A3D9E8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 32u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D9F0:
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3D9F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A3DA18u);
    aot_gpr[5] = (0u | 1u);
    goto L_08A3D5A0;
L_08A3DA18:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3DA34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[7] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A3DA58;
      }
      goto L_08A3DA50;
    }
L_08A3DA50:
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    goto L_08A3DA58;
L_08A3DA58:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (aot_gpr[11] + aot_gpr[10]);
    aot_gpr[9] = (static_cast<std::int32_t>(aot_gpr[7]) < static_cast<std::int32_t>(aot_gpr[8]) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[8] << 2u);
    if (aot_gpr[9] != 0u) {
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
        goto L_08A3DA7C;
    }
    goto L_08A3DA7C;
L_08A3DA7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[31] = (0x08A3DA9Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_08A3D5A0;
L_08A3DA9C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(20));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[3] = (aot_gpr[9] + aot_gpr[7]);
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[12] = (aot_gpr[9] < aot_gpr[3] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[12] == 0u;
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A3DADC;
      }
      goto L_08A3DAC8;
    }
L_08A3DAC8:
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A3DACC;
L_08A3DACC:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[12] = (aot_gpr[9] < aot_gpr[3] ? 1u : 0u);
    if (aot_gpr[12] != 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[9] + static_cast<std::uint32_t>(0), 0u);
        goto L_08A3DACC;
    }
    goto L_08A3DADC;
L_08A3DADC:
    aot_gpr[9] = (aot_gpr[10] | 0u);
    aot_gpr[10] = (aot_gpr[6] + static_cast<std::uint32_t>(20));
    aot_gpr[6] = (aot_gpr[9] << 2u);
    aot_gpr[3] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    aot_gpr[11] = (aot_gpr[11] << 2u);
    aot_gpr[6] = (aot_gpr[10] + aot_gpr[6]);
    aot_gpr[11] = (aot_gpr[3] + aot_gpr[11]);
    aot_gpr[9] = (aot_gpr[10] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A3DC10;
      }
      goto L_08A3DB04;
    }
L_08A3DB04:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[14] = (aot_gpr[13] & 65535u);
    { const bool branch_taken = aot_gpr[14] == 0u;
    aot_gpr[9] = (aot_gpr[3] | 0u);
      if (branch_taken) {
          goto L_08A3DB84;
      }
      goto L_08A3DB14;
    }
L_08A3DB14:
    aot_gpr[13] = (aot_gpr[5] | 0u);
    aot_gpr[12] = (0u | 0u);
    goto L_08A3DB1C;
L_08A3DB1C:
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    aot_gpr[25] = (aot_gpr[15] & 65535u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[25])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[15] = (aot_gpr[15] >> 16u);
    aot_gpr[25] = (aot_gpr[24] & 65535u);
    aot_gpr[24] = (aot_gpr[24] >> 16u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[31] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[15] = (aot_gpr[31] + aot_gpr[25]);
    aot_gpr[15] = (aot_gpr[15] + aot_gpr[12]);
    aot_gpr[12] = (aot_gpr[15] >> 16u);
    aot_gpr[25] = (ctx.lo);
    aot_gpr[24] = (aot_gpr[25] + aot_gpr[24]);
    aot_gpr[12] = (aot_gpr[24] + aot_gpr[12]);
    PSPRECOMP_AOT_STORE16(aot_gpr[13] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[15]));
    aot_gpr[12] = (aot_gpr[12] >> 16u);
    aot_gpr[15] = (aot_gpr[9] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[15] != 0u;
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3DB1C;
      }
      goto L_08A3DB7C;
    }
L_08A3DB7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[12]);
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    goto L_08A3DB84;
L_08A3DB84:
    aot_gpr[14] = (aot_gpr[13] >> 16u);
    { const bool branch_taken = aot_gpr[14] == 0u;
    aot_gpr[13] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A3DC00;
      }
      goto L_08A3DB90;
    }
L_08A3DB90:
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (aot_gpr[3] | 0u);
    aot_gpr[12] = (0u | 0u);
    aot_gpr[15] = (aot_gpr[24] | 0u);
    goto L_08A3DBA0;
L_08A3DBA0:
    aot_gpr[25] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE16(aot_gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[15]));
    aot_gpr[25] = (aot_gpr[25] & 65535u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[25])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[24] = (aot_gpr[24] >> 16u);
    aot_gpr[15] = (ctx.lo);
    aot_gpr[15] = (aot_gpr[15] + aot_gpr[24]);
    aot_gpr[12] = (aot_gpr[15] + aot_gpr[12]);
    PSPRECOMP_AOT_STORE16(aot_gpr[13] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[12]));
    aot_gpr[15] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(4));
    aot_gpr[15] = (aot_gpr[15] >> 16u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr[24] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    aot_gpr[15] = (aot_gpr[12] >> 16u);
    aot_gpr[12] = (aot_gpr[24] & 65535u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
    aot_gpr[25] = (ctx.lo);
    aot_gpr[12] = (aot_gpr[25] + aot_gpr[12]);
    aot_gpr[15] = (aot_gpr[12] + aot_gpr[15]);
    aot_gpr[25] = (aot_gpr[9] < aot_gpr[11] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[25] != 0u;
    aot_gpr[12] = (aot_gpr[15] >> 16u);
      if (branch_taken) {
          goto L_08A3DBA0;
      }
      goto L_08A3DBFC;
    }
L_08A3DBFC:
    PSPRECOMP_AOT_STORE32(aot_gpr[13] + static_cast<std::uint32_t>(0), aot_gpr[15]);
    goto L_08A3DC00;
L_08A3DC00:
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
    aot_gpr[9] = (aot_gpr[10] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3DB04;
      }
      goto L_08A3DC10;
    }
L_08A3DC10:
    aot_gpr[13] = (aot_gpr[4] + aot_gpr[7]);
    goto L_08A3DC14;
L_08A3DC14:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[8]) <= 0;
    aot_gpr[13] = (aot_gpr[13] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A3DC30;
      }
      goto L_08A3DC1C;
    }
L_08A3DC1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DC30;
      }
      goto L_08A3DC28;
    }
L_08A3DC28:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A3DC14;
      }
      goto L_08A3DC30;
    }
L_08A3DC30:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[8]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3DC40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[6] & 3u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A3DC98;
      }
      goto L_08A3DC70;
    }
L_08A3DC70:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10096));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A3DC94u);
    aot_gpr[7] = (0u | 0u);
    goto L_08A3D698;
L_08A3DC94:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_08A3DC98;
L_08A3DC98:
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[16]) >> 2u));
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[19] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A3DD30;
      }
      goto L_08A3DCA4;
    }
L_08A3DCA4:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(72)));
    aot_gpr[16] = (aot_gpr[19] & 1u);
    { const bool branch_taken = aot_gpr[20] != 0u;
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[19]) >> 1u));
      if (branch_taken) {
          goto L_08A3DCCC;
      }
      goto L_08A3DCB4;
    }
L_08A3DCB4:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A3DCC0u);
    aot_gpr[5] = (0u | 625u);
    goto L_08A3D9F8;
L_08A3DCC0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(72), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A3DCCC;
L_08A3DCCC:
    { const bool branch_taken = aot_gpr[16] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A3DCF0;
      }
      goto L_08A3DCD4;
    }
L_08A3DCD4:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A3DCE0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    goto L_08A3DA34;
L_08A3DCE0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A3DCECu);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A3D664;
L_08A3DCEC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_08A3DCF0;
L_08A3DCF0:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[16] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A3DD30;
      }
      goto L_08A3DCF8;
    }
L_08A3DCF8:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[16] = (aot_gpr[19] & 1u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
      if (branch_taken) {
          goto L_08A3DD28;
      }
      goto L_08A3DD0C;
    }
L_08A3DD0C:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A3DD1Cu);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    goto L_08A3DA34;
L_08A3DD1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A3DD28;
L_08A3DD28:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A3DCCC;
      }
      goto L_08A3DD30;
    }
L_08A3DD30:
    aot_gpr[2] = (aot_gpr[17] | 0u);
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
L_08A3DD54:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[11] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(16)));
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 5u));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[10] + aot_gpr[5]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[2] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[11] | 0u);
      if (branch_taken) {
          goto L_08A3DD98;
      }
      goto L_08A3DD88;
    }
L_08A3DD88:
    aot_gpr[9] = (aot_gpr[9] << 1u);
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[7]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3DD88;
      }
      goto L_08A3DD98;
    }
L_08A3DD98:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[31] = (0x08A3DDB8u);
    aot_gpr[5] = (aot_gpr[8] | 0u);
    goto L_08A3D5A0;
L_08A3DDB8:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (0u | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[8] = (aot_gpr[2] + static_cast<std::uint32_t>(20));
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] == 0u;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A3DDF0;
      }
      goto L_08A3DDDC;
    }
L_08A3DDDC:
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[11] = (static_cast<std::int32_t>(aot_gpr[9]) < static_cast<std::int32_t>(aot_gpr[10]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[11] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3DDDC;
      }
      goto L_08A3DDF0;
    }
L_08A3DDF0:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[10] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    aot_gpr[9] = (aot_gpr[9] << 2u);
    aot_gpr[6] = (aot_gpr[6] & 31u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[9] = (aot_gpr[10] + aot_gpr[9]);
      if (branch_taken) {
          goto L_08A3DE4C;
      }
      goto L_08A3DE08;
    }
L_08A3DE08:
    aot_gpr[3] = (0u | 32u);
    aot_gpr[3] = (aot_gpr[3] - aot_gpr[6]);
    aot_gpr[11] = (0u | 0u);
    goto L_08A3DE14;
L_08A3DE14:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[12] = (aot_gpr[12] << (aot_gpr[6] & 31u));
    aot_gpr[11] = (aot_gpr[12] | aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[11]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
    aot_gpr[12] = (aot_gpr[10] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[12] != 0u;
    aot_gpr[11] = (aot_gpr[11] >> (aot_gpr[3] & 31u));
      if (branch_taken) {
          goto L_08A3DE14;
      }
      goto L_08A3DE3C;
    }
L_08A3DE3C:
    { const bool branch_taken = aot_gpr[11] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[11]);
      if (branch_taken) {
          goto L_08A3DE64;
      }
      goto L_08A3DE44;
    }
L_08A3DE44:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3DE64;
      }
      goto L_08A3DE4C;
    }
L_08A3DE4C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[8] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[10] < aot_gpr[9] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3DE4C;
      }
      goto L_08A3DE64;
    }
L_08A3DE64:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A3DE7Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    goto L_08A3D664;
L_08A3DE7C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3DE88:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(16)));
    aot_gpr[2] = (aot_gpr[2] - aot_gpr[6]);
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[7] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A3DEBC;
      }
      goto L_08A3DE9C;
    }
L_08A3DE9C:
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[7] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A3DEC4;
      }
      goto L_08A3DEBC;
    }
L_08A3DEBC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3DEC4:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[8] == aot_gpr[9];
    aot_gpr[5] = (aot_gpr[6] < aot_gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3DEF8;
      }
      goto L_08A3DED8;
    }
L_08A3DED8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[2] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[5] < aot_gpr[4] ? 1u : 0u);
    if (aot_gpr[4] != 0u) {
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08A3DEF0;
    }
    goto L_08A3DEF0;
L_08A3DEF0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3DEF8:
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[7] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A3DF08;
      }
      goto L_08A3DF00;
    }
L_08A3DF00:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08A3DEC4;
      }
      goto L_08A3DF08;
    }
L_08A3DF08:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3DF10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[11] = (aot_gpr[5] | 0u);
    aot_gpr[3] = (aot_gpr[4] | 0u);
    aot_gpr[10] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (aot_gpr[11] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A3DF30u);
    aot_gpr[5] = (aot_gpr[10] | 0u);
    goto L_08A3DE88;
L_08A3DF30:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3DF60;
      }
      goto L_08A3DF3C;
    }
L_08A3DF3C:
    aot_gpr[4] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A3DF48u);
    aot_gpr[5] = (0u | 0u);
    goto L_08A3D5A0;
L_08A3DF48:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(20), 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3DF60:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3DF88;
      }
      goto L_08A3DF68;
    }
L_08A3DF68:
    aot_gpr[4] = (aot_gpr[11] | 0u);
    aot_gpr[11] = (aot_gpr[10] | 0u);
    aot_gpr[10] = (aot_gpr[4] | 0u);
    aot_gpr[9] = (0u | 1u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[11] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[6] = (aot_gpr[10] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08A3DF94;
      }
      goto L_08A3DF88;
    }
L_08A3DF88:
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[11] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (aot_gpr[11] + static_cast<std::uint32_t>(20));
    aot_gpr[6] = (aot_gpr[10] + static_cast<std::uint32_t>(20));
    goto L_08A3DF94;
L_08A3DF94:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[11]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[3] | 0u);
    aot_gpr[31] = (0x08A3DFB4u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_08A3D5A0;
L_08A3DFB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[9] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] << 2u);
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[2] + static_cast<std::uint32_t>(20));
    aot_gpr[3] = (0u | 0u);
    goto L_08A3DFEC;
L_08A3DFEC:
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[12] = (aot_gpr[10] & 65535u);
    aot_gpr[13] = (aot_gpr[11] & 65535u);
    aot_gpr[12] = (aot_gpr[12] - aot_gpr[13]);
    ctx.pc = 0x08A3E000u; return;
}

void recomp_unit_0569(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0569_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_569(Runtime &runtime) {
    runtime.register_generated_unit(569u, 0x08A3D000u, 4096u, &recomp_unit_0569, &recomp_unit_0569_entry);
    runtime.register_function(0x08A3D004u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D00Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D010u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D034u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D058u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D060u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D084u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D08Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D0B0u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D0C8u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D0D0u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D0F4u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D104u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D114u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D11Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D130u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D14Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D158u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D164u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D174u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D17Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D190u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D1A0u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D1C4u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D1D0u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D1DCu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D1E0u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D1F4u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D21Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D228u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D234u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D238u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D24Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D278u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D284u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D290u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D294u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D2A8u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D2D4u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D2E0u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D2ECu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D2F0u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D304u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D328u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D334u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D340u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D344u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D358u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D384u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D390u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D39Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D3A0u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D3B4u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D3D8u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D3E4u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D3F4u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D3FCu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D404u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D408u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D424u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D42Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D434u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D43Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D444u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D464u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D480u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D484u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D488u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D498u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D4A8u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D4B8u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D4D4u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D50Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D518u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D524u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D530u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D558u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D55Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D5A0u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D5B4u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D5C8u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D5DCu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D5E0u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D5F0u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D60Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D62Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D638u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D654u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D660u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D664u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D66Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D690u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D698u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D6B0u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D704u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D70Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D71Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D738u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D758u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D764u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D774u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D784u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D798u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D7E4u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D7F4u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D804u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D820u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D828u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D844u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D854u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D860u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D868u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D870u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D874u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D88Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D89Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D8BCu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D8CCu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D8D4u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D8E4u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D8ECu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D8F8u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D900u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D90Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D914u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D920u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D92Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D934u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D93Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D94Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D958u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D960u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D970u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D978u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D984u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D98Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D994u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D9A0u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D9ACu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D9B4u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D9C0u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D9C8u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D9D4u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D9DCu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D9E8u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D9F0u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3D9F8u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DA18u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DA34u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DA50u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DA58u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DA7Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DA9Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DAC8u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DACCu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DADCu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DB04u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DB14u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DB1Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DB7Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DB84u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DB90u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DBA0u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DBFCu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DC00u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DC10u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DC14u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DC1Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DC28u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DC30u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DC40u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DC70u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DC94u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DC98u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DCA4u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DCB4u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DCC0u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DCCCu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DCD4u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DCE0u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DCECu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DCF0u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DCF8u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DD0Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DD1Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DD28u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DD30u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DD54u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DD88u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DD98u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DDB8u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DDDCu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DDF0u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DE08u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DE14u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DE3Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DE44u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DE4Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DE64u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DE7Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DE88u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DE9Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DEBCu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DEC4u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DED8u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DEF0u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DEF8u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DF00u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DF08u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DF10u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DF30u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DF3Cu, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DF48u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DF60u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DF68u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DF88u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DF94u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DFB4u, &recomp_unit_0569, "recomp_unit_0569");
    runtime.register_function(0x08A3DFECu, &recomp_unit_0569, "recomp_unit_0569");
}
} // namespace psprecomp
