#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0361[1017] = {
    1, 0, 2, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 8, 0, 0, 0, 0, 9, 0, 10, 0, 0, 11, 0,
    12, 0, 13, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 17, 0, 18, 0, 0, 0, 0, 19, 0, 20, 21, 0, 22, 0, 0, 0, 0,
    0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 27, 28, 0, 0, 0, 0, 29, 0, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 32, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 42, 0, 43, 0, 44, 0, 0, 45, 0, 46, 47,
    0, 48, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 57, 0, 0, 58, 0, 59, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 68, 0, 69, 0, 70, 71, 0, 72, 0, 73, 0, 0, 74, 0,
    75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 79, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 85, 0, 86, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0,
    0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 93, 94, 0, 95, 0, 96, 0, 0, 97,
    0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 105, 0, 106, 0, 107, 0, 108, 109, 0, 110, 0, 111, 0, 0, 112, 0, 113, 0, 0, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 122, 0, 123, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 130, 131, 0, 132, 0, 133,
    0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 142, 0, 143, 0, 144, 0, 145, 146, 0, 147, 0, 148, 0, 0, 149, 0, 150, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 156, 0, 157, 0, 158, 0, 0, 159, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 165, 0, 166, 0, 167, 0,
    0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 173, 0, 0, 0, 174, 0,
    0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 193, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 197,
    0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 205, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0,
    211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 0, 216, 0, 217, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 226,
    0, 0, 227, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0,
    0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 246, 247,
};
void recomp_unit_0361_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0896D000u;
        entry_id = (entry_delta < 4068u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0361[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0896D000;
    case 2u: goto L_0896D008;
    case 3u: goto L_0896D01C;
    case 4u: goto L_0896D024;
    case 5u: goto L_0896D02C;
    case 6u: goto L_0896D040;
    case 7u: goto L_0896D048;
    case 8u: goto L_0896D050;
    case 9u: goto L_0896D064;
    case 10u: goto L_0896D06C;
    case 11u: goto L_0896D078;
    case 12u: goto L_0896D080;
    case 13u: goto L_0896D088;
    case 14u: goto L_0896D098;
    case 15u: goto L_0896D0A0;
    case 16u: goto L_0896D0B4;
    case 17u: goto L_0896D0BC;
    case 18u: goto L_0896D0C4;
    case 19u: goto L_0896D0D8;
    case 20u: goto L_0896D0E0;
    case 21u: goto L_0896D0E4;
    case 22u: goto L_0896D0EC;
    case 23u: goto L_0896D104;
    case 24u: goto L_0896D120;
    case 25u: goto L_0896D13C;
    case 26u: goto L_0896D148;
    case 27u: goto L_0896D15C;
    case 28u: goto L_0896D160;
    case 29u: goto L_0896D174;
    case 30u: goto L_0896D190;
    case 31u: goto L_0896D1A0;
    case 32u: goto L_0896D1A8;
    case 33u: goto L_0896D1AC;
    case 34u: goto L_0896D1B8;
    case 35u: goto L_0896D1D4;
    case 36u: goto L_0896D1E0;
    case 37u: goto L_0896D200;
    case 38u: goto L_0896D20C;
    case 39u: goto L_0896D228;
    case 40u: goto L_0896D234;
    case 41u: goto L_0896D24C;
    case 42u: goto L_0896D254;
    case 43u: goto L_0896D25C;
    case 44u: goto L_0896D264;
    case 45u: goto L_0896D270;
    case 46u: goto L_0896D278;
    case 47u: goto L_0896D27C;
    case 48u: goto L_0896D284;
    case 49u: goto L_0896D290;
    case 50u: goto L_0896D298;
    case 51u: goto L_0896D2A8;
    case 52u: goto L_0896D2B4;
    case 53u: goto L_0896D2C4;
    case 54u: goto L_0896D2CC;
    case 55u: goto L_0896D2E0;
    case 56u: goto L_0896D2F8;
    case 57u: goto L_0896D308;
    case 58u: goto L_0896D314;
    case 59u: goto L_0896D31C;
    case 60u: goto L_0896D330;
    case 61u: goto L_0896D33C;
    case 62u: goto L_0896D348;
    case 63u: goto L_0896D36C;
    case 64u: goto L_0896D378;
    case 65u: goto L_0896D3A4;
    case 66u: goto L_0896D3B0;
    case 67u: goto L_0896D3C0;
    case 68u: goto L_0896D3C8;
    case 69u: goto L_0896D3D0;
    case 70u: goto L_0896D3D8;
    case 71u: goto L_0896D3DC;
    case 72u: goto L_0896D3E4;
    case 73u: goto L_0896D3EC;
    case 74u: goto L_0896D3F8;
    case 75u: goto L_0896D400;
    case 76u: goto L_0896D414;
    case 77u: goto L_0896D4A4;
    case 78u: goto L_0896D4C0;
    case 79u: goto L_0896D4CC;
    case 80u: goto L_0896D4D0;
    case 81u: goto L_0896D4E0;
    case 82u: goto L_0896D514;
    case 83u: goto L_0896D524;
    case 84u: goto L_0896D534;
    case 85u: goto L_0896D538;
    case 86u: goto L_0896D540;
    case 87u: goto L_0896D548;
    case 88u: goto L_0896D554;
    case 89u: goto L_0896D574;
    case 90u: goto L_0896D594;
    case 91u: goto L_0896D5C4;
    case 92u: goto L_0896D5CC;
    case 93u: goto L_0896D5DC;
    case 94u: goto L_0896D5E0;
    case 95u: goto L_0896D5E8;
    case 96u: goto L_0896D5F0;
    case 97u: goto L_0896D5FC;
    case 98u: goto L_0896D60C;
    case 99u: goto L_0896D620;
    case 100u: goto L_0896D634;
    case 101u: goto L_0896D658;
    case 102u: goto L_0896D664;
    case 103u: goto L_0896D690;
    case 104u: goto L_0896D69C;
    case 105u: goto L_0896D6AC;
    case 106u: goto L_0896D6B4;
    case 107u: goto L_0896D6BC;
    case 108u: goto L_0896D6C4;
    case 109u: goto L_0896D6C8;
    case 110u: goto L_0896D6D0;
    case 111u: goto L_0896D6D8;
    case 112u: goto L_0896D6E4;
    case 113u: goto L_0896D6EC;
    case 114u: goto L_0896D700;
    case 115u: goto L_0896D72C;
    case 116u: goto L_0896D744;
    case 117u: goto L_0896D754;
    case 118u: goto L_0896D764;
    case 119u: goto L_0896D7A0;
    case 120u: goto L_0896D7B0;
    case 121u: goto L_0896D7C0;
    case 122u: goto L_0896D7C4;
    case 123u: goto L_0896D7CC;
    case 124u: goto L_0896D7D4;
    case 125u: goto L_0896D7E0;
    case 126u: goto L_0896D800;
    case 127u: goto L_0896D820;
    case 128u: goto L_0896D850;
    case 129u: goto L_0896D858;
    case 130u: goto L_0896D868;
    case 131u: goto L_0896D86C;
    case 132u: goto L_0896D874;
    case 133u: goto L_0896D87C;
    case 134u: goto L_0896D888;
    case 135u: goto L_0896D898;
    case 136u: goto L_0896D8AC;
    case 137u: goto L_0896D8C0;
    case 138u: goto L_0896D8DC;
    case 139u: goto L_0896D8E8;
    case 140u: goto L_0896D910;
    case 141u: goto L_0896D91C;
    case 142u: goto L_0896D92C;
    case 143u: goto L_0896D934;
    case 144u: goto L_0896D93C;
    case 145u: goto L_0896D944;
    case 146u: goto L_0896D948;
    case 147u: goto L_0896D950;
    case 148u: goto L_0896D958;
    case 149u: goto L_0896D964;
    case 150u: goto L_0896D96C;
    case 151u: goto L_0896D980;
    case 152u: goto L_0896D9A4;
    case 153u: goto L_0896D9B8;
    case 154u: goto L_0896D9C8;
    case 155u: goto L_0896D9D8;
    case 156u: goto L_0896D9DC;
    case 157u: goto L_0896D9E4;
    case 158u: goto L_0896D9EC;
    case 159u: goto L_0896D9F8;
    case 160u: goto L_0896DA14;
    case 161u: goto L_0896DA34;
    case 162u: goto L_0896DA4C;
    case 163u: goto L_0896DA54;
    case 164u: goto L_0896DA64;
    case 165u: goto L_0896DA68;
    case 166u: goto L_0896DA70;
    case 167u: goto L_0896DA78;
    case 168u: goto L_0896DA84;
    case 169u: goto L_0896DA94;
    case 170u: goto L_0896DAA8;
    case 171u: goto L_0896DABC;
    case 172u: goto L_0896DAE4;
    case 173u: goto L_0896DAE8;
    case 174u: goto L_0896DAF8;
    case 175u: goto L_0896DB10;
    case 176u: goto L_0896DB18;
    case 177u: goto L_0896DB38;
    case 178u: goto L_0896DB40;
    case 179u: goto L_0896DB44;
    case 180u: goto L_0896DB50;
    case 181u: goto L_0896DB78;
    case 182u: goto L_0896DB80;
    case 183u: goto L_0896DB88;
    case 184u: goto L_0896DBB0;
    case 185u: goto L_0896DBD0;
    case 186u: goto L_0896DBE0;
    case 187u: goto L_0896DC0C;
    case 188u: goto L_0896DC1C;
    case 189u: goto L_0896DC40;
    case 190u: goto L_0896DC90;
    case 191u: goto L_0896DC98;
    case 192u: goto L_0896DCBC;
    case 193u: goto L_0896DCC0;
    case 194u: goto L_0896DCC8;
    case 195u: goto L_0896DCE4;
    case 196u: goto L_0896DCF4;
    case 197u: goto L_0896DCFC;
    case 198u: goto L_0896DD04;
    case 199u: goto L_0896DD0C;
    case 200u: goto L_0896DD14;
    case 201u: goto L_0896DD1C;
    case 202u: goto L_0896DD24;
    case 203u: goto L_0896DD2C;
    case 204u: goto L_0896DD34;
    case 205u: goto L_0896DD3C;
    case 206u: goto L_0896DD4C;
    case 207u: goto L_0896DD54;
    case 208u: goto L_0896DD68;
    case 209u: goto L_0896DD70;
    case 210u: goto L_0896DD78;
    case 211u: goto L_0896DD80;
    case 212u: goto L_0896DD88;
    case 213u: goto L_0896DD90;
    case 214u: goto L_0896DD98;
    case 215u: goto L_0896DDA0;
    case 216u: goto L_0896DDAC;
    case 217u: goto L_0896DDB4;
    case 218u: goto L_0896DDBC;
    case 219u: goto L_0896DDC4;
    case 220u: goto L_0896DDCC;
    case 221u: goto L_0896DDD4;
    case 222u: goto L_0896DDDC;
    case 223u: goto L_0896DDE4;
    case 224u: goto L_0896DDEC;
    case 225u: goto L_0896DDF4;
    case 226u: goto L_0896DDFC;
    case 227u: goto L_0896DE08;
    case 228u: goto L_0896DE10;
    case 229u: goto L_0896DE20;
    case 230u: goto L_0896DE34;
    case 231u: goto L_0896DE70;
    case 232u: goto L_0896DE98;
    case 233u: goto L_0896DEB8;
    case 234u: goto L_0896DEBC;
    case 235u: goto L_0896DEF0;
    case 236u: goto L_0896DF18;
    case 237u: goto L_0896DF20;
    case 238u: goto L_0896DF2C;
    case 239u: goto L_0896DF48;
    case 240u: goto L_0896DF54;
    case 241u: goto L_0896DF60;
    case 242u: goto L_0896DF78;
    case 243u: goto L_0896DF8C;
    case 244u: goto L_0896DFC4;
    case 245u: goto L_0896DFCC;
    case 246u: goto L_0896DFDC;
    case 247u: goto L_0896DFE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0896D000:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0896D0E4;
      }
      goto L_0896D008;
    }
L_0896D008:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0896D01Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24880));
    if (rt.invoke_chained_direct<&recomp_unit_0356_entry, 356u, 139u, 0x089688A4u>(ctx, &aot_mem) && ctx.pc == 0x0896D01Cu) goto L_0896D01C;
    return;
L_0896D01C:
    aot_gpr[31] = (0x0896D024u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0360_entry, 360u, 180u, 0x0896CB7Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D024u) goto L_0896D024;
    return;
L_0896D024:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0896D0E4;
      }
      goto L_0896D02C;
    }
L_0896D02C:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0896D040u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27928));
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 99u, 0x0896E678u>(ctx, &aot_mem) && ctx.pc == 0x0896D040u) goto L_0896D040;
    return;
L_0896D040:
    aot_gpr[31] = (0x0896D048u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0360_entry, 360u, 211u, 0x0896CD44u>(ctx, &aot_mem) && ctx.pc == 0x0896D048u) goto L_0896D048;
    return;
L_0896D048:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0896D0E4;
      }
      goto L_0896D050;
    }
L_0896D050:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0896D064u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24880));
    if (rt.invoke_chained_direct<&recomp_unit_0356_entry, 356u, 201u, 0x08968C80u>(ctx, &aot_mem) && ctx.pc == 0x0896D064u) goto L_0896D064;
    return;
L_0896D064:
    aot_gpr[31] = (0x0896D06Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 148u, 0x0896381Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D06Cu) goto L_0896D06C;
    return;
L_0896D06C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0896D078u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 97u, 0x089635F0u>(ctx, &aot_mem) && ctx.pc == 0x0896D078u) goto L_0896D078;
    return;
L_0896D078:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0896D0E4;
      }
      goto L_0896D080;
    }
L_0896D080:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0896D0E4;
      }
      goto L_0896D088;
    }
L_0896D088:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896D098u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0360_entry, 360u, 223u, 0x0896CE04u>(ctx, &aot_mem) && ctx.pc == 0x0896D098u) goto L_0896D098;
    return;
L_0896D098:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0896D0E4;
      }
      goto L_0896D0A0;
    }
L_0896D0A0:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0896D0B4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27928));
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 99u, 0x0896E678u>(ctx, &aot_mem) && ctx.pc == 0x0896D0B4u) goto L_0896D0B4;
    return;
L_0896D0B4:
    aot_gpr[31] = (0x0896D0BCu);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0360_entry, 360u, 232u, 0x0896CE7Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D0BCu) goto L_0896D0BC;
    return;
L_0896D0BC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0896D0E4;
      }
      goto L_0896D0C4;
    }
L_0896D0C4:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0896D0D8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24880));
    if (rt.invoke_chained_direct<&recomp_unit_0356_entry, 356u, 139u, 0x089688A4u>(ctx, &aot_mem) && ctx.pc == 0x0896D0D8u) goto L_0896D0D8;
    return;
L_0896D0D8:
    aot_gpr[31] = (0x0896D0E0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0360_entry, 360u, 240u, 0x0896CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D0E0u) goto L_0896D0E0;
    return;
L_0896D0E0:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0896D0E4;
L_0896D0E4:
    { const bool branch_taken = aot_gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D104;
      }
      goto L_0896D0EC;
    }
L_0896D0EC:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0896D104u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24824));
    if (rt.invoke_chained_direct<&recomp_unit_0354_entry, 354u, 234u, 0x08966DFCu>(ctx, &aot_mem) && ctx.pc == 0x0896D104u) goto L_0896D104;
    return;
L_0896D104:
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
L_0896D120:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(312)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(320), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[5] = (0u | 1u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(324), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D13C:
    aot_gpr[6] = (0u | 4u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896D15C;
      }
      goto L_0896D148;
    }
L_0896D148:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(320), aot_gpr[5]);
      if (branch_taken) {
          goto L_0896D160;
      }
      goto L_0896D15C;
    }
L_0896D15C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(320), aot_gpr[5]);
    goto L_0896D160;
L_0896D160:
    aot_gpr[5] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (0u | 12u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(324), aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D174:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-24880));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D1A8;
      }
      goto L_0896D190;
    }
L_0896D190:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0896D1A0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0356_entry, 356u, 15u, 0x089680D4u>(ctx, &aot_mem) && ctx.pc == 0x0896D1A0u) goto L_0896D1A0;
    return;
L_0896D1A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D1AC;
      }
      goto L_0896D1A8;
    }
L_0896D1A8:
    aot_gpr[2] = (0u | 0u);
    goto L_0896D1AC;
L_0896D1AC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D1B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896D1D4u);
    aot_gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0896D1D4u) goto L_0896D1D4;
    return;
L_0896D1D4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D1E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[7] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(-24880), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896D200u);
    aot_gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0896D200u) goto L_0896D200;
    return;
L_0896D200:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D20C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896D228u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0896D228u) goto L_0896D228;
    return;
L_0896D228:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D234:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0896D25C;
      }
      goto L_0896D24C;
    }
L_0896D24C:
    aot_gpr[5] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(324), aot_gpr[5]);
    goto L_0896D254;
L_0896D254:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D2CC;
      }
      goto L_0896D25C;
    }
L_0896D25C:
    aot_gpr[31] = (0x0896D264u);
    aot_gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D264u) goto L_0896D264;
    return;
L_0896D264:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D27C;
      }
      goto L_0896D270;
    }
L_0896D270:
    aot_gpr[31] = (0x0896D278u);
    aot_gpr[5] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x0896D278u) goto L_0896D278;
    return;
L_0896D278:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    goto L_0896D27C;
L_0896D27C:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D290;
      }
      goto L_0896D284;
    }
L_0896D284:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896D290u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 132u, 0x0895F814u>(ctx, &aot_mem) && ctx.pc == 0x0896D290u) goto L_0896D290;
    return;
L_0896D290:
    aot_gpr[31] = (0x0896D298u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0896D298u) goto L_0896D298;
    return;
L_0896D298:
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 24u);
    aot_gpr[31] = (0x0896D2A8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 152u, 0x08962B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D2A8u) goto L_0896D2A8;
    return;
L_0896D2A8:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x0896D2B4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0896D2B4u) goto L_0896D2B4;
    return;
L_0896D2B4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 24u);
    aot_gpr[31] = (0x0896D2C4u);
    aot_gpr[6] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 152u, 0x08962B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D2C4u) goto L_0896D2C4;
    return;
L_0896D2C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D254;
      }
      goto L_0896D2CC;
    }
L_0896D2CC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D2E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(10240));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D308;
      }
      goto L_0896D2F8;
    }
L_0896D2F8:
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0896D308u);
    aot_gpr[4] = (aot_gpr[7] | 0u);
    goto L_0896D234;
L_0896D308:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D314:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D31C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896D330u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    goto L_0896D314;
L_0896D330:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0896D33Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26656));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D33Cu) goto L_0896D33C;
    return;
L_0896D33C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D348:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[5] << 9u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896D36Cu);
    aot_gpr[5] = (aot_gpr[7] - aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 203u, 0x08960BA8u>(ctx, &aot_mem) && ctx.pc == 0x0896D36Cu) goto L_0896D36C;
    return;
L_0896D36C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D378:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0896D3A4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x0896D3A4u) goto L_0896D3A4;
    return;
L_0896D3A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896D400;
      }
      goto L_0896D3B0;
    }
L_0896D3B0:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_0896D3D0;
      }
      goto L_0896D3C0;
    }
L_0896D3C0:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0896D3E4;
      }
      goto L_0896D3C8;
    }
L_0896D3C8:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          goto L_0896D3E4;
      }
      goto L_0896D3D0;
    }
L_0896D3D0:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0896D3DC;
      }
      goto L_0896D3D8;
    }
L_0896D3D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_0896D3DC;
L_0896D3DC:
    aot_gpr[31] = (0x0896D3E4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 218u, 0x08960C84u>(ctx, &aot_mem) && ctx.pc == 0x0896D3E4u) goto L_0896D3E4;
    return;
L_0896D3E4:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D554;
      }
      goto L_0896D3EC;
    }
L_0896D3EC:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x0896D3F8u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 2u, 0x08961018u>(ctx, &aot_mem) && ctx.pc == 0x0896D3F8u) goto L_0896D3F8;
    return;
L_0896D3F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D554;
      }
      goto L_0896D400;
    }
L_0896D400:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[19] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[19] + aot_gpr[19]);
      if (branch_taken) {
          goto L_0896D514;
      }
      goto L_0896D414;
    }
L_0896D414:
    aot_gpr[5] = (aot_gpr[19] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (aot_gpr[19] << 9u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[19] = (aot_gpr[6] - aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[4] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(24), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(76)));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(48), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(80)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(160));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(52), aot_gpr[6]);
    aot_gpr[31] = (0x0896D4A4u);
    aot_gpr[6] = (0u | 248u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0896D4A4u) goto L_0896D4A4;
    return;
L_0896D4A4:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[20] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0896D4C0u);
    aot_gpr[5] = (0u | 126u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 271u, 0x08A3ADD8u>(ctx, &aot_mem) && ctx.pc == 0x0896D4C0u) goto L_0896D4C0;
    return;
L_0896D4C0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D4D0;
      }
      goto L_0896D4CC;
    }
L_0896D4CC:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0896D4D0;
L_0896D4D0:
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(308));
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0896D4E0u);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0896D4E0u) goto L_0896D4E0;
    return;
L_0896D4E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(34)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(372), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(376), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(88)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(380), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(92)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(384), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(84)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(388), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    goto L_0896D514;
L_0896D514:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(416))))));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896D554;
      }
      goto L_0896D524;
    }
L_0896D524:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0896D538;
      }
      goto L_0896D534;
    }
L_0896D534:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_0896D538;
L_0896D538:
    aot_gpr[31] = (0x0896D540u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 218u, 0x08960C84u>(ctx, &aot_mem) && ctx.pc == 0x0896D540u) goto L_0896D540;
    return;
L_0896D540:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D554;
      }
      goto L_0896D548;
    }
L_0896D548:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x0896D554u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 2u, 0x08961018u>(ctx, &aot_mem) && ctx.pc == 0x0896D554u) goto L_0896D554;
    return;
L_0896D554:
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
L_0896D574:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x0896D594u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    goto L_0896D174;
L_0896D594:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[5] = (ctx.lo);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[31] = (0x0896D5C4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-11400));
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 100u, 0x089AB8E8u>(ctx, &aot_mem) && ctx.pc == 0x0896D5C4u) goto L_0896D5C4;
    return;
L_0896D5C4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D5E8;
      }
      goto L_0896D5CC;
    }
L_0896D5CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0896D5E0;
      }
      goto L_0896D5DC;
    }
L_0896D5DC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_0896D5E0;
L_0896D5E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D5FC;
      }
      goto L_0896D5E8;
    }
L_0896D5E8:
    aot_gpr[31] = (0x0896D5F0u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 71u, 0x08983384u>(ctx, &aot_mem) && ctx.pc == 0x0896D5F0u) goto L_0896D5F0;
    return;
L_0896D5F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_0896D5FC;
L_0896D5FC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D60C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896D620u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 211u, 0x08960C2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D620u) goto L_0896D620;
    return;
L_0896D620:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D634:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[5] << 4u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[7] - aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896D658u);
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 203u, 0x08960BA8u>(ctx, &aot_mem) && ctx.pc == 0x0896D658u) goto L_0896D658;
    return;
L_0896D658:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D664:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0896D690u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x0896D690u) goto L_0896D690;
    return;
L_0896D690:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896D6EC;
      }
      goto L_0896D69C;
    }
L_0896D69C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_0896D6BC;
      }
      goto L_0896D6AC;
    }
L_0896D6AC:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0896D6D0;
      }
      goto L_0896D6B4;
    }
L_0896D6B4:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          goto L_0896D6D0;
      }
      goto L_0896D6BC;
    }
L_0896D6BC:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0896D6C8;
      }
      goto L_0896D6C4;
    }
L_0896D6C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_0896D6C8;
L_0896D6C8:
    aot_gpr[31] = (0x0896D6D0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 218u, 0x08960C84u>(ctx, &aot_mem) && ctx.pc == 0x0896D6D0u) goto L_0896D6D0;
    return;
L_0896D6D0:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D7E0;
      }
      goto L_0896D6D8;
    }
L_0896D6D8:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x0896D6E4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 2u, 0x08961018u>(ctx, &aot_mem) && ctx.pc == 0x0896D6E4u) goto L_0896D6E4;
    return;
L_0896D6E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D7E0;
      }
      goto L_0896D6EC;
    }
L_0896D6EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D7A0;
      }
      goto L_0896D700;
    }
L_0896D700:
    aot_gpr[5] = (aot_gpr[4] << 4u);
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[7] - aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[5]);
    aot_gpr[19] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(64));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0896D72Cu);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0896D72Cu) goto L_0896D72C;
    return;
L_0896D72C:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[20] = (aot_gpr[5] + static_cast<std::uint32_t>(-21440));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(64));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x0896D744u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0896D744u) goto L_0896D744;
    return;
L_0896D744:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(34)));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(70));
    aot_gpr[31] = (0x0896D754u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0896D754u) goto L_0896D754;
    return;
L_0896D754:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[19] + static_cast<std::uint32_t>(76));
    aot_gpr[31] = (0x0896D764u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0564_entry, 564u, 29u, 0x08A381DCu>(ctx, &aot_mem) && ctx.pc == 0x0896D764u) goto L_0896D764;
    return;
L_0896D764:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(84), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(88), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(92), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(96), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(100), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(104), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    goto L_0896D7A0;
L_0896D7A0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(128))))));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896D7E0;
      }
      goto L_0896D7B0;
    }
L_0896D7B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0896D7C4;
      }
      goto L_0896D7C0;
    }
L_0896D7C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_0896D7C4;
L_0896D7C4:
    aot_gpr[31] = (0x0896D7CCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 218u, 0x08960C84u>(ctx, &aot_mem) && ctx.pc == 0x0896D7CCu) goto L_0896D7CC;
    return;
L_0896D7CC:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D7E0;
      }
      goto L_0896D7D4;
    }
L_0896D7D4:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x0896D7E0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 2u, 0x08961018u>(ctx, &aot_mem) && ctx.pc == 0x0896D7E0u) goto L_0896D7E0;
    return;
L_0896D7E0:
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
L_0896D800:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x0896D820u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    goto L_0896D174;
L_0896D820:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[5] = (ctx.lo);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[31] = (0x0896D850u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10652));
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 102u, 0x089AB92Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D850u) goto L_0896D850;
    return;
L_0896D850:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D874;
      }
      goto L_0896D858;
    }
L_0896D858:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0896D86C;
      }
      goto L_0896D868;
    }
L_0896D868:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_0896D86C;
L_0896D86C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D888;
      }
      goto L_0896D874;
    }
L_0896D874:
    aot_gpr[31] = (0x0896D87Cu);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 71u, 0x08983384u>(ctx, &aot_mem) && ctx.pc == 0x0896D87Cu) goto L_0896D87C;
    return;
L_0896D87C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_0896D888;
L_0896D888:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D898:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896D8ACu);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 211u, 0x08960C2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D8ACu) goto L_0896D8AC;
    return;
L_0896D8AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D8C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[5] << 6u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896D8DCu);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 203u, 0x08960BA8u>(ctx, &aot_mem) && ctx.pc == 0x0896D8DCu) goto L_0896D8DC;
    return;
L_0896D8DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D8E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0896D910u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x0896D910u) goto L_0896D910;
    return;
L_0896D910:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896D96C;
      }
      goto L_0896D91C;
    }
L_0896D91C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[6]) >= 0;
    aot_gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_0896D93C;
      }
      goto L_0896D92C;
    }
L_0896D92C:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0896D950;
      }
      goto L_0896D934;
    }
L_0896D934:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          goto L_0896D950;
      }
      goto L_0896D93C;
    }
L_0896D93C:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0896D948;
      }
      goto L_0896D944;
    }
L_0896D944:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_0896D948;
L_0896D948:
    aot_gpr[31] = (0x0896D950u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 218u, 0x08960C84u>(ctx, &aot_mem) && ctx.pc == 0x0896D950u) goto L_0896D950;
    return;
L_0896D950:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D9F8;
      }
      goto L_0896D958;
    }
L_0896D958:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x0896D964u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 2u, 0x08961018u>(ctx, &aot_mem) && ctx.pc == 0x0896D964u) goto L_0896D964;
    return;
L_0896D964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D9F8;
      }
      goto L_0896D96C;
    }
L_0896D96C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D9B8;
      }
      goto L_0896D980;
    }
L_0896D980:
    aot_gpr[6] = (aot_gpr[4] << 6u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(28));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0896D9A4u);
    aot_gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0896D9A4u) goto L_0896D9A4;
    return;
L_0896D9A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(64), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(40), aot_gpr[4]);
    goto L_0896D9B8;
L_0896D9B8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(96))))));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896D9F8;
      }
      goto L_0896D9C8;
    }
L_0896D9C8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0896D9DC;
      }
      goto L_0896D9D8;
    }
L_0896D9D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_0896D9DC;
L_0896D9DC:
    aot_gpr[31] = (0x0896D9E4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 218u, 0x08960C84u>(ctx, &aot_mem) && ctx.pc == 0x0896D9E4u) goto L_0896D9E4;
    return;
L_0896D9E4:
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D9F8;
      }
      goto L_0896D9EC;
    }
L_0896D9EC:
    aot_gpr[5] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x0896D9F8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 2u, 0x08961018u>(ctx, &aot_mem) && ctx.pc == 0x0896D9F8u) goto L_0896D9F8;
    return;
L_0896D9F8:
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
L_0896DA14:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    aot_gpr[31] = (0x0896DA34u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    goto L_0896D174;
L_0896DA34:
    aot_gpr[5] = (2199u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0896DA4Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10008));
    if (rt.invoke_chained_direct<&recomp_unit_0423_entry, 423u, 70u, 0x089AB5F8u>(ctx, &aot_mem) && ctx.pc == 0x0896DA4Cu) goto L_0896DA4C;
    return;
L_0896DA4C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DA70;
      }
      goto L_0896DA54;
    }
L_0896DA54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0896DA68;
      }
      goto L_0896DA64;
    }
L_0896DA64:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_0896DA68;
L_0896DA68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DA84;
      }
      goto L_0896DA70;
    }
L_0896DA70:
    aot_gpr[31] = (0x0896DA78u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 71u, 0x08983384u>(ctx, &aot_mem) && ctx.pc == 0x0896DA78u) goto L_0896DA78;
    return;
L_0896DA78:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_gpr[4] = (0u | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_0896DA84;
L_0896DA84:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896DA94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896DAA8u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 211u, 0x08960C2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896DAA8u) goto L_0896DAA8;
    return;
L_0896DAA8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896DABC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2220u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-27888)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[6] ^ aot_gpr[5]);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DB40;
      }
      goto L_0896DAE4;
    }
L_0896DAE4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_0896DAE8;
L_0896DAE8:
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[9] == aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0896DB18;
      }
      goto L_0896DAF8;
    }
L_0896DAF8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[6] ^ aot_gpr[5]);
    aot_gpr[8] = (0u < aot_gpr[8] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896DAE8;
      }
      goto L_0896DB10;
    }
L_0896DB10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DB40;
      }
      goto L_0896DB18;
    }
L_0896DB18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26568)));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26572)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0896DB38u);
    aot_gpr[6] = (aot_gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896DB38u) goto L_0896DB38;
    return;
L_0896DB38:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0896DB44;
      }
      goto L_0896DB40;
    }
L_0896DB40:
    aot_gpr[2] = (0u | 0u);
    goto L_0896DB44;
L_0896DB44:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896DB50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (2220u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-27888)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-27888));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DB80;
      }
      goto L_0896DB78;
    }
L_0896DB78:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    goto L_0896DB80;
L_0896DB80:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DBB0;
      }
      goto L_0896DB88;
    }
L_0896DB88:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    goto L_0896DBB0;
L_0896DBB0:
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (2216u << 16u);
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-26572)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0896DBD0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-26568)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896DBD0u) goto L_0896DBD0;
    return;
L_0896DBD0:
    aot_gpr[2] = (0u | 1u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896DBE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (2220u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-27888)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[7] = (aot_gpr[5] ^ aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DCBC;
      }
      goto L_0896DC0C;
    }
L_0896DC0C:
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896DC98;
      }
      goto L_0896DC1C;
    }
L_0896DC1C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-27888)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DC90;
      }
      goto L_0896DC40;
    }
L_0896DC40:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (2220u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(-27888));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_0896DC90;
L_0896DC90:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0896DCC0;
      }
      goto L_0896DC98;
    }
L_0896DC98:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2220u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-27888)));
    aot_gpr[7] = (aot_gpr[5] ^ aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896DC0C;
      }
      goto L_0896DCBC;
    }
L_0896DCBC:
    aot_gpr[2] = (0u | 0u);
    goto L_0896DCC0;
L_0896DCC0:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896DCC8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(36)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896DD54;
      }
      goto L_0896DCE4;
    }
L_0896DCE4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 300u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 201u);
      if (branch_taken) {
          goto L_0896DD34;
      }
      goto L_0896DCF4;
    }
L_0896DCF4:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 200u);
      if (branch_taken) {
          goto L_0896DD2C;
      }
      goto L_0896DCFC;
    }
L_0896DCFC:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 101u);
      if (branch_taken) {
          goto L_0896DD24;
      }
      goto L_0896DD04;
    }
L_0896DD04:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 100u);
      if (branch_taken) {
          goto L_0896DD1C;
      }
      goto L_0896DD0C;
    }
L_0896DD0C:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896DD3C;
      }
      goto L_0896DD14;
    }
L_0896DD14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DD3C;
      }
      goto L_0896DD1C;
    }
L_0896DD1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DD3C;
      }
      goto L_0896DD24;
    }
L_0896DD24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DD3C;
      }
      goto L_0896DD2C;
    }
L_0896DD2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DD3C;
      }
      goto L_0896DD34;
    }
L_0896DD34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DD3C;
      }
      goto L_0896DD3C;
    }
L_0896DD3C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0896DE20;
      }
      goto L_0896DD4C;
    }
L_0896DD4C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
      if (branch_taken) {
          goto L_0896DE20;
      }
      goto L_0896DD54;
    }
L_0896DD54:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DDF4;
      }
      goto L_0896DD68;
    }
L_0896DD68:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0896DDEC;
      }
      goto L_0896DD70;
    }
L_0896DD70:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0896DDBC;
      }
      goto L_0896DD78;
    }
L_0896DD78:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896DDCC;
      }
      goto L_0896DD80;
    }
L_0896DD80:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0896DDDC;
      }
      goto L_0896DD88;
    }
L_0896DD88:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_0896DD98;
      }
      goto L_0896DD90;
    }
L_0896DD90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DDF4;
      }
      goto L_0896DD98;
    }
L_0896DD98:
    aot_gpr[31] = (0x0896DDA0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0896DABC;
L_0896DDA0:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896DDB4;
      }
      goto L_0896DDAC;
    }
L_0896DDAC:
    aot_gpr[31] = (0x0896DDB4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0896DB50;
L_0896DDB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DDF4;
      }
      goto L_0896DDBC;
    }
L_0896DDBC:
    aot_gpr[31] = (0x0896DDC4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0896DABC;
L_0896DDC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DDF4;
      }
      goto L_0896DDCC;
    }
L_0896DDCC:
    aot_gpr[31] = (0x0896DDD4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0896DB50;
L_0896DDD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DDF4;
      }
      goto L_0896DDDC;
    }
L_0896DDDC:
    aot_gpr[31] = (0x0896DDE4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_0896DBE0;
L_0896DDE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DDF4;
      }
      goto L_0896DDEC;
    }
L_0896DDEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DDF4;
      }
      goto L_0896DDF4;
    }
L_0896DDF4:
    aot_gpr[31] = (0x0896DDFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x0896DDFCu) goto L_0896DDFC;
    return;
L_0896DDFC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DE10;
      }
      goto L_0896DE08;
    }
L_0896DE08:
    aot_gpr[31] = (0x0896DE10u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 2u, 0x08961018u>(ctx, &aot_mem) && ctx.pc == 0x0896DE10u) goto L_0896DE10;
    return;
L_0896DE10:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27888));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
    goto L_0896DE20;
L_0896DE20:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896DE34:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(-27888));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896DF2C;
      }
      goto L_0896DE70;
    }
L_0896DE70:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(8), 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[4] << 6u);
    aot_gpr[7] = (aot_gpr[6] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[7] << 3u);
    aot_gpr[31] = (0x0896DE98u);
    aot_gpr[4] = (aot_gpr[4] - aot_gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x0896DE98u) goto L_0896DE98;
    return;
L_0896DE98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[9] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[7] = (aot_gpr[2] | 0u);
    aot_gpr[8] = (aot_gpr[9] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_0896DEF0;
      }
      goto L_0896DEB8;
    }
L_0896DEB8:
    aot_gpr[8] = (0u | 0u);
    goto L_0896DEBC;
L_0896DEBC:
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (aot_gpr[9] << 6u);
    aot_gpr[10] = (aot_gpr[6] - aot_gpr[9]);
    aot_gpr[10] = (aot_gpr[10] << 3u);
    aot_gpr[6] = (aot_gpr[10] - aot_gpr[6]);
    aot_gpr[11] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[11] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(440));
    aot_gpr[10] = (aot_gpr[9] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0896DEBC;
      }
      goto L_0896DEF0;
    }
L_0896DEF0:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[8] = (aot_gpr[6] << 6u);
    aot_gpr[6] = (aot_gpr[8] - aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] << 3u);
    aot_gpr[6] = (aot_gpr[6] - aot_gpr[8]);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[7]);
      if (branch_taken) {
          goto L_0896DF20;
      }
      goto L_0896DF18;
    }
L_0896DF18:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    goto L_0896DF20;
L_0896DF20:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(-27888), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    goto L_0896DF2C;
L_0896DF2C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[4] + static_cast<std::uint32_t>(10240));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(300)));
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[31] = (0x0896DF48u);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(-26560), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0427_entry, 427u, 172u, 0x089AFC08u>(ctx, &aot_mem) && ctx.pc == 0x0896DF48u) goto L_0896DF48;
    return;
L_0896DF48:
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[31] = (0x0896DF54u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-26576), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0426_entry, 426u, 3u, 0x089AE018u>(ctx, &aot_mem) && ctx.pc == 0x0896DF54u) goto L_0896DF54;
    return;
L_0896DF54:
    aot_gpr[20] = (2216u << 16u);
    aot_gpr[31] = (0x0896DF60u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(-26572), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0427_entry, 427u, 164u, 0x089AFB6Cu>(ctx, &aot_mem) && ctx.pc == 0x0896DF60u) goto L_0896DF60;
    return;
L_0896DF60:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-26576)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2215u << 16u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0896DF78u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-21432));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896DF78u) goto L_0896DF78;
    return;
L_0896DF78:
    aot_gpr[19] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(-26568), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896DF8Cu);
    aot_gpr[5] = (0u | 0u);
    goto L_0896D174;
L_0896DF8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[2] + static_cast<std::uint32_t>(36), aot_gpr[16]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-26560)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-26568)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(-26572)));
    aot_gpr[10] = (2199u << 16u);
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[9] = (0u | 3u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26564));
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(-9016));
    jump_target = aot_gpr[3];
    aot_gpr[31] = (0x0896DFC4u);
    aot_gpr[11] = (aot_gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896DFC4u) goto L_0896DFC4;
    return;
L_0896DFC4:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DFE0;
      }
      goto L_0896DFCC;
    }
L_0896DFCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0896DFE0;
      }
      goto L_0896DFDC;
    }
L_0896DFDC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    goto L_0896DFE0;
L_0896DFE0:
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
}

void recomp_unit_0361(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0361_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_361(Runtime &runtime) {
    runtime.register_generated_unit(361u, 0x0896D000u, 4096u, &recomp_unit_0361, &recomp_unit_0361_entry);
    runtime.register_function(0x0896D000u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D008u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D01Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D024u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D02Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D040u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D048u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D050u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D064u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D06Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D078u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D080u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D088u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D098u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D0A0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D0B4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D0BCu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D0C4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D0D8u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D0E0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D0E4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D0ECu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D104u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D120u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D13Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D148u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D15Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D160u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D174u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D190u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D1A0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D1A8u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D1ACu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D1B8u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D1D4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D1E0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D200u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D20Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D228u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D234u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D24Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D254u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D25Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D264u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D270u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D278u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D27Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D284u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D290u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D298u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D2A8u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D2B4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D2C4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D2CCu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D2E0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D2F8u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D308u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D314u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D31Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D330u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D33Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D348u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D36Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D378u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D3A4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D3B0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D3C0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D3C8u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D3D0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D3D8u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D3DCu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D3E4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D3ECu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D3F8u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D400u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D414u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D4A4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D4C0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D4CCu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D4D0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D4E0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D514u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D524u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D534u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D538u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D540u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D548u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D554u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D574u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D594u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D5C4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D5CCu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D5DCu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D5E0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D5E8u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D5F0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D5FCu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D60Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D620u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D634u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D658u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D664u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D690u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D69Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D6ACu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D6B4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D6BCu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D6C4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D6C8u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D6D0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D6D8u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D6E4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D6ECu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D700u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D72Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D744u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D754u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D764u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D7A0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D7B0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D7C0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D7C4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D7CCu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D7D4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D7E0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D800u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D820u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D850u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D858u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D868u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D86Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D874u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D87Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D888u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D898u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D8ACu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D8C0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D8DCu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D8E8u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D910u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D91Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D92Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D934u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D93Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D944u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D948u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D950u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D958u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D964u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D96Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D980u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D9A4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D9B8u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D9C8u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D9D8u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D9DCu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D9E4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D9ECu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896D9F8u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DA14u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DA34u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DA4Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DA54u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DA64u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DA68u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DA70u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DA78u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DA84u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DA94u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DAA8u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DABCu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DAE4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DAE8u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DAF8u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DB10u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DB18u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DB38u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DB40u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DB44u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DB50u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DB78u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DB80u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DB88u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DBB0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DBD0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DBE0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DC0Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DC1Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DC40u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DC90u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DC98u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DCBCu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DCC0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DCC8u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DCE4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DCF4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DCFCu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DD04u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DD0Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DD14u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DD1Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DD24u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DD2Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DD34u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DD3Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DD4Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DD54u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DD68u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DD70u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DD78u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DD80u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DD88u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DD90u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DD98u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DDA0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DDACu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DDB4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DDBCu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DDC4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DDCCu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DDD4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DDDCu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DDE4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DDECu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DDF4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DDFCu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DE08u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DE10u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DE20u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DE34u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DE70u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DE98u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DEB8u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DEBCu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DEF0u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DF18u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DF20u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DF2Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DF48u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DF54u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DF60u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DF78u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DF8Cu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DFC4u, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DFCCu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DFDCu, &recomp_unit_0361, "recomp_unit_0361");
    runtime.register_function(0x0896DFE0u, &recomp_unit_0361, "recomp_unit_0361");
}
} // namespace psprecomp
