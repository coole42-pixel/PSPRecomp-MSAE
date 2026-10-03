#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0544[1024] = {
    1, 0, 2, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 7, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 11,
    0, 12, 0, 13, 0, 14, 0, 0, 15, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0,
    0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0,
    27, 0, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 0, 36, 0, 0,
    0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 40, 0, 41, 0, 0,
    0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 45, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0, 49, 0, 0, 0, 50, 0, 51, 0,
    0, 0, 52, 0, 53, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 61, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 65, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0,
    80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0,
    88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 103,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 110, 0,
    111, 0, 112, 113, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0,
    0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126,
    0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 139, 0, 140, 0, 141, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0,
    0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0,
    0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0,
    0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 172, 0, 173, 174, 0, 0, 0,
    175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 181, 182, 0, 0, 183, 0, 0, 0, 0,
    0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 188, 0, 189, 0, 190,
    0, 0, 191, 0, 192, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 195, 196, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 206, 0, 207,
    0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0,
    0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 215, 0, 216, 0, 0, 0, 217, 218, 0, 0, 219, 0, 220, 0,
    0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228,
};
void recomp_unit_0544_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x08A24000u;
        entry_id = (entry_delta < 4096u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0544[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A24000;
    case 2u: goto L_08A24008;
    case 3u: goto L_08A24010;
    case 4u: goto L_08A24018;
    case 5u: goto L_08A24028;
    case 6u: goto L_08A24040;
    case 7u: goto L_08A24048;
    case 8u: goto L_08A24050;
    case 9u: goto L_08A24058;
    case 10u: goto L_08A24068;
    case 11u: goto L_08A2407C;
    case 12u: goto L_08A24084;
    case 13u: goto L_08A2408C;
    case 14u: goto L_08A24094;
    case 15u: goto L_08A240A0;
    case 16u: goto L_08A240A4;
    case 17u: goto L_08A240B4;
    case 18u: goto L_08A240DC;
    case 19u: goto L_08A240F0;
    case 20u: goto L_08A24104;
    case 21u: goto L_08A24118;
    case 22u: goto L_08A2412C;
    case 23u: goto L_08A24140;
    case 24u: goto L_08A24154;
    case 25u: goto L_08A24164;
    case 26u: goto L_08A24174;
    case 27u: goto L_08A24180;
    case 28u: goto L_08A24190;
    case 29u: goto L_08A24198;
    case 30u: goto L_08A241A8;
    case 31u: goto L_08A241B8;
    case 32u: goto L_08A241C4;
    case 33u: goto L_08A241D0;
    case 34u: goto L_08A241D8;
    case 35u: goto L_08A241E4;
    case 36u: goto L_08A241F4;
    case 37u: goto L_08A24218;
    case 38u: goto L_08A24258;
    case 39u: goto L_08A24260;
    case 40u: goto L_08A2426C;
    case 41u: goto L_08A24274;
    case 42u: goto L_08A24284;
    case 43u: goto L_08A2428C;
    case 44u: goto L_08A242B0;
    case 45u: goto L_08A242B4;
    case 46u: goto L_08A242C0;
    case 47u: goto L_08A242C8;
    case 48u: goto L_08A242D8;
    case 49u: goto L_08A242E0;
    case 50u: goto L_08A242F0;
    case 51u: goto L_08A242F8;
    case 52u: goto L_08A24308;
    case 53u: goto L_08A24310;
    case 54u: goto L_08A24314;
    case 55u: goto L_08A24324;
    case 56u: goto L_08A24344;
    case 57u: goto L_08A24364;
    case 58u: goto L_08A24390;
    case 59u: goto L_08A243A8;
    case 60u: goto L_08A243B8;
    case 61u: goto L_08A243BC;
    case 62u: goto L_08A243D4;
    case 63u: goto L_08A243DC;
    case 64u: goto L_08A243EC;
    case 65u: goto L_08A243F4;
    case 66u: goto L_08A2444C;
    case 67u: goto L_08A24468;
    case 68u: goto L_08A24470;
    case 69u: goto L_08A24498;
    case 70u: goto L_08A244AC;
    case 71u: goto L_08A244BC;
    case 72u: goto L_08A244EC;
    case 73u: goto L_08A24500;
    case 74u: goto L_08A24520;
    case 75u: goto L_08A2452C;
    case 76u: goto L_08A24534;
    case 77u: goto L_08A24544;
    case 78u: goto L_08A24558;
    case 79u: goto L_08A2456C;
    case 80u: goto L_08A24580;
    case 81u: goto L_08A24588;
    case 82u: goto L_08A245A8;
    case 83u: goto L_08A245B0;
    case 84u: goto L_08A245B8;
    case 85u: goto L_08A245C0;
    case 86u: goto L_08A245CC;
    case 87u: goto L_08A245F0;
    case 88u: goto L_08A24600;
    case 89u: goto L_08A24610;
    case 90u: goto L_08A24634;
    case 91u: goto L_08A24654;
    case 92u: goto L_08A24664;
    case 93u: goto L_08A24678;
    case 94u: goto L_08A24680;
    case 95u: goto L_08A246A0;
    case 96u: goto L_08A246DC;
    case 97u: goto L_08A246E8;
    case 98u: goto L_08A24718;
    case 99u: goto L_08A24720;
    case 100u: goto L_08A2472C;
    case 101u: goto L_08A24760;
    case 102u: goto L_08A24774;
    case 103u: goto L_08A2477C;
    case 104u: goto L_08A247A4;
    case 105u: goto L_08A247B8;
    case 106u: goto L_08A247C8;
    case 107u: goto L_08A247D8;
    case 108u: goto L_08A247E4;
    case 109u: goto L_08A247EC;
    case 110u: goto L_08A247F8;
    case 111u: goto L_08A24800;
    case 112u: goto L_08A24808;
    case 113u: goto L_08A2480C;
    case 114u: goto L_08A2481C;
    case 115u: goto L_08A24830;
    case 116u: goto L_08A2483C;
    case 117u: goto L_08A24844;
    case 118u: goto L_08A24850;
    case 119u: goto L_08A24860;
    case 120u: goto L_08A24884;
    case 121u: goto L_08A2488C;
    case 122u: goto L_08A248AC;
    case 123u: goto L_08A248B8;
    case 124u: goto L_08A248C4;
    case 125u: goto L_08A248D8;
    case 126u: goto L_08A248FC;
    case 127u: goto L_08A2490C;
    case 128u: goto L_08A24920;
    case 129u: goto L_08A24940;
    case 130u: goto L_08A2494C;
    case 131u: goto L_08A24954;
    case 132u: goto L_08A24964;
    case 133u: goto L_08A24980;
    case 134u: goto L_08A24998;
    case 135u: goto L_08A249A0;
    case 136u: goto L_08A249A8;
    case 137u: goto L_08A249C4;
    case 138u: goto L_08A249CC;
    case 139u: goto L_08A24A04;
    case 140u: goto L_08A24A0C;
    case 141u: goto L_08A24A14;
    case 142u: goto L_08A24A1C;
    case 143u: goto L_08A24A28;
    case 144u: goto L_08A24A40;
    case 145u: goto L_08A24A4C;
    case 146u: goto L_08A24A70;
    case 147u: goto L_08A24A78;
    case 148u: goto L_08A24A94;
    case 149u: goto L_08A24AA4;
    case 150u: goto L_08A24AB0;
    case 151u: goto L_08A24AC0;
    case 152u: goto L_08A24ACC;
    case 153u: goto L_08A24ADC;
    case 154u: goto L_08A24AE8;
    case 155u: goto L_08A24B0C;
    case 156u: goto L_08A24B20;
    case 157u: goto L_08A24B40;
    case 158u: goto L_08A24B54;
    case 159u: goto L_08A24B68;
    case 160u: goto L_08A24B7C;
    case 161u: goto L_08A24B90;
    case 162u: goto L_08A24BA4;
    case 163u: goto L_08A24BB8;
    case 164u: goto L_08A24BCC;
    case 165u: goto L_08A24BE0;
    case 166u: goto L_08A24BF4;
    case 167u: goto L_08A24C08;
    case 168u: goto L_08A24C1C;
    case 169u: goto L_08A24C30;
    case 170u: goto L_08A24C44;
    case 171u: goto L_08A24C58;
    case 172u: goto L_08A24C64;
    case 173u: goto L_08A24C6C;
    case 174u: goto L_08A24C70;
    case 175u: goto L_08A24C80;
    case 176u: goto L_08A24C94;
    case 177u: goto L_08A24CA8;
    case 178u: goto L_08A24CBC;
    case 179u: goto L_08A24CC8;
    case 180u: goto L_08A24CD4;
    case 181u: goto L_08A24CDC;
    case 182u: goto L_08A24CE0;
    case 183u: goto L_08A24CEC;
    case 184u: goto L_08A24D0C;
    case 185u: goto L_08A24D30;
    case 186u: goto L_08A24D4C;
    case 187u: goto L_08A24D60;
    case 188u: goto L_08A24D6C;
    case 189u: goto L_08A24D74;
    case 190u: goto L_08A24D7C;
    case 191u: goto L_08A24D88;
    case 192u: goto L_08A24D90;
    case 193u: goto L_08A24DA0;
    case 194u: goto L_08A24DA8;
    case 195u: goto L_08A24DC0;
    case 196u: goto L_08A24DC4;
    case 197u: goto L_08A24DCC;
    case 198u: goto L_08A24DD4;
    case 199u: goto L_08A24DF0;
    case 200u: goto L_08A24E18;
    case 201u: goto L_08A24E30;
    case 202u: goto L_08A24E38;
    case 203u: goto L_08A24E40;
    case 204u: goto L_08A24E5C;
    case 205u: goto L_08A24E64;
    case 206u: goto L_08A24E74;
    case 207u: goto L_08A24E7C;
    case 208u: goto L_08A24E94;
    case 209u: goto L_08A24EB0;
    case 210u: goto L_08A24EEC;
    case 211u: goto L_08A24EF4;
    case 212u: goto L_08A24F18;
    case 213u: goto L_08A24F34;
    case 214u: goto L_08A24F40;
    case 215u: goto L_08A24F48;
    case 216u: goto L_08A24F50;
    case 217u: goto L_08A24F60;
    case 218u: goto L_08A24F64;
    case 219u: goto L_08A24F70;
    case 220u: goto L_08A24F78;
    case 221u: goto L_08A24F94;
    case 222u: goto L_08A24F9C;
    case 223u: goto L_08A24FA8;
    case 224u: goto L_08A24FB0;
    case 225u: goto L_08A24FCC;
    case 226u: goto L_08A24FD4;
    case 227u: goto L_08A24FE0;
    case 228u: goto L_08A24FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A24000:
    if (aot_gpr[5] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08A24040;
    }
    goto L_08A24008;
L_08A24008:
    aot_gpr[31] = (0x08A24010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A24010u) goto L_08A24010;
    return;
L_08A24010:
    aot_gpr[31] = (0x08A24018u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A24018u) goto L_08A24018;
    return;
L_08A24018:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A24028u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A24028u) goto L_08A24028;
    return;
L_08A24028:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08A24040;
L_08A24040:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2407C;
      }
      goto L_08A24048;
    }
L_08A24048:
    aot_gpr[31] = (0x08A24050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A24050u) goto L_08A24050;
    return;
L_08A24050:
    aot_gpr[31] = (0x08A24058u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A24058u) goto L_08A24058;
    return;
L_08A24058:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A24068u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A24068u) goto L_08A24068;
    return;
L_08A24068:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    goto L_08A2407C;
L_08A2407C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A240A4;
      }
      goto L_08A24084;
    }
L_08A24084:
    aot_gpr[31] = (0x08A2408Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2408Cu) goto L_08A2408C;
    return;
L_08A2408C:
    aot_gpr[31] = (0x08A24094u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A24094u) goto L_08A24094;
    return;
L_08A24094:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(25520)));
    aot_gpr[31] = (0x08A240A0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A240A0u) goto L_08A240A0;
    return;
L_08A240A0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(25520), 0u);
    goto L_08A240A4;
L_08A240A4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A240B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A240DCu);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 215u, 0x08A46CCCu>(ctx, &aot_mem) && ctx.pc == 0x08A240DCu) goto L_08A240DC;
    return;
L_08A240DC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(18296));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[31] = (0x08A240F0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A24470;
L_08A240F0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(320));
    aot_gpr[31] = (0x08A24104u);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(1560));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A24104u) goto L_08A24104;
    return;
L_08A24104:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A24118u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24118u) goto L_08A24118;
    return;
L_08A24118:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(456));
    aot_gpr[31] = (0x08A2412Cu);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(1572));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A2412Cu) goto L_08A2412C;
    return;
L_08A2412C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A24140u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24140u) goto L_08A24140;
    return;
L_08A24140:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(324));
    aot_gpr[31] = (0x08A24154u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1588));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 103u, 0x08A0063Cu>(ctx, &aot_mem) && ctx.pc == 0x08A24154u) goto L_08A24154;
    return;
L_08A24154:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A24164u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(1596));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A24164u) goto L_08A24164;
    return;
L_08A24164:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A24174u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24174u) goto L_08A24174;
    return;
L_08A24174:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A24198;
      }
      goto L_08A24180;
    }
L_08A24180:
    aot_gpr[18] = (aot_gpr[17] + static_cast<std::uint32_t>(328));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A24190u);
    aot_gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A24190u) goto L_08A24190;
    return;
L_08A24190:
    aot_gpr[31] = (0x08A24198u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 49u, 0x089EF294u>(ctx, &aot_mem) && ctx.pc == 0x08A24198u) goto L_08A24198;
    return;
L_08A24198:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A241A8u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(1604));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A241A8u) goto L_08A241A8;
    return;
L_08A241A8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A241B8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A241B8u) goto L_08A241B8;
    return;
L_08A241B8:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A241D0;
      }
      goto L_08A241C4;
    }
L_08A241C4:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(468));
    aot_gpr[31] = (0x08A241D0u);
    aot_gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A241D0u) goto L_08A241D0;
    return;
L_08A241D0:
    aot_gpr[31] = (0x08A241D8u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A241D8u) goto L_08A241D8;
    return;
L_08A241D8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A241E4u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A241E4u) goto L_08A241E4;
    return;
L_08A241E4:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A241F4u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A24500;
L_08A241F4:
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
L_08A24218:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(292)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A24258u);
    aot_gpr[4] = (aot_gpr[19] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24258u) goto L_08A24258;
    return;
L_08A24258:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A24344;
      }
      goto L_08A24260;
    }
L_08A24260:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A2426Cu);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A2426Cu) goto L_08A2426C;
    return;
L_08A2426C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A242B4;
      }
      goto L_08A24274;
    }
L_08A24274:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(464)));
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x08A24284u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0543_entry, 543u, 67u, 0x08A23320u>(ctx, &aot_mem) && ctx.pc == 0x08A24284u) goto L_08A24284;
    return;
L_08A24284:
    aot_gpr[31] = (0x08A2428Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 235u, 0x089FEE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2428Cu) goto L_08A2428C;
    return;
L_08A2428C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1616));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A242B0u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A242B0u) goto L_08A242B0;
    return;
L_08A242B0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A242B4;
L_08A242B4:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A242C0u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A242C0u) goto L_08A242C0;
    return;
L_08A242C0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A24314;
      }
      goto L_08A242C8;
    }
L_08A242C8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A242D8u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A242D8u) goto L_08A242D8;
    return;
L_08A242D8:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A24314;
      }
      goto L_08A242E0;
    }
L_08A242E0:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A242F0u);
    aot_gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A242F0u) goto L_08A242F0;
    return;
L_08A242F0:
    { const bool branch_taken = aot_gpr[2] != 0u;
    aot_gpr[4] = (aot_gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A24314;
      }
      goto L_08A242F8;
    }
L_08A242F8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A24308u);
    aot_gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A24308u) goto L_08A24308;
    return;
L_08A24308:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A24344;
      }
      goto L_08A24310;
    }
L_08A24310:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_08A24314;
L_08A24314:
    aot_gpr[5] = (aot_gpr[18] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A24324u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 11u, 0x08A0107Cu>(ctx, &aot_mem) && ctx.pc == 0x08A24324u) goto L_08A24324;
    return;
L_08A24324:
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
L_08A24344:
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
L_08A24364:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-64));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(328));
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[31]);
    aot_gpr[31] = (0x08A24390u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A24390u) goto L_08A24390;
    return;
L_08A24390:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(456)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[18] = (aot_gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A243BC;
      }
      goto L_08A243A8;
    }
L_08A243A8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(320)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A243B8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 59u, 0x08A0E384u>(ctx, &aot_mem) && ctx.pc == 0x08A243B8u) goto L_08A243B8;
    return;
L_08A243B8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_08A243BC;
L_08A243BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A243D4u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A243D4u) goto L_08A243D4;
    return;
L_08A243D4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(300)));
        goto L_08A243EC;
    }
    goto L_08A243DC;
L_08A243DC:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(312)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(316)));
      if (branch_taken) {
          goto L_08A243F4;
      }
      goto L_08A243EC;
    }
L_08A243EC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(296)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(304)));
    goto L_08A243F4;
L_08A243F4:
    aot_gpr[9] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (aot_gpr[4] + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[10] + static_cast<std::uint32_t>(0))))));
    aot_gpr[14] = (PSPRECOMP_AOT_LOAD32(aot_gpr[10] + static_cast<std::uint32_t>(4)));
    aot_gpr[10] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(320)));
    aot_gpr[3] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(324)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[2]);
    aot_gpr[12] = (aot_gpr[17] + static_cast<std::uint32_t>(144));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[3]);
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[13] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[12]);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[17] + static_cast<std::uint32_t>(20));
    aot_gpr[11] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[14];
    aot_gpr[31] = (0x08A2444Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[13]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2444Cu) goto L_08A2444C;
    return;
L_08A2444C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A24468:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A24470:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A24498u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1620));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A24498u) goto L_08A24498;
    return;
L_08A24498:
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(328));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A244ACu);
    aot_gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A244ACu) goto L_08A244AC;
    return;
L_08A244AC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A244BCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1636));
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 208u, 0x08A3AAC0u>(ctx, &aot_mem) && ctx.pc == 0x08A244BCu) goto L_08A244BC;
    return;
L_08A244BC:
    aot_gpr[4] = (0u | 14u);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), aot_gpr[4]);
    aot_fpr[12] = __builtin_bit_cast(float, 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), aot_gpr[5]);
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(456), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(468));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A244ECu);
    aot_gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A244ECu) goto L_08A244EC;
    return;
L_08A244EC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A24500:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A24520u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 158u, 0x08A12ADCu>(ctx, &aot_mem) && ctx.pc == 0x08A24520u) goto L_08A24520;
    return;
L_08A24520:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(464), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A24534;
      }
      goto L_08A2452C;
    }
L_08A2452C:
    aot_gpr[31] = (0x08A24534u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0542_entry, 542u, 160u, 0x08A22AA4u>(ctx, &aot_mem) && ctx.pc == 0x08A24534u) goto L_08A24534;
    return;
L_08A24534:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A24544:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A24558u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 27u, 0x08A011D8u>(ctx, &aot_mem) && ctx.pc == 0x08A24558u) goto L_08A24558;
    return;
L_08A24558:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(18440));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[31] = (0x08A2456Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_08A245CC;
L_08A2456C:
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A24580:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A24588:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A245A8u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A245A8u) goto L_08A245A8;
    return;
L_08A245A8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A245C0;
      }
      goto L_08A245B0;
    }
L_08A245B0:
    aot_gpr[31] = (0x08A245B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 221u, 0x089FEE08u>(ctx, &aot_mem) && ctx.pc == 0x08A245B8u) goto L_08A245B8;
    return;
L_08A245B8:
    aot_gpr[31] = (0x08A245C0u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 96u, 0x089FE750u>(ctx, &aot_mem) && ctx.pc == 0x08A245C0u) goto L_08A245C0;
    return;
L_08A245C0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A245CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A245F0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1648));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A245F0u) goto L_08A245F0;
    return;
L_08A245F0:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A24600u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 185u, 0x08A00C48u>(ctx, &aot_mem) && ctx.pc == 0x08A24600u) goto L_08A24600;
    return;
L_08A24600:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A24610:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A24634u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 215u, 0x08A46CCCu>(ctx, &aot_mem) && ctx.pc == 0x08A24634u) goto L_08A24634;
    return;
L_08A24634:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(18576));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    aot_gpr[31] = (0x08A24654u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1664));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A24654u) goto L_08A24654;
    return;
L_08A24654:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(320));
    aot_gpr[31] = (0x08A24664u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(1676));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A24664u) goto L_08A24664;
    return;
L_08A24664:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A24678u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24678u) goto L_08A24678;
    return;
L_08A24678:
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), 0u);
        goto L_08A24680;
    }
    goto L_08A24680;
L_08A24680:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A246A0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(296)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(152));
    aot_gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(300)));
    aot_gpr[10] = (aot_gpr[5] + aot_gpr[8]);
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[4] + static_cast<std::uint32_t>(20));
    aot_gpr[8] = (aot_gpr[4] + static_cast<std::uint32_t>(144));
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[4] = (aot_gpr[10] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08A246DCu);
    aot_gpr[7] = (aot_gpr[9] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A246DCu) goto L_08A246DC;
    return;
L_08A246DC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A246E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A24718u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24718u) goto L_08A24718;
    return;
L_08A24718:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A24760;
      }
      goto L_08A24720;
    }
L_08A24720:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A24760;
      }
      goto L_08A2472C;
    }
L_08A2472C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1688));
    aot_gpr[6] = (0u | 2u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08A24760u);
    aot_gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24760u) goto L_08A24760;
    return;
L_08A24760:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A24774:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2477C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[31]);
    aot_gpr[31] = (0x08A247A4u);
    aot_gpr[16] = (aot_gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 27u, 0x08A011D8u>(ctx, &aot_mem) && ctx.pc == 0x08A247A4u) goto L_08A247A4;
    return;
L_08A247A4:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(18712));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[31] = (0x08A247B8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A248D8;
L_08A247B8:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (0x08A247C8u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(1696));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A247C8u) goto L_08A247C8;
    return;
L_08A247C8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A247D8u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A247D8u) goto L_08A247D8;
    return;
L_08A247D8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    if (aot_gpr[18] == 0u) {
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
        goto L_08A24800;
    }
    goto L_08A247E4;
L_08A247E4:
    aot_gpr[31] = (0x08A247ECu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 49u, 0x089EF294u>(ctx, &aot_mem) && ctx.pc == 0x08A247ECu) goto L_08A247EC;
    return;
L_08A247EC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A247F8u);
    aot_gpr[5] = (aot_gpr[18] | 0u);
    goto L_08A2488C;
L_08A247F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A2480C;
      }
      goto L_08A24800;
    }
L_08A24800:
    aot_gpr[31] = (0x08A24808u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A2488C;
L_08A24808:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A2480C;
L_08A2480C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[19] = (aot_gpr[17] + static_cast<std::uint32_t>(556));
    aot_gpr[31] = (0x08A2481Cu);
    aot_gpr[20] = (aot_gpr[4] + static_cast<std::uint32_t>(1704));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A2481Cu) goto L_08A2481C;
    return;
L_08A2481C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(92)));
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (aot_gpr[20] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A24830u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24830u) goto L_08A24830;
    return;
L_08A24830:
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    if (aot_gpr[2] == 0u) {
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(556), 0u);
        goto L_08A2483C;
    }
    goto L_08A2483C;
L_08A2483C:
    aot_gpr[31] = (0x08A24844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A24844u) goto L_08A24844;
    return;
L_08A24844:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x08A24850u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24850u) goto L_08A24850;
    return;
L_08A24850:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A24860u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_08A24920;
L_08A24860:
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
L_08A24884:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2488C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A248ACu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 211u, 0x08A3AB04u>(ctx, &aot_mem) && ctx.pc == 0x08A248ACu) goto L_08A248AC;
    return;
L_08A248AC:
    aot_gpr[4] = (aot_gpr[2] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(296));
      if (branch_taken) {
          goto L_08A248C4;
      }
      goto L_08A248B8;
    }
L_08A248B8:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x08A248C4u);
    aot_gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A248C4u) goto L_08A248C4;
    return;
L_08A248C4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A248D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A248FCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1724));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A248FCu) goto L_08A248FC;
    return;
L_08A248FC:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(296));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x08A2490Cu);
    aot_gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2490Cu) goto L_08A2490C;
    return;
L_08A2490C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(556), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A24920:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A24940u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0526_entry, 526u, 158u, 0x08A12ADCu>(ctx, &aot_mem) && ctx.pc == 0x08A24940u) goto L_08A24940;
    return;
L_08A24940:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(552), aot_gpr[2]);
      if (branch_taken) {
          goto L_08A24954;
      }
      goto L_08A2494C;
    }
L_08A2494C:
    aot_gpr[31] = (0x08A24954u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0542_entry, 542u, 163u, 0x08A22AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A24954u) goto L_08A24954;
    return;
L_08A24954:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A24964:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x08A24980u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0509_entry, 509u, 27u, 0x08A011D8u>(ctx, &aot_mem) && ctx.pc == 0x08A24980u) goto L_08A24980;
    return;
L_08A24980:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(18848));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(300));
    aot_gpr[31] = (0x08A24998u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 75u, 0x08A46458u>(ctx, &aot_mem) && ctx.pc == 0x08A24998u) goto L_08A24998;
    return;
L_08A24998:
    aot_gpr[31] = (0x08A249A0u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A24AE8;
L_08A249A0:
    aot_gpr[31] = (0x08A249A8u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A24ACC;
L_08A249A8:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[2]);
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
L_08A249C4:
    jump_target = aot_gpr[31];
    aot_gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A249CC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A24A04u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24A04u) goto L_08A24A04;
    return;
L_08A24A04:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A24A78;
      }
      goto L_08A24A0C;
    }
L_08A24A0C:
    aot_gpr[31] = (0x08A24A14u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A24ACC;
L_08A24A14:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A24A78;
      }
      goto L_08A24A1C;
    }
L_08A24A1C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A24A78;
      }
      goto L_08A24A28;
    }
L_08A24A28:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[18] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr[31] = (0x08A24A40u);
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[5]);
    goto L_08A24A94;
L_08A24A40:
    aot_gpr[19] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x08A24A4Cu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_08A24AB0;
L_08A24A4C:
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    aot_gpr[6] = (aot_gpr[2] | 0u);
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08A24A70u);
    aot_gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24A70u) goto L_08A24A70;
    return;
L_08A24A70:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(296), aot_gpr[4]);
    goto L_08A24A78;
L_08A24A78:
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
L_08A24A94:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A24AA4u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(300));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 97u, 0x08A465CCu>(ctx, &aot_mem) && ctx.pc == 0x08A24AA4u) goto L_08A24AA4;
    return;
L_08A24AA4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A24AB0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A24AC0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(300));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 98u, 0x08A465D4u>(ctx, &aot_mem) && ctx.pc == 0x08A24AC0u) goto L_08A24AC0;
    return;
L_08A24AC0:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A24ACC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x08A24ADCu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(300));
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 99u, 0x08A465DCu>(ctx, &aot_mem) && ctx.pc == 0x08A24ADCu) goto L_08A24ADC;
    return;
L_08A24ADC:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A24AE8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(44));
    aot_gpr[6] = (0u | 64u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x08A24B0Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1744));
    if (rt.invoke_chained_direct<&recomp_unit_0492_entry, 492u, 51u, 0x089F02F0u>(ctx, &aot_mem) && ctx.pc == 0x08A24B0Cu) goto L_08A24B0C;
    return;
L_08A24B0C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(296), 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A24B20:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    aot_gpr[31] = (0x08A24B40u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 215u, 0x08A46CCCu>(ctx, &aot_mem) && ctx.pc == 0x08A24B40u) goto L_08A24B40;
    return;
L_08A24B40:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(18984));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[31] = (0x08A24B54u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0545_entry, 545u, 88u, 0x08A255D0u>(ctx, &aot_mem) && ctx.pc == 0x08A24B54u) goto L_08A24B54;
    return;
L_08A24B54:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(320));
    aot_gpr[31] = (0x08A24B68u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(1760));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A24B68u) goto L_08A24B68;
    return;
L_08A24B68:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A24B7Cu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24B7Cu) goto L_08A24B7C;
    return;
L_08A24B7C:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(328));
    aot_gpr[31] = (0x08A24B90u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(1772));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A24B90u) goto L_08A24B90;
    return;
L_08A24B90:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A24BA4u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24BA4u) goto L_08A24BA4;
    return;
L_08A24BA4:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(324));
    aot_gpr[31] = (0x08A24BB8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1788));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 103u, 0x08A0063Cu>(ctx, &aot_mem) && ctx.pc == 0x08A24BB8u) goto L_08A24BB8;
    return;
L_08A24BB8:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(760));
    aot_gpr[31] = (0x08A24BCCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1796));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A24BCCu) goto L_08A24BCC;
    return;
L_08A24BCC:
    aot_gpr[5] = (2215u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(756));
    aot_gpr[31] = (0x08A24BE0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(1812));
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 117u, 0x08A00710u>(ctx, &aot_mem) && ctx.pc == 0x08A24BE0u) goto L_08A24BE0;
    return;
L_08A24BE0:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(732));
    aot_gpr[31] = (0x08A24BF4u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(1828));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A24BF4u) goto L_08A24BF4;
    return;
L_08A24BF4:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A24C08u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24C08u) goto L_08A24C08;
    return;
L_08A24C08:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(736));
    aot_gpr[31] = (0x08A24C1Cu);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(1840));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A24C1Cu) goto L_08A24C1C;
    return;
L_08A24C1C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A24C30u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24C30u) goto L_08A24C30;
    return;
L_08A24C30:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(752));
    aot_gpr[31] = (0x08A24C44u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(1856));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A24C44u) goto L_08A24C44;
    return;
L_08A24C44:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(84)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A24C58u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24C58u) goto L_08A24C58;
    return;
L_08A24C58:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(752)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2215u << 16u);
      if (branch_taken) {
          goto L_08A24C70;
      }
      goto L_08A24C64;
    }
L_08A24C64:
    aot_gpr[31] = (0x08A24C6Cu);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0545_entry, 545u, 63u, 0x08A253BCu>(ctx, &aot_mem) && ctx.pc == 0x08A24C6Cu) goto L_08A24C6C;
    return;
L_08A24C6C:
    aot_gpr[4] = (2215u << 16u);
    goto L_08A24C70;
L_08A24C70:
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(764));
    aot_gpr[31] = (0x08A24C80u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(1868));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A24C80u) goto L_08A24C80;
    return;
L_08A24C80:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A24C94u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24C94u) goto L_08A24C94;
    return;
L_08A24C94:
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[18] = (aot_gpr[16] + static_cast<std::uint32_t>(768));
    aot_gpr[31] = (0x08A24CA8u);
    aot_gpr[19] = (aot_gpr[4] + static_cast<std::uint32_t>(1880));
    if (rt.invoke_chained_direct<&recomp_unit_0493_entry, 493u, 176u, 0x089F19B0u>(ctx, &aot_mem) && ctx.pc == 0x08A24CA8u) goto L_08A24CA8;
    return;
L_08A24CA8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[19] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A24CBCu);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24CBCu) goto L_08A24CBC;
    return;
L_08A24CBC:
    aot_gpr[18] = (0u | 0u);
    aot_gpr[31] = (0x08A24CC8u);
    aot_gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 10u, 0x08A46078u>(ctx, &aot_mem) && ctx.pc == 0x08A24CC8u) goto L_08A24CC8;
    return;
L_08A24CC8:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A24CE0;
      }
      goto L_08A24CD4;
    }
L_08A24CD4:
    aot_gpr[31] = (0x08A24CDCu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 3u, 0x08A46010u>(ctx, &aot_mem) && ctx.pc == 0x08A24CDCu) goto L_08A24CDC;
    return;
L_08A24CDC:
    aot_gpr[18] = (aot_gpr[17] | 0u);
    goto L_08A24CE0;
L_08A24CE0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(776), aot_gpr[18]);
    aot_gpr[31] = (0x08A24CECu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 18u, 0x08A460F8u>(ctx, &aot_mem) && ctx.pc == 0x08A24CECu) goto L_08A24CEC;
    return;
L_08A24CEC:
    aot_gpr[2] = (aot_gpr[16] | 0u);
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
L_08A24D0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A24DD4;
      }
      goto L_08A24D30;
    }
L_08A24D30:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(18984));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(776)));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[31] = (0x08A24D4Cu);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0578_entry, 578u, 6u, 0x08A4604Cu>(ctx, &aot_mem) && ctx.pc == 0x08A24D4Cu) goto L_08A24D4C;
    return;
L_08A24D4C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(732)));
    aot_gpr[19] = (0u | 0u);
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[18] = (aot_gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A24DA0;
      }
      goto L_08A24D60;
    }
L_08A24D60:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(332)));
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(732)));
        goto L_08A24D90;
    }
    goto L_08A24D6C;
L_08A24D6C:
    aot_gpr[31] = (0x08A24D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 184u, 0x089EFBDCu>(ctx, &aot_mem) && ctx.pc == 0x08A24D74u) goto L_08A24D74;
    return;
L_08A24D74:
    aot_gpr[31] = (0x08A24D7Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0491_entry, 491u, 234u, 0x089EFE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A24D7Cu) goto L_08A24D7C;
    return;
L_08A24D7C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(332)));
    aot_gpr[31] = (0x08A24D88u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0490_entry, 490u, 125u, 0x089EEAA4u>(ctx, &aot_mem) && ctx.pc == 0x08A24D88u) goto L_08A24D88;
    return;
L_08A24D88:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(332), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(732)));
    goto L_08A24D90;
L_08A24D90:
    aot_gpr[19] = (aot_gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[19]) < static_cast<std::int32_t>(aot_gpr[4]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    aot_gpr[18] = (aot_gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A24D60;
      }
      goto L_08A24DA0;
    }
L_08A24DA0:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (aot_gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A24DC4;
      }
      goto L_08A24DA8;
    }
L_08A24DA8:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(26304));
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(292), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A24DC0u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 181u, 0x08A00C14u>(ctx, &aot_mem) && ctx.pc == 0x08A24DC0u) goto L_08A24DC0;
    return;
L_08A24DC0:
    aot_gpr[4] = (aot_gpr[16] & 1u);
    goto L_08A24DC4;
L_08A24DC4:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A24DD4;
      }
      goto L_08A24DCC;
    }
L_08A24DCC:
    aot_gpr[31] = (0x08A24DD4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0508_entry, 508u, 229u, 0x08A00EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A24DD4u) goto L_08A24DD4;
    return;
L_08A24DD4:
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
L_08A24DF0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(784)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A24E40;
      }
      goto L_08A24E18;
    }
L_08A24E18:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(56));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A24E30u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24E30u) goto L_08A24E30;
    return;
L_08A24E30:
    if (aot_gpr[2] != 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(752)));
        goto L_08A24E5C;
    }
    goto L_08A24E38;
L_08A24E38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A24FE0;
      }
      goto L_08A24E40;
    }
L_08A24E40:
    aot_gpr[2] = (0u | 1u);
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
L_08A24E5C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A24F34;
      }
      goto L_08A24E64;
    }
L_08A24E64:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A24E74u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A24E74u) goto L_08A24E74;
    return;
L_08A24E74:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A24F64;
      }
      goto L_08A24E7C;
    }
L_08A24E7C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(160));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x08A24E94u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24E94u) goto L_08A24E94;
    return;
L_08A24E94:
    aot_gpr[5] = (aot_gpr[2] | 0u);
    aot_gpr[4] = (aot_gpr[5] << 2u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(332)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[6] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A24F18;
      }
      goto L_08A24EB0;
    }
L_08A24EB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 2u);
    aot_gpr[7] = (aot_gpr[4] + static_cast<std::uint32_t>(40));
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[5]);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(332)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(8)));
    aot_gpr[11] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (0u | 0u);
    aot_gpr[8] = (0u | 0u);
    aot_gpr[9] = (0u | 0u);
    jump_target = aot_gpr[11];
    aot_gpr[31] = (0x08A24EECu);
    aot_gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24EECu) goto L_08A24EEC;
    return;
L_08A24EEC:
    aot_gpr[31] = (0x08A24EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0506_entry, 506u, 235u, 0x089FEE9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A24EF4u) goto L_08A24EF4;
    return;
L_08A24EF4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (2215u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[5]);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(1896));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A24F18u);
    aot_gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24F18u) goto L_08A24F18;
    return;
L_08A24F18:
    aot_gpr[2] = (0u | 0u);
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
L_08A24F34:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A24F40u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A24F40u) goto L_08A24F40;
    return;
L_08A24F40:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A24F64;
      }
      goto L_08A24F48;
    }
L_08A24F48:
    aot_gpr[31] = (0x08A24F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 119u, 0x08A03734u>(ctx, &aot_mem) && ctx.pc == 0x08A24F50u) goto L_08A24F50;
    return;
L_08A24F50:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x08A24F60u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0511_entry, 511u, 136u, 0x08A03830u>(ctx, &aot_mem) && ctx.pc == 0x08A24F60u) goto L_08A24F60;
    return;
L_08A24F60:
    aot_gpr[4] = (aot_gpr[18] | 0u);
    goto L_08A24F64;
L_08A24F64:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A24F70u);
    aot_gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A24F70u) goto L_08A24F70;
    return;
L_08A24F70:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A24F9C;
      }
      goto L_08A24F78;
    }
L_08A24F78:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(256));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A24F94u);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24F94u) goto L_08A24F94;
    return;
L_08A24F94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A24FE0;
      }
      goto L_08A24F9C;
    }
L_08A24F9C:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A24FA8u);
    aot_gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A24FA8u) goto L_08A24FA8;
    return;
L_08A24FA8:
    { const bool branch_taken = aot_gpr[2] == 0u;
    aot_gpr[4] = (aot_gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A24FD4;
      }
      goto L_08A24FB0;
    }
L_08A24FB0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(292)));
    aot_gpr[5] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(256));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x08A24FCCu);
    aot_gpr[4] = (aot_gpr[17] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A24FCCu) goto L_08A24FCC;
    return;
L_08A24FCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A24FE0;
      }
      goto L_08A24FD4;
    }
L_08A24FD4:
    aot_gpr[5] = (0u | 17u);
    aot_gpr[31] = (0x08A24FE0u);
    aot_gpr[6] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0522_entry, 522u, 63u, 0x08A0E3D0u>(ctx, &aot_mem) && ctx.pc == 0x08A24FE0u) goto L_08A24FE0;
    return;
L_08A24FE0:
    aot_gpr[2] = (0u | 1u);
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
L_08A24FFC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.pc = 0x08A25000u; return;
}

void recomp_unit_0544(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0544_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_544(Runtime &runtime) {
    runtime.register_generated_unit(544u, 0x08A24000u, 4096u, &recomp_unit_0544, &recomp_unit_0544_entry);
    runtime.register_function(0x08A24000u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24008u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24010u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24018u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24028u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24040u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24048u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24050u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24058u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24068u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A2407Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24084u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A2408Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24094u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A240A0u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A240A4u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A240B4u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A240DCu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A240F0u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24104u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24118u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A2412Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24140u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24154u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24164u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24174u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24180u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24190u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24198u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A241A8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A241B8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A241C4u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A241D0u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A241D8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A241E4u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A241F4u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24218u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24258u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24260u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A2426Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24274u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24284u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A2428Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A242B0u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A242B4u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A242C0u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A242C8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A242D8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A242E0u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A242F0u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A242F8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24308u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24310u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24314u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24324u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24344u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24364u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24390u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A243A8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A243B8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A243BCu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A243D4u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A243DCu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A243ECu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A243F4u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A2444Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24468u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24470u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24498u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A244ACu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A244BCu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A244ECu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24500u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24520u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A2452Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24534u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24544u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24558u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A2456Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24580u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24588u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A245A8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A245B0u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A245B8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A245C0u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A245CCu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A245F0u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24600u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24610u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24634u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24654u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24664u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24678u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24680u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A246A0u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A246DCu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A246E8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24718u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24720u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A2472Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24760u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24774u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A2477Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A247A4u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A247B8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A247C8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A247D8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A247E4u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A247ECu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A247F8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24800u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24808u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A2480Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A2481Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24830u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A2483Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24844u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24850u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24860u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24884u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A2488Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A248ACu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A248B8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A248C4u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A248D8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A248FCu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A2490Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24920u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24940u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A2494Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24954u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24964u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24980u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24998u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A249A0u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A249A8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A249C4u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A249CCu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24A04u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24A0Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24A14u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24A1Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24A28u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24A40u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24A4Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24A70u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24A78u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24A94u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24AA4u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24AB0u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24AC0u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24ACCu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24ADCu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24AE8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24B0Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24B20u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24B40u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24B54u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24B68u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24B7Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24B90u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24BA4u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24BB8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24BCCu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24BE0u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24BF4u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24C08u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24C1Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24C30u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24C44u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24C58u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24C64u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24C6Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24C70u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24C80u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24C94u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24CA8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24CBCu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24CC8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24CD4u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24CDCu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24CE0u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24CECu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24D0Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24D30u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24D4Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24D60u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24D6Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24D74u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24D7Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24D88u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24D90u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24DA0u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24DA8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24DC0u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24DC4u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24DCCu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24DD4u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24DF0u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24E18u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24E30u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24E38u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24E40u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24E5Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24E64u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24E74u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24E7Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24E94u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24EB0u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24EECu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24EF4u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24F18u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24F34u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24F40u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24F48u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24F50u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24F60u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24F64u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24F70u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24F78u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24F94u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24F9Cu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24FA8u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24FB0u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24FCCu, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24FD4u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24FE0u, &recomp_unit_0544, "recomp_unit_0544");
    runtime.register_function(0x08A24FFCu, &recomp_unit_0544, "recomp_unit_0544");
}
} // namespace psprecomp
