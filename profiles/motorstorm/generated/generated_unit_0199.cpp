#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0199[1011] = {
    1, 0, 2, 3, 0, 4, 0, 0, 5, 0, 6, 0, 0, 0, 7, 8, 0, 9, 0, 0, 10, 0, 11, 0, 0, 0, 12, 13, 0, 14, 0, 0,
    15, 0, 16, 0, 0, 0, 17, 18, 0, 19, 0, 20, 0, 0, 0, 21, 22, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 29, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 0, 35, 0, 0, 0, 0, 36, 37, 0, 38, 0, 0, 39, 0, 0, 0,
    0, 40, 41, 0, 42, 0, 0, 43, 0, 0, 0, 0, 44, 45, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0,
    0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55, 56,
    0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63,
    0, 0, 64, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 68, 0, 0, 0, 69, 0, 0, 0, 70, 71, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 77, 78, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0,
    0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0,
    0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0,
    0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 106, 107, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 123, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127,
    0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 133, 0, 134, 0, 0, 0, 0,
    135, 136, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0,
    0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 146, 0, 147, 0, 148, 0, 0, 149, 0, 0,
    0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 156, 0, 157, 0,
    158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 172, 0,
    0, 0, 173, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0,
    0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 189, 0, 190, 0, 0, 0, 191, 0,
    0, 0, 192, 0, 193, 194, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 198, 0, 199, 0, 0, 0, 200, 0, 201,
    0, 202, 0, 0, 0, 0, 0, 203, 0, 204, 0, 205, 0, 206, 0, 0, 0, 0, 207,
};
void recomp_unit_0199_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x088CB000u;
        entry_id = (entry_delta < 4044u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0199[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088CB000;
    case 2u: goto L_088CB008;
    case 3u: goto L_088CB00C;
    case 4u: goto L_088CB014;
    case 5u: goto L_088CB020;
    case 6u: goto L_088CB028;
    case 7u: goto L_088CB038;
    case 8u: goto L_088CB03C;
    case 9u: goto L_088CB044;
    case 10u: goto L_088CB050;
    case 11u: goto L_088CB058;
    case 12u: goto L_088CB068;
    case 13u: goto L_088CB06C;
    case 14u: goto L_088CB074;
    case 15u: goto L_088CB080;
    case 16u: goto L_088CB088;
    case 17u: goto L_088CB098;
    case 18u: goto L_088CB09C;
    case 19u: goto L_088CB0A4;
    case 20u: goto L_088CB0AC;
    case 21u: goto L_088CB0BC;
    case 22u: goto L_088CB0C0;
    case 23u: goto L_088CB0C4;
    case 24u: goto L_088CB0D8;
    case 25u: goto L_088CB120;
    case 26u: goto L_088CB150;
    case 27u: goto L_088CB158;
    case 28u: goto L_088CB168;
    case 29u: goto L_088CB190;
    case 30u: goto L_088CB198;
    case 31u: goto L_088CB1A0;
    case 32u: goto L_088CB1A8;
    case 33u: goto L_088CB1B0;
    case 34u: goto L_088CB1B8;
    case 35u: goto L_088CB1C4;
    case 36u: goto L_088CB1D8;
    case 37u: goto L_088CB1DC;
    case 38u: goto L_088CB1E4;
    case 39u: goto L_088CB1F0;
    case 40u: goto L_088CB204;
    case 41u: goto L_088CB208;
    case 42u: goto L_088CB210;
    case 43u: goto L_088CB21C;
    case 44u: goto L_088CB230;
    case 45u: goto L_088CB234;
    case 46u: goto L_088CB23C;
    case 47u: goto L_088CB254;
    case 48u: goto L_088CB264;
    case 49u: goto L_088CB274;
    case 50u: goto L_088CB298;
    case 51u: goto L_088CB2A8;
    case 52u: goto L_088CB2B8;
    case 53u: goto L_088CB2E0;
    case 54u: goto L_088CB2EC;
    case 55u: goto L_088CB2F8;
    case 56u: goto L_088CB2FC;
    case 57u: goto L_088CB30C;
    case 58u: goto L_088CB31C;
    case 59u: goto L_088CB32C;
    case 60u: goto L_088CB348;
    case 61u: goto L_088CB354;
    case 62u: goto L_088CB360;
    case 63u: goto L_088CB37C;
    case 64u: goto L_088CB388;
    case 65u: goto L_088CB390;
    case 66u: goto L_088CB3A0;
    case 67u: goto L_088CB3B8;
    case 68u: goto L_088CB3BC;
    case 69u: goto L_088CB3CC;
    case 70u: goto L_088CB3DC;
    case 71u: goto L_088CB3E0;
    case 72u: goto L_088CB414;
    case 73u: goto L_088CB430;
    case 74u: goto L_088CB464;
    case 75u: goto L_088CB490;
    case 76u: goto L_088CB4A4;
    case 77u: goto L_088CB4A8;
    case 78u: goto L_088CB4AC;
    case 79u: goto L_088CB4BC;
    case 80u: goto L_088CB4C8;
    case 81u: goto L_088CB4E4;
    case 82u: goto L_088CB4F0;
    case 83u: goto L_088CB504;
    case 84u: goto L_088CB510;
    case 85u: goto L_088CB51C;
    case 86u: goto L_088CB538;
    case 87u: goto L_088CB540;
    case 88u: goto L_088CB548;
    case 89u: goto L_088CB558;
    case 90u: goto L_088CB578;
    case 91u: goto L_088CB588;
    case 92u: goto L_088CB594;
    case 93u: goto L_088CB5A0;
    case 94u: goto L_088CB5B0;
    case 95u: goto L_088CB5B8;
    case 96u: goto L_088CB5C4;
    case 97u: goto L_088CB5E4;
    case 98u: goto L_088CB5F8;
    case 99u: goto L_088CB650;
    case 100u: goto L_088CB678;
    case 101u: goto L_088CB69C;
    case 102u: goto L_088CB6C4;
    case 103u: goto L_088CB6E0;
    case 104u: goto L_088CB710;
    case 105u: goto L_088CB728;
    case 106u: goto L_088CB72C;
    case 107u: goto L_088CB730;
    case 108u: goto L_088CB74C;
    case 109u: goto L_088CB754;
    case 110u: goto L_088CB76C;
    case 111u: goto L_088CB778;
    case 112u: goto L_088CB788;
    case 113u: goto L_088CB7B8;
    case 114u: goto L_088CB7D8;
    case 115u: goto L_088CB7E8;
    case 116u: goto L_088CB818;
    case 117u: goto L_088CB828;
    case 118u: goto L_088CB840;
    case 119u: goto L_088CB848;
    case 120u: goto L_088CB850;
    case 121u: goto L_088CB860;
    case 122u: goto L_088CB870;
    case 123u: goto L_088CB878;
    case 124u: goto L_088CB888;
    case 125u: goto L_088CB8CC;
    case 126u: goto L_088CB8E8;
    case 127u: goto L_088CB8FC;
    case 128u: goto L_088CB910;
    case 129u: goto L_088CB918;
    case 130u: goto L_088CB930;
    case 131u: goto L_088CB954;
    case 132u: goto L_088CB95C;
    case 133u: goto L_088CB964;
    case 134u: goto L_088CB96C;
    case 135u: goto L_088CB980;
    case 136u: goto L_088CB984;
    case 137u: goto L_088CB998;
    case 138u: goto L_088CB9A8;
    case 139u: goto L_088CB9C0;
    case 140u: goto L_088CB9C8;
    case 141u: goto L_088CB9F4;
    case 142u: goto L_088CBA08;
    case 143u: goto L_088CBA14;
    case 144u: goto L_088CBA30;
    case 145u: goto L_088CBA54;
    case 146u: goto L_088CBA58;
    case 147u: goto L_088CBA60;
    case 148u: goto L_088CBA68;
    case 149u: goto L_088CBA74;
    case 150u: goto L_088CBA88;
    case 151u: goto L_088CBA90;
    case 152u: goto L_088CBAAC;
    case 153u: goto L_088CBAB4;
    case 154u: goto L_088CBAD8;
    case 155u: goto L_088CBAE8;
    case 156u: goto L_088CBAF0;
    case 157u: goto L_088CBAF8;
    case 158u: goto L_088CBB00;
    case 159u: goto L_088CBB20;
    case 160u: goto L_088CBB30;
    case 161u: goto L_088CBB58;
    case 162u: goto L_088CBB60;
    case 163u: goto L_088CBB9C;
    case 164u: goto L_088CBBC0;
    case 165u: goto L_088CBBEC;
    case 166u: goto L_088CBC34;
    case 167u: goto L_088CBC3C;
    case 168u: goto L_088CBC44;
    case 169u: goto L_088CBC94;
    case 170u: goto L_088CBCE4;
    case 171u: goto L_088CBCF0;
    case 172u: goto L_088CBCF8;
    case 173u: goto L_088CBD08;
    case 174u: goto L_088CBD10;
    case 175u: goto L_088CBD18;
    case 176u: goto L_088CBD70;
    case 177u: goto L_088CBDC0;
    case 178u: goto L_088CBDD0;
    case 179u: goto L_088CBDD8;
    case 180u: goto L_088CBE20;
    case 181u: goto L_088CBE2C;
    case 182u: goto L_088CBE5C;
    case 183u: goto L_088CBE74;
    case 184u: goto L_088CBE84;
    case 185u: goto L_088CBE9C;
    case 186u: goto L_088CBEB4;
    case 187u: goto L_088CBEC8;
    case 188u: goto L_088CBED8;
    case 189u: goto L_088CBEE0;
    case 190u: goto L_088CBEE8;
    case 191u: goto L_088CBEF8;
    case 192u: goto L_088CBF08;
    case 193u: goto L_088CBF10;
    case 194u: goto L_088CBF14;
    case 195u: goto L_088CBF18;
    case 196u: goto L_088CBF44;
    case 197u: goto L_088CBF54;
    case 198u: goto L_088CBF5C;
    case 199u: goto L_088CBF64;
    case 200u: goto L_088CBF74;
    case 201u: goto L_088CBF7C;
    case 202u: goto L_088CBF84;
    case 203u: goto L_088CBF9C;
    case 204u: goto L_088CBFA4;
    case 205u: goto L_088CBFAC;
    case 206u: goto L_088CBFB4;
    case 207u: goto L_088CBFC8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088CB000:
    aot_gpr[31] = (0x088CB008u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0222_entry, 222u, 87u, 0x088E2494u>(ctx, &aot_mem) && ctx.pc == 0x088CB008u) goto L_088CB008;
    return;
L_088CB008:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088CB00C;
L_088CB00C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[5]);
      if (branch_taken) {
          goto L_088CB0C4;
      }
      goto L_088CB014;
    }
L_088CB014:
    aot_gpr[10] = (aot_gpr[5] < static_cast<std::uint32_t>(19000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB044;
      }
      goto L_088CB020;
    }
L_088CB020:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088CB03C;
      }
      goto L_088CB028;
    }
L_088CB028:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x088CB038u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0227_entry, 227u, 158u, 0x088E7BB0u>(ctx, &aot_mem) && ctx.pc == 0x088CB038u) goto L_088CB038;
    return;
L_088CB038:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088CB03C;
L_088CB03C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[5]);
      if (branch_taken) {
          goto L_088CB0C4;
      }
      goto L_088CB044;
    }
L_088CB044:
    aot_gpr[10] = (aot_gpr[5] < static_cast<std::uint32_t>(22000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB074;
      }
      goto L_088CB050;
    }
L_088CB050:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088CB06C;
      }
      goto L_088CB058;
    }
L_088CB058:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x088CB068u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0229_entry, 229u, 9u, 0x088E90D0u>(ctx, &aot_mem) && ctx.pc == 0x088CB068u) goto L_088CB068;
    return;
L_088CB068:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088CB06C;
L_088CB06C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[5]);
      if (branch_taken) {
          goto L_088CB0C4;
      }
      goto L_088CB074;
    }
L_088CB074:
    aot_gpr[5] = (aot_gpr[5] < static_cast<std::uint32_t>(25000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB0A4;
      }
      goto L_088CB080;
    }
L_088CB080:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088CB09C;
      }
      goto L_088CB088;
    }
L_088CB088:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x088CB098u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0222_entry, 222u, 87u, 0x088E2494u>(ctx, &aot_mem) && ctx.pc == 0x088CB098u) goto L_088CB098;
    return;
L_088CB098:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088CB09C;
L_088CB09C:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[5]);
      if (branch_taken) {
          goto L_088CB0C4;
      }
      goto L_088CB0A4;
    }
L_088CB0A4:
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088CB0C0;
      }
      goto L_088CB0AC;
    }
L_088CB0AC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(40)));
    aot_gpr[31] = (0x088CB0BCu);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0222_entry, 222u, 87u, 0x088E2494u>(ctx, &aot_mem) && ctx.pc == 0x088CB0BCu) goto L_088CB0BC;
    return;
L_088CB0BC:
    aot_gpr[5] = (aot_gpr[17] | 0u);
    goto L_088CB0C0;
L_088CB0C0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    goto L_088CB0C4;
L_088CB0C4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB0D8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[21]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[22]);
    aot_gpr[22] = (aot_gpr[10] | 0u);
    aot_gpr[21] = (aot_gpr[9] | 0u);
    aot_gpr[20] = (aot_gpr[8] | 0u);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[23]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[31]);
    aot_gpr[31] = (0x088CB120u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 123u, 0x0891E79Cu>(ctx, &aot_mem) && ctx.pc == 0x088CB120u) goto L_088CB120;
    return;
L_088CB120:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1672));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1648));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[7] = (2213u << 16u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(96));
    aot_gpr[5] = (0u | 2u);
    aot_gpr[6] = (0u | 304u);
    aot_gpr[31] = (0x088CB150u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-20236));
    if (rt.invoke_chained_direct<&recomp_unit_0553_entry, 553u, 79u, 0x08A2D568u>(ctx, &aot_mem) && ctx.pc == 0x088CB150u) goto L_088CB150;
    return;
L_088CB150:
    aot_gpr[31] = (0x088CB158u);
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(704));
    if (rt.invoke_chained_direct<&recomp_unit_0250_entry, 250u, 148u, 0x088FEB28u>(ctx, &aot_mem) && ctx.pc == 0x088CB158u) goto L_088CB158;
    return;
L_088CB158:
    aot_gpr[5] = (aot_gpr[18] + static_cast<std::uint32_t>(20));
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    aot_gpr[31] = (0x088CB168u);
    aot_gpr[6] = (0u | 764u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CB168u) goto L_088CB168;
    return;
L_088CB168:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(784));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[16] + static_cast<std::uint32_t>(30))))));
    aot_gpr[4] = (aot_gpr[4] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) > 0;
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088CB1A0;
      }
      goto L_088CB190;
    }
L_088CB190:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088CB23C;
      }
      goto L_088CB198;
    }
L_088CB198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB1B8;
      }
      goto L_088CB1A0;
    }
L_088CB1A0:
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088CB1E4;
      }
      goto L_088CB1A8;
    }
L_088CB1A8:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CB210;
      }
      goto L_088CB1B0;
    }
L_088CB1B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB23C;
      }
      goto L_088CB1B8;
    }
L_088CB1B8:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CB1DC;
      }
      goto L_088CB1C4;
    }
L_088CB1C4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088CB1D8u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0241_entry, 241u, 14u, 0x088F517Cu>(ctx, &aot_mem) && ctx.pc == 0x088CB1D8u) goto L_088CB1D8;
    return;
L_088CB1D8:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    goto L_088CB1DC;
L_088CB1DC:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
      if (branch_taken) {
          goto L_088CB23C;
      }
      goto L_088CB1E4;
    }
L_088CB1E4:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CB208;
      }
      goto L_088CB1F0;
    }
L_088CB1F0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088CB204u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0242_entry, 242u, 11u, 0x088F60C0u>(ctx, &aot_mem) && ctx.pc == 0x088CB204u) goto L_088CB204;
    return;
L_088CB204:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    goto L_088CB208;
L_088CB208:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
      if (branch_taken) {
          goto L_088CB23C;
      }
      goto L_088CB210;
    }
L_088CB210:
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CB234;
      }
      goto L_088CB21C;
    }
L_088CB21C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[31] = (0x088CB230u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0244_entry, 244u, 54u, 0x088F86C0u>(ctx, &aot_mem) && ctx.pc == 0x088CB230u) goto L_088CB230;
    return;
L_088CB230:
    aot_gpr[4] = (aot_gpr[23] | 0u);
    goto L_088CB234;
L_088CB234:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(32), aot_gpr[4]);
      if (branch_taken) {
          goto L_088CB23C;
      }
      goto L_088CB23C;
    }
L_088CB23C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(56));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(380), aot_gpr[5]);
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[23] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CB274;
      }
      goto L_088CB254;
    }
L_088CB254:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(36)));
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[31] = (0x088CB264u);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CB264u) goto L_088CB264;
    return;
L_088CB264:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[23] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_088CB274;
L_088CB274:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), aot_gpr[4]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[17] | 0u);
    aot_gpr[7] = (aot_gpr[18] | 0u);
    aot_gpr[8] = (aot_gpr[19] | 0u);
    aot_gpr[9] = (aot_gpr[20] | 0u);
    aot_gpr[31] = (0x088CB298u);
    aot_gpr[10] = (aot_gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 125u, 0x088CAEFCu>(ctx, &aot_mem) && ctx.pc == 0x088CB298u) goto L_088CB298;
    return;
L_088CB298:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088CB2B8;
      }
      goto L_088CB2A8;
    }
L_088CB2A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(200)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(4), aot_gpr[16]);
    aot_gpr[4] = (2216u << 16u);
    goto L_088CB2B8;
L_088CB2B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[17] = (0u | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088CB2E0u);
    aot_gpr[6] = (0u | 528u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB2E0u) goto L_088CB2E0;
    return;
L_088CB2E0:
    aot_gpr[20] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[20] == 0u;
    aot_gpr[4] = (aot_gpr[20] | 0u);
      if (branch_taken) {
          goto L_088CB2FC;
      }
      goto L_088CB2EC;
    }
L_088CB2EC:
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088CB2F8u);
    aot_gpr[6] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0246_entry, 246u, 172u, 0x088FAF28u>(ctx, &aot_mem) && ctx.pc == 0x088CB2F8u) goto L_088CB2F8;
    return;
L_088CB2F8:
    aot_gpr[17] = (aot_gpr[20] | 0u);
    goto L_088CB2FC;
L_088CB2FC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), aot_gpr[17]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CB32C;
      }
      goto L_088CB30C;
    }
L_088CB30C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(728)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088CB31Cu);
    aot_gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 163u, 0x08A3A838u>(ctx, &aot_mem) && ctx.pc == 0x088CB31Cu) goto L_088CB31C;
    return;
L_088CB31C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[19] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    goto L_088CB32C;
L_088CB32C:
    aot_gpr[5] = (aot_gpr[22] & 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(728), aot_gpr[4]);
    aot_gpr[4] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(732), 0u);
      if (branch_taken) {
          goto L_088CB354;
      }
      goto L_088CB348;
    }
L_088CB348:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] | 2u);
      if (branch_taken) {
          goto L_088CB360;
      }
      goto L_088CB354;
    }
L_088CB354:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    goto L_088CB360;
L_088CB360:
    aot_gpr[5] = (aot_gpr[22] & 32u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[4] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    if (aot_gpr[4] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_088CB388;
    }
    goto L_088CB37C;
L_088CB37C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] | 32u);
      if (branch_taken) {
          goto L_088CB390;
      }
      goto L_088CB388;
    }
L_088CB388:
    aot_gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    aot_gpr[4] = (aot_gpr[4] & aot_gpr[5]);
    goto L_088CB390;
L_088CB390:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CB3BC;
      }
      goto L_088CB3A0;
    }
L_088CB3A0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(736)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088CB3B8u);
    aot_gpr[8] = (aot_gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 82u, 0x08866664u>(ctx, &aot_mem) && ctx.pc == 0x088CB3B8u) goto L_088CB3B8;
    return;
L_088CB3B8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088CB3BC;
L_088CB3BC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(736), aot_gpr[4]);
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[17] == 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CB3E0;
      }
      goto L_088CB3CC;
    }
L_088CB3CC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[18] + static_cast<std::uint32_t>(744)));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x088CB3DCu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 114u, 0x088D2B78u>(ctx, &aot_mem) && ctx.pc == 0x088CB3DCu) goto L_088CB3DC;
    return;
L_088CB3DC:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088CB3E0;
L_088CB3E0:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(744), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[21] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[22] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[23] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB414:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[17] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088CB5E4;
      }
      goto L_088CB430;
    }
L_088CB430:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1672));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1648));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3020)));
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[5];
    aot_gpr[31] = (0x088CB464u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB464u) goto L_088CB464;
    return;
L_088CB464:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(972)));
    aot_gpr[8] = (aot_gpr[7] & 2u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(64));
    aot_gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (0u < aot_gpr[8] ? 1u : 0u);
    aot_gpr[6] = (0u | 0u);
    aot_gpr[8] = (aot_gpr[8] & 255u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[9]);
      if (branch_taken) {
          goto L_088CB4A8;
      }
      goto L_088CB490;
    }
L_088CB490:
    aot_gpr[7] = (aot_gpr[7] & 32u);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    if (aot_gpr[7] != 0u) {
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_088CB4AC;
    }
    goto L_088CB4A4;
L_088CB4A4:
    aot_gpr[6] = (0u | 1u);
    goto L_088CB4A8;
L_088CB4A8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_088CB4AC;
L_088CB4AC:
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x088CB4BCu);
    aot_gpr[5] = (aot_gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB4BCu) goto L_088CB4BC;
    return;
L_088CB4BC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB4E4;
      }
      goto L_088CB4C8;
    }
L_088CB4C8:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088CB4E4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB4E4u) goto L_088CB4E4;
    return;
L_088CB4E4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(736)));
    aot_gpr[31] = (0x088CB4F0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(48), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 183u, 0x08866CF0u>(ctx, &aot_mem) && ctx.pc == 0x088CB4F0u) goto L_088CB4F0;
    return;
L_088CB4F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CB588;
      }
      goto L_088CB504;
    }
L_088CB504:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_088CB548;
      }
      goto L_088CB510;
    }
L_088CB510:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[6] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088CB540;
      }
      goto L_088CB51C;
    }
L_088CB51C:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[7] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088CB538u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB538u) goto L_088CB538;
    return;
L_088CB538:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB548;
      }
      goto L_088CB540;
    }
L_088CB540:
    aot_gpr[31] = (0x088CB548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x088CB548u) goto L_088CB548;
    return;
L_088CB548:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(728)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (2216u << 16u);
      if (branch_taken) {
          goto L_088CB578;
      }
      goto L_088CB558;
    }
L_088CB558:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088CB578u);
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB578u) goto L_088CB578;
    return;
L_088CB578:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(744)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(728), 0u);
    aot_gpr[31] = (0x088CB588u);
    aot_gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 116u, 0x088D2BC0u>(ctx, &aot_mem) && ctx.pc == 0x088CB588u) goto L_088CB588;
    return;
L_088CB588:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(704));
    aot_gpr[31] = (0x088CB594u);
    aot_gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0250_entry, 250u, 150u, 0x088FEB5Cu>(ctx, &aot_mem) && ctx.pc == 0x088CB594u) goto L_088CB594;
    return;
L_088CB594:
    aot_gpr[4] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_088CB5B0;
      }
      goto L_088CB5A0;
    }
L_088CB5A0:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-3152));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_088CB5B0;
L_088CB5B0:
    aot_gpr[31] = (0x088CB5B8u);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0282_entry, 282u, 126u, 0x0891E7F4u>(ctx, &aot_mem) && ctx.pc == 0x088CB5B8u) goto L_088CB5B8;
    return;
L_088CB5B8:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (2216u << 16u);
      if (branch_taken) {
          goto L_088CB5E4;
      }
      goto L_088CB5C4;
    }
L_088CB5C4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088CB5E4u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB5E4u) goto L_088CB5E4;
    return;
L_088CB5E4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB5F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[5] + static_cast<std::uint32_t>(784));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3020)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[7] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088CB650u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB650u) goto L_088CB650;
    return;
L_088CB650:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(972)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088CB678u);
    aot_gpr[7] = (aot_gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB678u) goto L_088CB678;
    return;
L_088CB678:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(736)));
    aot_gpr[31] = (0x088CB69Cu);
    aot_gpr[6] = (aot_gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 112u, 0x08866884u>(ctx, &aot_mem) && ctx.pc == 0x088CB69Cu) goto L_088CB69C;
    return;
L_088CB69C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1424));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[4]);
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
L_088CB6C4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x088CB6E0u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0222_entry, 222u, 112u, 0x088E269Cu>(ctx, &aot_mem) && ctx.pc == 0x088CB6E0u) goto L_088CB6E0;
    return;
L_088CB6E0:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(972)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(48));
    aot_gpr[4] = (2218u << 16u);
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-7488)));
    aot_gpr[5] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[7] = (aot_gpr[8] ^ 8u);
    aot_gpr[7] = (aot_gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088CB72C;
      }
      goto L_088CB710;
    }
L_088CB710:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (aot_gpr[7] & 64u);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[7] = (aot_gpr[4] & 255u);
      if (branch_taken) {
          goto L_088CB730;
      }
      goto L_088CB728;
    }
L_088CB728:
    aot_gpr[4] = (0u | 1u);
    goto L_088CB72C;
L_088CB72C:
    aot_gpr[7] = (aot_gpr[4] & 255u);
    goto L_088CB730;
L_088CB730:
    aot_gpr[4] = (aot_gpr[5] | 0u);
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[7] | 0u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    aot_gpr[7] = (0u | 0u);
    jump_target = aot_gpr[9];
    aot_gpr[31] = (0x088CB74Cu);
    aot_gpr[8] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB74Cu) goto L_088CB74C;
    return;
L_088CB74C:
    aot_gpr[31] = (0x088CB754u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(736)));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 124u, 0x08866918u>(ctx, &aot_mem) && ctx.pc == 0x088CB754u) goto L_088CB754;
    return;
L_088CB754:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] & 64u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CB778;
      }
      goto L_088CB76C;
    }
L_088CB76C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(744)));
    aot_gpr[31] = (0x088CB778u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 139u, 0x088D2E10u>(ctx, &aot_mem) && ctx.pc == 0x088CB778u) goto L_088CB778;
    return;
L_088CB778:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB788:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(972)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(56));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088CB7B8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB7B8u) goto L_088CB7B8;
    return;
L_088CB7B8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(3020)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(24));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x088CB7D8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CB7D8u) goto L_088CB7D8;
    return;
L_088CB7D8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB7E8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (0u | 2u);
    aot_gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(712), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(716), aot_gpr[4]);
    aot_gpr[4] = (2215u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(26492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(732)));
      if (branch_taken) {
          goto L_088CB828;
      }
      goto L_088CB818;
    }
L_088CB818:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    aot_gpr[6] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(1368), aot_gpr[6]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(732)));
    goto L_088CB828;
L_088CB828:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(728)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB850;
      }
      goto L_088CB840;
    }
L_088CB840:
    aot_gpr[31] = (0x088CB848u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 120u, 0x08821C5Cu>(ctx, &aot_mem) && ctx.pc == 0x088CB848u) goto L_088CB848;
    return;
L_088CB848:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(732)));
      if (branch_taken) {
          goto L_088CB860;
      }
      goto L_088CB850;
    }
L_088CB850:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(500), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(504), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(732)));
    goto L_088CB860;
L_088CB860:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088CB878;
      }
      goto L_088CB870;
    }
L_088CB870:
    aot_gpr[31] = (0x088CB878u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 165u, 0x08863D8Cu>(ctx, &aot_mem) && ctx.pc == 0x088CB878u) goto L_088CB878;
    return;
L_088CB878:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CB888:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-128));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(104), aot_gpr[19]);
    aot_gpr[19] = (2215u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(96), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(26492)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(80), __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_fpr[20] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_gpr[4] = (aot_gpr[7] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(84), __builtin_bit_cast(std::uint32_t, aot_fpr[22]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(88), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(92), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(100), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(108), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(112), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_088CB918;
      }
      goto L_088CB8CC;
    }
L_088CB8CC:
    aot_gpr[5] = (17723u << 16u);
    aot_gpr[5] = (aot_gpr[5] | 32768u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[20]) || std::isnan(aot_fpr[12])) && aot_fpr[20] == aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[5] = (17658u << 16u);
      if (branch_taken) {
          goto L_088CB918;
      }
      goto L_088CB8E8;
    }
L_088CB8E8:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[20]) || std::isnan(aot_fpr[12])) && aot_fpr[20] == aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CB918;
      }
      goto L_088CB8FC;
    }
L_088CB8FC:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(732)));
    aot_gpr[6] = (0u | 3u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088CB918;
      }
      goto L_088CB910;
    }
L_088CB910:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB964;
      }
      goto L_088CB918;
    }
L_088CB918:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (aot_gpr[4] & 128u);
    aot_gpr[4] = (0u < aot_gpr[4] ? 1u : 0u);
    aot_gpr[4] = (aot_gpr[4] & 255u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CB95C;
      }
      goto L_088CB930;
    }
L_088CB930:
    aot_gpr[4] = (17723u << 16u);
    aot_fpr[24] = __builtin_bit_cast(float, 0u);
    aot_gpr[4] = (aot_gpr[4] | 32768u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[18] = (0u | 0u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[20]) || std::isnan(aot_fpr[12])) && aot_fpr[20] == aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088CB980;
      }
      goto L_088CB954;
    }
L_088CB954:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[5] = (17658u << 16u);
      if (branch_taken) {
          goto L_088CB96C;
      }
      goto L_088CB95C;
    }
L_088CB95C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBBC0;
      }
      goto L_088CB964;
    }
L_088CB964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBBC0;
      }
      goto L_088CB96C;
    }
L_088CB96C:
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[20]) || std::isnan(aot_fpr[12])) && aot_fpr[20] == aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CB984;
      }
      goto L_088CB980;
    }
L_088CB980:
    aot_gpr[18] = (0u | 1u);
    goto L_088CB984;
L_088CB984:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(452)));
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_gpr[18] = (aot_gpr[18] & 255u);
      if (branch_taken) {
          goto L_088CB9C8;
      }
      goto L_088CB998;
    }
L_088CB998:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CB9C0;
      }
      goto L_088CB9A8;
    }
L_088CB9A8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(200)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    aot_gpr[31] = (0x088CB9C0u);
    aot_gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 6u, 0x088D0058u>(ctx, &aot_mem) && ctx.pc == 0x088CB9C0u) goto L_088CB9C0;
    return;
L_088CB9C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBBC0;
      }
      goto L_088CB9C8;
    }
L_088CB9C8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(36)));
    aot_gpr[6] = (16384u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(8)));
    aot_fpr[22] = __builtin_bit_cast(float, aot_gpr[6]);
    aot_gpr[5] = (16800u << 16u);
    { const float fs = aot_fpr[20]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088CBA14;
      }
      goto L_088CB9F4;
    }
L_088CB9F4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(732)));
    aot_gpr[6] = (0u | 3u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_088CBA14;
      }
      goto L_088CBA08;
    }
L_088CBA08:
    aot_gpr[20] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(452), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
      if (branch_taken) {
          goto L_088CBA58;
      }
      goto L_088CBA14;
    }
L_088CBA14:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(452)));
    aot_gpr[5] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[5]);
    ctx.set_fpu_condition((aot_fpr[14] <= aot_fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CBA58;
      }
      goto L_088CBA30;
    }
L_088CBA30:
    aot_fpr[14] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(452)));
    aot_fpr[13] = aot_fpr[14] - aot_fpr[13];
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(452), __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(48)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(452)));
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CBA58;
      }
      goto L_088CBA54;
    }
L_088CBA54:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(452), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    goto L_088CBA58;
L_088CBA58:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBA68;
      }
      goto L_088CBA60;
    }
L_088CBA60:
    aot_gpr[31] = (0x088CBA68u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    goto L_088CB7E8;
L_088CBA68:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[19] + static_cast<std::uint32_t>(26492)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBAD8;
      }
      goto L_088CBA74;
    }
L_088CBA74:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(732)));
    aot_gpr[5] = (0u | 3u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_088CBAD8;
      }
      goto L_088CBA88;
    }
L_088CBA88:
    aot_gpr[31] = (0x088CBA90u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0320_entry, 320u, 96u, 0x08944D6Cu>(ctx, &aot_mem) && ctx.pc == 0x088CBA90u) goto L_088CBA90;
    return;
L_088CBA90:
    aot_gpr[4] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[4] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const bool branch_taken = aot_gpr[18] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
      if (branch_taken) {
          goto L_088CBAD8;
      }
      goto L_088CBAAC;
    }
L_088CBAAC:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBAD8;
      }
      goto L_088CBAB4;
    }
L_088CBAB4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(32)));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[5] = (2218u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(408)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x088CBAD8u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 138u, 0x088DCB88u>(ctx, &aot_mem) && ctx.pc == 0x088CBAD8u) goto L_088CBAD8;
    return;
L_088CBAD8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(40)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBB20;
      }
      goto L_088CBAE8;
    }
L_088CBAE8:
    { const bool branch_taken = aot_gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBB00;
      }
      goto L_088CBAF0;
    }
L_088CBAF0:
    { const bool branch_taken = aot_gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088CBB00;
      }
      goto L_088CBAF8;
    }
L_088CBAF8:
    aot_gpr[5] = (17658u << 16u);
    aot_fpr[20] = __builtin_bit_cast(float, aot_gpr[5]);
    goto L_088CBB00;
L_088CBB00:
    aot_gpr[5] = (aot_gpr[18] | aot_gpr[20]);
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[20]));
    aot_gpr[6] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(200)));
    aot_gpr[6] = (aot_gpr[6] & 255u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x088CBB20u);
    aot_gpr[7] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 6u, 0x088D0058u>(ctx, &aot_mem) && ctx.pc == 0x088CBB20u) goto L_088CBB20;
    return;
L_088CBB20:
    ctx.set_fpu_condition((aot_fpr[20] <= aot_fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CBBC0;
      }
      goto L_088CBB30;
    }
L_088CBB30:
    aot_fpr[13] = aot_fpr[20] - aot_fpr[22];
    aot_gpr[4] = (15872u << 16u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[4]);
    aot_gpr[4] = (16256u << 16u);
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    { const float fs = aot_fpr[13]; const float ft = aot_fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[13] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[13] = fs * ft; }
    ctx.set_fpu_condition((aot_fpr[13] <= aot_fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_088CBB60;
    }
    goto L_088CBB58;
L_088CBB58:
    aot_fpr[13] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_088CBB60;
L_088CBB60:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(68), __builtin_bit_cast(std::uint32_t, aot_fpr[24]));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(72), __builtin_bit_cast(std::uint32_t, aot_fpr[12]));
    { const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    aot_gpr[4] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[12] = __builtin_bit_cast(float, aot_gpr[4]);
    ctx.set_fpu_condition((aot_fpr[12] <= aot_fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CBBC0;
      }
      goto L_088CBB9C;
    }
L_088CBB9C:
    ctx.execute_vfpu_vdot_ct<16u, 20u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<20u, 20u, 16u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(64);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(64));
    aot_fpr[12] = __builtin_bit_cast(float, __builtin_bit_cast(std::uint32_t, aot_fpr[13]));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(732)));
    aot_gpr[31] = (0x088CBBC0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 105u, 0x08821AE4u>(ctx, &aot_mem) && ctx.pc == 0x088CBBC0u) goto L_088CBBC0;
    return;
L_088CBBC0:
    aot_fpr[20] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(80)));
    aot_fpr[22] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(84)));
    aot_fpr[24] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(88)));
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(92)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(96)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(100)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(104)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(108)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBBEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[8] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(32)));
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(48)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(360)));
    aot_gpr[6] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[7] = (aot_gpr[8] << 2u);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (65535u << 16u);
    aot_gpr[7] = (aot_gpr[7] & aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[8] | 0u);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    aot_gpr[8] = (3u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[7] == aot_gpr[8];
    aot_gpr[8] = (2u << 16u);
      if (branch_taken) {
          goto L_088CBD18;
      }
      goto L_088CBC34;
    }
L_088CBC34:
    { const bool branch_taken = aot_gpr[7] == aot_gpr[8];
    aot_gpr[8] = (1u << 16u);
      if (branch_taken) {
          goto L_088CBC94;
      }
      goto L_088CBC3C;
    }
L_088CBC3C:
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    // nop
      if (branch_taken) {
          goto L_088CBDD8;
      }
      goto L_088CBC44;
    }
L_088CBC44:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[9] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(364)));
    aot_gpr[8] = (aot_gpr[8] | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(364), aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[4] << 2u);
    aot_gpr[7] = (aot_gpr[9] + aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(-7492)));
    aot_gpr[7] = (aot_gpr[7] & 65535u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(36)));
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088CBDD8;
      }
      goto L_088CBC94;
    }
L_088CBC94:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[9] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(364)));
    aot_gpr[8] = (aot_gpr[8] | 2u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(364), aot_gpr[8]);
    aot_gpr[7] = (aot_gpr[4] << 2u);
    aot_gpr[7] = (aot_gpr[9] + aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[8] = (2218u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(5260)));
    aot_gpr[7] = (aot_gpr[7] & 65535u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(12)));
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(20)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(88)));
    aot_gpr[8] = (aot_gpr[8] & 16u);
    { const bool branch_taken = aot_gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBCF8;
      }
      goto L_088CBCE4;
    }
L_088CBCE4:
    aot_gpr[7] = (16128u << 16u);
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
    goto L_088CBCF0;
L_088CBCF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBDD8;
      }
      goto L_088CBCF8;
    }
L_088CBCF8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(88)));
    aot_gpr[7] = (aot_gpr[7] & 32u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBD10;
      }
      goto L_088CBD08;
    }
L_088CBD08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBCF0;
      }
      goto L_088CBD10;
    }
L_088CBD10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBE20;
      }
      goto L_088CBD18;
    }
L_088CBD18:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (aot_gpr[5] + static_cast<std::uint32_t>(32));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(364)));
    aot_gpr[10] = (aot_gpr[4] << 2u);
    aot_gpr[9] = (aot_gpr[9] | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(364), aot_gpr[9]);
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[10]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (aot_gpr[7] & 15u);
    aot_gpr[7] = (aot_gpr[7] & 15u);
    aot_gpr[8] = (aot_gpr[7] << 5u);
    aot_gpr[7] = (aot_gpr[7] << 2u);
    aot_gpr[7] = (aot_gpr[8] - aot_gpr[7]);
    aot_gpr[8] = (2215u << 16u);
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(23380)));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (aot_gpr[8] + aot_gpr[7]);
    aot_fpr[13] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(4)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[9] + static_cast<std::uint32_t>(2060)));
    aot_gpr[8] = (0u | 1u);
    { const bool branch_taken = aot_gpr[7] != aot_gpr[8];
    { const float fs = aot_fpr[12]; const float ft = aot_fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr[12] = __builtin_bit_cast(float, 0x7FC00000u); else aot_fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088CBDD0;
      }
      goto L_088CBD70;
    }
L_088CBD70:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (0u + static_cast<std::uint32_t>(-257));
    aot_gpr[9] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(376)));
    aot_gpr[8] = (aot_gpr[9] & aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(376), aot_gpr[8]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(96));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<21u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<16u, 20u, 21u, 3u>();
    aot_gpr[7] = (ctx.vfpu_scalar_bits_ct<16u>());
    aot_fpr[13] = __builtin_bit_cast(float, aot_gpr[7]);
    aot_gpr[7] = (49006u << 16u);
    aot_gpr[7] = (aot_gpr[7] | 5243u);
    aot_fpr[14] = __builtin_bit_cast(float, aot_gpr[7]);
    ctx.set_fpu_condition((aot_fpr[13] < aot_fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088CBDD0;
      }
      goto L_088CBDC0;
    }
L_088CBDC0:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(376)));
    aot_gpr[8] = (aot_gpr[8] | 256u);
    PSPRECOMP_AOT_STORE32(aot_gpr[7] + static_cast<std::uint32_t>(376), aot_gpr[8]);
    goto L_088CBDD0;
L_088CBDD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBDD8;
      }
      goto L_088CBDD8;
    }
L_088CBDD8:
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(160);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(176);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(192);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[7] + static_cast<std::uint32_t>(208);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 0u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 4u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 8u)),
        __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<20u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 32u, 3u);
      ctx.read_vfpu_vector_ct<20u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 21u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<21u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 3u>(vfpu_d); }
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(40));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<20u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr[29] + static_cast<std::uint32_t>(0);
      PSPRECOMP_AOT_STORE32(vfpu_address + 0u, __builtin_bit_cast(std::uint32_t, vfpu_value[0]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 4u, __builtin_bit_cast(std::uint32_t, vfpu_value[1]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 8u, __builtin_bit_cast(std::uint32_t, vfpu_value[2]));
      PSPRECOMP_AOT_STORE32(vfpu_address + 12u, __builtin_bit_cast(std::uint32_t, vfpu_value[3])); }
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[4] = (aot_gpr[5] + aot_gpr[4]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (aot_gpr[7] | 0u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x088CBE20u);
    aot_gpr[7] = (0u | 0u);
    goto L_088CB888;
L_088CBE20:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088CBE2C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(376)));
    aot_gpr[6] = (aot_gpr[6] & 512u);
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 10u, 0x088CC09Cu>(ctx, &aot_mem); return;
      }
      goto L_088CBE5C;
    }
L_088CBE5C:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[7] = (aot_gpr[6] & 4u);
    aot_gpr[7] = (0u < aot_gpr[7] ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] != 0u;
    aot_gpr[6] = (aot_gpr[6] & 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 10u, 0x088CC09Cu>(ctx, &aot_mem); return;
      }
      goto L_088CBE74;
    }
L_088CBE74:
    aot_gpr[6] = (0u < aot_gpr[6] ? 1u : 0u);
    aot_gpr[6] = (aot_gpr[6] & 255u);
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 10u, 0x088CC09Cu>(ctx, &aot_mem); return;
      }
      goto L_088CBE84;
    }
L_088CBE84:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(48)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(504)));
    aot_gpr[7] = (static_cast<std::int32_t>(aot_gpr[7]) < 10 ? 1u : 0u);
    aot_gpr[7] = (aot_gpr[7] & 255u);
    { const bool branch_taken = aot_gpr[7] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 10u, 0x088CC09Cu>(ctx, &aot_mem); return;
      }
      goto L_088CBE9C;
    }
L_088CBE9C:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(376)));
    aot_gpr[5] = (aot_gpr[5] & 8192u);
    aot_gpr[5] = (0u < aot_gpr[5] ? 1u : 0u);
    aot_gpr[5] = (aot_gpr[5] & 255u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088CBF84;
      }
      goto L_088CBEB4;
    }
L_088CBEB4:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(732)));
    aot_gpr[17] = (0u | 4u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[6] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088CBEE8;
      }
      goto L_088CBEC8;
    }
L_088CBEC8:
    aot_gpr[5] = (32768u << 16u);
    aot_gpr[4] = (0u | 0u);
    aot_gpr[31] = (0x088CBED8u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 112u, 0x0882BF00u>(ctx, &aot_mem) && ctx.pc == 0x088CBED8u) goto L_088CBED8;
    return;
L_088CBED8:
    aot_gpr[31] = (0x088CBEE0u);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 109u, 0x0882BE88u>(ctx, &aot_mem) && ctx.pc == 0x088CBEE0u) goto L_088CBEE0;
    return;
L_088CBEE0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_088CBF14;
      }
      goto L_088CBEE8;
    }
L_088CBEE8:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (0u | 5u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    aot_gpr[5] = (0u | 255u);
      if (branch_taken) {
          goto L_088CBF18;
      }
      goto L_088CBEF8;
    }
L_088CBEF8:
    aot_gpr[5] = (32769u << 16u);
    aot_gpr[4] = (0u | 1u);
    aot_gpr[31] = (0x088CBF08u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 112u, 0x0882BF00u>(ctx, &aot_mem) && ctx.pc == 0x088CBF08u) goto L_088CBF08;
    return;
L_088CBF08:
    aot_gpr[31] = (0x088CBF10u);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 109u, 0x0882BE88u>(ctx, &aot_mem) && ctx.pc == 0x088CBF10u) goto L_088CBF10;
    return;
L_088CBF10:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_088CBF14;
L_088CBF14:
    aot_gpr[5] = (0u | 255u);
    goto L_088CBF18;
L_088CBF18:
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[5]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(972)));
    aot_gpr[5] = (aot_gpr[29] | 0u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(72));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    aot_gpr[6] = (0u | 1u);
    jump_target = aot_gpr[8];
    aot_gpr[31] = (0x088CBF44u);
    aot_gpr[7] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088CBF44u) goto L_088CBF44;
    return;
L_088CBF44:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(732)));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != aot_gpr[17];
    // nop
      if (branch_taken) {
          goto L_088CBF64;
      }
      goto L_088CBF54;
    }
L_088CBF54:
    aot_gpr[31] = (0x088CBF5Cu);
    aot_gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 111u, 0x0882BEE0u>(ctx, &aot_mem) && ctx.pc == 0x088CBF5Cu) goto L_088CBF5C;
    return;
L_088CBF5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 10u, 0x088CC09Cu>(ctx, &aot_mem); return;
      }
      goto L_088CBF64;
    }
L_088CBF64:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 5u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 10u, 0x088CC09Cu>(ctx, &aot_mem); return;
      }
      goto L_088CBF74;
    }
L_088CBF74:
    aot_gpr[31] = (0x088CBF7Cu);
    aot_gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 111u, 0x0882BEE0u>(ctx, &aot_mem) && ctx.pc == 0x088CBF7Cu) goto L_088CBF7C;
    return;
L_088CBF7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 10u, 0x088CC09Cu>(ctx, &aot_mem); return;
      }
      goto L_088CBF84;
    }
L_088CBF84:
    aot_fpr[12] = __builtin_bit_cast(float, PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(220)));
    aot_fpr[13] = __builtin_bit_cast(float, 0u);
    ctx.set_fpu_condition((!(std::isnan(aot_fpr[12]) || std::isnan(aot_fpr[13])) && aot_fpr[12] == aot_fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_088CBFC8;
    }
    goto L_088CBF9C;
L_088CBF9C:
    aot_gpr[31] = (0x088CBFA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 103u, 0x0882BE2Cu>(ctx, &aot_mem) && ctx.pc == 0x088CBFA4u) goto L_088CBFA4;
    return;
L_088CBFA4:
    if (aot_gpr[2] == 0u) {
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_088CBFC8;
    }
    goto L_088CBFAC;
L_088CBFAC:
    aot_gpr[31] = (0x088CBFB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 100u, 0x0882BDC0u>(ctx, &aot_mem) && ctx.pc == 0x088CBFB4u) goto L_088CBFB4;
    return;
L_088CBFB4:
    aot_gpr[4] = (0u | 255u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[4]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (0u | 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1u, 0x088CC000u>(ctx, &aot_mem); return;
      }
      goto L_088CBFC8;
    }
L_088CBFC8:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(3000));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(1)));
    aot_gpr[5] = (aot_gpr[5] << 24u);
    aot_gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[5]) >> 24u));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_gpr[6] = (aot_gpr[6] << 24u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[5]));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr[6]) >> 24u));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(3))))));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr[6]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr[7]));
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (0u | 0u);
    ctx.pc = 0x088CC000u; return;
}

void recomp_unit_0199(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0199_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_199(Runtime &runtime) {
    runtime.register_generated_unit(199u, 0x088CB000u, 4096u, &recomp_unit_0199, &recomp_unit_0199_entry);
    runtime.register_function(0x088CB000u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB008u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB00Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB014u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB020u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB028u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB038u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB03Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB044u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB050u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB058u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB068u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB06Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB074u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB080u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB088u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB098u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB09Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB0A4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB0ACu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB0BCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB0C0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB0C4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB0D8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB120u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB150u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB158u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB168u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB190u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB198u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB1A0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB1A8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB1B0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB1B8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB1C4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB1D8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB1DCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB1E4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB1F0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB204u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB208u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB210u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB21Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB230u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB234u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB23Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB254u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB264u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB274u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB298u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB2A8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB2B8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB2E0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB2ECu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB2F8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB2FCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB30Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB31Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB32Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB348u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB354u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB360u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB37Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB388u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB390u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB3A0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB3B8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB3BCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB3CCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB3DCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB3E0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB414u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB430u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB464u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB490u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB4A4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB4A8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB4ACu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB4BCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB4C8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB4E4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB4F0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB504u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB510u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB51Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB538u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB540u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB548u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB558u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB578u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB588u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB594u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB5A0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB5B0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB5B8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB5C4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB5E4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB5F8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB650u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB678u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB69Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB6C4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB6E0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB710u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB728u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB72Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB730u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB74Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB754u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB76Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB778u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB788u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB7B8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB7D8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB7E8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB818u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB828u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB840u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB848u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB850u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB860u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB870u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB878u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB888u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB8CCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB8E8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB8FCu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB910u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB918u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB930u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB954u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB95Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB964u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB96Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB980u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB984u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB998u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB9A8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB9C0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB9C8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CB9F4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBA08u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBA14u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBA30u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBA54u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBA58u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBA60u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBA68u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBA74u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBA88u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBA90u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBAACu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBAB4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBAD8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBAE8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBAF0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBAF8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBB00u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBB20u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBB30u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBB58u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBB60u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBB9Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBBC0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBBECu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBC34u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBC3Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBC44u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBC94u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBCE4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBCF0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBCF8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBD08u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBD10u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBD18u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBD70u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBDC0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBDD0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBDD8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBE20u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBE2Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBE5Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBE74u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBE84u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBE9Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBEB4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBEC8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBED8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBEE0u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBEE8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBEF8u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBF08u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBF10u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBF14u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBF18u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBF44u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBF54u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBF5Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBF64u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBF74u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBF7Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBF84u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBF9Cu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBFA4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBFACu, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBFB4u, &recomp_unit_0199, "recomp_unit_0199");
    runtime.register_function(0x088CBFC8u, &recomp_unit_0199, "recomp_unit_0199");
}
} // namespace psprecomp
