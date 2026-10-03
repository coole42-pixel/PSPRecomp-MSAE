#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0589[1023] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0,
    0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0,
    0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 0, 17,
    0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 36,
    0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0,
    0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44,
    0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 54, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0,
    0, 80, 0, 81, 0, 82, 83, 0, 0, 84, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 94, 0, 0, 0, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 100, 0, 101, 0, 102, 0,
    103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0,
    0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117,
    0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 0, 133,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0,
    0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 142, 0, 0, 143, 0, 0,
    0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0,
    0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 155,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0,
    161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 163, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 173,
    0, 174, 0, 175, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0,
    0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 192, 0, 0, 0, 193,
};
void recomp_unit_0589_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A51004u;
        entry_id = (entry_delta < 4092u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0589[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A51004;
    case 2u: goto L_08A5100C;
    case 3u: goto L_08A51014;
    case 4u: goto L_08A51028;
    case 5u: goto L_08A51044;
    case 6u: goto L_08A51068;
    case 7u: goto L_08A5108C;
    case 8u: goto L_08A510C0;
    case 9u: goto L_08A510CC;
    case 10u: goto L_08A510D4;
    case 11u: goto L_08A510F0;
    case 12u: goto L_08A51114;
    case 13u: goto L_08A51150;
    case 14u: goto L_08A51158;
    case 15u: goto L_08A51164;
    case 16u: goto L_08A51170;
    case 17u: goto L_08A51180;
    case 18u: goto L_08A51188;
    case 19u: goto L_08A5119C;
    case 20u: goto L_08A511AC;
    case 21u: goto L_08A511BC;
    case 22u: goto L_08A511C4;
    case 23u: goto L_08A511D4;
    case 24u: goto L_08A511E0;
    case 25u: goto L_08A511EC;
    case 26u: goto L_08A5121C;
    case 27u: goto L_08A51244;
    case 28u: goto L_08A51254;
    case 29u: goto L_08A51260;
    case 30u: goto L_08A51278;
    case 31u: goto L_08A512B0;
    case 32u: goto L_08A512C0;
    case 33u: goto L_08A512D4;
    case 34u: goto L_08A512DC;
    case 35u: goto L_08A512E8;
    case 36u: goto L_08A51300;
    case 37u: goto L_08A51324;
    case 38u: goto L_08A51344;
    case 39u: goto L_08A51350;
    case 40u: goto L_08A51368;
    case 41u: goto L_08A51378;
    case 42u: goto L_08A51390;
    case 43u: goto L_08A513EC;
    case 44u: goto L_08A51400;
    case 45u: goto L_08A51408;
    case 46u: goto L_08A51410;
    case 47u: goto L_08A51448;
    case 48u: goto L_08A51450;
    case 49u: goto L_08A51478;
    case 50u: goto L_08A514B0;
    case 51u: goto L_08A514B8;
    case 52u: goto L_08A514C8;
    case 53u: goto L_08A514D0;
    case 54u: goto L_08A51510;
    case 55u: goto L_08A51514;
    case 56u: goto L_08A51554;
    case 57u: goto L_08A51594;
    case 58u: goto L_08A515B4;
    case 59u: goto L_08A515CC;
    case 60u: goto L_08A515D4;
    case 61u: goto L_08A515DC;
    case 62u: goto L_08A515FC;
    case 63u: goto L_08A51654;
    case 64u: goto L_08A51660;
    case 65u: goto L_08A516A0;
    case 66u: goto L_08A516B0;
    case 67u: goto L_08A516C0;
    case 68u: goto L_08A516CC;
    case 69u: goto L_08A516D4;
    case 70u: goto L_08A51714;
    case 71u: goto L_08A51724;
    case 72u: goto L_08A51744;
    case 73u: goto L_08A51748;
    case 74u: goto L_08A51758;
    case 75u: goto L_08A51778;
    case 76u: goto L_08A5179C;
    case 77u: goto L_08A517B0;
    case 78u: goto L_08A517BC;
    case 79u: goto L_08A517FC;
    case 80u: goto L_08A51808;
    case 81u: goto L_08A51810;
    case 82u: goto L_08A51818;
    case 83u: goto L_08A5181C;
    case 84u: goto L_08A51828;
    case 85u: goto L_08A51830;
    case 86u: goto L_08A5183C;
    case 87u: goto L_08A51848;
    case 88u: goto L_08A51880;
    case 89u: goto L_08A518A4;
    case 90u: goto L_08A518F0;
    case 91u: goto L_08A518F8;
    case 92u: goto L_08A51924;
    case 93u: goto L_08A5192C;
    case 94u: goto L_08A51934;
    case 95u: goto L_08A51948;
    case 96u: goto L_08A51950;
    case 97u: goto L_08A51958;
    case 98u: goto L_08A51960;
    case 99u: goto L_08A51968;
    case 100u: goto L_08A5196C;
    case 101u: goto L_08A51974;
    case 102u: goto L_08A5197C;
    case 103u: goto L_08A51984;
    case 104u: goto L_08A5198C;
    case 105u: goto L_08A51994;
    case 106u: goto L_08A5199C;
    case 107u: goto L_08A519A4;
    case 108u: goto L_08A519AC;
    case 109u: goto L_08A519B4;
    case 110u: goto L_08A519BC;
    case 111u: goto L_08A519C0;
    case 112u: goto L_08A519D0;
    case 113u: goto L_08A519EC;
    case 114u: goto L_08A51A0C;
    case 115u: goto L_08A51A30;
    case 116u: goto L_08A51A74;
    case 117u: goto L_08A51A80;
    case 118u: goto L_08A51A88;
    case 119u: goto L_08A51AAC;
    case 120u: goto L_08A51AE0;
    case 121u: goto L_08A51B18;
    case 122u: goto L_08A51B20;
    case 123u: goto L_08A51B2C;
    case 124u: goto L_08A51B38;
    case 125u: goto L_08A51B58;
    case 126u: goto L_08A51B60;
    case 127u: goto L_08A51B74;
    case 128u: goto L_08A51B9C;
    case 129u: goto L_08A51BC0;
    case 130u: goto L_08A51BD8;
    case 131u: goto L_08A51BE8;
    case 132u: goto L_08A51BF4;
    case 133u: goto L_08A51C00;
    case 134u: goto L_08A51C2C;
    case 135u: goto L_08A51C54;
    case 136u: goto L_08A51C64;
    case 137u: goto L_08A51C70;
    case 138u: goto L_08A51C88;
    case 139u: goto L_08A51CC0;
    case 140u: goto L_08A51CD0;
    case 141u: goto L_08A51CE4;
    case 142u: goto L_08A51CEC;
    case 143u: goto L_08A51CF8;
    case 144u: goto L_08A51D10;
    case 145u: goto L_08A51D34;
    case 146u: goto L_08A51D54;
    case 147u: goto L_08A51D60;
    case 148u: goto L_08A51D78;
    case 149u: goto L_08A51D88;
    case 150u: goto L_08A51DA0;
    case 151u: goto L_08A51DAC;
    case 152u: goto L_08A51DB8;
    case 153u: goto L_08A51DE0;
    case 154u: goto L_08A51DF8;
    case 155u: goto L_08A51E00;
    case 156u: goto L_08A51E28;
    case 157u: goto L_08A51E2C;
    case 158u: goto L_08A51E34;
    case 159u: goto L_08A51E64;
    case 160u: goto L_08A51E7C;
    case 161u: goto L_08A51E84;
    case 162u: goto L_08A51EAC;
    case 163u: goto L_08A51EB0;
    case 164u: goto L_08A51EB8;
    case 165u: goto L_08A51EC0;
    case 166u: goto L_08A51EC8;
    case 167u: goto L_08A51ED0;
    case 168u: goto L_08A51ED8;
    case 169u: goto L_08A51EE0;
    case 170u: goto L_08A51EE8;
    case 171u: goto L_08A51EF0;
    case 172u: goto L_08A51EF8;
    case 173u: goto L_08A51F00;
    case 174u: goto L_08A51F08;
    case 175u: goto L_08A51F10;
    case 176u: goto L_08A51F18;
    case 177u: goto L_08A51F28;
    case 178u: goto L_08A51F34;
    case 179u: goto L_08A51F44;
    case 180u: goto L_08A51F50;
    case 181u: goto L_08A51F5C;
    case 182u: goto L_08A51F7C;
    case 183u: goto L_08A51F88;
    case 184u: goto L_08A51F90;
    case 185u: goto L_08A51F98;
    case 186u: goto L_08A51FA0;
    case 187u: goto L_08A51FA8;
    case 188u: goto L_08A51FB0;
    case 189u: goto L_08A51FC8;
    case 190u: goto L_08A51FD8;
    case 191u: goto L_08A51FE0;
    case 192u: goto L_08A51FEC;
    case 193u: goto L_08A51FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A51004:
    if (aot_gpr[2] == 0u) {
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A51014;
    }
    goto L_08A5100C;
L_08A5100C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A51014;
      }
      goto L_08A51014;
    }
L_08A51014:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A51028u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 165u, 0x08A50E38u>(ctx, &aot_mem) && ctx.pc == 0x08A51028u) goto L_08A51028;
    return;
L_08A51028:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A51044u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 176u, 0x08A50F00u>(ctx, &aot_mem) && ctx.pc == 0x08A51044u) goto L_08A51044;
    return;
L_08A51044:
    aot_gpr[4] = (aot_gpr[20] - aot_gpr[16]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[17] = (aot_gpr[20] | 0u);
    aot_gpr[20] = (aot_gpr[5] >> 30u);
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[20]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 2u));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 177u, 0x08A50F4Cu>(ctx, &aot_mem); return;
      }
      goto L_08A51068;
    }
L_08A51068:
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
L_08A5108C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[18] + static_cast<std::uint32_t>(-4));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[19] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    goto L_08A510C0;
L_08A510C0:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A510CCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A510CCu) goto L_08A510CC;
    return;
L_08A510CC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A510F0;
      }
      goto L_08A510D4;
    }
L_08A510D4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[18] = (aot_gpr[19] | 0u);
    aot_gpr[19] = (aot_gpr[20] + static_cast<std::uint32_t>(-4));
    aot_gpr[20] = (aot_gpr[19] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A510C0;
      }
      goto L_08A510F0;
    }
L_08A510F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[17]);
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
L_08A51114:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[30]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A51158;
      }
      goto L_08A51150;
    }
L_08A51150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A511EC;
      }
      goto L_08A51158;
    }
L_08A51158:
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A511EC;
      }
      goto L_08A51164;
    }
L_08A51164:
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(0))))));
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(5))))));
    aot_gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(3))))));
    goto L_08A51170;
L_08A51170:
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A51180u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51180u) goto L_08A51180;
    return;
L_08A51180:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[30] = (aot_gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A511C4;
      }
      goto L_08A51188;
    }
L_08A51188:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(1))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08A5119Cu);
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(4))))));
    goto L_08A51DA0;
L_08A5119C:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[2]);
    aot_gpr[19] = (aot_gpr[19] - aot_gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[19]) <= 0;
    aot_gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8))))));
      if (branch_taken) {
          goto L_08A511BC;
      }
      goto L_08A511AC;
    }
L_08A511AC:
    aot_gpr[4] = (aot_gpr[30] - aot_gpr[19]);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A511BCu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 166u, 0x08A3A878u>(ctx, &aot_mem) && ctx.pc == 0x08A511BCu) goto L_08A511BC;
    return;
L_08A511BC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[20]);
      if (branch_taken) {
          goto L_08A511D4;
      }
      goto L_08A511C4;
    }
L_08A511C4:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x08A511D4u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_08A5108C;
L_08A511D4:
    aot_gpr[19] = (aot_gpr[30] | 0u);
    { const bool branch_taken = aot_gpr[19] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A51170;
      }
      goto L_08A511E0;
    }
L_08A511E0:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[21]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr[22]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[23]));
    goto L_08A511EC;
L_08A511EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[30] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5121C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[18] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A51260;
      }
      goto L_08A51244;
    }
L_08A51244:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A51254u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A5108C;
L_08A51254:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A51244;
      }
      goto L_08A51260;
    }
L_08A51260:
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
L_08A51278:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 2u));
    aot_gpr[8] = (aot_gpr[8] >> 30u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 2u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < 17 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A512DC;
      }
      goto L_08A512B0;
    }
L_08A512B0:
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A512C0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A51114;
L_08A512C0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A512D4u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_08A5121C;
L_08A512D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A512E8;
      }
      goto L_08A512DC;
    }
L_08A512DC:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A512E8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A51114;
L_08A512E8:
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
L_08A51300:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A51378;
      }
      goto L_08A51324;
    }
L_08A51324:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 2u));
    aot_gpr[5] = (aot_gpr[5] >> 30u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 2u));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A51350;
      }
      goto L_08A51344;
    }
L_08A51344:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A51344;
      }
      goto L_08A51350;
    }
L_08A51350:
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A51368u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0588_entry, 588u, 176u, 0x08A50F00u>(ctx, &aot_mem) && ctx.pc == 0x08A51368u) goto L_08A51368;
    return;
L_08A51368:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A51378u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A51278;
L_08A51378:
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
L_08A51390:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[23]);
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[23] = (aot_gpr[5] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[20]);
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(6)));
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(2));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[22]);
    aot_gpr[21] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[23]) < static_cast<std::int32_t>(aot_gpr[6]) ? 1u : 0u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[22] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == 0u;
    aot_gpr[18] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A51448;
      }
      goto L_08A513EC;
    }
L_08A513EC:
    aot_gpr[4] = (aot_gpr[23] << 3u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A51400u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51400u) goto L_08A51400;
    return;
L_08A51400:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[23] << 3u);
      if (branch_taken) {
          goto L_08A51410;
      }
      goto L_08A51408;
    }
L_08A51408:
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[23] << 3u);
    goto L_08A51410;
L_08A51410:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] << 3u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[17] = (aot_gpr[23] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[23] = (aot_gpr[23] + aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[23] = (aot_gpr[23] + static_cast<std::uint32_t>(2));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[23]) < static_cast<std::int32_t>(aot_gpr[22]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A513EC;
      }
      goto L_08A51448;
    }
L_08A51448:
    { const bool branch_taken = aot_gpr[22] != aot_gpr[23];
    aot_gpr[4] = (aot_gpr[23] << 3u);
      if (branch_taken) {
          goto L_08A51478;
      }
      goto L_08A51450;
    }
L_08A51450:
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[17] << 3u);
    aot_gpr[5] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    aot_gpr[17] = (aot_gpr[23] + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    goto L_08A51478;
L_08A51478:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 1u));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(aot_gpr[19]));
    aot_gpr[5] = (aot_gpr[5] >> 31u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    PSPRECOMP_AOT_STORE16(aot_gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(aot_gpr[20]));
    aot_gpr[5] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[17] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    aot_gpr[20] = (aot_gpr[4] << 3u);
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 1u));
    aot_gpr[19] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    aot_gpr[20] = (aot_gpr[16] + aot_gpr[20]);
    goto L_08A514B0;
L_08A514B0:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[22] = (aot_gpr[17] << 3u);
      if (branch_taken) {
          goto L_08A51510;
      }
      goto L_08A514B8;
    }
L_08A514B8:
    aot_gpr[22] = (aot_gpr[16] + aot_gpr[22]);
    aot_gpr[4] = (aot_gpr[22] | 0u);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A514C8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A514C8u) goto L_08A514C8;
    return;
L_08A514C8:
    if (aot_gpr[2] == 0u) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_08A51514;
    }
    goto L_08A514D0;
L_08A514D0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] >> 31u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[17] + aot_gpr[6]);
    aot_gpr[17] = (aot_gpr[6] + static_cast<std::uint32_t>(-1));
    aot_gpr[20] = (aot_gpr[5] << 3u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[21]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    aot_gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[17]) >> 1u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[16] + aot_gpr[20]);
      if (branch_taken) {
          goto L_08A514B0;
      }
      goto L_08A51510;
    }
L_08A51510:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08A51514;
L_08A51514:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[20] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51554:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 3u));
    aot_gpr[7] = (aot_gpr[7] >> 29u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 3u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[20]) < 2 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A515DC;
      }
      goto L_08A51594;
    }
L_08A51594:
    aot_gpr[4] = (aot_gpr[20] + static_cast<std::uint32_t>(-2));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[4] = (aot_gpr[4] >> 31u);
    aot_gpr[4] = (aot_gpr[20] + aot_gpr[4]);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-2));
    aot_gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[19]) >> 1u));
    aot_gpr[18] = (aot_gpr[19] << 3u);
    aot_gpr[18] = (aot_gpr[17] + aot_gpr[18]);
    goto L_08A515B4;
L_08A515B4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A515CCu);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A51390;
L_08A515CC:
    { const bool branch_taken = aot_gpr[19] == 0u;
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A515DC;
      }
      goto L_08A515D4;
    }
L_08A515D4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08A515B4;
      }
      goto L_08A515DC;
    }
L_08A515DC:
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
L_08A515FC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-8));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[9] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[7] = (aot_gpr[5] - aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[9]);
    aot_gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 3u));
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(4), aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[10] >> 29u);
    aot_gpr[6] = (aot_gpr[7] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 3u));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A51654u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    goto L_08A51390;
L_08A51654:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51660:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[19]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[19] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[8] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A516A0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A51554;
L_08A516A0:
    aot_gpr[21] = (aot_gpr[17] | 0u);
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
      if (branch_taken) {
          goto L_08A51724;
      }
      goto L_08A516B0;
    }
L_08A516B0:
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 3u));
    aot_gpr[5] = (aot_gpr[5] >> 29u);
    aot_gpr[20] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[20]) >> 3u));
    goto L_08A516C0;
L_08A516C0:
    aot_gpr[4] = (aot_gpr[21] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A516CCu);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A516CCu) goto L_08A516CC;
    return;
L_08A516CC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51714;
      }
      goto L_08A516D4;
    }
L_08A516D4:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[21] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[21] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (aot_gpr[20] | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A51714u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A51390;
L_08A51714:
    aot_gpr[21] = (aot_gpr[21] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[21] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A516C0;
      }
      goto L_08A51724;
    }
L_08A51724:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 3u));
    aot_gpr[5] = (aot_gpr[5] >> 29u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 3u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A51778;
      }
      goto L_08A51744;
    }
L_08A51744:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_08A51748;
L_08A51748:
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-8));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A51758u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A515FC;
L_08A51758:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 3u));
    aot_gpr[5] = (aot_gpr[5] >> 29u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 3u));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A51748;
      }
      goto L_08A51778;
    }
L_08A51778:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5179C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[8] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A517B0u);
    aot_gpr[7] = (0u | 0u);
    goto L_08A51660;
L_08A517B0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A517BC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[20]);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[6]);
    aot_gpr[19] = (aot_gpr[5] + static_cast<std::uint32_t>(-8));
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[31]);
    goto L_08A517FC;
L_08A517FC:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A51808u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51808u) goto L_08A51808;
    return;
L_08A51808:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51818;
      }
      goto L_08A51810;
    }
L_08A51810:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A517FC;
      }
      goto L_08A51818;
    }
L_08A51818:
    aot_gpr[17] = (aot_gpr[19] | 0u);
    goto L_08A5181C;
L_08A5181C:
    aot_gpr[4] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A51828u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51828u) goto L_08A51828;
    return;
L_08A51828:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5183C;
      }
      goto L_08A51830;
    }
L_08A51830:
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[17] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A5181C;
      }
      goto L_08A5183C;
    }
L_08A5183C:
    aot_gpr[4] = (aot_gpr[18] < aot_gpr[19] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51880;
      }
      goto L_08A51848;
    }
L_08A51848:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(0)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(6)));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE16(aot_gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(aot_gpr[5]));
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08A517FC;
      }
      goto L_08A51880;
    }
L_08A51880:
    aot_gpr[2] = (aot_gpr[18] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A518A4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] - aot_gpr[19]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 3u));
    aot_gpr[6] = (aot_gpr[6] >> 29u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 3u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[21]) < 17 ? 1u : 0u);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[16] = (aot_gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A51A0C;
      }
      goto L_08A518F0;
    }
L_08A518F0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51934;
      }
      goto L_08A518F8;
    }
L_08A518F8:
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 4u));
    aot_gpr[4] = (aot_gpr[4] >> 31u);
    aot_gpr[4] = (aot_gpr[21] + aot_gpr[4]);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 1u));
    aot_gpr[21] = (aot_gpr[4] << 3u);
    aot_gpr[21] = (aot_gpr[19] + aot_gpr[21]);
    aot_gpr[17] = (aot_gpr[17] + static_cast<std::uint32_t>(-1));
    aot_gpr[20] = (aot_gpr[18] + static_cast<std::uint32_t>(-8));
    aot_gpr[4] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A51924u);
    aot_gpr[5] = (aot_gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51924u) goto L_08A51924;
    return;
L_08A51924:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A51950;
      }
      goto L_08A5192C;
    }
L_08A5192C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A5198C;
      }
      goto L_08A51934;
    }
L_08A51934:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A51948u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_08A5179C;
L_08A51948:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51A0C;
      }
      goto L_08A51950;
    }
L_08A51950:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A51958u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51958u) goto L_08A51958;
    return;
L_08A51958:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A5196C;
      }
      goto L_08A51960;
    }
L_08A51960:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A519C0;
      }
      goto L_08A51968;
    }
L_08A51968:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A5196C;
L_08A5196C:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A51974u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51974u) goto L_08A51974;
    return;
L_08A51974:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51984;
      }
      goto L_08A5197C;
    }
L_08A5197C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A519BC;
      }
      goto L_08A51984;
    }
L_08A51984:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A519BC;
      }
      goto L_08A5198C;
    }
L_08A5198C:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A51994u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51994u) goto L_08A51994;
    return;
L_08A51994:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A519A4;
      }
      goto L_08A5199C;
    }
L_08A5199C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A519BC;
      }
      goto L_08A519A4;
    }
L_08A519A4:
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A519ACu);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A519ACu) goto L_08A519AC;
    return;
L_08A519AC:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A519BC;
      }
      goto L_08A519B4;
    }
L_08A519B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[21] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A519BC;
      }
      goto L_08A519BC;
    }
L_08A519BC:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A519C0;
L_08A519C0:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    aot_gpr[31] = (0x08A519D0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_08A517BC;
L_08A519D0:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A519ECu);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A518A4;
L_08A519EC:
    aot_gpr[4] = (aot_gpr[20] - aot_gpr[19]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 3u));
    aot_gpr[5] = (aot_gpr[5] >> 29u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 3u));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[21]) < 17 ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[18] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A518F0;
      }
      goto L_08A51A0C;
    }
L_08A51A0C:
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
L_08A51A30:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(-8));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[20] = (aot_gpr[19] | 0u);
    aot_gpr[18] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[31]);
    goto L_08A51A74;
L_08A51A74:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[16];
    aot_gpr[31] = (0x08A51A80u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51A80u) goto L_08A51A80;
    return;
L_08A51A80:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51AAC;
      }
      goto L_08A51A88;
    }
L_08A51A88:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[17] = (aot_gpr[19] | 0u);
    aot_gpr[19] = (aot_gpr[20] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[20] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A51A74;
      }
      goto L_08A51AAC;
    }
L_08A51AAC:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51AE0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[22]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    aot_gpr[18] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A51B20;
      }
      goto L_08A51B18;
    }
L_08A51B18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51C00;
      }
      goto L_08A51B20;
    }
L_08A51B20:
    aot_gpr[19] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[19] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A51C00;
      }
      goto L_08A51B2C;
    }
L_08A51B2C:
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(8))))));
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(13))))));
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(11))))));
    goto L_08A51B38;
L_08A51B38:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    jump_target = aot_gpr[18];
    aot_gpr[31] = (0x08A51B58u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51B58u) goto L_08A51B58;
    return;
L_08A51B58:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[23] = (aot_gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A51BD8;
      }
      goto L_08A51B60;
    }
L_08A51B60:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(9))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (0x08A51B74u);
    aot_gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(12))))));
    goto L_08A51DAC;
L_08A51B74:
    aot_gpr[5] = (aot_gpr[19] - aot_gpr[16]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 3u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[2]);
    aot_gpr[6] = (aot_gpr[6] >> 29u);
    aot_gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16))))));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 3u));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) <= 0;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A51BC0;
      }
      goto L_08A51B9C;
    }
L_08A51B9C:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(-8));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-8));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[5]) > 0;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A51B9C;
      }
      goto L_08A51BC0;
    }
L_08A51BC0:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (__builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
      if (branch_taken) {
          goto L_08A51BE8;
      }
      goto L_08A51BD8;
    }
L_08A51BD8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x08A51BE8u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    goto L_08A51A30;
L_08A51BE8:
    aot_gpr[19] = (aot_gpr[23] | 0u);
    { const bool branch_taken = aot_gpr[19] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A51B38;
      }
      goto L_08A51BF4;
    }
L_08A51BF4:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr[20]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(aot_gpr[21]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr[22]));
    goto L_08A51C00;
L_08A51C00:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51C2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    { const bool branch_taken = aot_gpr[18] == aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A51C70;
      }
      goto L_08A51C54;
    }
L_08A51C54:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A51C64u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A51A30;
L_08A51C64:
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = aot_gpr[18] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A51C54;
      }
      goto L_08A51C70;
    }
L_08A51C70:
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
L_08A51C88:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 3u));
    aot_gpr[8] = (aot_gpr[8] >> 29u);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[7]) >> 3u));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < 17 ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A51CEC;
      }
      goto L_08A51CC0;
    }
L_08A51CC0:
    aot_gpr[18] = (aot_gpr[4] + static_cast<std::uint32_t>(128));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A51CD0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A51AE0;
L_08A51CD0:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A51CE4u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    goto L_08A51C2C;
L_08A51CE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51CF8;
      }
      goto L_08A51CEC;
    }
L_08A51CEC:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A51CF8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A51AE0;
L_08A51CF8:
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
L_08A51D10:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A51D88;
      }
      goto L_08A51D34;
    }
L_08A51D34:
    aot_gpr[4] = (aot_gpr[17] - aot_gpr[18]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 3u));
    aot_gpr[5] = (aot_gpr[5] >> 29u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[5]);
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 3u));
    aot_gpr[4] = (0u | 1u);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[4];
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A51D60;
      }
      goto L_08A51D54;
    }
L_08A51D54:
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 1u));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A51D54;
      }
      goto L_08A51D60;
    }
L_08A51D60:
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[5]);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[31] = (0x08A51D78u);
    aot_gpr[8] = (aot_gpr[16] | 0u);
    goto L_08A518A4;
L_08A51D78:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A51D88u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A51C88;
L_08A51D88:
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
L_08A51DA0:
    aot_gpr[4] = (0u << 24u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51DAC:
    aot_gpr[4] = (0u << 24u);
    jump_target = aot_gpr[31];
    aot_gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[4]) >> 24u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51DB8:
    aot_gpr[6] = (aot_gpr[6] << 4u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(15));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51E28;
      }
      goto L_08A51DE0;
    }
L_08A51DE0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08A51E00;
    }
    goto L_08A51DF8;
L_08A51DF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08A51E00;
L_08A51E00:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A51E2C;
      }
      goto L_08A51E28;
    }
L_08A51E28:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A51E2C;
L_08A51E2C:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51E34:
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(15));
    aot_gpr[7] = (0u + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (aot_gpr[6] & aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[7] < aot_gpr[8] ? 1u : 0u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51EAC;
      }
      goto L_08A51E64;
    }
L_08A51E64:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[6]);
    aot_gpr[7] = (aot_gpr[8] < aot_gpr[7] ? 1u : 0u);
    if (aot_gpr[7] == 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08A51E84;
    }
    goto L_08A51E7C;
L_08A51E7C:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08A51E84;
L_08A51E84:
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), aot_gpr[7]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(8)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[6]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[7] + aot_gpr[6]);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(8), aot_gpr[5]);
      if (branch_taken) {
          goto L_08A51EB0;
      }
      goto L_08A51EAC;
    }
L_08A51EAC:
    PSPRECOMP_AOT_STORE32(aot_gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A51EB0;
L_08A51EB0:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51EB8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51EC0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51EC8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51ED0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51ED8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51EE0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51EE8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51EF0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51EF8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51F00:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51F08:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51F10:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51F18:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A51F7C;
      }
      goto L_08A51F28;
    }
L_08A51F28:
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-1584));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A51F50;
      }
      goto L_08A51F34;
    }
L_08A51F34:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3104));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
      if (branch_taken) {
          goto L_08A51F50;
      }
      goto L_08A51F44;
    }
L_08A51F44:
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(0), aot_gpr[6]);
    goto L_08A51F50;
L_08A51F50:
    aot_gpr[5] = (aot_gpr[5] & 1u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_08A51F7C;
      }
      goto L_08A51F5C;
    }
L_08A51F5C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x08A51F7Cu);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A51F7Cu) goto L_08A51F7C;
    return;
L_08A51F7C:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51F88:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51F90:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51F98:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51FA0:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51FA8:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (aot_gpr[4] + aot_gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51FB0:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51FD8;
      }
      goto L_08A51FC8;
    }
L_08A51FC8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    aot_gpr[6] = (static_cast<std::int32_t>(aot_gpr[4]) < static_cast<std::int32_t>(aot_gpr[5]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A51FC8;
      }
      goto L_08A51FD8;
    }
L_08A51FD8:
    jump_target = aot_gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51FE0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0590_entry, 590u, 4u, 0x08A52038u>(ctx, &aot_mem); return;
      }
      goto L_08A51FEC;
    }
L_08A51FEC:
    aot_gpr[6] = (aot_gpr[5] | 0u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0590_entry, 590u, 2u, 0x08A5201Cu>(ctx, &aot_mem); return;
      }
      goto L_08A51FFC;
    }
L_08A51FFC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08A52000u; return;
}

void recomp_unit_0589(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0589_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_589(Runtime &runtime) {
    runtime.register_generated_unit(589u, 0x08A51000u, 4096u, &recomp_unit_0589, &recomp_unit_0589_entry);
    runtime.register_function(0x08A51004u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A5100Cu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51014u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51028u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51044u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51068u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A5108Cu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A510C0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A510CCu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A510D4u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A510F0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51114u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51150u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51158u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51164u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51170u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51180u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51188u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A5119Cu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A511ACu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A511BCu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A511C4u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A511D4u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A511E0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A511ECu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A5121Cu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51244u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51254u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51260u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51278u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A512B0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A512C0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A512D4u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A512DCu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A512E8u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51300u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51324u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51344u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51350u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51368u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51378u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51390u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A513ECu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51400u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51408u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51410u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51448u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51450u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51478u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A514B0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A514B8u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A514C8u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A514D0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51510u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51514u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51554u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51594u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A515B4u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A515CCu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A515D4u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A515DCu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A515FCu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51654u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51660u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A516A0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A516B0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A516C0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A516CCu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A516D4u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51714u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51724u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51744u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51748u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51758u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51778u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A5179Cu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A517B0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A517BCu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A517FCu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51808u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51810u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51818u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A5181Cu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51828u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51830u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A5183Cu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51848u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51880u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A518A4u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A518F0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A518F8u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51924u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A5192Cu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51934u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51948u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51950u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51958u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51960u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51968u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A5196Cu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51974u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A5197Cu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51984u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A5198Cu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51994u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A5199Cu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A519A4u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A519ACu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A519B4u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A519BCu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A519C0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A519D0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A519ECu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51A0Cu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51A30u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51A74u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51A80u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51A88u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51AACu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51AE0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51B18u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51B20u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51B2Cu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51B38u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51B58u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51B60u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51B74u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51B9Cu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51BC0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51BD8u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51BE8u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51BF4u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51C00u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51C2Cu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51C54u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51C64u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51C70u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51C88u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51CC0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51CD0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51CE4u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51CECu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51CF8u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51D10u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51D34u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51D54u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51D60u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51D78u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51D88u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51DA0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51DACu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51DB8u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51DE0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51DF8u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51E00u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51E28u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51E2Cu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51E34u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51E64u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51E7Cu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51E84u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51EACu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51EB0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51EB8u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51EC0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51EC8u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51ED0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51ED8u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51EE0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51EE8u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51EF0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51EF8u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51F00u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51F08u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51F10u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51F18u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51F28u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51F34u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51F44u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51F50u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51F5Cu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51F7Cu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51F88u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51F90u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51F98u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51FA0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51FA8u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51FB0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51FC8u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51FD8u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51FE0u, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51FECu, &recomp_unit_0589, "recomp_unit_0589");
    runtime.register_function(0x08A51FFCu, &recomp_unit_0589, "recomp_unit_0589");
}
} // namespace psprecomp
