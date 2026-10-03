#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0105[1020] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 9,
    0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 15,
    0, 0, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 21, 0, 22, 23, 0, 24, 0, 0, 25, 0, 0,
    26, 0, 0, 27, 0, 28, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0,
    0, 34, 0, 35, 0, 36, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42,
    0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0,
    0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 61, 0, 62, 0, 0, 0, 0, 0, 63,
    0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 69, 0, 70, 71, 0, 72, 0, 0, 0, 0, 73, 0, 74, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0,
    87, 0, 0, 0, 88, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 101, 0, 102, 0, 0, 103, 0, 104, 0, 105, 106, 0, 107,
    0, 108, 0, 0, 0, 109, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 112, 0, 0, 113, 0, 0, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 135,
    0, 136, 0, 0, 0, 137, 138, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 142, 143, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146,
    0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159,
    0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0,
    175, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 179, 0, 0, 180, 0, 181, 0, 0, 182, 0, 183, 0, 184, 0, 0, 185, 0, 186,
    0, 187, 0, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 199,
    0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 203, 0, 0, 204, 0, 205, 0, 206, 0, 0, 0, 207,
    0, 208, 0, 209, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215,
};
void recomp_unit_0105_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0886D000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0105[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0886D000;
    case 2u: goto L_0886D01C;
    case 3u: goto L_0886D024;
    case 4u: goto L_0886D02C;
    case 5u: goto L_0886D030;
    case 6u: goto L_0886D040;
    case 7u: goto L_0886D060;
    case 8u: goto L_0886D070;
    case 9u: goto L_0886D07C;
    case 10u: goto L_0886D088;
    case 11u: goto L_0886D098;
    case 12u: goto L_0886D0A8;
    case 13u: goto L_0886D0D8;
    case 14u: goto L_0886D0E8;
    case 15u: goto L_0886D0FC;
    case 16u: goto L_0886D10C;
    case 17u: goto L_0886D11C;
    case 18u: goto L_0886D124;
    case 19u: goto L_0886D138;
    case 20u: goto L_0886D148;
    case 21u: goto L_0886D154;
    case 22u: goto L_0886D15C;
    case 23u: goto L_0886D160;
    case 24u: goto L_0886D168;
    case 25u: goto L_0886D174;
    case 26u: goto L_0886D180;
    case 27u: goto L_0886D18C;
    case 28u: goto L_0886D194;
    case 29u: goto L_0886D1A8;
    case 30u: goto L_0886D1B0;
    case 31u: goto L_0886D1D0;
    case 32u: goto L_0886D1E4;
    case 33u: goto L_0886D1F0;
    case 34u: goto L_0886D204;
    case 35u: goto L_0886D20C;
    case 36u: goto L_0886D214;
    case 37u: goto L_0886D21C;
    case 38u: goto L_0886D224;
    case 39u: goto L_0886D244;
    case 40u: goto L_0886D250;
    case 41u: goto L_0886D268;
    case 42u: goto L_0886D27C;
    case 43u: goto L_0886D298;
    case 44u: goto L_0886D2A4;
    case 45u: goto L_0886D2C4;
    case 46u: goto L_0886D2E0;
    case 47u: goto L_0886D2F4;
    case 48u: goto L_0886D300;
    case 49u: goto L_0886D320;
    case 50u: goto L_0886D328;
    case 51u: goto L_0886D330;
    case 52u: goto L_0886D338;
    case 53u: goto L_0886D340;
    case 54u: goto L_0886D35C;
    case 55u: goto L_0886D378;
    case 56u: goto L_0886D384;
    case 57u: goto L_0886D3A0;
    case 58u: goto L_0886D3AC;
    case 59u: goto L_0886D3C8;
    case 60u: goto L_0886D3D8;
    case 61u: goto L_0886D3DC;
    case 62u: goto L_0886D3E4;
    case 63u: goto L_0886D3FC;
    case 64u: goto L_0886D408;
    case 65u: goto L_0886D424;
    case 66u: goto L_0886D434;
    case 67u: goto L_0886D438;
    case 68u: goto L_0886D440;
    case 69u: goto L_0886D484;
    case 70u: goto L_0886D48C;
    case 71u: goto L_0886D490;
    case 72u: goto L_0886D498;
    case 73u: goto L_0886D4AC;
    case 74u: goto L_0886D4B4;
    case 75u: goto L_0886D4C0;
    case 76u: goto L_0886D4C8;
    case 77u: goto L_0886D4D0;
    case 78u: goto L_0886D4D8;
    case 79u: goto L_0886D4F8;
    case 80u: goto L_0886D530;
    case 81u: goto L_0886D540;
    case 82u: goto L_0886D54C;
    case 83u: goto L_0886D56C;
    case 84u: goto L_0886D588;
    case 85u: goto L_0886D5B8;
    case 86u: goto L_0886D5F8;
    case 87u: goto L_0886D600;
    case 88u: goto L_0886D610;
    case 89u: goto L_0886D614;
    case 90u: goto L_0886D624;
    case 91u: goto L_0886D634;
    case 92u: goto L_0886D63C;
    case 93u: goto L_0886D64C;
    case 94u: goto L_0886D654;
    case 95u: goto L_0886D664;
    case 96u: goto L_0886D688;
    case 97u: goto L_0886D694;
    case 98u: goto L_0886D6A8;
    case 99u: goto L_0886D6B4;
    case 100u: goto L_0886D6C4;
    case 101u: goto L_0886D6CC;
    case 102u: goto L_0886D6D4;
    case 103u: goto L_0886D6E0;
    case 104u: goto L_0886D6E8;
    case 105u: goto L_0886D6F0;
    case 106u: goto L_0886D6F4;
    case 107u: goto L_0886D6FC;
    case 108u: goto L_0886D704;
    case 109u: goto L_0886D714;
    case 110u: goto L_0886D718;
    case 111u: goto L_0886D73C;
    case 112u: goto L_0886D740;
    case 113u: goto L_0886D74C;
    case 114u: goto L_0886D75C;
    case 115u: goto L_0886D764;
    case 116u: goto L_0886D76C;
    case 117u: goto L_0886D790;
    case 118u: goto L_0886D7B4;
    case 119u: goto L_0886D7EC;
    case 120u: goto L_0886D7F8;
    case 121u: goto L_0886D820;
    case 122u: goto L_0886D840;
    case 123u: goto L_0886D854;
    case 124u: goto L_0886D860;
    case 125u: goto L_0886D894;
    case 126u: goto L_0886D8CC;
    case 127u: goto L_0886D90C;
    case 128u: goto L_0886D914;
    case 129u: goto L_0886D91C;
    case 130u: goto L_0886D93C;
    case 131u: goto L_0886D950;
    case 132u: goto L_0886D95C;
    case 133u: goto L_0886D968;
    case 134u: goto L_0886D974;
    case 135u: goto L_0886D97C;
    case 136u: goto L_0886D984;
    case 137u: goto L_0886D994;
    case 138u: goto L_0886D998;
    case 139u: goto L_0886D9A0;
    case 140u: goto L_0886D9B0;
    case 141u: goto L_0886D9C0;
    case 142u: goto L_0886D9CC;
    case 143u: goto L_0886D9D0;
    case 144u: goto L_0886D9DC;
    case 145u: goto L_0886D9EC;
    case 146u: goto L_0886D9FC;
    case 147u: goto L_0886DA04;
    case 148u: goto L_0886DA18;
    case 149u: goto L_0886DA30;
    case 150u: goto L_0886DA38;
    case 151u: goto L_0886DA40;
    case 152u: goto L_0886DA48;
    case 153u: goto L_0886DA50;
    case 154u: goto L_0886DA58;
    case 155u: goto L_0886DA70;
    case 156u: goto L_0886DAA4;
    case 157u: goto L_0886DAD4;
    case 158u: goto L_0886DAF0;
    case 159u: goto L_0886DAFC;
    case 160u: goto L_0886DB18;
    case 161u: goto L_0886DB24;
    case 162u: goto L_0886DB44;
    case 163u: goto L_0886DB64;
    case 164u: goto L_0886DBA8;
    case 165u: goto L_0886DBB0;
    case 166u: goto L_0886DBB8;
    case 167u: goto L_0886DBC4;
    case 168u: goto L_0886DBD0;
    case 169u: goto L_0886DBDC;
    case 170u: goto L_0886DBE8;
    case 171u: goto L_0886DBF4;
    case 172u: goto L_0886DC90;
    case 173u: goto L_0886DC98;
    case 174u: goto L_0886DCF4;
    case 175u: goto L_0886DD00;
    case 176u: goto L_0886DD08;
    case 177u: goto L_0886DD24;
    case 178u: goto L_0886DD2C;
    case 179u: goto L_0886DD38;
    case 180u: goto L_0886DD44;
    case 181u: goto L_0886DD4C;
    case 182u: goto L_0886DD58;
    case 183u: goto L_0886DD60;
    case 184u: goto L_0886DD68;
    case 185u: goto L_0886DD74;
    case 186u: goto L_0886DD7C;
    case 187u: goto L_0886DD84;
    case 188u: goto L_0886DD90;
    case 189u: goto L_0886DD98;
    case 190u: goto L_0886DDA0;
    case 191u: goto L_0886DDA8;
    case 192u: goto L_0886DDB0;
    case 193u: goto L_0886DDB8;
    case 194u: goto L_0886DE3C;
    case 195u: goto L_0886DE48;
    case 196u: goto L_0886DE50;
    case 197u: goto L_0886DE6C;
    case 198u: goto L_0886DE74;
    case 199u: goto L_0886DE7C;
    case 200u: goto L_0886DE88;
    case 201u: goto L_0886DEBC;
    case 202u: goto L_0886DEC8;
    case 203u: goto L_0886DED0;
    case 204u: goto L_0886DEDC;
    case 205u: goto L_0886DEE4;
    case 206u: goto L_0886DEEC;
    case 207u: goto L_0886DEFC;
    case 208u: goto L_0886DF04;
    case 209u: goto L_0886DF0C;
    case 210u: goto L_0886DF14;
    case 211u: goto L_0886DF1C;
    case 212u: goto L_0886DFA8;
    case 213u: goto L_0886DFB0;
    case 214u: goto L_0886DFD4;
    case 215u: goto L_0886DFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0886D000:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0886D01Cu);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 107u, 0x088B7758u>(ctx, &aot_mem) && ctx.pc == 0x0886D01Cu) goto L_0886D01C;
    return;
L_0886D01C:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[2];
    // nop
      if (branch_taken) {
          goto L_0886D02C;
      }
      goto L_0886D024;
    }
L_0886D024:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0886D030;
      }
      goto L_0886D02C;
    }
L_0886D02C:
    aot_gpr[2] = (0u | 0u);
    goto L_0886D030;
L_0886D030:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D040:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2215u << 16u);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25244)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0886D060u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5768));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 222u, 0x088B7E84u>(ctx, &aot_mem) && ctx.pc == 0x0886D060u) goto L_0886D060;
    return;
L_0886D060:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25336)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D098;
      }
      goto L_0886D070;
    }
L_0886D070:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x0886D07Cu);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 223u, 0x088B7EE8u>(ctx, &aot_mem) && ctx.pc == 0x0886D07Cu) goto L_0886D07C;
    return;
L_0886D07C:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0886D098;
      }
      goto L_0886D088;
    }
L_0886D088:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[31] = (0x0886D098u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 114u, 0x088B77BCu>(ctx, &aot_mem) && ctx.pc == 0x0886D098u) goto L_0886D098;
    return;
L_0886D098:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D0A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (0u | 1025u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x0886D0D8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 173u, 0x088749B4u>(ctx, &aot_mem) && ctx.pc == 0x0886D0D8u) goto L_0886D0D8;
    return;
L_0886D0D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (0u | 49u);
    aot_gpr[31] = (0x0886D0E8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 184u, 0x08874A6Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D0E8u) goto L_0886D0E8;
    return;
L_0886D0E8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(25336)));
    aot_gpr[19] = (2218u << 16u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (2218u << 16u);
      if (branch_taken) {
          goto L_0886D11C;
      }
      goto L_0886D0FC;
    }
L_0886D0FC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (0u | 1025u);
    aot_gpr[31] = (0x0886D10Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 172u, 0x08874998u>(ctx, &aot_mem) && ctx.pc == 0x0886D10Cu) goto L_0886D10C;
    return;
L_0886D10C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (0u | 49u);
    aot_gpr[31] = (0x0886D11Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 183u, 0x08874A50u>(ctx, &aot_mem) && ctx.pc == 0x0886D11Cu) goto L_0886D11C;
    return;
L_0886D11C:
    aot_gpr[31] = (0x0886D124u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 156u, 0x088D5B18u>(ctx, &aot_mem) && ctx.pc == 0x0886D124u) goto L_0886D124;
    return;
L_0886D124:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-5152)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D1A8;
      }
      goto L_0886D138;
    }
L_0886D138:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0886D148u);
    aot_gpr[16] = (aot_gpr[5] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 132u, 0x0881C904u>(ctx, &aot_mem) && ctx.pc == 0x0886D148u) goto L_0886D148;
    return;
L_0886D148:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886D154u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 193u, 0x08874AECu>(ctx, &aot_mem) && ctx.pc == 0x0886D154u) goto L_0886D154;
    return;
L_0886D154:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D194;
      }
      goto L_0886D15C;
    }
L_0886D15C:
    aot_gpr[16] = (0u | 0u);
    goto L_0886D160;
L_0886D160:
    aot_gpr[31] = (0x0886D168u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x0881C9ACu>(ctx, &aot_mem) && ctx.pc == 0x0886D168u) goto L_0886D168;
    return;
L_0886D168:
    aot_gpr[4] = (aot_gpr[16] < aot_gpr[2] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D194;
      }
      goto L_0886D174;
    }
L_0886D174:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0886D180u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x0881C9C8u>(ctx, &aot_mem) && ctx.pc == 0x0886D180u) goto L_0886D180;
    return;
L_0886D180:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x0886D18Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 50u, 0x088DB4DCu>(ctx, &aot_mem) && ctx.pc == 0x0886D18Cu) goto L_0886D18C;
    return;
L_0886D18C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886D160;
      }
      goto L_0886D194;
    }
L_0886D194:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-5152)));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D138;
      }
      goto L_0886D1A8;
    }
L_0886D1A8:
    aot_gpr[31] = (0x0886D1B0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 1u, 0x088D7004u>(ctx, &aot_mem) && ctx.pc == 0x0886D1B0u) goto L_0886D1B0;
    return;
L_0886D1B0:
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
L_0886D1D0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886D1E4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 146u, 0x088DBD08u>(ctx, &aot_mem) && ctx.pc == 0x0886D1E4u) goto L_0886D1E4;
    return;
L_0886D1E4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D1F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886D204u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 120u, 0x088B7814u>(ctx, &aot_mem) && ctx.pc == 0x0886D204u) goto L_0886D204;
    return;
L_0886D204:
    aot_gpr[31] = (0x0886D20Cu);
    // nop
    goto L_0886D040;
L_0886D20C:
    aot_gpr[31] = (0x0886D214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 188u, 0x0886CD18u>(ctx, &aot_mem) && ctx.pc == 0x0886D214u) goto L_0886D214;
    return;
L_0886D214:
    aot_gpr[31] = (0x0886D21Cu);
    // nop
    goto L_0886D0A8;
L_0886D21C:
    aot_gpr[31] = (0x0886D224u);
    // nop
    goto L_0886D1D0;
L_0886D224:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5812), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(5813), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0886D244u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 47u, 0x0884A458u>(ctx, &aot_mem) && ctx.pc == 0x0886D244u) goto L_0886D244;
    return;
L_0886D244:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D250:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886D268u);
    aot_gpr[5] = (0u | 8464u);
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 178u, 0x0891CD18u>(ctx, &aot_mem) && ctx.pc == 0x0886D268u) goto L_0886D268;
    return;
L_0886D268:
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25248), aot_gpr[2]);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D27C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29308)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886D298u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(25248));
    if (rt.invoke_chained_direct<&recomp_unit_0280_entry, 280u, 65u, 0x0891C404u>(ctx, &aot_mem) && ctx.pc == 0x0886D298u) goto L_0886D298;
    return;
L_0886D298:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D2A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25248)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25244)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886D2C4u);
    aot_gpr[6] = (0u | 8464u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0886D2C4u) goto L_0886D2C4;
    return;
L_0886D2C4:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(5812)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(5813), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D2E0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886D2F4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 149u, 0x088DBD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D2F4u) goto L_0886D2F4;
    return;
L_0886D2F4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D300:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25248)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886D320u);
    aot_gpr[6] = (0u | 8464u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0886D320u) goto L_0886D320;
    return;
L_0886D320:
    aot_gpr[31] = (0x0886D328u);
    // nop
    goto L_0886D040;
L_0886D328:
    aot_gpr[31] = (0x0886D330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 188u, 0x0886CD18u>(ctx, &aot_mem) && ctx.pc == 0x0886D330u) goto L_0886D330;
    return;
L_0886D330:
    aot_gpr[31] = (0x0886D338u);
    // nop
    goto L_0886D0A8;
L_0886D338:
    aot_gpr[31] = (0x0886D340u);
    // nop
    goto L_0886D2E0;
L_0886D340:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(5813)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(5812), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D35C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886D378u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5768));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 146u, 0x088B7A6Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D378u) goto L_0886D378;
    return;
L_0886D378:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D384:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886D3A0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 154u, 0x088748D0u>(ctx, &aot_mem) && ctx.pc == 0x0886D3A0u) goto L_0886D3A0;
    return;
L_0886D3A0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D3AC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-2852)));
    aot_gpr[4] = (aot_gpr[4] ^ 2u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D3D8;
      }
      goto L_0886D3C8;
    }
L_0886D3C8:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(2696));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0886D3DC;
      }
      goto L_0886D3D8;
    }
L_0886D3D8:
    aot_gpr[2] = (0u | 0u);
    goto L_0886D3DC;
L_0886D3DC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D3E4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886D3FCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(25252));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D3FCu) goto L_0886D3FC;
    return;
L_0886D3FC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D408:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[4] = (aot_gpr[4] ^ 3u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D434;
      }
      goto L_0886D424;
    }
L_0886D424:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(8003)));
      if (branch_taken) {
          goto L_0886D438;
      }
      goto L_0886D434;
    }
L_0886D434:
    aot_gpr[2] = (0u | 0u);
    goto L_0886D438;
L_0886D438:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D440:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-1056));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1032), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3472)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1040), aot_gpr[18]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1044), aot_gpr[19]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (0u | 3u);
    aot_gpr[7] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1036), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(1048), aot_gpr[31]);
    aot_gpr[31] = (0x0886D484u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5124));
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 55u, 0x0893456Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D484u) goto L_0886D484;
    return;
L_0886D484:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D4D0;
      }
      goto L_0886D48C;
    }
L_0886D48C:
    aot_gpr[17] = (aot_gpr[16] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    goto L_0886D490;
L_0886D490:
    { const bool branch_taken = aot_gpr[16] != aot_gpr[18];
    // nop
      if (branch_taken) {
          goto L_0886D4B4;
      }
      goto L_0886D498;
    }
L_0886D498:
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(27152));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0886D4ACu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D4ACu) goto L_0886D4AC;
    return;
L_0886D4AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D4D0;
      }
      goto L_0886D4B4;
    }
L_0886D4B4:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x0886D4C0u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 30u, 0x08934444u>(ctx, &aot_mem) && ctx.pc == 0x0886D4C0u) goto L_0886D4C0;
    return;
L_0886D4C0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D4D0;
      }
      goto L_0886D4C8;
    }
L_0886D4C8:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D490;
      }
      goto L_0886D4D0;
    }
L_0886D4D0:
    aot_gpr[31] = (0x0886D4D8u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 69u, 0x08934650u>(ctx, &aot_mem) && ctx.pc == 0x0886D4D8u) goto L_0886D4D8;
    return;
L_0886D4D8:
    aot_gpr[2] = (aot_gpr[19] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1032)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1036)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1040)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1044)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(1048)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(1056));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D4F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3472)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (2215u << 16u);
    aot_gpr[7] = (aot_gpr[4] < aot_gpr[7] ? 1u : 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0886D54C;
      }
      goto L_0886D530;
    }
L_0886D530:
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[31] = (0x0886D540u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0886D440;
L_0886D540:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
      if (branch_taken) {
          goto L_0886D56C;
      }
      goto L_0886D54C;
    }
L_0886D54C:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3472)));
    aot_gpr[5] = (aot_gpr[17] << 2u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(25244)));
    goto L_0886D56C;
L_0886D56C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(7980), aot_gpr[17]);
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
L_0886D588:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[4] >> 5u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] & 31u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(7984)));
    aot_gpr[6] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[6] << (aot_gpr[4] & 31u));
    aot_gpr[2] = (aot_gpr[5] & aot_gpr[4]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D5B8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[19] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (0u | 1u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25244)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[18] = (0u | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    goto L_0886D5F8;
L_0886D5F8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(7984)));
    aot_gpr[8] = (0u | 0u);
    goto L_0886D600;
L_0886D600:
    aot_gpr[9] = (aot_gpr[20] << (aot_gpr[8] & 31u));
    aot_gpr[9] = (aot_gpr[7] & aot_gpr[9]);
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D614;
      }
      goto L_0886D610;
    }
L_0886D610:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0886D614;
L_0886D614:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[9] = (aot_gpr[8] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D600;
      }
      goto L_0886D624;
    }
L_0886D624:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (aot_gpr[5] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886D5F8;
      }
      goto L_0886D634;
    }
L_0886D634:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D764;
      }
      goto L_0886D63C;
    }
L_0886D63C:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7980)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(8000)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[20];
    aot_gpr[7] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_0886D6D4;
      }
      goto L_0886D64C;
    }
L_0886D64C:
    { const bool branch_taken = aot_gpr[18] == aot_gpr[20];
    // nop
      if (branch_taken) {
          goto L_0886D6F4;
      }
      goto L_0886D654;
    }
L_0886D654:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7324)));
    aot_gpr[31] = (0x0886D664u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 46u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D664u) goto L_0886D664;
    return;
L_0886D664:
    aot_gpr[4] = (14545u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] | 46871u);
    aot_fpr[13] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[13])));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (20224u << 16u);
    aot_fpr[12] = aot_fpr[0] - aot_fpr[12];
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[18]) >= 0;
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_0886D694;
      }
      goto L_0886D688;
    }
L_0886D688:
    aot_gpr[4] = (20352u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[15];
    goto L_0886D694;
L_0886D694:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[12] - aot_fpr[14];
        goto L_0886D6B4;
    }
    goto L_0886D6A8;
L_0886D6A8:
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_0886D6C4;
      }
      goto L_0886D6B4;
    }
L_0886D6B4:
    aot_gpr[7] = (32768u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (aot_gpr[4] + aot_gpr[7]);
    goto L_0886D6C4;
L_0886D6C4:
    { const bool branch_taken = aot_gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D6F4;
      }
      goto L_0886D6CC;
    }
L_0886D6CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_0886D6F4;
      }
      goto L_0886D6D4;
    }
L_0886D6D4:
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0886D6F4;
      }
      goto L_0886D6E0;
    }
L_0886D6E0:
    aot_gpr[31] = (0x0886D6E8u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_0886D588;
L_0886D6E8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D6F4;
      }
      goto L_0886D6F0;
    }
L_0886D6F0:
    aot_gpr[7] = (0u | 0u);
    goto L_0886D6F4;
L_0886D6F4:
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D74C;
      }
      goto L_0886D6FC;
    }
L_0886D6FC:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(25244)));
    goto L_0886D704;
L_0886D704:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (aot_gpr[21] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D718;
      }
      goto L_0886D714;
    }
L_0886D714:
    aot_gpr[21] = (0u | 0u);
    goto L_0886D718;
L_0886D718:
    aot_gpr[5] = (aot_gpr[21] >> 5u);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[5] = (aot_gpr[19] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[21] & 31u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(7984)));
    aot_gpr[6] = (aot_gpr[20] << (aot_gpr[6] & 31u));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D740;
      }
      goto L_0886D73C;
    }
L_0886D73C:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0886D740;
L_0886D740:
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D704;
      }
      goto L_0886D74C;
    }
L_0886D74C:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886D75Cu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    goto L_0886D4F8;
L_0886D75C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D76C;
      }
      goto L_0886D764;
    }
L_0886D764:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0886D76C;
L_0886D76C:
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
L_0886D790:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(7980)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(3472)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (aot_gpr[4] < aot_gpr[5] ? 1u : 0u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[2] ^ 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D7B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3472)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(5800), aot_gpr[4]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[6] = (0u | 3u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[7] = (0u | 4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3496));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886D7ECu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(5124));
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 55u, 0x0893456Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D7ECu) goto L_0886D7EC;
    return;
L_0886D7EC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D7F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(5800)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(5800), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0886D820u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(3496));
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 30u, 0x08934444u>(ctx, &aot_mem) && ctx.pc == 0x0886D820u) goto L_0886D820;
    return;
L_0886D820:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(5800)));
    aot_gpr[2] = (0u < aot_gpr[2] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    aot_gpr[2] = (aot_gpr[2] & aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D840:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886D854u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3496));
    if (rt.invoke_chained_direct<&recomp_unit_0304_entry, 304u, 69u, 0x08934650u>(ctx, &aot_mem) && ctx.pc == 0x0886D854u) goto L_0886D854;
    return;
L_0886D854:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D860:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[4] >> 5u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] & 31u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(7984)));
    aot_gpr[8] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[8] << (aot_gpr[4] & 31u));
    aot_gpr[4] = (aot_gpr[7] | aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(7984), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D894:
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[4] >> 5u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] & 31u);
    aot_gpr[7] = (0u | 1u);
    aot_gpr[8] = (aot_gpr[6] + aot_gpr[5]);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(7984)));
    aot_gpr[4] = (aot_gpr[7] << (aot_gpr[4] & 31u));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[8] & aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[6] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(7984), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886D8CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-944));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(908), aot_gpr[20]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3472)));
    aot_gpr[20] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(892), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(896), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(900), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(904), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(912), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(916), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(920), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(924), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(928), aot_gpr[31]);
    aot_gpr[31] = (0x0886D90Cu);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 188u, 0x0886CD18u>(ctx, &aot_mem) && ctx.pc == 0x0886D90Cu) goto L_0886D90C;
    return;
L_0886D90C:
    aot_gpr[31] = (0x0886D914u);
    // nop
    goto L_0886D7B4;
L_0886D914:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[21] = (2215u << 16u);
      if (branch_taken) {
          goto L_0886DA58;
      }
      goto L_0886D91C;
    }
L_0886D91C:
    aot_gpr[23] = (2218u << 16u);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(3496));
    aot_gpr[4] = (aot_gpr[23] + static_cast<std::uint32_t>(256));
    aot_gpr[22] = (aot_gpr[29] + static_cast<std::uint32_t>(432));
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(752));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(888), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(816));
    aot_gpr[30] = (0u | 44100u);
    goto L_0886D93C;
L_0886D93C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(888)));
    aot_gpr[5] = (0u | 4u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x0886D950u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 146u, 0x08933840u>(ctx, &aot_mem) && ctx.pc == 0x0886D950u) goto L_0886D950;
    return;
L_0886D950:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_0886D984;
      }
      goto L_0886D95C;
    }
L_0886D95C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0886D968u);
    aot_gpr[5] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 193u, 0x08933BA8u>(ctx, &aot_mem) && ctx.pc == 0x0886D968u) goto L_0886D968;
    return;
L_0886D968:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x0886D974u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0297_entry, 297u, 74u, 0x0892D4E4u>(ctx, &aot_mem) && ctx.pc == 0x0886D974u) goto L_0886D974;
    return;
L_0886D974:
    aot_gpr[31] = (0x0886D97Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0303_entry, 303u, 138u, 0x089337B8u>(ctx, &aot_mem) && ctx.pc == 0x0886D97Cu) goto L_0886D97C;
    return;
L_0886D97C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(752))))));
      if (branch_taken) {
          goto L_0886D998;
      }
      goto L_0886D984;
    }
L_0886D984:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0886D994u);
    aot_gpr[6] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D994u) goto L_0886D994;
    return;
L_0886D994:
    aot_gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(752))))));
    goto L_0886D998;
L_0886D998:
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D9D0;
      }
      goto L_0886D9A0;
    }
L_0886D9A0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x0886D9B0u);
    aot_gpr[6] = (0u | 63u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 261u, 0x08A3AD30u>(ctx, &aot_mem) && ctx.pc == 0x0886D9B0u) goto L_0886D9B0;
    return;
L_0886D9B0:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(879), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0886D9C0u);
    aot_gpr[5] = (0u | 46u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 271u, 0x08A3ADD8u>(ctx, &aot_mem) && ctx.pc == 0x0886D9C0u) goto L_0886D9C0;
    return;
L_0886D9C0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D9D0;
      }
      goto L_0886D9CC;
    }
L_0886D9CC:
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0886D9D0;
L_0886D9D0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(880)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[30];
    // nop
      if (branch_taken) {
          goto L_0886DA38;
      }
      goto L_0886D9DC;
    }
L_0886D9DC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(884)));
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(257) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DA38;
      }
      goto L_0886D9EC;
    }
L_0886D9EC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0886D9FCu);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 196u, 0x088B7CE0u>(ctx, &aot_mem) && ctx.pc == 0x0886D9FCu) goto L_0886D9FC;
    return;
L_0886D9FC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DA38;
      }
      goto L_0886DA04;
    }
L_0886DA04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25244)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0886DA18u);
    aot_gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 170u, 0x088B7B80u>(ctx, &aot_mem) && ctx.pc == 0x0886DA18u) goto L_0886DA18;
    return;
L_0886DA18:
    aot_gpr[4] = (aot_gpr[20] << 2u);
    aot_gpr[4] = (aot_gpr[29] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[31] = (0x0886DA30u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_0886D860;
L_0886DA30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DA40;
      }
      goto L_0886DA38;
    }
L_0886DA38:
    aot_gpr[31] = (0x0886DA40u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_0886D894;
L_0886DA40:
    aot_gpr[31] = (0x0886DA48u);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0886D7F8;
L_0886DA48:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D93C;
      }
      goto L_0886DA50;
    }
L_0886DA50:
    aot_gpr[31] = (0x0886DA58u);
    // nop
    goto L_0886D840;
L_0886DA58:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (0u | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(8001), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (aot_gpr[4] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (aot_gpr[29] | 0u);
      if (branch_taken) {
          goto L_0886DAA4;
      }
      goto L_0886DA70;
    }
L_0886DA70:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(25244)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[6] + static_cast<std::uint32_t>(8001));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD8(aot_gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[9] << 2u);
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[9]));
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[10]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8004), aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[4] < aot_gpr[20] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886DA70;
      }
      goto L_0886DAA4;
    }
L_0886DAA4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(892)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(896)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(900)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(904)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(908)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(912)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(916)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(920)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(924)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(928)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(944));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886DAD4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886DAF0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 204u, 0x088B7D64u>(ctx, &aot_mem) && ctx.pc == 0x0886DAF0u) goto L_0886DAF0;
    return;
L_0886DAF0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886DAFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0886DB18u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 206u, 0x088B7DA4u>(ctx, &aot_mem) && ctx.pc == 0x0886DB18u) goto L_0886DB18;
    return;
L_0886DB18:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886DB24:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25232), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886DB44:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(25376), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886DB64:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[30]);
    aot_gpr[30] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-6928));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    aot_gpr[31] = (0x0886DBA8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0309_entry, 309u, 108u, 0x08939EECu>(ctx, &aot_mem) && ctx.pc == 0x0886DBA8u) goto L_0886DBA8;
    return;
L_0886DBA8:
    aot_gpr[31] = (0x0886DBB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 96u, 0x08884AE4u>(ctx, &aot_mem) && ctx.pc == 0x0886DBB0u) goto L_0886DBB0;
    return;
L_0886DBB0:
    aot_gpr[31] = (0x0886DBB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 70u, 0x0893F74Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DBB8u) goto L_0886DBB8;
    return;
L_0886DBB8:
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0886DBC4u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0315_entry, 315u, 50u, 0x0893F5DCu>(ctx, &aot_mem) && ctx.pc == 0x0886DBC4u) goto L_0886DBC4;
    return;
L_0886DBC4:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[31] = (0x0886DBD0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7340)));
    if (rt.invoke_chained_direct<&recomp_unit_0266_entry, 266u, 87u, 0x0890EAE0u>(ctx, &aot_mem) && ctx.pc == 0x0886DBD0u) goto L_0886DBD0;
    return;
L_0886DBD0:
    aot_gpr[17] = (2216u << 16u);
    aot_gpr[31] = (0x0886DBDCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28756)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x0886DBDCu) goto L_0886DBDC;
    return;
L_0886DBDC:
    aot_gpr[18] = (2216u << 16u);
    aot_gpr[31] = (0x0886DBE8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x0886DBE8u) goto L_0886DBE8;
    return;
L_0886DBE8:
    aot_gpr[19] = (2216u << 16u);
    aot_gpr[31] = (0x0886DBF4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28760)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x0886DBF4u) goto L_0886DBF4;
    return;
L_0886DBF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-28756)));
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(-28760)));
    aot_gpr[22] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28764)));
    aot_gpr[23] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[30] = (2u << 16u);
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[30]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[20] = (0u | 7u);
    aot_gpr[21] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(-3654), static_cast<std::uint16_t>(aot_gpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[19] = (0u | 6u);
    aot_gpr[17] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(2116), static_cast<std::uint16_t>(aot_gpr[19]));
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[17] = (0u | 64u);
    PSPRECOMP_AOT_STORE16(aot_gpr[18] + static_cast<std::uint32_t>(2118), static_cast<std::uint16_t>(aot_gpr[17]));
    aot_gpr[18] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[31] = (0x0886DC90u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0886DC90u) goto L_0886DC90;
    return;
L_0886DC90:
    aot_gpr[31] = (0x0886DC98u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 155u, 0x0882ED00u>(ctx, &aot_mem) && ctx.pc == 0x0886DC98u) goto L_0886DC98;
    return;
L_0886DC98:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[30]);
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(-3654), static_cast<std::uint16_t>(aot_gpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[21] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(2116), static_cast<std::uint16_t>(aot_gpr[19]));
    aot_gpr[30] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(2118), static_cast<std::uint16_t>(aot_gpr[17]));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[31] = (0x0886DCF4u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0886DCF4u) goto L_0886DCF4;
    return;
L_0886DCF4:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[31] = (0x0886DD00u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 21u, 0x089281DCu>(ctx, &aot_mem) && ctx.pc == 0x0886DD00u) goto L_0886DD00;
    return;
L_0886DD00:
    aot_gpr[31] = (0x0886DD08u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x0886DD08u) goto L_0886DD08;
    return;
L_0886DD08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-28804)));
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(2116), static_cast<std::uint16_t>(aot_gpr[19]));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(2118), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[31] = (0x0886DD24u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0886DD24u) goto L_0886DD24;
    return;
L_0886DD24:
    aot_gpr[31] = (0x0886DD2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 31u, 0x0882F21Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DD2Cu) goto L_0886DD2C;
    return;
L_0886DD2C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0886DD38u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7480)));
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 100u, 0x088C78ACu>(ctx, &aot_mem) && ctx.pc == 0x0886DD38u) goto L_0886DD38;
    return;
L_0886DD38:
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[31] = (0x0886DD44u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7492)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 119u, 0x088DC90Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DD44u) goto L_0886DD44;
    return;
L_0886DD44:
    aot_gpr[31] = (0x0886DD4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 35u, 0x0882F2DCu>(ctx, &aot_mem) && ctx.pc == 0x0886DD4Cu) goto L_0886DD4C;
    return;
L_0886DD4C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0886DD58u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2096)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 108u, 0x0880FBA4u>(ctx, &aot_mem) && ctx.pc == 0x0886DD58u) goto L_0886DD58;
    return;
L_0886DD58:
    aot_gpr[31] = (0x0886DD60u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 21u, 0x089281DCu>(ctx, &aot_mem) && ctx.pc == 0x0886DD60u) goto L_0886DD60;
    return;
L_0886DD60:
    aot_gpr[31] = (0x0886DD68u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x0886DD68u) goto L_0886DD68;
    return;
L_0886DD68:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0886DD74u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2092)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 6u, 0x08812084u>(ctx, &aot_mem) && ctx.pc == 0x0886DD74u) goto L_0886DD74;
    return;
L_0886DD74:
    aot_gpr[31] = (0x0886DD7Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 21u, 0x089281DCu>(ctx, &aot_mem) && ctx.pc == 0x0886DD7Cu) goto L_0886DD7C;
    return;
L_0886DD7C:
    aot_gpr[31] = (0x0886DD84u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x0886DD84u) goto L_0886DD84;
    return;
L_0886DD84:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0886DD90u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5260)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 187u, 0x088A8D7Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DD90u) goto L_0886DD90;
    return;
L_0886DD90:
    aot_gpr[31] = (0x0886DD98u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 21u, 0x089281DCu>(ctx, &aot_mem) && ctx.pc == 0x0886DD98u) goto L_0886DD98;
    return;
L_0886DD98:
    aot_gpr[31] = (0x0886DDA0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x0886DDA0u) goto L_0886DDA0;
    return;
L_0886DDA0:
    aot_gpr[31] = (0x0886DDA8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7492)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 111u, 0x088DC834u>(ctx, &aot_mem) && ctx.pc == 0x0886DDA8u) goto L_0886DDA8;
    return;
L_0886DDA8:
    aot_gpr[31] = (0x0886DDB0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 21u, 0x089281DCu>(ctx, &aot_mem) && ctx.pc == 0x0886DDB0u) goto L_0886DDB0;
    return;
L_0886DDB0:
    aot_gpr[31] = (0x0886DDB8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28764)));
    if (rt.invoke_chained_direct<&recomp_unit_0291_entry, 291u, 172u, 0x08927DBCu>(ctx, &aot_mem) && ctx.pc == 0x0886DDB8u) goto L_0886DDB8;
    return;
L_0886DDB8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-28756)));
    aot_gpr[18] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28760)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-28764)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[7] = (2u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[6] | aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(-3654), static_cast<std::uint16_t>(aot_gpr[20]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-28804)));
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(2116), static_cast<std::uint16_t>(aot_gpr[19]));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(2118), static_cast<std::uint16_t>(aot_gpr[17]));
    aot_gpr[17] = (1u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[31] = (0x0886DE3Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0886DE3Cu) goto L_0886DE3C;
    return;
L_0886DE3C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0886DE48u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-4024)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 29u, 0x08824250u>(ctx, &aot_mem) && ctx.pc == 0x0886DE48u) goto L_0886DE48;
    return;
L_0886DE48:
    aot_gpr[31] = (0x0886DE50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 97u, 0x0889A538u>(ctx, &aot_mem) && ctx.pc == 0x0886DE50u) goto L_0886DE50;
    return;
L_0886DE50:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-28804)));
    PSPRECOMP_AOT_STORE16(aot_gpr[21] + static_cast<std::uint32_t>(2116), static_cast<std::uint16_t>(aot_gpr[19]));
    PSPRECOMP_AOT_STORE16(aot_gpr[30] + static_cast<std::uint32_t>(2118), static_cast<std::uint16_t>(0u));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-28804), aot_gpr[4]);
    aot_gpr[31] = (0x0886DE6Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0886DE6Cu) goto L_0886DE6C;
    return;
L_0886DE6C:
    aot_gpr[31] = (0x0886DE74u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28760)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 15u, 0x08928174u>(ctx, &aot_mem) && ctx.pc == 0x0886DE74u) goto L_0886DE74;
    return;
L_0886DE74:
    aot_gpr[31] = (0x0886DE7Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28760)));
    if (rt.invoke_chained_direct<&recomp_unit_0292_entry, 292u, 21u, 0x089281DCu>(ctx, &aot_mem) && ctx.pc == 0x0886DE7Cu) goto L_0886DE7C;
    return;
L_0886DE7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-28760)));
    aot_gpr[31] = (0x0886DE88u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0316_entry, 316u, 81u, 0x089408B8u>(ctx, &aot_mem) && ctx.pc == 0x0886DE88u) goto L_0886DE88;
    return;
L_0886DE88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[22] + static_cast<std::uint32_t>(-28814)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(-28804)));
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    aot_gpr[4] = (aot_gpr[4] & 2u);
    aot_gpr[4] = (aot_gpr[4] & 65535u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(-28816)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[4]);
    aot_gpr[4] = (~(aot_gpr[4] | 0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(-28804), aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[6] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE16(aot_gpr[16] + static_cast<std::uint32_t>(-28816), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[31] = (0x0886DEBCu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0313_entry, 313u, 48u, 0x0893D864u>(ctx, &aot_mem) && ctx.pc == 0x0886DEBCu) goto L_0886DEBC;
    return;
L_0886DEBC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x0886DEC8u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7492)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 115u, 0x088DC8A0u>(ctx, &aot_mem) && ctx.pc == 0x0886DEC8u) goto L_0886DEC8;
    return;
L_0886DEC8:
    aot_gpr[31] = (0x0886DED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 89u, 0x0882BD20u>(ctx, &aot_mem) && ctx.pc == 0x0886DED0u) goto L_0886DED0;
    return;
L_0886DED0:
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[31] = (0x0886DEDCu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7340)));
    if (rt.invoke_chained_direct<&recomp_unit_0266_entry, 266u, 72u, 0x0890E9B4u>(ctx, &aot_mem) && ctx.pc == 0x0886DEDCu) goto L_0886DEDC;
    return;
L_0886DEDC:
    aot_gpr[31] = (0x0886DEE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 97u, 0x0882BD94u>(ctx, &aot_mem) && ctx.pc == 0x0886DEE4u) goto L_0886DEE4;
    return;
L_0886DEE4:
    aot_gpr[31] = (0x0886DEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 147u, 0x088B9D60u>(ctx, &aot_mem) && ctx.pc == 0x0886DEECu) goto L_0886DEEC;
    return;
L_0886DEEC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5272)));
    aot_gpr[31] = (0x0886DEFCu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 3u, 0x088B6044u>(ctx, &aot_mem) && ctx.pc == 0x0886DEFCu) goto L_0886DEFC;
    return;
L_0886DEFC:
    aot_gpr[31] = (0x0886DF04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 91u, 0x0882BD3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DF04u) goto L_0886DF04;
    return;
L_0886DF04:
    aot_gpr[31] = (0x0886DF0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 94u, 0x0882BD68u>(ctx, &aot_mem) && ctx.pc == 0x0886DF0Cu) goto L_0886DF0C;
    return;
L_0886DF0C:
    aot_gpr[31] = (0x0886DF14u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7340)));
    if (rt.invoke_chained_direct<&recomp_unit_0266_entry, 266u, 79u, 0x0890EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DF14u) goto L_0886DF14;
    return;
L_0886DF14:
    aot_gpr[31] = (0x0886DF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0301_entry, 301u, 32u, 0x08931398u>(ctx, &aot_mem) && ctx.pc == 0x0886DF1Cu) goto L_0886DF1C;
    return;
L_0886DF1C:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (17150u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (17004u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (49584u << 16u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[7] = (65280u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_fpr[14] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(128));
    aot_gpr[4] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(128));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(128));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[6] = (aot_gpr[6] << 16u);
    aot_gpr[6] = (aot_gpr[6] | aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] << 8u);
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[31] = (0x0886DFA8u);
    aot_gpr[4] = (aot_gpr[5] | aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0279_entry, 279u, 6u, 0x0891B124u>(ctx, &aot_mem) && ctx.pc == 0x0886DFA8u) goto L_0886DFA8;
    return;
L_0886DFA8:
    aot_gpr[31] = (0x0886DFB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0278_entry, 278u, 99u, 0x0891AEBCu>(ctx, &aot_mem) && ctx.pc == 0x0886DFB0u) goto L_0886DFB0;
    return;
L_0886DFB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[30] = (2218u << 16u);
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[30] + static_cast<std::uint32_t>(-6828)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (aot_gpr[30] ^ aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 2u, 0x0886E01Cu>(ctx, &aot_mem); return;
      }
      goto L_0886DFD4;
    }
L_0886DFD4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[30] ^ aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 2u, 0x0886E01Cu>(ctx, &aot_mem); return;
      }
      goto L_0886DFEC;
    }
L_0886DFEC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[30] ^ aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 2u, 0x0886E01Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 1u, 0x0886E004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0105(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0105_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_105(Runtime &runtime) {
    runtime.register_generated_unit(105u, 0x0886D000u, 4096u, &recomp_unit_0105, &recomp_unit_0105_entry);
    runtime.register_function(0x0886D000u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D01Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D024u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D02Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D030u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D040u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D060u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D070u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D07Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D088u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D098u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D0A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D0D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D0E8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D0FCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D10Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D11Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D124u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D138u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D148u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D154u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D15Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D160u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D168u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D174u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D180u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D18Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D194u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D1A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D1B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D1D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D1E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D1F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D204u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D20Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D214u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D21Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D224u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D244u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D250u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D268u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D27Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D298u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D2A4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D2C4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D2E0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D2F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D300u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D320u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D328u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D330u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D338u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D340u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D35Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D378u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D384u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D3A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D3ACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D3C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D3D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D3DCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D3E4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D3FCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D408u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D424u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D434u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D438u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D440u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D484u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D48Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D490u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D498u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D4ACu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D4B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D4C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D4C8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D4D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D4D8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D4F8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D530u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D540u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D54Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D56Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D588u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D5B8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D5F8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D600u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D610u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D614u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D624u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D634u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D63Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D64Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D654u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D664u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D688u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D694u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D6A8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D6B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D6C4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D6CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D6D4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D6E0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D6E8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D6F0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D6F4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D6FCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D704u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D714u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D718u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D73Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D740u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D74Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D75Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D764u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D76Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D790u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D7B4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D7ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D7F8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D820u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D840u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D854u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D860u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D894u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D8CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D90Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D914u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D91Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D93Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D950u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D95Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D968u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D974u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D97Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D984u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D994u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D998u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D9A0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D9B0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D9C0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D9CCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D9D0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D9DCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D9ECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886D9FCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DA04u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DA18u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DA30u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DA38u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DA40u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DA48u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DA50u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DA58u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DA70u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DAA4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DAD4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DAF0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DAFCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DB18u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DB24u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DB44u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DB64u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DBA8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DBB0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DBB8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DBC4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DBD0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DBDCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DBE8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DBF4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DC90u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DC98u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DCF4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DD00u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DD08u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DD24u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DD2Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DD38u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DD44u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DD4Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DD58u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DD60u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DD68u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DD74u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DD7Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DD84u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DD90u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DD98u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DDA0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DDA8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DDB0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DDB8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DE3Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DE48u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DE50u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DE6Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DE74u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DE7Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DE88u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DEBCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DEC8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DED0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DEDCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DEE4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DEECu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DEFCu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DF04u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DF0Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DF14u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DF1Cu, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DFA8u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DFB0u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DFD4u, &recomp_unit_0105, "recomp_unit_0105");
    runtime.register_function(0x0886DFECu, &recomp_unit_0105, "recomp_unit_0105");
}
} // namespace psprecomp
