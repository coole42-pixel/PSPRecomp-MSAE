#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0046[1020] = {
    1, 0, 0, 2, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18,
    0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 23, 0, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 49,
    0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55,
    0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0,
    0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0,
    0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 74, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0,
    0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0,
    86, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 98, 0, 0,
    0, 99, 0, 0, 100, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0,
    108, 0, 109, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116,
    117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 128,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 0, 133,
    0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 136, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0,
    0, 148, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154,
    0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162,
    0, 0, 163, 0, 0, 0, 0, 164, 0, 165, 0, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 177,
    0, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 183,
};
void recomp_unit_0046_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08832000u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0046[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08832000;
    case 2u: goto L_0883200C;
    case 3u: goto L_08832014;
    case 4u: goto L_08832020;
    case 5u: goto L_08832028;
    case 6u: goto L_08832030;
    case 7u: goto L_0883203C;
    case 8u: goto L_08832050;
    case 9u: goto L_0883205C;
    case 10u: goto L_08832064;
    case 11u: goto L_08832084;
    case 12u: goto L_088320B4;
    case 13u: goto L_088320D4;
    case 14u: goto L_08832120;
    case 15u: goto L_08832138;
    case 16u: goto L_08832150;
    case 17u: goto L_08832168;
    case 18u: goto L_0883217C;
    case 19u: goto L_08832194;
    case 20u: goto L_088321A8;
    case 21u: goto L_088321B4;
    case 22u: goto L_088321CC;
    case 23u: goto L_08832204;
    case 24u: goto L_08832210;
    case 25u: goto L_08832220;
    case 26u: goto L_0883222C;
    case 27u: goto L_08832248;
    case 28u: goto L_08832250;
    case 29u: goto L_08832258;
    case 30u: goto L_08832294;
    case 31u: goto L_088322A0;
    case 32u: goto L_088322B0;
    case 33u: goto L_088322BC;
    case 34u: goto L_088322D8;
    case 35u: goto L_088322E4;
    case 36u: goto L_0883231C;
    case 37u: goto L_08832340;
    case 38u: goto L_08832354;
    case 39u: goto L_08832360;
    case 40u: goto L_08832368;
    case 41u: goto L_08832370;
    case 42u: goto L_08832380;
    case 43u: goto L_088323B4;
    case 44u: goto L_088323BC;
    case 45u: goto L_088323C8;
    case 46u: goto L_088323D0;
    case 47u: goto L_088323E8;
    case 48u: goto L_088323F4;
    case 49u: goto L_088323FC;
    case 50u: goto L_08832418;
    case 51u: goto L_0883243C;
    case 52u: goto L_0883244C;
    case 53u: goto L_0883245C;
    case 54u: goto L_0883246C;
    case 55u: goto L_0883247C;
    case 56u: goto L_0883248C;
    case 57u: goto L_088324A0;
    case 58u: goto L_088324BC;
    case 59u: goto L_088324CC;
    case 60u: goto L_088324E0;
    case 61u: goto L_088324F4;
    case 62u: goto L_08832510;
    case 63u: goto L_08832518;
    case 64u: goto L_08832530;
    case 65u: goto L_08832550;
    case 66u: goto L_08832578;
    case 67u: goto L_08832584;
    case 68u: goto L_08832590;
    case 69u: goto L_088325A8;
    case 70u: goto L_088325C8;
    case 71u: goto L_088325D0;
    case 72u: goto L_088325D8;
    case 73u: goto L_08832600;
    case 74u: goto L_08832608;
    case 75u: goto L_0883261C;
    case 76u: goto L_08832628;
    case 77u: goto L_08832644;
    case 78u: goto L_08832650;
    case 79u: goto L_08832664;
    case 80u: goto L_0883266C;
    case 81u: goto L_0883268C;
    case 82u: goto L_088326C0;
    case 83u: goto L_088326D0;
    case 84u: goto L_088326EC;
    case 85u: goto L_088326F8;
    case 86u: goto L_08832700;
    case 87u: goto L_08832710;
    case 88u: goto L_08832724;
    case 89u: goto L_0883272C;
    case 90u: goto L_08832764;
    case 91u: goto L_08832798;
    case 92u: goto L_088327A8;
    case 93u: goto L_088327B8;
    case 94u: goto L_088327C8;
    case 95u: goto L_088327D4;
    case 96u: goto L_088327E0;
    case 97u: goto L_088327EC;
    case 98u: goto L_088327F4;
    case 99u: goto L_08832804;
    case 100u: goto L_08832810;
    case 101u: goto L_08832818;
    case 102u: goto L_08832820;
    case 103u: goto L_08832828;
    case 104u: goto L_08832854;
    case 105u: goto L_08832860;
    case 106u: goto L_08832868;
    case 107u: goto L_08832870;
    case 108u: goto L_08832880;
    case 109u: goto L_08832888;
    case 110u: goto L_08832898;
    case 111u: goto L_088328A0;
    case 112u: goto L_088328B4;
    case 113u: goto L_088328C4;
    case 114u: goto L_088328D4;
    case 115u: goto L_088328F0;
    case 116u: goto L_088328FC;
    case 117u: goto L_08832900;
    case 118u: goto L_08832908;
    case 119u: goto L_0883292C;
    case 120u: goto L_08832978;
    case 121u: goto L_08832A9C;
    case 122u: goto L_08832AAC;
    case 123u: goto L_08832AC0;
    case 124u: goto L_08832ACC;
    case 125u: goto L_08832AD8;
    case 126u: goto L_08832AE4;
    case 127u: goto L_08832AF0;
    case 128u: goto L_08832AFC;
    case 129u: goto L_08832B00;
    case 130u: goto L_08832B54;
    case 131u: goto L_08832B5C;
    case 132u: goto L_08832B70;
    case 133u: goto L_08832B7C;
    case 134u: goto L_08832B8C;
    case 135u: goto L_08832B9C;
    case 136u: goto L_08832BA8;
    case 137u: goto L_08832BB0;
    case 138u: goto L_08832BBC;
    case 139u: goto L_08832BC8;
    case 140u: goto L_08832BD4;
    case 141u: goto L_08832C40;
    case 142u: goto L_08832C6C;
    case 143u: goto L_08832C8C;
    case 144u: goto L_08832C94;
    case 145u: goto L_08832CC8;
    case 146u: goto L_08832CEC;
    case 147u: goto L_08832CF4;
    case 148u: goto L_08832D04;
    case 149u: goto L_08832D10;
    case 150u: goto L_08832D18;
    case 151u: goto L_08832D30;
    case 152u: goto L_08832D50;
    case 153u: goto L_08832D74;
    case 154u: goto L_08832D7C;
    case 155u: goto L_08832D94;
    case 156u: goto L_08832DB4;
    case 157u: goto L_08832DCC;
    case 158u: goto L_08832DF8;
    case 159u: goto L_08832E24;
    case 160u: goto L_08832E40;
    case 161u: goto L_08832E70;
    case 162u: goto L_08832E7C;
    case 163u: goto L_08832E88;
    case 164u: goto L_08832E9C;
    case 165u: goto L_08832EA4;
    case 166u: goto L_08832EB0;
    case 167u: goto L_08832EB8;
    case 168u: goto L_08832EC0;
    case 169u: goto L_08832EDC;
    case 170u: goto L_08832F10;
    case 171u: goto L_08832F18;
    case 172u: goto L_08832F20;
    case 173u: goto L_08832F40;
    case 174u: goto L_08832F4C;
    case 175u: goto L_08832F58;
    case 176u: goto L_08832F70;
    case 177u: goto L_08832F7C;
    case 178u: goto L_08832F88;
    case 179u: goto L_08832F9C;
    case 180u: goto L_08832FB8;
    case 181u: goto L_08832FCC;
    case 182u: goto L_08832FE0;
    case 183u: goto L_08832FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08832000:
    aot_gpr[4] = (0u | 5u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08832084;
      }
      goto L_0883200C;
    }
L_0883200C:
    aot_gpr[31] = (0x08832014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 93u, 0x08894798u>(ctx, &aot_mem) && ctx.pc == 0x08832014u) goto L_08832014;
    return;
L_08832014:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (static_cast<std::int32_t>(aot_gpr[4]) > 0) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
        goto L_0883205C;
    }
    goto L_08832020;
L_08832020:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08832084;
      }
      goto L_08832028;
    }
L_08832028:
    aot_gpr[31] = (0x08832030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 175u, 0x0889AAA0u>(ctx, &aot_mem) && ctx.pc == 0x08832030u) goto L_08832030;
    return;
L_08832030:
    aot_gpr[4] = (0u | 182u);
    aot_gpr[31] = (0x0883203Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x0883203Cu) goto L_0883203C;
    return;
L_0883203C:
    aot_gpr[4] = (0u | 7u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08832050u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 89u, 0x08894720u>(ctx, &aot_mem) && ctx.pc == 0x08832050u) goto L_08832050;
    return;
L_08832050:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08832084;
      }
      goto L_0883205C;
    }
L_0883205C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08832084;
      }
      goto L_08832064;
    }
L_08832064:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(26520), 0u);
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26528), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2215u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26529), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2196), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    goto L_08832084;
L_08832084:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088320B4:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23600), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088320D4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    aot_gpr[19] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-10904));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[31]);
    aot_gpr[31] = (0x08832120u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08832120u) goto L_08832120;
    return;
L_08832120:
    aot_gpr[18] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-10888));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08832138u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08832138u) goto L_08832138;
    return;
L_08832138:
    aot_gpr[17] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-10876));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08832150u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08832150u) goto L_08832150;
    return;
L_08832150:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-10864));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08832168u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08832168u) goto L_08832168;
    return;
L_08832168:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[23] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0883217Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10852));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x0883217Cu) goto L_0883217C;
    return;
L_0883217C:
    aot_gpr[30] = (2214u << 16u);
    aot_gpr[30] = (aot_gpr[30] + static_cast<std::uint32_t>(-10836));
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08832194u);
    aot_gpr[5] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x08832194u) goto L_08832194;
    return;
L_08832194:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088321A8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10824));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 34u, 0x0888A288u>(ctx, &aot_mem) && ctx.pc == 0x088321A8u) goto L_088321A8;
    return;
L_088321A8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088321B4u);
    aot_gpr[5] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088321B4u) goto L_088321B4;
    return;
L_088321B4:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26496)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08832250;
      }
      goto L_088321CC;
    }
L_088321CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08832204u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08832204u) goto L_08832204;
    return;
L_08832204:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08832210u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 53u, 0x0888C2ACu>(ctx, &aot_mem) && ctx.pc == 0x08832210u) goto L_08832210;
    return;
L_08832210:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08832220u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08832220u) goto L_08832220;
    return;
L_08832220:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x0883222Cu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 57u, 0x0888C2E4u>(ctx, &aot_mem) && ctx.pc == 0x0883222Cu) goto L_0883222C;
    return;
L_0883222C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 23u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x08832248u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 58u, 0x0888A3D0u>(ctx, &aot_mem) && ctx.pc == 0x08832248u) goto L_08832248;
    return;
L_08832248:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088322D8;
      }
      goto L_08832250;
    }
L_08832250:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088322D8;
      }
      goto L_08832258;
    }
L_08832258:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[23] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[23] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08832294u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08832294u) goto L_08832294;
    return;
L_08832294:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[31] = (0x088322A0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 53u, 0x0888C2ACu>(ctx, &aot_mem) && ctx.pc == 0x088322A0u) goto L_088322A0;
    return;
L_088322A0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088322B0u);
    aot_gpr[6] = (aot_gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 149u, 0x08893A5Cu>(ctx, &aot_mem) && ctx.pc == 0x088322B0u) goto L_088322B0;
    return;
L_088322B0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x088322BCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 57u, 0x0888C2E4u>(ctx, &aot_mem) && ctx.pc == 0x088322BCu) goto L_088322BC;
    return;
L_088322BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 96u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (0x088322D8u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 58u, 0x0888A3D0u>(ctx, &aot_mem) && ctx.pc == 0x088322D8u) goto L_088322D8;
    return;
L_088322D8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[31] = (0x088322E4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(26500), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 109u, 0x0889B6D4u>(ctx, &aot_mem) && ctx.pc == 0x088322E4u) goto L_088322E4;
    return;
L_088322E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883231C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08832340u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10904));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08832340u) goto L_08832340;
    return;
L_08832340:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26496)));
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[6];
    aot_gpr[5] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08832360;
      }
      goto L_08832354;
    }
L_08832354:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08832370;
      }
      goto L_08832360;
    }
L_08832360:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08832370;
      }
      goto L_08832368;
    }
L_08832368:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[4]);
    goto L_08832370;
L_08832370:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08832380:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[17] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088323FC;
      }
      goto L_088323B4;
    }
L_088323B4:
    aot_gpr[31] = (0x088323BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x0889A850u>(ctx, &aot_mem) && ctx.pc == 0x088323BCu) goto L_088323BC;
    return;
L_088323BC:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) <= 0;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088323F4;
      }
      goto L_088323C8;
    }
L_088323C8:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088323F4;
      }
      goto L_088323D0;
    }
L_088323D0:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088323E8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10804));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088323E8u) goto L_088323E8;
    return;
L_088323E8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    goto L_088323F4;
L_088323F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08832530;
      }
      goto L_088323FC;
    }
L_088323FC:
    aot_gpr[20] = (2214u << 16u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-10904));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08832418u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10876));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08832418u) goto L_08832418;
    return;
L_08832418:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    aot_gpr[18] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883248C;
      }
      goto L_0883243C;
    }
L_0883243C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(26496)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883246C;
      }
      goto L_0883244C;
    }
L_0883244C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0883245Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10788));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0883245Cu) goto L_0883245C;
    return;
L_0883245C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08832530;
      }
      goto L_0883246C;
    }
L_0883246C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0883247Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10772));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x0883247Cu) goto L_0883247C;
    return;
L_0883247C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08832530;
      }
      goto L_0883248C;
    }
L_0883248C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088324A0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10756));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088324A0u) goto L_088324A0;
    return;
L_088324A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088324E0;
      }
      goto L_088324BC;
    }
L_088324BC:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088324CCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10744));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x088324CCu) goto L_088324CC;
    return;
L_088324CC:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08832530;
      }
      goto L_088324E0;
    }
L_088324E0:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088324F4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10836));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088324F4u) goto L_088324F4;
    return;
L_088324F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[19]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08832530;
      }
      goto L_08832510;
    }
L_08832510:
    aot_gpr[31] = (0x08832518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 12u, 0x0889B0BCu>(ctx, &aot_mem) && ctx.pc == 0x08832518u) goto L_08832518;
    return;
L_08832518:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25244)));
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(7968), aot_gpr[4]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[6]));
    goto L_08832530;
L_08832530:
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
L_08832550:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08832578u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10904));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08832578u) goto L_08832578;
    return;
L_08832578:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08832584u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 57u, 0x0888A3C8u>(ctx, &aot_mem) && ctx.pc == 0x08832584u) goto L_08832584;
    return;
L_08832584:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[31] = (0x08832590u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 57u, 0x0888A3C8u>(ctx, &aot_mem) && ctx.pc == 0x08832590u) goto L_08832590;
    return;
L_08832590:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088325A8:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23608), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088325C8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088325D0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088325D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    aot_gpr[16] = (2214u << 16u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[16] = (aot_gpr[16] + static_cast<std::uint32_t>(-10728));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08832600u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 198u, 0x08893D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08832600u) goto L_08832600;
    return;
L_08832600:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08832650;
      }
      goto L_08832608;
    }
L_08832608:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0883261Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10704));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0883261Cu) goto L_0883261C;
    return;
L_0883261C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08832628u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 65u, 0x0888C360u>(ctx, &aot_mem) && ctx.pc == 0x08832628u) goto L_08832628;
    return;
L_08832628:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (49648u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] < aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08832650;
      }
      goto L_08832644;
    }
L_08832644:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08832650u);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 224u, 0x08893EA4u>(ctx, &aot_mem) && ctx.pc == 0x08832650u) goto L_08832650;
    return;
L_08832650:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08832664:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883266C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23616), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883268C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-11144));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(72), aot_gpr[5]);
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088326C0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088326C0u) goto L_088326C0;
    return;
L_088326C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[2]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088326EC;
      }
      goto L_088326D0;
    }
L_088326D0:
    aot_gpr[4] = (16896u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16768u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08832710;
      }
      goto L_088326EC;
    }
L_088326EC:
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08832700;
      }
      goto L_088326F8;
    }
L_088326F8:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08832710;
      }
      goto L_08832700;
    }
L_08832700:
    aot_gpr[4] = (16896u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08832710;
L_08832710:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08832724:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883272C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-208));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(180), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(184), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(172), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(176), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(188), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(192), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(196), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(200), aot_gpr[31]);
    aot_gpr[31] = (0x08832764u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 65u, 0x0888C360u>(ctx, &aot_mem) && ctx.pc == 0x08832764u) goto L_08832764;
    return;
L_08832764:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_fpr[20] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08832C40;
      }
      goto L_08832798;
    }
L_08832798:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088327C8;
      }
      goto L_088327A8;
    }
L_088327A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088327C8;
      }
      goto L_088327B8;
    }
L_088327B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08832BB0;
      }
      goto L_088327C8;
    }
L_088327C8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088327D4u);
    aot_gpr[5] = (0u | 49u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x088327D4u) goto L_088327D4;
    return;
L_088327D4:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08832BA8;
      }
      goto L_088327E0;
    }
L_088327E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088328A0;
      }
      goto L_088327EC;
    }
L_088327EC:
    aot_gpr[31] = (0x088327F4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088327F4u) goto L_088327F4;
    return;
L_088327F4:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08832900;
      }
      goto L_08832804;
    }
L_08832804:
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08832870;
      }
      goto L_08832810;
    }
L_08832810:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08832888;
      }
      goto L_08832818;
    }
L_08832818:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    aot_gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08832888;
      }
      goto L_08832820;
    }
L_08832820:
    { const bool branch_taken = aot_gpr[4] == aot_gpr[1];
    // nop
      if (branch_taken) {
          goto L_08832888;
      }
      goto L_08832828;
    }
L_08832828:
    aot_gpr[4] = (17024u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[6] = (0u | 1u);
    aot_gpr[4] = (16896u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(56), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08832854u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 93u, 0x088D96D0u>(ctx, &aot_mem) && ctx.pc == 0x08832854u) goto L_08832854;
    return;
L_08832854:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08832868;
      }
      goto L_08832860;
    }
L_08832860:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08832868;
L_08832868:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08832900;
      }
      goto L_08832870;
    }
L_08832870:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08832880u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 180u, 0x088D9CA8u>(ctx, &aot_mem) && ctx.pc == 0x08832880u) goto L_08832880;
    return;
L_08832880:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08832900;
      }
      goto L_08832888;
    }
L_08832888:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[31] = (0x08832898u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 185u, 0x088D9CF8u>(ctx, &aot_mem) && ctx.pc == 0x08832898u) goto L_08832898;
    return;
L_08832898:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08832900;
      }
      goto L_088328A0;
    }
L_088328A0:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088328B4u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-10688));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x088328B4u) goto L_088328B4;
    return;
L_088328B4:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (2218u << 16u);
    aot_gpr[31] = (0x088328C4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x088328C4u) goto L_088328C4;
    return;
L_088328C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088328D4u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(876)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 89u, 0x088336F0u>(ctx, &aot_mem) && ctx.pc == 0x088328D4u) goto L_088328D4;
    return;
L_088328D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[2] << 4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(14)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x088328F0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 40u, 0x088D9238u>(ctx, &aot_mem) && ctx.pc == 0x088328F0u) goto L_088328F0;
    return;
L_088328F0:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08832900;
      }
      goto L_088328FC;
    }
L_088328FC:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08832900;
L_08832900:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08832BA8;
      }
      goto L_08832908;
    }
L_08832908:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(24)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(26)));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_fpr[12] = static_cast<float>(static_cast<std::int32_t>(__builtin_bit_cast(std::uint32_t, aot_fpr[12])));
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(52), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08832BA8;
      }
      goto L_0883292C;
    }
L_0883292C:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(52)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(136), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(140), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-29132)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08832978u);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0583_entry, 583u, 214u, 0x08A4BF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08832978u) goto L_08832978;
    return;
L_08832978:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[13];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[14]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[16];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[17];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[15];
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(32));
    aot_fpr[12] = aot_fpr[13] + aot_fpr[16];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(64)));
    aot_fpr[17] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    aot_fpr[13] = aot_fpr[14] + aot_fpr[15];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = aot_fpr[13] + aot_fpr[17];
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_fpr[15] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(68)));
    aot_fpr[16] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    aot_fpr[13] = aot_fpr[14] + aot_fpr[15];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_fpr[12] = aot_fpr[13] + aot_fpr[16];
    aot_gpr[4] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = aot_gpr[6] == 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(aot_gpr[7]));
      if (branch_taken) {
          goto L_08832B54;
      }
      goto L_08832A9C;
    }
L_08832A9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[5] = (aot_gpr[4] << 3u);
      if (branch_taken) {
          goto L_08832B00;
      }
      goto L_08832AAC;
    }
L_08832AAC:
    aot_gpr[5] = (16640u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
      if (branch_taken) {
          goto L_08832ACC;
      }
      goto L_08832AC0;
    }
L_08832AC0:
    aot_gpr[5] = (49408u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_08832AFC;
      }
      goto L_08832ACC;
    }
L_08832ACC:
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_08832AE4;
      }
      goto L_08832AD8;
    }
L_08832AD8:
    aot_gpr[5] = (49408u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_08832AFC;
      }
      goto L_08832AE4;
    }
L_08832AE4:
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[5] = (aot_gpr[4] << 3u);
      if (branch_taken) {
          goto L_08832B00;
      }
      goto L_08832AF0;
    }
L_08832AF0:
    aot_gpr[5] = (49408u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_fpr[22] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    goto L_08832AFC;
L_08832AFC:
    aot_gpr[5] = (aot_gpr[4] << 3u);
    goto L_08832B00;
L_08832B00:
    aot_gpr[5] = (aot_gpr[29] + aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(20)));
    aot_fpr[12] = aot_fpr[12] + aot_fpr[20];
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[4] << 4u);
    aot_fpr[13] = aot_fpr[13] + aot_fpr[22];
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[6] + static_cast<std::uint32_t>(4), aot_gpr[8]);
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_fpr[13] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[13]));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr[7]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    { const bool branch_taken = aot_gpr[6] != 0u;
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr[7]));
      if (branch_taken) {
          goto L_08832A9C;
      }
      goto L_08832B54;
    }
L_08832B54:
    aot_gpr[31] = (0x08832B5Cu);
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 60u, 0x089355E8u>(ctx, &aot_mem) && ctx.pc == 0x08832B5Cu) goto L_08832B5C;
    return;
L_08832B5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(116), aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] | 10u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[4]);
      if (branch_taken) {
          goto L_08832B7C;
      }
      goto L_08832B70;
    }
L_08832B70:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(132)));
    aot_gpr[4] = (aot_gpr[4] | 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(132), aot_gpr[4]);
    goto L_08832B7C;
L_08832B7C:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(44));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08832B8Cu);
    aot_gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 67u, 0x08935720u>(ctx, &aot_mem) && ctx.pc == 0x08832B8Cu) goto L_08832B8C;
    return;
L_08832B8C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08832B9Cu);
    aot_gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0299_entry, 299u, 27u, 0x0892F26Cu>(ctx, &aot_mem) && ctx.pc == 0x08832B9Cu) goto L_08832B9C;
    return;
L_08832B9C:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08832BA8u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0305_entry, 305u, 62u, 0x089356ACu>(ctx, &aot_mem) && ctx.pc == 0x08832BA8u) goto L_08832BA8;
    return;
L_08832BA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08832C40;
      }
      goto L_08832BB0;
    }
L_08832BB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08832C40;
      }
      goto L_08832BBC;
    }
L_08832BBC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08832BC8u);
    aot_gpr[5] = (0u | 49u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08832BC8u) goto L_08832BC8;
    return;
L_08832BC8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08832C40;
      }
      goto L_08832BD4;
    }
L_08832BD4:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(56)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(60)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(28), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(168), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[6] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(156), aot_gpr[5]);
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(164), static_cast<std::uint16_t>(aot_gpr[6]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(152));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(166), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(36));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    aot_gpr[31] = (0x08832C40u);
    aot_gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 175u, 0x0888EF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08832C40u) goto L_08832C40;
    return;
L_08832C40:
    aot_gpr[2] = (0u | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(172)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(176)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(180)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(184)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(188)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(192)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(196)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(200)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08832C6C:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23624), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08832C8C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08832C94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-10664));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x08832CC8u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10644));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08832CC8u) goto L_08832CC8;
    return;
L_08832CC8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (2218u << 16u);
      if (branch_taken) {
          goto L_08832D04;
      }
      goto L_08832CEC;
    }
L_08832CEC:
    aot_gpr[31] = (0x08832CF4u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 47u, 0x088D92DCu>(ctx, &aot_mem) && ctx.pc == 0x08832CF4u) goto L_08832CF4;
    return;
L_08832CF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2197), static_cast<std::uint8_t>(aot_gpr[5]));
      if (branch_taken) {
          goto L_08832D18;
      }
      goto L_08832D04;
    }
L_08832D04:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x08832D10u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x08832D10u) goto L_08832D10;
    return;
L_08832D10:
    aot_gpr[31] = (0x08832D18u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 78u, 0x088D9584u>(ctx, &aot_mem) && ctx.pc == 0x08832D18u) goto L_08832D18;
    return;
L_08832D18:
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
L_08832D30:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(23632), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08832D50:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[18] = (0u | 0u);
    goto L_08832D74;
L_08832D74:
    aot_gpr[31] = (0x08832D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x08832D7Cu) goto L_08832D7C;
    return;
L_08832D7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(876)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08832DB4;
      }
      goto L_08832D94;
    }
L_08832D94:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[18]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1460))))));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(1));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
      if (branch_taken) {
          goto L_08832D74;
      }
      goto L_08832DB4;
    }
L_08832DB4:
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
L_08832DCC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1100)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08832DF8u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(2)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 144u, 0x0885B9E0u>(ctx, &aot_mem) && ctx.pc == 0x08832DF8u) goto L_08832DF8;
    return;
L_08832DF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(24), aot_gpr[2]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[2] + static_cast<std::uint32_t>(1))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[4] = (aot_gpr[4] << 16u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 16u));
    PSPRECOMP_AOT_STORE16(aot_gpr[5] + static_cast<std::uint32_t>(1452), static_cast<std::uint16_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
    aot_gpr[31] = (0x08832E24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(1))))));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 136u, 0x0885B988u>(ctx, &aot_mem) && ctx.pc == 0x08832E24u) goto L_08832E24;
    return;
L_08832E24:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(2204), aot_gpr[2]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08832E40:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[18] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
      if (branch_taken) {
          goto L_08832EB8;
      }
      goto L_08832E70;
    }
L_08832E70:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08832EA4;
      }
      goto L_08832E7C;
    }
L_08832E7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2172)));
    aot_gpr[31] = (0x08832E88u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 136u, 0x0885B988u>(ctx, &aot_mem) && ctx.pc == 0x08832E88u) goto L_08832E88;
    return;
L_08832E88:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(24)));
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x08832E9Cu);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 51u, 0x088DA324u>(ctx, &aot_mem) && ctx.pc == 0x08832E9Cu) goto L_08832E9C;
    return;
L_08832E9C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08832EC0;
      }
      goto L_08832EA4;
    }
L_08832EA4:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x08832EB0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 51u, 0x088DA324u>(ctx, &aot_mem) && ctx.pc == 0x08832EB0u) goto L_08832EB0;
    return;
L_08832EB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08832EC0;
      }
      goto L_08832EB8;
    }
L_08832EB8:
    aot_gpr[31] = (0x08832EC0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 51u, 0x088DA324u>(ctx, &aot_mem) && ctx.pc == 0x08832EC0u) goto L_08832EC0;
    return;
L_08832EC0:
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
L_08832EDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(2194), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08832F10u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x08832F10u) goto L_08832F10;
    return;
L_08832F10:
    aot_gpr[31] = (0x08832F18u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 74u, 0x088D950Cu>(ctx, &aot_mem) && ctx.pc == 0x08832F18u) goto L_08832F18;
    return;
L_08832F18:
    aot_gpr[31] = (0x08832F20u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08832D50;
L_08832F20:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[18] = (2218u << 16u);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-10624));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08832F40u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10604));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08832F40u) goto L_08832F40;
    return;
L_08832F40:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08832F4Cu);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08832F4Cu) goto L_08832F4C;
    return;
L_08832F4C:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[31] = (0x08832F58u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 72u, 0x088D6510u>(ctx, &aot_mem) && ctx.pc == 0x08832F58u) goto L_08832F58;
    return;
L_08832F58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(876)));
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (0x08832F70u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x08832F70u) goto L_08832F70;
    return;
L_08832F70:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(28))))));
    aot_gpr[31] = (0x08832F7Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08832DCC;
L_08832F7C:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(28))))));
    aot_gpr[31] = (0x08832F88u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08832E40;
L_08832F88:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr[2]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(30))))));
    aot_gpr[31] = (0x08832F9Cu);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 25u, 0x088DA1D8u>(ctx, &aot_mem) && ctx.pc == 0x08832F9Cu) goto L_08832F9C;
    return;
L_08832F9C:
    aot_gpr[5] = (16204u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (16128u << 16u);
    aot_gpr[31] = (0x08832FB8u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 100u, 0x0885A63Cu>(ctx, &aot_mem) && ctx.pc == 0x08832FB8u) goto L_08832FB8;
    return;
L_08832FB8:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08832FCCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-10580));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08832FCCu) goto L_08832FCC;
    return;
L_08832FCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x08832FE0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 45u, 0x088D9290u>(ctx, &aot_mem) && ctx.pc == 0x08832FE0u) goto L_08832FE0;
    return;
L_08832FE0:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08832FECu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x08832FECu) goto L_08832FEC;
    return;
L_08832FEC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(24)));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(31));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x08833000u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(2148)));
    (void)rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 174u, 0x088D7EC0u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0046(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0046_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_46(Runtime &runtime) {
    runtime.register_generated_unit(46u, 0x08832000u, 4096u, &recomp_unit_0046, &recomp_unit_0046_entry);
    runtime.register_function(0x08832000u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x0883200Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832014u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832020u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832028u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832030u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x0883203Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832050u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x0883205Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832064u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832084u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088320B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088320D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832120u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832138u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832150u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832168u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x0883217Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832194u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088321A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088321B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088321CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832204u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832210u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832220u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x0883222Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832248u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832250u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832258u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832294u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088322A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088322B0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088322BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088322D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088322E4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x0883231Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832340u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832354u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832360u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832368u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832370u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832380u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088323B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088323BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088323C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088323D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088323E8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088323F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088323FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832418u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x0883243Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x0883244Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x0883245Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x0883246Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x0883247Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x0883248Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088324A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088324BCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088324CCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088324E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088324F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832510u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832518u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832530u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832550u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832578u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832584u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832590u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088325A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088325C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088325D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088325D8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832600u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832608u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x0883261Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832628u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832644u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832650u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832664u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x0883266Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x0883268Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088326C0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088326D0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088326ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088326F8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832700u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832710u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832724u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x0883272Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832764u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832798u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088327A8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088327B8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088327C8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088327D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088327E0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088327ECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088327F4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832804u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832810u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832818u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832820u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832828u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832854u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832860u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832868u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832870u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832880u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832888u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832898u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088328A0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088328B4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088328C4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088328D4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088328F0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x088328FCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832900u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832908u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x0883292Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832978u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832A9Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832AACu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832AC0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832ACCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832AD8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832AE4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832AF0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832AFCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832B00u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832B54u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832B5Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832B70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832B7Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832B8Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832B9Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832BA8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832BB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832BBCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832BC8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832BD4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832C40u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832C6Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832C8Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832C94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832CC8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832CECu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832CF4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832D04u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832D10u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832D18u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832D30u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832D50u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832D74u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832D7Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832D94u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832DB4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832DCCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832DF8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832E24u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832E40u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832E70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832E7Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832E88u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832E9Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832EA4u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832EB0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832EB8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832EC0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832EDCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832F10u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832F18u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832F20u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832F40u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832F4Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832F58u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832F70u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832F7Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832F88u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832F9Cu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832FB8u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832FCCu, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832FE0u, &recomp_unit_0046, "recomp_unit_0046");
    runtime.register_function(0x08832FECu, &recomp_unit_0046, "recomp_unit_0046");
}
} // namespace psprecomp
