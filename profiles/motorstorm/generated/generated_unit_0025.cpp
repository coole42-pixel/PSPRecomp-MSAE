#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0025[1017] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 5, 6, 0, 7, 0, 0, 8, 9, 0, 0, 0, 10, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 19, 0, 20, 0, 0, 21, 22, 0, 23, 0, 0, 24, 25, 0, 26, 0, 0, 27, 28, 0,
    29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 33, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 39, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 42, 43, 44,
    0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49,
    0, 0, 0, 50, 0, 51, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56,
    0, 0, 57, 58, 0, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 64,
    0, 0, 0, 65, 0, 0, 0, 66, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70,
    0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 76, 0,
    0, 0, 77, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 82, 0, 83, 0, 84, 85, 0, 86, 0, 0, 87,
    0, 0, 0, 88, 0, 89, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 100, 0, 0, 101, 0, 102, 0, 0, 0, 103, 0,
    104, 0, 105, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 111,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0,
    0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123,
    0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 139, 0, 0, 140, 0, 0, 0, 141, 0, 142, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 148, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 152,
    0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160,
    0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 166, 0, 0,
    0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172,
    0, 0, 173, 0, 174, 0, 175, 0, 0, 176, 0, 177, 0, 178, 0, 179, 0, 0, 180, 0, 181, 0, 0, 182, 0, 183, 0, 0, 184, 0, 185, 0,
    186, 0, 0, 187, 0, 188, 0, 0, 189, 0, 190, 0, 0, 191, 0, 192, 0, 193, 0, 0, 194, 0, 195, 0, 0, 196, 0, 197, 0, 0, 198, 0,
    199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 209, 0,
    210, 0, 0, 211, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 214, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0,
    0, 218, 0, 219, 0, 0, 0, 220, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 224, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 227,
    0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 232, 0, 233, 0, 0, 234, 0, 0, 235,
};
void recomp_unit_0025_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0881D000u;
        entry_id = (entry_delta < 4068u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0025[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0881D000;
    case 2u: goto L_0881D008;
    case 3u: goto L_0881D028;
    case 4u: goto L_0881D044;
    case 5u: goto L_0881D04C;
    case 6u: goto L_0881D050;
    case 7u: goto L_0881D058;
    case 8u: goto L_0881D064;
    case 9u: goto L_0881D068;
    case 10u: goto L_0881D078;
    case 11u: goto L_0881D098;
    case 12u: goto L_0881D0B0;
    case 13u: goto L_0881D0C0;
    case 14u: goto L_0881D0C4;
    case 15u: goto L_0881D0D4;
    case 16u: goto L_0881D0F4;
    case 17u: goto L_0881D124;
    case 18u: goto L_0881D12C;
    case 19u: goto L_0881D130;
    case 20u: goto L_0881D138;
    case 21u: goto L_0881D144;
    case 22u: goto L_0881D148;
    case 23u: goto L_0881D150;
    case 24u: goto L_0881D15C;
    case 25u: goto L_0881D160;
    case 26u: goto L_0881D168;
    case 27u: goto L_0881D174;
    case 28u: goto L_0881D178;
    case 29u: goto L_0881D180;
    case 30u: goto L_0881D18C;
    case 31u: goto L_0881D19C;
    case 32u: goto L_0881D1B0;
    case 33u: goto L_0881D1B4;
    case 34u: goto L_0881D1B8;
    case 35u: goto L_0881D1D0;
    case 36u: goto L_0881D1F0;
    case 37u: goto L_0881D234;
    case 38u: goto L_0881D23C;
    case 39u: goto L_0881D248;
    case 40u: goto L_0881D250;
    case 41u: goto L_0881D260;
    case 42u: goto L_0881D274;
    case 43u: goto L_0881D278;
    case 44u: goto L_0881D27C;
    case 45u: goto L_0881D28C;
    case 46u: goto L_0881D2B4;
    case 47u: goto L_0881D2D4;
    case 48u: goto L_0881D2F0;
    case 49u: goto L_0881D2FC;
    case 50u: goto L_0881D30C;
    case 51u: goto L_0881D314;
    case 52u: goto L_0881D318;
    case 53u: goto L_0881D330;
    case 54u: goto L_0881D344;
    case 55u: goto L_0881D364;
    case 56u: goto L_0881D37C;
    case 57u: goto L_0881D388;
    case 58u: goto L_0881D38C;
    case 59u: goto L_0881D39C;
    case 60u: goto L_0881D3A4;
    case 61u: goto L_0881D3B4;
    case 62u: goto L_0881D3DC;
    case 63u: goto L_0881D3F0;
    case 64u: goto L_0881D3FC;
    case 65u: goto L_0881D40C;
    case 66u: goto L_0881D41C;
    case 67u: goto L_0881D420;
    case 68u: goto L_0881D444;
    case 69u: goto L_0881D468;
    case 70u: goto L_0881D47C;
    case 71u: goto L_0881D48C;
    case 72u: goto L_0881D4B4;
    case 73u: goto L_0881D4C4;
    case 74u: goto L_0881D4E0;
    case 75u: goto L_0881D4F4;
    case 76u: goto L_0881D4F8;
    case 77u: goto L_0881D508;
    case 78u: goto L_0881D518;
    case 79u: goto L_0881D524;
    case 80u: goto L_0881D538;
    case 81u: goto L_0881D544;
    case 82u: goto L_0881D554;
    case 83u: goto L_0881D55C;
    case 84u: goto L_0881D564;
    case 85u: goto L_0881D568;
    case 86u: goto L_0881D570;
    case 87u: goto L_0881D57C;
    case 88u: goto L_0881D58C;
    case 89u: goto L_0881D594;
    case 90u: goto L_0881D5A0;
    case 91u: goto L_0881D5A8;
    case 92u: goto L_0881D5CC;
    case 93u: goto L_0881D5D8;
    case 94u: goto L_0881D5EC;
    case 95u: goto L_0881D604;
    case 96u: goto L_0881D61C;
    case 97u: goto L_0881D62C;
    case 98u: goto L_0881D640;
    case 99u: goto L_0881D650;
    case 100u: goto L_0881D654;
    case 101u: goto L_0881D660;
    case 102u: goto L_0881D668;
    case 103u: goto L_0881D678;
    case 104u: goto L_0881D680;
    case 105u: goto L_0881D688;
    case 106u: goto L_0881D698;
    case 107u: goto L_0881D6A0;
    case 108u: goto L_0881D6C4;
    case 109u: goto L_0881D6D8;
    case 110u: goto L_0881D6EC;
    case 111u: goto L_0881D6FC;
    case 112u: goto L_0881D730;
    case 113u: goto L_0881D734;
    case 114u: goto L_0881D744;
    case 115u: goto L_0881D754;
    case 116u: goto L_0881D764;
    case 117u: goto L_0881D770;
    case 118u: goto L_0881D784;
    case 119u: goto L_0881D794;
    case 120u: goto L_0881D7A8;
    case 121u: goto L_0881D7C8;
    case 122u: goto L_0881D7DC;
    case 123u: goto L_0881D7FC;
    case 124u: goto L_0881D804;
    case 125u: goto L_0881D854;
    case 126u: goto L_0881D85C;
    case 127u: goto L_0881D864;
    case 128u: goto L_0881D8A0;
    case 129u: goto L_0881D8AC;
    case 130u: goto L_0881D8B8;
    case 131u: goto L_0881D8C0;
    case 132u: goto L_0881D8CC;
    case 133u: goto L_0881D8D8;
    case 134u: goto L_0881D8E4;
    case 135u: goto L_0881D910;
    case 136u: goto L_0881D920;
    case 137u: goto L_0881D980;
    case 138u: goto L_0881D9A8;
    case 139u: goto L_0881D9AC;
    case 140u: goto L_0881D9B8;
    case 141u: goto L_0881D9C8;
    case 142u: goto L_0881D9D0;
    case 143u: goto L_0881D9DC;
    case 144u: goto L_0881D9F0;
    case 145u: goto L_0881DA04;
    case 146u: goto L_0881DA2C;
    case 147u: goto L_0881DA34;
    case 148u: goto L_0881DA3C;
    case 149u: goto L_0881DA40;
    case 150u: goto L_0881DA58;
    case 151u: goto L_0881DA74;
    case 152u: goto L_0881DA7C;
    case 153u: goto L_0881DA98;
    case 154u: goto L_0881DAAC;
    case 155u: goto L_0881DAE0;
    case 156u: goto L_0881DB14;
    case 157u: goto L_0881DB34;
    case 158u: goto L_0881DB50;
    case 159u: goto L_0881DB5C;
    case 160u: goto L_0881DB7C;
    case 161u: goto L_0881DB84;
    case 162u: goto L_0881DBB0;
    case 163u: goto L_0881DBC8;
    case 164u: goto L_0881DBD8;
    case 165u: goto L_0881DBE0;
    case 166u: goto L_0881DBF4;
    case 167u: goto L_0881DC0C;
    case 168u: goto L_0881DC44;
    case 169u: goto L_0881DC50;
    case 170u: goto L_0881DC5C;
    case 171u: goto L_0881DC6C;
    case 172u: goto L_0881DC7C;
    case 173u: goto L_0881DC88;
    case 174u: goto L_0881DC90;
    case 175u: goto L_0881DC98;
    case 176u: goto L_0881DCA4;
    case 177u: goto L_0881DCAC;
    case 178u: goto L_0881DCB4;
    case 179u: goto L_0881DCBC;
    case 180u: goto L_0881DCC8;
    case 181u: goto L_0881DCD0;
    case 182u: goto L_0881DCDC;
    case 183u: goto L_0881DCE4;
    case 184u: goto L_0881DCF0;
    case 185u: goto L_0881DCF8;
    case 186u: goto L_0881DD00;
    case 187u: goto L_0881DD0C;
    case 188u: goto L_0881DD14;
    case 189u: goto L_0881DD20;
    case 190u: goto L_0881DD28;
    case 191u: goto L_0881DD34;
    case 192u: goto L_0881DD3C;
    case 193u: goto L_0881DD44;
    case 194u: goto L_0881DD50;
    case 195u: goto L_0881DD58;
    case 196u: goto L_0881DD64;
    case 197u: goto L_0881DD6C;
    case 198u: goto L_0881DD78;
    case 199u: goto L_0881DD80;
    case 200u: goto L_0881DD90;
    case 201u: goto L_0881DDBC;
    case 202u: goto L_0881DDD0;
    case 203u: goto L_0881DDF4;
    case 204u: goto L_0881DE00;
    case 205u: goto L_0881DE3C;
    case 206u: goto L_0881DE60;
    case 207u: goto L_0881DE68;
    case 208u: goto L_0881DE70;
    case 209u: goto L_0881DE78;
    case 210u: goto L_0881DE80;
    case 211u: goto L_0881DE8C;
    case 212u: goto L_0881DE94;
    case 213u: goto L_0881DE9C;
    case 214u: goto L_0881DEB8;
    case 215u: goto L_0881DEBC;
    case 216u: goto L_0881DEE4;
    case 217u: goto L_0881DEF4;
    case 218u: goto L_0881DF04;
    case 219u: goto L_0881DF0C;
    case 220u: goto L_0881DF1C;
    case 221u: goto L_0881DF24;
    case 222u: goto L_0881DF34;
    case 223u: goto L_0881DF44;
    case 224u: goto L_0881DF4C;
    case 225u: goto L_0881DF58;
    case 226u: goto L_0881DF60;
    case 227u: goto L_0881DF7C;
    case 228u: goto L_0881DF84;
    case 229u: goto L_0881DF8C;
    case 230u: goto L_0881DFAC;
    case 231u: goto L_0881DFB8;
    case 232u: goto L_0881DFC0;
    case 233u: goto L_0881DFC8;
    case 234u: goto L_0881DFD4;
    case 235u: goto L_0881DFE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0881D000:
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D008:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22488), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D028:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0881D050;
      }
      goto L_0881D044;
    }
L_0881D044:
    aot_gpr[31] = (0x0881D04Cu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 74u, 0x08A4B41Cu>(ctx, &aot_mem) && ctx.pc == 0x0881D04Cu) goto L_0881D04C;
    return;
L_0881D04C:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_0881D050;
L_0881D050:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D068;
      }
      goto L_0881D058;
    }
L_0881D058:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x0881D064u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 77u, 0x08A4B434u>(ctx, &aot_mem) && ctx.pc == 0x0881D064u) goto L_0881D064;
    return;
L_0881D064:
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    goto L_0881D068;
L_0881D068:
    aot_gpr[2] = (aot_gpr[7] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D078:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22496), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D098:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0881D0C4;
      }
      goto L_0881D0B0;
    }
L_0881D0B0:
    aot_gpr[7] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x0881D0C0u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 74u, 0x08A4B41Cu>(ctx, &aot_mem) && ctx.pc == 0x0881D0C0u) goto L_0881D0C0;
    return;
L_0881D0C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_0881D0C4;
L_0881D0C4:
    aot_gpr[2] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D0D4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22504), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D0F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0881D130;
      }
      goto L_0881D124;
    }
L_0881D124:
    aot_gpr[31] = (0x0881D12Cu);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 74u, 0x08A4B41Cu>(ctx, &aot_mem) && ctx.pc == 0x0881D12Cu) goto L_0881D12C;
    return;
L_0881D12C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    goto L_0881D130;
L_0881D130:
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D148;
      }
      goto L_0881D138;
    }
L_0881D138:
    aot_gpr[4] = (aot_gpr[8] | 0u);
    aot_gpr[31] = (0x0881D144u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 74u, 0x08A4B41Cu>(ctx, &aot_mem) && ctx.pc == 0x0881D144u) goto L_0881D144;
    return;
L_0881D144:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    goto L_0881D148;
L_0881D148:
    { const bool branch_taken = aot_gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D160;
      }
      goto L_0881D150;
    }
L_0881D150:
    aot_gpr[4] = (aot_gpr[9] | 0u);
    aot_gpr[31] = (0x0881D15Cu);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 74u, 0x08A4B41Cu>(ctx, &aot_mem) && ctx.pc == 0x0881D15Cu) goto L_0881D15C;
    return;
L_0881D15C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    goto L_0881D160;
L_0881D160:
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D178;
      }
      goto L_0881D168;
    }
L_0881D168:
    aot_gpr[4] = (aot_gpr[10] | 0u);
    aot_gpr[31] = (0x0881D174u);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 78u, 0x08A4B43Cu>(ctx, &aot_mem) && ctx.pc == 0x0881D174u) goto L_0881D174;
    return;
L_0881D174:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    goto L_0881D178;
L_0881D178:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D1B8;
      }
      goto L_0881D180;
    }
L_0881D180:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0881D18Cu);
    aot_gpr[5] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 73u, 0x08A4B414u>(ctx, &aot_mem) && ctx.pc == 0x0881D18Cu) goto L_0881D18C;
    return;
L_0881D18C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0881D1B4;
      }
      goto L_0881D19C;
    }
L_0881D19C:
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0881D1B0u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 203u, 0x08943F50u>(ctx, &aot_mem) && ctx.pc == 0x0881D1B0u) goto L_0881D1B0;
    return;
L_0881D1B0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_0881D1B4;
L_0881D1B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    goto L_0881D1B8;
L_0881D1B8:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D1D0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22512), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D1F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[20] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x0881D234u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_0881D098;
L_0881D234:
    aot_gpr[20] = (0u | 0u);
    aot_gpr[19] = (aot_gpr[18] | 0u);
    goto L_0881D23C;
L_0881D23C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D27C;
      }
      goto L_0881D248;
    }
L_0881D248:
    aot_gpr[31] = (0x0881D250u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 73u, 0x08A4B414u>(ctx, &aot_mem) && ctx.pc == 0x0881D250u) goto L_0881D250;
    return;
L_0881D250:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(52), aot_gpr[2]);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[21] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0881D278;
      }
      goto L_0881D260;
    }
L_0881D260:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0881D274u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0319_entry, 319u, 203u, 0x08943F50u>(ctx, &aot_mem) && ctx.pc == 0x0881D274u) goto L_0881D274;
    return;
L_0881D274:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    goto L_0881D278;
L_0881D278:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(52), aot_gpr[4]);
    goto L_0881D27C;
L_0881D27C:
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 10 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881D23C;
      }
      goto L_0881D28C;
    }
L_0881D28C:
    aot_gpr[2] = (aot_gpr[18] | 0u);
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
L_0881D2B4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22520), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D2D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0881D2F0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    goto L_0881D098;
L_0881D2F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (0x0881D2FCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 75u, 0x08A4B424u>(ctx, &aot_mem) && ctx.pc == 0x0881D2FCu) goto L_0881D2FC;
    return;
L_0881D2FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(32), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D318;
      }
      goto L_0881D30C;
    }
L_0881D30C:
    aot_gpr[31] = (0x0881D314u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 74u, 0x08A4B41Cu>(ctx, &aot_mem) && ctx.pc == 0x0881D314u) goto L_0881D314;
    return;
L_0881D314:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(36), aot_gpr[2]);
    goto L_0881D318;
L_0881D318:
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
L_0881D330:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D344:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(22528), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D364:
    aot_fpr[13] = aot_fpr[13] - aot_fpr[12];
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_0881D388;
      }
      goto L_0881D37C;
    }
L_0881D37C:
    aot_gpr[4] = (49024u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
      if (branch_taken) {
          goto L_0881D38C;
      }
      goto L_0881D388;
    }
L_0881D388:
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[4]);
    goto L_0881D38C;
L_0881D38C:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_fpr[12] = aot_fpr[13] - aot_fpr[15];
        goto L_0881D3A4;
    }
    goto L_0881D39C;
L_0881D39C:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]) ^ 0x80000000u);
    aot_fpr[12] = aot_fpr[13] - aot_fpr[15];
    goto L_0881D3A4;
L_0881D3A4:
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[0] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[0] = fs * ft; }
    jump_target = aot_gpr[31];
    aot_fpr[0] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[0]) ^ 0x80000000u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D3B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x0881D3DCu);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x0881D3DCu) goto L_0881D3DC;
    return;
L_0881D3DC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24744));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[31] = (0x0881D3F0u);
    aot_gpr[4] = (aot_gpr[18] + static_cast<std::uint32_t>(492));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 145u, 0x08824BF4u>(ctx, &aot_mem) && ctx.pc == 0x0881D3F0u) goto L_0881D3F0;
    return;
L_0881D3F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(1384)));
    aot_gpr[31] = (0x0881D3FCu);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 79u, 0x08A4B444u>(ctx, &aot_mem) && ctx.pc == 0x0881D3FCu) goto L_0881D3FC;
    return;
L_0881D3FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1384), aot_gpr[2]);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0881D420;
      }
      goto L_0881D40C;
    }
L_0881D40C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0881D41Cu);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 2u, 0x088C000Cu>(ctx, &aot_mem) && ctx.pc == 0x0881D41Cu) goto L_0881D41C;
    return;
L_0881D41C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_0881D420;
L_0881D420:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(1384), aot_gpr[4]);
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
L_0881D444:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0881D468u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x0881D468u) goto L_0881D468;
    return;
L_0881D468:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24744));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[31] = (0x0881D47Cu);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(492));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 145u, 0x08824BF4u>(ctx, &aot_mem) && ctx.pc == 0x0881D47Cu) goto L_0881D47C;
    return;
L_0881D47C:
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x0881D48Cu);
    aot_gpr[6] = (0u | 1372u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x0881D48Cu) goto L_0881D48C;
    return;
L_0881D48C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1392));
    aot_gpr[2] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
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
L_0881D4B4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1392));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D4C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D4F8;
      }
      goto L_0881D4E0;
    }
L_0881D4E0:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4024)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[31] = (0x0881D4F4u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 45u, 0x088243BCu>(ctx, &aot_mem) && ctx.pc == 0x0881D4F4u) goto L_0881D4F4;
    return;
L_0881D4F4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), 0u);
    goto L_0881D4F8;
L_0881D4F8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D508:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0881D518u);
    // nop
    goto L_0881D4C4;
L_0881D518:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D524:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(480))))));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D564;
      }
      goto L_0881D538;
    }
L_0881D538:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(456)));
    { const bool branch_taken = aot_gpr[8] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881D55C;
      }
      goto L_0881D544;
    }
L_0881D544:
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(1));
    aot_gpr[8] = (aot_gpr[7] < aot_gpr[6] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881D538;
      }
      goto L_0881D554;
    }
L_0881D554:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D564;
      }
      goto L_0881D55C;
    }
L_0881D55C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0881D568;
      }
      goto L_0881D564;
    }
L_0881D564:
    aot_gpr[2] = (0u | 0u);
    goto L_0881D568;
L_0881D568:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D570:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0881D5A0;
      }
      goto L_0881D57C;
    }
L_0881D57C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(176)));
    aot_gpr[5] = (aot_gpr[5] & 12288u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D594;
      }
      goto L_0881D58C;
    }
L_0881D58C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0881D5A0;
      }
      goto L_0881D594;
    }
L_0881D594:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881D57C;
      }
      goto L_0881D5A0;
    }
L_0881D5A0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D5A8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] << 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[18] = (0u | 0u);
    goto L_0881D5CC;
L_0881D5CC:
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(100));
    aot_gpr[31] = (0x0881D5D8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x0881D5D8u) goto L_0881D5D8;
    return;
L_0881D5D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(216), aot_gpr[2]);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881D5CC;
      }
      goto L_0881D5EC;
    }
L_0881D5EC:
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
L_0881D604:
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(40)));
    aot_gpr[8] = (0u | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0881D698;
      }
      goto L_0881D61C;
    }
L_0881D61C:
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (1u << 16u);
    goto L_0881D62C;
L_0881D62C:
    aot_gpr[12] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(0)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[12] + static_cast<std::uint32_t>(176)));
    aot_gpr[10] = (aot_gpr[10] & aot_gpr[5]);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D688;
      }
      goto L_0881D640;
    }
L_0881D640:
    aot_gpr[11] = (0u | 0u);
    aot_gpr[10] = (static_cast<std::int32_t>(aot_gpr[11]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    aot_gpr[3] = (0u | 0u);
      if (branch_taken) {
          goto L_0881D678;
      }
      goto L_0881D650;
    }
L_0881D650:
    aot_gpr[10] = (aot_gpr[4] | 0u);
    goto L_0881D654;
L_0881D654:
    aot_gpr[13] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(408)));
    { const bool branch_taken = aot_gpr[13] != aot_gpr[12];
    // nop
      if (branch_taken) {
          goto L_0881D668;
      }
      goto L_0881D660;
    }
L_0881D660:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[3] = (0u | 1u);
      if (branch_taken) {
          goto L_0881D678;
      }
      goto L_0881D668;
    }
L_0881D668:
    aot_gpr[11] = (aot_gpr[11] + static_cast<std::uint32_t>(1));
    aot_gpr[13] = (static_cast<std::int32_t>(aot_gpr[11]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[13] != 0u;
    aot_gpr[10] = (aot_gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881D654;
      }
      goto L_0881D678;
    }
L_0881D678:
    { const bool branch_taken = aot_gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881D688;
      }
      goto L_0881D680;
    }
L_0881D680:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (aot_gpr[12] | 0u);
      if (branch_taken) {
          goto L_0881D698;
      }
      goto L_0881D688;
    }
L_0881D688:
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr[10] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] != 0u;
    aot_gpr[9] = (aot_gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881D62C;
      }
      goto L_0881D698;
    }
L_0881D698:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D6A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[25] = (aot_gpr[5] << 4u);
    aot_gpr[25] = (aot_gpr[4] + aot_gpr[25]);
    aot_gpr[24] = (aot_gpr[4] | 0u);
    aot_gpr[15] = (aot_gpr[5] | 0u);
    aot_gpr[14] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[16] = (0u | 0u);
    goto L_0881D6C4;
L_0881D6C4:
    aot_gpr[4] = (aot_gpr[24] | 0u);
    aot_gpr[5] = (aot_gpr[15] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0881D6D8u);
    aot_gpr[7] = (aot_gpr[14] | 0u);
    goto L_0881D604;
L_0881D6D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[25] + static_cast<std::uint32_t>(408), aot_gpr[2]);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[25] = (aot_gpr[25] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881D6C4;
      }
      goto L_0881D6EC;
    }
L_0881D6EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D6FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(480))))));
    aot_gpr[20] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[19] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0881D7A8;
      }
      goto L_0881D730;
    }
L_0881D730:
    aot_gpr[18] = (2218u << 16u);
    goto L_0881D734;
L_0881D734:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(192)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-4020)));
    aot_gpr[31] = (0x0881D744u);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 46u, 0x088C0344u>(ctx, &aot_mem) && ctx.pc == 0x0881D744u) goto L_0881D744;
    return;
L_0881D744:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (0x0881D754u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0881D524;
L_0881D754:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0881D764u);
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(456), aot_gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 124u, 0x0891F8E8u>(ctx, &aot_mem) && ctx.pc == 0x0881D764u) goto L_0881D764;
    return;
L_0881D764:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(456)));
    aot_gpr[31] = (0x0881D770u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0881D570;
L_0881D770:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(456)));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(204), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0881D784u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    goto L_0881D5A8;
L_0881D784:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(456)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0881D794u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    goto L_0881D6A0;
L_0881D794:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(480))))));
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (aot_gpr[20] < aot_gpr[4] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881D734;
      }
      goto L_0881D7A8;
    }
L_0881D7A8:
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
L_0881D7C8:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(516));
    goto L_0881D7DC;
L_0881D7DC:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_0881D7DC;
      }
      goto L_0881D7FC;
    }
L_0881D7FC:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D804:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(28)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    aot_fpr[24] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[20] = (aot_gpr[7] & 255u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[19] = (aot_gpr[8] & 255u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0881D864;
      }
      goto L_0881D854;
    }
L_0881D854:
    aot_gpr[31] = (0x0881D85Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 32u, 0x088CC2F8u>(ctx, &aot_mem) && ctx.pc == 0x0881D85Cu) goto L_0881D85C;
    return;
L_0881D85C:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881D8E4;
      }
      goto L_0881D864;
    }
L_0881D864:
    aot_gpr[4] = (aot_gpr[16] << 3u);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[18] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(516));
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[18] = (aot_gpr[18] | 16u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[18]);
      if (branch_taken) {
          goto L_0881D8AC;
      }
      goto L_0881D8A0;
    }
L_0881D8A0:
    aot_gpr[18] = (aot_gpr[18] | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[18]);
      if (branch_taken) {
          goto L_0881D8B8;
      }
      goto L_0881D8AC;
    }
L_0881D8AC:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr[18] = (aot_gpr[18] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    goto L_0881D8B8;
L_0881D8B8:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D8CC;
      }
      goto L_0881D8C0;
    }
L_0881D8C0:
    aot_gpr[5] = (aot_gpr[18] | 4u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
      if (branch_taken) {
          goto L_0881D8D8;
      }
      goto L_0881D8CC;
    }
L_0881D8CC:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr[5] = (aot_gpr[18] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_0881D8D8;
L_0881D8D8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_0881D8E4;
L_0881D8E4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D910:
    aot_gpr[5] = (aot_gpr[5] << 16u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 16u));
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(481), static_cast<std::uint8_t>(aot_gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D920:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(481))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    aot_gpr[5] = (aot_gpr[5] & 255u);
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] << 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(456)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0881DAAC;
      }
      goto L_0881D980;
    }
L_0881D980:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7508)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1116)));
    aot_gpr[6] = (2218u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4444)));
    aot_gpr[18] = (0u | 0u);
    aot_gpr[19] = (0u | 0u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0881D9AC;
      }
      goto L_0881D9A8;
    }
L_0881D9A8:
    aot_gpr[20] = (0u | 1u);
    goto L_0881D9AC;
L_0881D9AC:
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(480));
    aot_gpr[4] = (0u | 20u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(516));
    goto L_0881D9B8;
L_0881D9B8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] & 1u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D9D0;
      }
      goto L_0881D9C8;
    }
L_0881D9C8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0881D9DC;
      }
      goto L_0881D9D0;
    }
L_0881D9D0:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) >= 0;
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-24));
      if (branch_taken) {
          goto L_0881D9B8;
      }
      goto L_0881D9DC;
    }
L_0881D9DC:
    aot_gpr[4] = (16256u << 16u);
    aot_gpr[21] = (0u | 0u);
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[22] = (aot_gpr[16] + static_cast<std::uint32_t>(516));
    aot_gpr[23] = (aot_gpr[16] + static_cast<std::uint32_t>(1020));
    goto L_0881D9F0;
L_0881D9F0:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DA98;
      }
      goto L_0881DA04;
    }
L_0881DA04:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1368)));
    aot_gpr[5] = (aot_gpr[5] | 1u);
    aot_gpr[7] = (aot_gpr[7] | aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 0u);
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[7] = (aot_gpr[7] & 255u);
      if (branch_taken) {
          goto L_0881DA34;
      }
      goto L_0881DA2C;
    }
L_0881DA2C:
    aot_gpr[18] = (aot_gpr[22] | 0u);
    aot_gpr[5] = (0u | 1u);
    goto L_0881DA34;
L_0881DA34:
    { const bool branch_taken = aot_gpr[19] != aot_gpr[22];
    // nop
      if (branch_taken) {
          goto L_0881DA40;
      }
      goto L_0881DA3C;
    }
L_0881DA3C:
    aot_gpr[6] = (0u | 1u);
    goto L_0881DA40;
L_0881DA40:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[8] & 4u);
    aot_gpr[8] = (0u < aot_gpr[8] ? 1u : 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DA7C;
      }
      goto L_0881DA58;
    }
L_0881DA58:
    aot_gpr[9] = (aot_gpr[7] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0881DA74u);
    aot_gpr[7] = (aot_gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 89u, 0x08822828u>(ctx, &aot_mem) && ctx.pc == 0x0881DA74u) goto L_0881DA74;
    return;
L_0881DA74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DA98;
      }
      goto L_0881DA7C;
    }
L_0881DA7C:
    aot_gpr[9] = (aot_gpr[7] | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0881DA98u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 89u, 0x08822828u>(ctx, &aot_mem) && ctx.pc == 0x0881DA98u) goto L_0881DA98;
    return;
L_0881DA98:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[22] = (aot_gpr[22] + static_cast<std::uint32_t>(24));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881D9F0;
      }
      goto L_0881DAAC;
    }
L_0881DAAC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881DAE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7488)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] ^ 8u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881DBF4;
      }
      goto L_0881DB14;
    }
L_0881DB14:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1116)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(728)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1364), aot_gpr[5]);
      if (branch_taken) {
          goto L_0881DBF4;
      }
      goto L_0881DB34;
    }
L_0881DB34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(728)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-4016)));
    aot_gpr[31] = (0x0881DB50u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 27u, 0x088C0224u>(ctx, &aot_mem) && ctx.pc == 0x0881DB50u) goto L_0881DB50;
    return;
L_0881DB50:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[2]);
    aot_gpr[31] = (0x0881DB5Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0881D7C8;
L_0881DB5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1364)));
    aot_gpr[17] = (0u | 45u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[5] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[5] != 0u) {
    aot_gpr[17] = (0u | 23u);
        goto L_0881DB7C;
    }
    goto L_0881DB7C;
L_0881DB7C:
    aot_gpr[31] = (0x0881DB84u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 81u, 0x088105E4u>(ctx, &aot_mem) && ctx.pc == 0x0881DB84u) goto L_0881DB84;
    return;
L_0881DB84:
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[9] = (16256u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_fpr[14] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (0u | 0u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[9]);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[31] = (0x0881DBB0u);
    aot_gpr[8] = (0u | 1u);
    goto L_0881D804;
L_0881DBB0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(1020), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(480))))));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DBF4;
      }
      goto L_0881DBC8;
    }
L_0881DBC8:
    aot_gpr[5] = (aot_gpr[17] << 16u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 16u));
    aot_gpr[31] = (0x0881DBD8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0881D910;
L_0881DBD8:
    aot_gpr[31] = (0x0881DBE0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0881D920;
L_0881DBE0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(480))))));
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[17]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881DBC8;
      }
      goto L_0881DBF4;
    }
L_0881DBF4:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881DC0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[5] << 24u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[22]) >> 24u));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[21] = (0u | 0u);
    aot_gpr[20] = (aot_gpr[16] | 0u);
    goto L_0881DC44;
L_0881DC44:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(456)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DD80;
      }
      goto L_0881DC50;
    }
L_0881DC50:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0881DC5Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x0881DC5Cu) goto L_0881DC5C;
    return;
L_0881DC5C:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0881DC6Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x0881DC6Cu) goto L_0881DC6C;
    return;
L_0881DC6C:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0881DC7Cu);
    aot_gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0283_entry, 283u, 35u, 0x0891F30Cu>(ctx, &aot_mem) && ctx.pc == 0x0881DC7Cu) goto L_0881DC7C;
    return;
L_0881DC7C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_0881DC98;
      }
      goto L_0881DC88;
    }
L_0881DC88:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[22]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0881DD80;
      }
      goto L_0881DC90;
    }
L_0881DC90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DCB4;
      }
      goto L_0881DC98;
    }
L_0881DC98:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[22]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0881DCF8;
      }
      goto L_0881DCA4;
    }
L_0881DCA4:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881DD3C;
      }
      goto L_0881DCAC;
    }
L_0881DCAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DD80;
      }
      goto L_0881DCB4;
    }
L_0881DCB4:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DCC8;
      }
      goto L_0881DCBC;
    }
L_0881DCBC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0881DCC8u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 172u, 0x08922CDCu>(ctx, &aot_mem) && ctx.pc == 0x0881DCC8u) goto L_0881DCC8;
    return;
L_0881DCC8:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DCDC;
      }
      goto L_0881DCD0;
    }
L_0881DCD0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0881DCDCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 172u, 0x08922CDCu>(ctx, &aot_mem) && ctx.pc == 0x0881DCDCu) goto L_0881DCDC;
    return;
L_0881DCDC:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DCF0;
      }
      goto L_0881DCE4;
    }
L_0881DCE4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0881DCF0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 172u, 0x08922CDCu>(ctx, &aot_mem) && ctx.pc == 0x0881DCF0u) goto L_0881DCF0;
    return;
L_0881DCF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DD80;
      }
      goto L_0881DCF8;
    }
L_0881DCF8:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DD0C;
      }
      goto L_0881DD00;
    }
L_0881DD00:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0881DD0Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 172u, 0x08922CDCu>(ctx, &aot_mem) && ctx.pc == 0x0881DD0Cu) goto L_0881DD0C;
    return;
L_0881DD0C:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DD20;
      }
      goto L_0881DD14;
    }
L_0881DD14:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0881DD20u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 172u, 0x08922CDCu>(ctx, &aot_mem) && ctx.pc == 0x0881DD20u) goto L_0881DD20;
    return;
L_0881DD20:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DD34;
      }
      goto L_0881DD28;
    }
L_0881DD28:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0881DD34u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 172u, 0x08922CDCu>(ctx, &aot_mem) && ctx.pc == 0x0881DD34u) goto L_0881DD34;
    return;
L_0881DD34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DD80;
      }
      goto L_0881DD3C;
    }
L_0881DD3C:
    { const bool branch_taken = aot_gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DD50;
      }
      goto L_0881DD44;
    }
L_0881DD44:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0881DD50u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 172u, 0x08922CDCu>(ctx, &aot_mem) && ctx.pc == 0x0881DD50u) goto L_0881DD50;
    return;
L_0881DD50:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DD64;
      }
      goto L_0881DD58;
    }
L_0881DD58:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x0881DD64u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 172u, 0x08922CDCu>(ctx, &aot_mem) && ctx.pc == 0x0881DD64u) goto L_0881DD64;
    return;
L_0881DD64:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DD78;
      }
      goto L_0881DD6C;
    }
L_0881DD6C:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0881DD78u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0286_entry, 286u, 172u, 0x08922CDCu>(ctx, &aot_mem) && ctx.pc == 0x0881DD78u) goto L_0881DD78;
    return;
L_0881DD78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DD80;
      }
      goto L_0881DD80;
    }
L_0881DD80:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881DC44;
      }
      goto L_0881DD90;
    }
L_0881DD90:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(aot_gpr[22]));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881DDBC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(488)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DDF4;
      }
      goto L_0881DDD0;
    }
L_0881DDD0:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(481))))));
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[31] = (0x0881DDF4u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    goto L_0881DC0C;
L_0881DDF4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881DE00:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-112));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] & 2u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[5] = (2218u << 16u);
      if (branch_taken) {
          goto L_0881DE68;
      }
      goto L_0881DE3C;
    }
L_0881DE3C:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-6928));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-6828)));
    aot_gpr[5] = (aot_gpr[6] ^ aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0881DE70;
      }
      goto L_0881DE60;
    }
L_0881DE60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DE78;
      }
      goto L_0881DE68;
    }
L_0881DE68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 18u, 0x0881E0F4u>(ctx, &aot_mem); return;
      }
      goto L_0881DE70;
    }
L_0881DE70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    goto L_0881DE78;
L_0881DE78:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 18u, 0x0881E0F4u>(ctx, &aot_mem); return;
      }
      goto L_0881DE80;
    }
L_0881DE80:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    if (aot_gpr[21] == 0u) {
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(481))))));
        goto L_0881DEBC;
    }
    goto L_0881DE8C;
L_0881DE8C:
    aot_gpr[31] = (0x0881DE94u);
    aot_gpr[4] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 32u, 0x088CC2F8u>(ctx, &aot_mem) && ctx.pc == 0x0881DE94u) goto L_0881DE94;
    return;
L_0881DE94:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 18u, 0x0881E0F4u>(ctx, &aot_mem); return;
      }
      goto L_0881DE9C;
    }
L_0881DE9C:
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] & 16u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 18u, 0x0881E0F4u>(ctx, &aot_mem); return;
      }
      goto L_0881DEB8;
    }
L_0881DEB8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(481))))));
    goto L_0881DEBC;
L_0881DEBC:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(456)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(1116)));
    aot_gpr[19] = (0u | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0881DF1C;
      }
      goto L_0881DEE4;
    }
L_0881DEE4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 4u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0881DF1C;
      }
      goto L_0881DEF4;
    }
L_0881DEF4:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x0881DF04u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 112u, 0x0882BF00u>(ctx, &aot_mem) && ctx.pc == 0x0881DF04u) goto L_0881DF04;
    return;
L_0881DF04:
    aot_gpr[31] = (0x0881DF0Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 109u, 0x0882BE88u>(ctx, &aot_mem) && ctx.pc == 0x0881DF0Cu) goto L_0881DF0C;
    return;
L_0881DF0C:
    aot_gpr[19] = (0u | 1u);
    aot_gpr[20] = (aot_gpr[19] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0881DF58;
      }
      goto L_0881DF1C;
    }
L_0881DF1C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DF58;
      }
      goto L_0881DF24;
    }
L_0881DF24:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 5u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881DF58;
      }
      goto L_0881DF34;
    }
L_0881DF34:
    aot_gpr[5] = (32769u << 16u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x0881DF44u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 112u, 0x0882BF00u>(ctx, &aot_mem) && ctx.pc == 0x0881DF44u) goto L_0881DF44;
    return;
L_0881DF44:
    aot_gpr[31] = (0x0881DF4Cu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 109u, 0x0882BE88u>(ctx, &aot_mem) && ctx.pc == 0x0881DF4Cu) goto L_0881DF4C;
    return;
L_0881DF4C:
    aot_gpr[19] = (0u | 1u);
    aot_gpr[20] = (aot_gpr[19] | 0u);
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_0881DF58;
L_0881DF58:
    { const bool branch_taken = aot_gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DFD4;
      }
      goto L_0881DF60;
    }
L_0881DF60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(48)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[21] = (0u | 255u);
      if (branch_taken) {
          goto L_0881DF8C;
      }
      goto L_0881DF7C;
    }
L_0881DF7C:
    aot_gpr[31] = (0x0881DF84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 103u, 0x0882BE2Cu>(ctx, &aot_mem) && ctx.pc == 0x0881DF84u) goto L_0881DF84;
    return;
L_0881DF84:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881DFAC;
      }
      goto L_0881DF8C;
    }
L_0881DF8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(28)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (aot_gpr[5] & 8192u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DFC0;
      }
      goto L_0881DFAC;
    }
L_0881DFAC:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[21]));
    aot_gpr[31] = (0x0881DFB8u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 100u, 0x0882BDC0u>(ctx, &aot_mem) && ctx.pc == 0x0881DFB8u) goto L_0881DFB8;
    return;
L_0881DFB8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0881DFC8;
      }
      goto L_0881DFC0;
    }
L_0881DFC0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(40)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(964)));
    goto L_0881DFC8;
L_0881DFC8:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[21]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 3u, 0x0881E020u>(ctx, &aot_mem); return;
      }
      goto L_0881DFD4;
    }
L_0881DFD4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(19248));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 2u, 0x0881E014u>(ctx, &aot_mem); return;
      }
      goto L_0881DFE0;
    }
L_0881DFE0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1)));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_gpr[6] = (aot_gpr[6] << 24u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 24u));
    ctx.pc = 0x0881E000u; return;
}

void recomp_unit_0025(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0025_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_25(Runtime &runtime) {
    runtime.register_generated_unit(25u, 0x0881D000u, 4096u, &recomp_unit_0025, &recomp_unit_0025_entry);
    runtime.register_function(0x0881D000u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D008u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D028u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D044u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D04Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D050u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D058u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D064u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D068u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D078u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D098u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D0B0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D0C0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D0C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D0D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D0F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D124u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D12Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D130u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D138u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D144u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D148u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D150u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D15Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D160u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D168u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D174u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D178u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D180u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D18Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D19Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D1B0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D1B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D1B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D1D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D1F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D234u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D23Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D248u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D250u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D260u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D274u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D278u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D27Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D28Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D2B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D2D4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D2F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D2FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D30Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D314u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D318u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D330u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D344u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D364u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D37Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D388u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D38Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D39Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D3A4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D3B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D3DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D3F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D3FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D40Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D41Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D420u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D444u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D468u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D47Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D48Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D4B4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D4C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D4E0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D4F4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D4F8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D508u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D518u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D524u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D538u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D544u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D554u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D55Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D564u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D568u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D570u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D57Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D58Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D594u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D5A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D5A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D5CCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D5D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D5ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D604u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D61Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D62Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D640u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D650u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D654u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D660u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D668u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D678u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D680u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D688u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D698u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D6A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D6C4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D6D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D6ECu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D6FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D730u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D734u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D744u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D754u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D764u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D770u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D784u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D794u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D7A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D7C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D7DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D7FCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D804u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D854u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D85Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D864u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D8A0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D8ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D8B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D8C0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D8CCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D8D8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D8E4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D910u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D920u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D980u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D9A8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D9ACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D9B8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D9C8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D9D0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D9DCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881D9F0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DA04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DA2Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DA34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DA3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DA40u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DA58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DA74u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DA7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DA98u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DAACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DAE0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DB14u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DB34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DB50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DB5Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DB7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DB84u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DBB0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DBC8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DBD8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DBE0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DBF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DC0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DC44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DC50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DC5Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DC6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DC7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DC88u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DC90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DC98u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DCA4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DCACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DCB4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DCBCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DCC8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DCD0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DCDCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DCE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DCF0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DCF8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DD00u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DD0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DD14u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DD20u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DD28u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DD34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DD3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DD44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DD50u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DD58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DD64u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DD6Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DD78u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DD80u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DD90u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DDBCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DDD0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DDF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DE00u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DE3Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DE60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DE68u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DE70u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DE78u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DE80u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DE8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DE94u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DE9Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DEB8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DEBCu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DEE4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DEF4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DF04u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DF0Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DF1Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DF24u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DF34u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DF44u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DF4Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DF58u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DF60u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DF7Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DF84u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DF8Cu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DFACu, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DFB8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DFC0u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DFC8u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DFD4u, &recomp_unit_0025, "recomp_unit_0025");
    runtime.register_function(0x0881DFE0u, &recomp_unit_0025, "recomp_unit_0025");
}
} // namespace psprecomp
