#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0083[1024] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16,
    0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35,
    0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 0, 42, 0, 43, 0, 0, 44, 0, 45,
    0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 50, 0, 0, 0, 51,
    0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0,
    0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 87, 88, 0, 0, 0, 0, 0, 0,
    0, 0, 89, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 95,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 100, 0, 101, 0, 102, 0,
    103, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 114,
    0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 117, 0, 118, 119, 0, 120, 0, 121, 122, 0, 0, 0, 0, 0, 0, 123, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0,
    129, 0, 130, 0, 0, 131, 132, 0, 133, 0, 0, 134, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139,
    0, 0, 140, 0, 141, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147,
    0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 153, 0, 154, 0, 0, 155, 156, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    164, 0, 165, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 170, 0, 171, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176,
    0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183,
};
void recomp_unit_0083_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08857000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0083[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08857000;
    case 2u: goto L_08857018;
    case 3u: goto L_08857048;
    case 4u: goto L_08857054;
    case 5u: goto L_08857060;
    case 6u: goto L_08857080;
    case 7u: goto L_088570A0;
    case 8u: goto L_088570C0;
    case 9u: goto L_088570D8;
    case 10u: goto L_088570E8;
    case 11u: goto L_088570F0;
    case 12u: goto L_08857110;
    case 13u: goto L_08857130;
    case 14u: goto L_08857148;
    case 15u: goto L_08857160;
    case 16u: goto L_0885717C;
    case 17u: goto L_08857194;
    case 18u: goto L_088571A0;
    case 19u: goto L_088571B8;
    case 20u: goto L_088571CC;
    case 21u: goto L_088571D8;
    case 22u: goto L_088571E8;
    case 23u: goto L_08857200;
    case 24u: goto L_08857238;
    case 25u: goto L_08857254;
    case 26u: goto L_08857268;
    case 27u: goto L_08857280;
    case 28u: goto L_08857298;
    case 29u: goto L_088572A4;
    case 30u: goto L_088572B0;
    case 31u: goto L_088572C0;
    case 32u: goto L_088572D0;
    case 33u: goto L_088572DC;
    case 34u: goto L_088572EC;
    case 35u: goto L_088572FC;
    case 36u: goto L_08857308;
    case 37u: goto L_08857314;
    case 38u: goto L_08857320;
    case 39u: goto L_08857338;
    case 40u: goto L_08857344;
    case 41u: goto L_08857350;
    case 42u: goto L_08857360;
    case 43u: goto L_08857368;
    case 44u: goto L_08857374;
    case 45u: goto L_0885737C;
    case 46u: goto L_08857394;
    case 47u: goto L_088573AC;
    case 48u: goto L_088573D8;
    case 49u: goto L_088573E0;
    case 50u: goto L_088573EC;
    case 51u: goto L_088573FC;
    case 52u: goto L_08857408;
    case 53u: goto L_0885742C;
    case 54u: goto L_08857440;
    case 55u: goto L_08857444;
    case 56u: goto L_08857454;
    case 57u: goto L_0885746C;
    case 58u: goto L_0885749C;
    case 59u: goto L_088574A8;
    case 60u: goto L_088574B8;
    case 61u: goto L_088574C0;
    case 62u: goto L_088574E8;
    case 63u: goto L_08857524;
    case 64u: goto L_0885753C;
    case 65u: goto L_08857554;
    case 66u: goto L_08857560;
    case 67u: goto L_08857594;
    case 68u: goto L_088575A0;
    case 69u: goto L_088575A8;
    case 70u: goto L_088575D4;
    case 71u: goto L_088575E0;
    case 72u: goto L_088575FC;
    case 73u: goto L_08857630;
    case 74u: goto L_088576DC;
    case 75u: goto L_088576F4;
    case 76u: goto L_0885770C;
    case 77u: goto L_08857718;
    case 78u: goto L_08857728;
    case 79u: goto L_08857734;
    case 80u: goto L_0885774C;
    case 81u: goto L_08857764;
    case 82u: goto L_08857770;
    case 83u: goto L_0885780C;
    case 84u: goto L_08857828;
    case 85u: goto L_08857840;
    case 86u: goto L_08857854;
    case 87u: goto L_08857860;
    case 88u: goto L_08857864;
    case 89u: goto L_08857888;
    case 90u: goto L_08857890;
    case 91u: goto L_0885789C;
    case 92u: goto L_088578CC;
    case 93u: goto L_088578E8;
    case 94u: goto L_088578F0;
    case 95u: goto L_088578FC;
    case 96u: goto L_08857948;
    case 97u: goto L_0885798C;
    case 98u: goto L_088579CC;
    case 99u: goto L_088579E0;
    case 100u: goto L_088579E8;
    case 101u: goto L_088579F0;
    case 102u: goto L_088579F8;
    case 103u: goto L_08857A00;
    case 104u: goto L_08857A0C;
    case 105u: goto L_08857A1C;
    case 106u: goto L_08857A5C;
    case 107u: goto L_08857A8C;
    case 108u: goto L_08857A98;
    case 109u: goto L_08857AA0;
    case 110u: goto L_08857ABC;
    case 111u: goto L_08857AC8;
    case 112u: goto L_08857AD8;
    case 113u: goto L_08857AF0;
    case 114u: goto L_08857AFC;
    case 115u: goto L_08857B1C;
    case 116u: goto L_08857B28;
    case 117u: goto L_08857B3C;
    case 118u: goto L_08857B44;
    case 119u: goto L_08857B48;
    case 120u: goto L_08857B50;
    case 121u: goto L_08857B58;
    case 122u: goto L_08857B5C;
    case 123u: goto L_08857B78;
    case 124u: goto L_08857BA4;
    case 125u: goto L_08857BC4;
    case 126u: goto L_08857BDC;
    case 127u: goto L_08857BE8;
    case 128u: goto L_08857BF8;
    case 129u: goto L_08857C00;
    case 130u: goto L_08857C08;
    case 131u: goto L_08857C14;
    case 132u: goto L_08857C18;
    case 133u: goto L_08857C20;
    case 134u: goto L_08857C2C;
    case 135u: goto L_08857C34;
    case 136u: goto L_08857C40;
    case 137u: goto L_08857C4C;
    case 138u: goto L_08857C60;
    case 139u: goto L_08857C7C;
    case 140u: goto L_08857C88;
    case 141u: goto L_08857C90;
    case 142u: goto L_08857C98;
    case 143u: goto L_08857CAC;
    case 144u: goto L_08857CC8;
    case 145u: goto L_08857CD0;
    case 146u: goto L_08857CE4;
    case 147u: goto L_08857CFC;
    case 148u: goto L_08857D14;
    case 149u: goto L_08857D20;
    case 150u: goto L_08857D48;
    case 151u: goto L_08857D64;
    case 152u: goto L_08857D70;
    case 153u: goto L_08857D90;
    case 154u: goto L_08857D98;
    case 155u: goto L_08857DA4;
    case 156u: goto L_08857DA8;
    case 157u: goto L_08857DC0;
    case 158u: goto L_08857DCC;
    case 159u: goto L_08857DDC;
    case 160u: goto L_08857E14;
    case 161u: goto L_08857E3C;
    case 162u: goto L_08857E48;
    case 163u: goto L_08857E58;
    case 164u: goto L_08857E80;
    case 165u: goto L_08857E88;
    case 166u: goto L_08857E8C;
    case 167u: goto L_08857EF0;
    case 168u: goto L_08857F14;
    case 169u: goto L_08857F20;
    case 170u: goto L_08857F28;
    case 171u: goto L_08857F30;
    case 172u: goto L_08857F40;
    case 173u: goto L_08857F4C;
    case 174u: goto L_08857F5C;
    case 175u: goto L_08857F6C;
    case 176u: goto L_08857F7C;
    case 177u: goto L_08857F8C;
    case 178u: goto L_08857F9C;
    case 179u: goto L_08857FB4;
    case 180u: goto L_08857FCC;
    case 181u: goto L_08857FDC;
    case 182u: goto L_08857FEC;
    case 183u: goto L_08857FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08857000:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(5024));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[31] = (0x08857018u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 96u, 0x0881C72Cu>(ctx, &aot_mem) && ctx.pc == 0x08857018u) goto L_08857018;
    return;
L_08857018:
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (aot_gpr[2] << 2u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-5672));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(5040));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(54))))));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(52))))));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[31] = (0x08857048u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 211u, 0x088C5E74u>(ctx, &aot_mem) && ctx.pc == 0x08857048u) goto L_08857048;
    return;
L_08857048:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08857054u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08857054u) goto L_08857054;
    return;
L_08857054:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[18] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08857080;
      }
      goto L_08857060;
    }
L_08857060:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(5104)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(16)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(26508)));
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[31] = (0x08857080u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 184u, 0x088A2CA0u>(ctx, &aot_mem) && ctx.pc == 0x08857080u) goto L_08857080;
    return;
L_08857080:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[17]));
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
L_088570A0:
    aot_gpr[4] = (2215u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-25184)));
    aot_gpr[4] = (14336u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[4] = (2215u << 16u);
    jump_target = aot_gpr[31];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24168), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088570C0:
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(504))))));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088570E8;
      }
      goto L_088570D8;
    }
L_088570D8:
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[2] = (aot_gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088570D8;
      }
      goto L_088570E8;
    }
L_088570E8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088570F0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(29)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_088571E8;
      }
      goto L_08857110;
    }
L_08857110:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[17] = (2218u << 16u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(2792));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08857130u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2996));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08857130u) goto L_08857130;
    return;
L_08857130:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08857148u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3020));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08857148u) goto L_08857148;
    return;
L_08857148:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(496)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088571B8;
      }
      goto L_08857160;
    }
L_08857160:
    aot_gpr[5] = (aot_gpr[5] << 3u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088571B8;
      }
      goto L_0885717C;
    }
L_0885717C:
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (0x08857194u);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x08857194u) goto L_08857194;
    return;
L_08857194:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088571A0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 254u, 0x0888BFBCu>(ctx, &aot_mem) && ctx.pc == 0x088571A0u) goto L_088571A0;
    return;
L_088571A0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (61440u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_088571E8;
      }
      goto L_088571B8;
    }
L_088571B8:
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (0x088571CCu);
    aot_gpr[4] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x088571CCu) goto L_088571CC;
    return;
L_088571CC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088571D8u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x088571D8u) goto L_088571D8;
    return;
L_088571D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_088571E8;
L_088571E8:
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
L_08857200:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7028)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08857238u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 87u, 0x088936ACu>(ctx, &aot_mem) && ctx.pc == 0x08857238u) goto L_08857238;
    return;
L_08857238:
    aot_gpr[4] = (2214u << 16u);
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(2792));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08857254u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2804));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08857254u) goto L_08857254;
    return;
L_08857254:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08857268u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2820));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08857268u) goto L_08857268;
    return;
L_08857268:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[21] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08857280u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2832));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08857280u) goto L_08857280;
    return;
L_08857280:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08857298u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2852));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08857298u) goto L_08857298;
    return;
L_08857298:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x088572A4u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088572A4u) goto L_088572A4;
    return;
L_088572A4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_088573D8;
      }
      goto L_088572B0;
    }
L_088572B0:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(35))))));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088573D8;
      }
      goto L_088572C0;
    }
L_088572C0:
    aot_gpr[17] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr[17]));
    aot_gpr[31] = (0x088572D0u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088572D0u) goto L_088572D0;
    return;
L_088572D0:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088572DCu);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    goto L_088570C0;
L_088572DC:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08857338;
      }
      goto L_088572EC;
    }
L_088572EC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088572FCu);
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(25244)));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088572FCu) goto L_088572FC;
    return;
L_088572FC:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08857308u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 223u, 0x088B7EE8u>(ctx, &aot_mem) && ctx.pc == 0x08857308u) goto L_08857308;
    return;
L_08857308:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08857314u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08857314u) goto L_08857314;
    return;
L_08857314:
    aot_gpr[5] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    aot_gpr[31] = (0x08857320u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x08857320u) goto L_08857320;
    return;
L_08857320:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (61440u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), aot_gpr[4]);
      if (branch_taken) {
          goto L_08857360;
      }
      goto L_08857338;
    }
L_08857338:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08857344u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 89u, 0x0888C4F8u>(ctx, &aot_mem) && ctx.pc == 0x08857344u) goto L_08857344;
    return;
L_08857344:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08857350u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 79u, 0x0888C45Cu>(ctx, &aot_mem) && ctx.pc == 0x08857350u) goto L_08857350;
    return;
L_08857350:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    goto L_08857360;
L_08857360:
    aot_gpr[31] = (0x08857368u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08857368u) goto L_08857368;
    return;
L_08857368:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(624)));
    aot_gpr[31] = (0x08857374u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 92u, 0x08827C14u>(ctx, &aot_mem) && ctx.pc == 0x08857374u) goto L_08857374;
    return;
L_08857374:
    aot_gpr[31] = (0x0885737Cu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x0885737Cu) goto L_0885737C;
    return;
L_0885737C:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(496)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[19] << 3u);
      if (branch_taken) {
          goto L_088573D8;
      }
      goto L_08857394;
    }
L_08857394:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[19] << 5u);
      if (branch_taken) {
          goto L_088573D8;
      }
      goto L_088573AC;
    }
L_088573AC:
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(176)));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[17]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(512), aot_gpr[5]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[4] & 65535u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x088573D8u);
    aot_gpr[5] = (aot_gpr[19] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 3u, 0x088D6058u>(ctx, &aot_mem) && ctx.pc == 0x088573D8u) goto L_088573D8;
    return;
L_088573D8:
    aot_gpr[31] = (0x088573E0u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x088573E0u) goto L_088573E0;
    return;
L_088573E0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0885749C;
      }
      goto L_088573EC;
    }
L_088573EC:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(35))))));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885749C;
      }
      goto L_088573FC;
    }
L_088573FC:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08857408u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08857408u) goto L_08857408;
    return;
L_08857408:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[19] << 3u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08857444;
      }
      goto L_0885742C;
    }
L_0885742C:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(25244)));
    aot_gpr[31] = (0x08857440u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 114u, 0x088B77BCu>(ctx, &aot_mem) && ctx.pc == 0x08857440u) goto L_08857440;
    return;
L_08857440:
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08857444;
L_08857444:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[19]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(496)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[19] << 3u);
      if (branch_taken) {
          goto L_0885749C;
      }
      goto L_08857454;
    }
L_08857454:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(432)));
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[5] = (aot_gpr[19] << 5u);
      if (branch_taken) {
          goto L_0885749C;
      }
      goto L_0885746C;
    }
L_0885746C:
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[4] << 2u);
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(176)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(512), aot_gpr[5]);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[6]));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (aot_gpr[4] & 65535u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(2148)));
    aot_gpr[31] = (0x0885749Cu);
    aot_gpr[5] = (aot_gpr[19] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 3u, 0x088D6058u>(ctx, &aot_mem) && ctx.pc == 0x0885749Cu) goto L_0885749C;
    return;
L_0885749C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088574B8;
      }
      goto L_088574A8;
    }
L_088574A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(516), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_088574B8;
L_088574B8:
    aot_gpr[31] = (0x088574C0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088570F0;
L_088574C0:
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
L_088574E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] & 255u);
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[16] = (2218u << 16u);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(2792));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08857524u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2900));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08857524u) goto L_08857524;
    return;
L_08857524:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[17] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x0885753Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3040));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x0885753Cu) goto L_0885753C;
    return;
L_0885753C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[16] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08857554u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(3052));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08857554u) goto L_08857554;
    return;
L_08857554:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[18] == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088575A8;
      }
      goto L_08857560;
    }
L_08857560:
    aot_gpr[6] = (57344u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[6]);
    aot_gpr[7] = (61440u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[7] & aot_gpr[6]);
    aot_gpr[31] = (0x08857594u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x08857594u) goto L_08857594;
    return;
L_08857594:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088575A0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 254u, 0x0888BFBCu>(ctx, &aot_mem) && ctx.pc == 0x088575A0u) goto L_088575A0;
    return;
L_088575A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088575E0;
      }
      goto L_088575A8;
    }
L_088575A8:
    aot_gpr[6] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[7] = (4096u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[7] | aot_gpr[6]);
    aot_gpr[31] = (0x088575D4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x088575D4u) goto L_088575D4;
    return;
L_088575D4:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088575E0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x088575E0u) goto L_088575E0;
    return;
L_088575E0:
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
L_088575FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] & 255u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[18] != 0u;
    aot_gpr[17] = (2218u << 16u);
      if (branch_taken) {
          goto L_08857728;
      }
      goto L_08857630;
    }
L_08857630:
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[4] = (0u | 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(564), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(5108), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(580)));
    aot_gpr[5] = (57344u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(584)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(588)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(592)));
    aot_gpr[7] = (16025u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[7] | 39322u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(532), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(528), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(536), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(540), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(568)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[6] & aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(2792));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088576DCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2868));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088576DCu) goto L_088576DC;
    return;
L_088576DC:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088576F4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2972));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x088576F4u) goto L_088576F4;
    return;
L_088576F4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (0x0885770Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x0885770Cu) goto L_0885770C;
    return;
L_0885770C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08857718u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 253u, 0x0888BFACu>(ctx, &aot_mem) && ctx.pc == 0x08857718u) goto L_08857718;
    return;
L_08857718:
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(2144), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_0885798C;
      }
      goto L_08857728;
    }
L_08857728:
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08857764;
      }
      goto L_08857734;
    }
L_08857734:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[5] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(564), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x0885774Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2792));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x0885774Cu) goto L_0885774C;
    return;
L_0885774C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr[5]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_0885798C;
      }
      goto L_08857764;
    }
L_08857764:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08857890;
      }
      goto L_08857770;
    }
L_08857770:
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(580)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(564), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[20] = (57344u << 16u);
    aot_gpr[20] = (aot_gpr[20] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(584)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(588)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(592)));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[6]);
    aot_gpr[4] = (15948u << 16u);
    aot_gpr[4] = (aot_gpr[4] | 52429u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(5108), static_cast<std::uint8_t>(0u));
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16256u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(528), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(536), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(540), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(568)));
    aot_gpr[5] = (8192u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (2215u << 16u);
    aot_gpr[5] = (aot_gpr[6] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08857864;
      }
      goto L_0885780C;
    }
L_0885780C:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[21] = (aot_gpr[5] + static_cast<std::uint32_t>(2792));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08857828u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2868));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08857828u) goto L_08857828;
    return;
L_08857828:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[22] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08857840u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2972));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08857840u) goto L_08857840;
    return;
L_08857840:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[20]);
    aot_gpr[31] = (0x08857854u);
    PSPRECOMP_AOT_STORE32(aot_gpr[22] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 51u, 0x0888C28Cu>(ctx, &aot_mem) && ctx.pc == 0x08857854u) goto L_08857854;
    return;
L_08857854:
    aot_gpr[4] = (aot_gpr[22] | 0u);
    aot_gpr[31] = (0x08857860u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 254u, 0x0888BFBCu>(ctx, &aot_mem) && ctx.pc == 0x08857860u) goto L_08857860;
    return;
L_08857860:
    aot_gpr[4] = (0u | 1u);
    goto L_08857864;
L_08857864:
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(2144), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(35))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(26492)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[31] = (0x08857888u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    goto L_088574E8;
L_08857888:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_0885798C;
      }
      goto L_08857890;
    }
L_08857890:
    aot_gpr[4] = (0u | 3u);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[4];
    aot_gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_088578F0;
      }
      goto L_0885789C;
    }
L_0885789C:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[6] = (57344u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(568)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(564), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[31] = (0x088578CCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2792));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 105u, 0x088937D4u>(ctx, &aot_mem) && ctx.pc == 0x088578CCu) goto L_088578CC;
    return;
L_088578CC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[6] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[31] = (0x088578E8u);
    aot_gpr[5] = (0u | 0u);
    goto L_088574E8;
L_088578E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_0885798C;
      }
      goto L_088578F0;
    }
L_088578F0:
    aot_gpr[5] = (0u | 11u);
    { const bool branch_taken = aot_gpr[18] != aot_gpr[5];
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(580)));
      if (branch_taken) {
          goto L_08857948;
      }
      goto L_088578FC;
    }
L_088578FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (57344u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(584)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(588)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(592)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
      if (branch_taken) {
          goto L_0885798C;
      }
      goto L_08857948;
    }
L_08857948:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[6] = (8192u << 16u);
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(584)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(588)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(592)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] | aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(-7028)));
    goto L_0885798C;
L_0885798C:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[18]) < 4 ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] ^ 1u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[18]));
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
L_088579CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088579E0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 12u, 0x08878120u>(ctx, &aot_mem) && ctx.pc == 0x088579E0u) goto L_088579E0;
    return;
L_088579E0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (2218u << 16u);
      if (branch_taken) {
          goto L_088579F8;
      }
      goto L_088579E8;
    }
L_088579E8:
    aot_gpr[31] = (0x088579F0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2232)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 153u, 0x088C5AA0u>(ctx, &aot_mem) && ctx.pc == 0x088579F0u) goto L_088579F0;
    return;
L_088579F0:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08857A0C;
      }
      goto L_088579F8;
    }
L_088579F8:
    aot_gpr[31] = (0x08857A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 175u, 0x0885AA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08857A00u) goto L_08857A00;
    return;
L_08857A00:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(520), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(516), 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    goto L_08857A0C;
L_08857A0C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857A1C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[18] = (2214u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(2792));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08857A5Cu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2996));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08857A5Cu) goto L_08857A5C;
    return;
L_08857A5C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (49152u << 16u);
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    aot_gpr[5] = (16384u << 16u);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[5]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(26500)));
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] | aot_gpr[5]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08857B5C;
      }
      goto L_08857A8C;
    }
L_08857A8C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08857B5C;
      }
      goto L_08857A98;
    }
L_08857A98:
    aot_gpr[31] = (0x08857AA0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088579CC;
L_08857AA0:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_08857AF0;
      }
      goto L_08857ABC;
    }
L_08857ABC:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08857B50;
      }
      goto L_08857AC8;
    }
L_08857AC8:
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08857AD8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(3008));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08857AD8u) goto L_08857AD8;
    return;
L_08857AD8:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[17]));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08857B5C;
      }
      goto L_08857AF0;
    }
L_08857AF0:
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08857B50;
      }
      goto L_08857AFC;
    }
L_08857AFC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(3024)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[5] + static_cast<std::uint32_t>(27980)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[5]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08857B3C;
      }
      goto L_08857B1C;
    }
L_08857B1C:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x08857B28u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08857B28u) goto L_08857B28;
    return;
L_08857B28:
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[19] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[17]));
      if (branch_taken) {
          goto L_08857B48;
      }
      goto L_08857B3C;
    }
L_08857B3C:
    aot_gpr[31] = (0x08857B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 96u, 0x08887C58u>(ctx, &aot_mem) && ctx.pc == 0x08857B44u) goto L_08857B44;
    return;
L_08857B44:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[17]));
    goto L_08857B48;
L_08857B48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857B5C;
      }
      goto L_08857B50;
    }
L_08857B50:
    aot_gpr[31] = (0x08857B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 96u, 0x08887C58u>(ctx, &aot_mem) && ctx.pc == 0x08857B58u) goto L_08857B58;
    return;
L_08857B58:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[17]));
    goto L_08857B5C;
L_08857B5C:
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
L_08857B78:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x08857BA4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 107u, 0x0885A6B0u>(ctx, &aot_mem) && ctx.pc == 0x08857BA4u) goto L_08857BA4;
    return;
L_08857BA4:
    aot_gpr[21] = (2214u << 16u);
    aot_gpr[22] = (2218u << 16u);
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(2792));
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08857BC4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2832));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08857BC4u) goto L_08857BC4;
    return;
L_08857BC4:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08857BDCu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2852));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08857BDCu) goto L_08857BDC;
    return;
L_08857BDC:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08857BE8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08857BE8u) goto L_08857BE8;
    return;
L_08857BE8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (49152u << 16u);
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    aot_gpr[17] = (16384u << 16u);
      if (branch_taken) {
          goto L_08857C00;
      }
      goto L_08857BF8;
    }
L_08857BF8:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr[4]));
    goto L_08857C00;
L_08857C00:
    aot_gpr[31] = (0x08857C08u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08857C08u) goto L_08857C08;
    return;
L_08857C08:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08857C18;
      }
      goto L_08857C14;
    }
L_08857C14:
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    goto L_08857C18;
L_08857C18:
    aot_gpr[31] = (0x08857C20u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08857C20u) goto L_08857C20;
    return;
L_08857C20:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr[2] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08857C40;
      }
      goto L_08857C2C;
    }
L_08857C2C:
    aot_gpr[31] = (0x08857C34u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 84u, 0x0888C4B0u>(ctx, &aot_mem) && ctx.pc == 0x08857C34u) goto L_08857C34;
    return;
L_08857C34:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[2] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_08857C4C;
      }
      goto L_08857C40;
    }
L_08857C40:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08857C4Cu);
    aot_gpr[5] = (0u | 3u);
    goto L_088575FC;
L_08857C4C:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08857C60u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2868));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08857C60u) goto L_08857C60;
    return;
L_08857C60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08857C88;
      }
      goto L_08857C7C;
    }
L_08857C7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08857CD0;
      }
      goto L_08857C88;
    }
L_08857C88:
    aot_gpr[31] = (0x08857C90u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088570F0;
L_08857C90:
    aot_gpr[31] = (0x08857C98u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08857A1C;
L_08857C98:
    aot_gpr[6] = (2214u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08857CACu);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(2900));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 113u, 0x0889384Cu>(ctx, &aot_mem) && ctx.pc == 0x08857CACu) goto L_08857CAC;
    return;
L_08857CAC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[18]);
    aot_gpr[4] = (aot_gpr[4] ^ aot_gpr[17]);
    aot_gpr[4] = (aot_gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08857CFC;
      }
      goto L_08857CC8;
    }
L_08857CC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857D20;
      }
      goto L_08857CD0;
    }
L_08857CD0:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(-7028)));
    aot_gpr[5] = (2214u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(2884));
    aot_gpr[31] = (0x08857CE4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 89u, 0x088936D8u>(ctx, &aot_mem) && ctx.pc == 0x08857CE4u) goto L_08857CE4;
    return;
L_08857CE4:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(60), aot_gpr[2]);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr[4]));
      if (branch_taken) {
          goto L_08857D20;
      }
      goto L_08857CFC;
    }
L_08857CFC:
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(2148)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(2178)));
    aot_gpr[31] = (0x08857D14u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(1304)));
    if (rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 25u, 0x088D5220u>(ctx, &aot_mem) && ctx.pc == 0x08857D14u) goto L_08857D14;
    return;
L_08857D14:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08857D20u);
    aot_gpr[5] = (0u | 4u);
    goto L_088575FC;
L_08857D20:
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
L_08857D48:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08857D64u);
    aot_gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 139u, 0x0888B8C0u>(ctx, &aot_mem) && ctx.pc == 0x08857D64u) goto L_08857D64;
    return;
L_08857D64:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (17280u << 16u);
      if (branch_taken) {
          goto L_08857DCC;
      }
      goto L_08857D70;
    }
L_08857D70:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[6] = (256u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_fpr[12] = __builtin_bit_cast(float, ctx.fpu_float_to_word_ct<1u>(aot_fpr[12]));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[7]) >= 0;
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08857D98;
      }
      goto L_08857D90;
    }
L_08857D90:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08857DA8;
      }
      goto L_08857D98;
    }
L_08857D98:
    aot_gpr[8] = (static_cast<std::int32_t>(aot_gpr[7]) < 256 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08857DA8;
      }
      goto L_08857DA4;
    }
L_08857DA4:
    aot_gpr[7] = (0u | 255u);
    goto L_08857DA8;
L_08857DA8:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] << 24u);
    aot_gpr[8] = (aot_gpr[8] & aot_gpr[6]);
    aot_gpr[8] = (aot_gpr[7] | aot_gpr[8]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[8]);
      if (branch_taken) {
          goto L_08857DCC;
      }
      goto L_08857DC0;
    }
L_08857DC0:
    aot_gpr[5] = (aot_gpr[5] & aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[7] | aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
    goto L_08857DCC;
L_08857DCC:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857DDC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(560)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(564)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[17]);
    aot_gpr[5] = (16256u << 16u);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(5)));
    aot_gpr[17] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
      if (branch_taken) {
          goto L_08857E48;
      }
      goto L_08857E14;
    }
L_08857E14:
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[5] = (16512u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] - aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(560), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08857E88;
      }
      goto L_08857E3C;
    }
L_08857E3C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(560), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_08857E88;
      }
      goto L_08857E48;
    }
L_08857E48:
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[5] = (15820u << 16u);
      if (branch_taken) {
          goto L_08857E8C;
      }
      goto L_08857E58;
    }
L_08857E58:
    aot_gpr[5] = (2218u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7652)));
    aot_gpr[5] = (16512u << 16u);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[14]; const float ft = aot_fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_fpr[13] = aot_fpr[13] + aot_fpr[14];
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(560), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
      if (branch_taken) {
          goto L_08857E88;
      }
      goto L_08857E80;
    }
L_08857E80:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(560), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_08857E88;
L_08857E88:
    aot_gpr[5] = (15820u << 16u);
    goto L_08857E8C;
L_08857E8C:
    aot_gpr[5] = (aot_gpr[5] | 52430u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[6] = (16128u << 16u);
    aot_gpr[5] = (15948u << 16u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[14] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[14] = fs * ft; }
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    aot_fpr[17] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_fpr[15] = __builtin_bit_cast(float, aot_gpr[5]);
    aot_gpr[5] = (16230u << 16u);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[17] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[17] = fs * ft; }
    aot_gpr[5] = (aot_gpr[5] | 26214u);
    aot_fpr[14] = aot_fpr[14] + aot_fpr[15];
    aot_fpr[16] = __builtin_bit_cast(float, aot_gpr[5]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[16] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[16] = fs * ft; }
    aot_gpr[5] = (15820u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 52429u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(528), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
    aot_fpr[15] = aot_fpr[20] - aot_fpr[13];
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(532), __builtin_bit_cast(std::uint32_t, aot_fpr[17]));
    aot_fpr[14] = aot_fpr[16] + aot_fpr[14];
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(540), __builtin_bit_cast(std::uint32_t, aot_fpr[15]));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(536), __builtin_bit_cast(std::uint32_t, aot_fpr[14]));
      if (branch_taken) {
          goto L_08857F28;
      }
      goto L_08857EF0;
    }
L_08857EF0:
    aot_gpr[4] = (0u | 1u);
    aot_gpr[5] = (2218u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[5] + static_cast<std::uint32_t>(2144), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(560)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(564)));
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[13])) && aot_fpr[12] == aot_fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08857F4C;
      }
      goto L_08857F14;
    }
L_08857F14:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08857F20u);
    aot_gpr[5] = (0u | 2u);
    goto L_088575FC;
L_08857F20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857F4C;
      }
      goto L_08857F28;
    }
L_08857F28:
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08857F4C;
      }
      goto L_08857F30;
    }
L_08857F30:
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[13]) || std::isnan(aot_fpr[12])) && aot_fpr[13] == aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08857F4C;
      }
      goto L_08857F40;
    }
L_08857F40:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08857F4Cu);
    aot_gpr[5] = (0u | 0u);
    goto L_088575FC;
L_08857F4C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(572)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(528)));
    aot_gpr[31] = (0x08857F5Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08857D48;
L_08857F5C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(576)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(528)));
    aot_gpr[31] = (0x08857F6Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08857D48;
L_08857F6C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(568)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(532)));
    aot_gpr[31] = (0x08857F7Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08857D48;
L_08857F7C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(580)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_gpr[31] = (0x08857F8Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08857D48;
L_08857F8C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(584)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_gpr[31] = (0x08857F9Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08857D48;
L_08857F9C:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(556)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(588)));
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[31] = (0x08857FB4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08857D48;
L_08857FB4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(592)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(556)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08857FCCu);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    goto L_08857D48;
L_08857FCC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(596)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_gpr[31] = (0x08857FDCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08857D48;
L_08857FDC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(600)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_gpr[31] = (0x08857FECu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08857D48;
L_08857FEC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(604)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(536)));
    aot_gpr[31] = (0x08857FFCu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08857D48;
L_08857FFC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(608)));
    ctx.pc = 0x08858000u; return;
}

void recomp_unit_0083(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0083_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_83(Runtime &runtime) {
    runtime.register_generated_unit(83u, 0x08857000u, 4096u, &recomp_unit_0083, &recomp_unit_0083_entry);
    runtime.register_function(0x08857000u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857018u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857048u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857054u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857060u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857080u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088570A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088570C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088570D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088570E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088570F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857110u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857130u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857148u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857160u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0885717Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857194u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088571A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088571B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088571CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088571D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088571E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857200u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857238u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857254u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857268u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857280u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857298u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088572A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088572B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088572C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088572D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088572DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088572ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088572FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857308u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857314u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857320u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857338u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857344u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857350u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857360u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857368u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857374u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0885737Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857394u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088573ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088573D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088573E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088573ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088573FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857408u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0885742Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857440u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857444u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857454u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0885746Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0885749Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088574A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088574B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088574C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088574E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857524u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0885753Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857554u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857560u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857594u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088575A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088575A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088575D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088575E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088575FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857630u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088576DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088576F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0885770Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857718u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857728u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857734u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0885774Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857764u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857770u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0885780Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857828u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857840u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857854u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857860u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857864u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857888u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857890u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0885789Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088578CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088578E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088578F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088578FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857948u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0885798Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088579CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088579E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088579E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088579F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x088579F8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857A00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857A0Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857A1Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857A5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857A8Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857A98u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857AA0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857ABCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857AC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857AD8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857AF0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857AFCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857B1Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857B28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857B3Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857B44u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857B48u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857B50u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857B58u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857B5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857B78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857BA4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857BC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857BDCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857BE8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857BF8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857C00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857C08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857C14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857C18u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857C20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857C2Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857C34u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857C40u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857C4Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857C60u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857C7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857C88u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857C90u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857C98u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857CACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857CC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857CD0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857CE4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857CFCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857D14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857D20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857D48u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857D64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857D70u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857D90u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857D98u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857DA4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857DA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857DC0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857DCCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857DDCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857E14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857E3Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857E48u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857E58u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857E80u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857E88u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857E8Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857EF0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857F14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857F20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857F28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857F30u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857F40u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857F4Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857F5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857F6Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857F7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857F8Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857F9Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857FB4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857FCCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857FDCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857FECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08857FFCu, &recomp_unit_0083, "recomp_unit_0083");
}
} // namespace psprecomp
