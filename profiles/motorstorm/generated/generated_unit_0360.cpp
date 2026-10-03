#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0360[1020] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11,
    0, 12, 0, 0, 0, 13, 0, 14, 0, 0, 0, 15, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 0,
    22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0,
    0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0,
    36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 46,
    0, 47, 0, 48, 0, 49, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0,
    0, 58, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0,
    0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 69, 0, 70, 0, 71,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0,
    0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0,
    0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0,
    0, 87, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0,
    0, 94, 0, 0, 0, 0, 95, 96, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 102,
    0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 108,
    0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 114, 0, 0, 115, 0, 0, 116, 0, 117, 0, 118, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 127, 0, 0, 0,
    0, 0, 128, 0, 0, 129, 130, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0,
    0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 141, 0, 142, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 146, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 160, 0, 161, 162, 0, 163, 0, 164, 0, 165, 0, 0, 166, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0,
    0, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 176, 177, 0, 178, 0, 179, 0, 0, 0, 0, 180, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0,
    0, 187, 0, 188, 0, 0, 189, 0, 190, 0, 191, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0,
    0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 202, 0, 203, 0, 0, 204, 0, 0,
    205, 0, 0, 206, 0, 0, 207, 208, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0,
    214, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 230, 231, 0, 0, 0, 232, 0,
    0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0,
    0, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 247, 0, 248, 0, 0, 0, 249, 0, 250, 0, 251, 0, 252, 0, 253, 0, 254,
};
void recomp_unit_0360_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
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
        const std::uint32_t entry_delta = local_pc - 0x0896C004u;
        entry_id = (entry_delta < 4080u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0360[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0896C004;
    case 2u: goto L_0896C01C;
    case 3u: goto L_0896C028;
    case 4u: goto L_0896C038;
    case 5u: goto L_0896C054;
    case 6u: goto L_0896C05C;
    case 7u: goto L_0896C064;
    case 8u: goto L_0896C078;
    case 9u: goto L_0896C0D8;
    case 10u: goto L_0896C0E8;
    case 11u: goto L_0896C100;
    case 12u: goto L_0896C108;
    case 13u: goto L_0896C118;
    case 14u: goto L_0896C120;
    case 15u: goto L_0896C130;
    case 16u: goto L_0896C138;
    case 17u: goto L_0896C148;
    case 18u: goto L_0896C150;
    case 19u: goto L_0896C160;
    case 20u: goto L_0896C168;
    case 21u: goto L_0896C178;
    case 22u: goto L_0896C184;
    case 23u: goto L_0896C19C;
    case 24u: goto L_0896C1D4;
    case 25u: goto L_0896C1E0;
    case 26u: goto L_0896C1F8;
    case 27u: goto L_0896C208;
    case 28u: goto L_0896C210;
    case 29u: goto L_0896C218;
    case 30u: goto L_0896C22C;
    case 31u: goto L_0896C25C;
    case 32u: goto L_0896C264;
    case 33u: goto L_0896C26C;
    case 34u: goto L_0896C274;
    case 35u: goto L_0896C27C;
    case 36u: goto L_0896C284;
    case 37u: goto L_0896C28C;
    case 38u: goto L_0896C294;
    case 39u: goto L_0896C29C;
    case 40u: goto L_0896C2A4;
    case 41u: goto L_0896C2AC;
    case 42u: goto L_0896C2B4;
    case 43u: goto L_0896C2C0;
    case 44u: goto L_0896C2F0;
    case 45u: goto L_0896C2F8;
    case 46u: goto L_0896C300;
    case 47u: goto L_0896C308;
    case 48u: goto L_0896C310;
    case 49u: goto L_0896C318;
    case 50u: goto L_0896C320;
    case 51u: goto L_0896C328;
    case 52u: goto L_0896C330;
    case 53u: goto L_0896C338;
    case 54u: goto L_0896C340;
    case 55u: goto L_0896C348;
    case 56u: goto L_0896C354;
    case 57u: goto L_0896C368;
    case 58u: goto L_0896C388;
    case 59u: goto L_0896C39C;
    case 60u: goto L_0896C3A8;
    case 61u: goto L_0896C3B4;
    case 62u: goto L_0896C3F8;
    case 63u: goto L_0896C408;
    case 64u: goto L_0896C424;
    case 65u: goto L_0896C430;
    case 66u: goto L_0896C438;
    case 67u: goto L_0896C45C;
    case 68u: goto L_0896C468;
    case 69u: goto L_0896C470;
    case 70u: goto L_0896C478;
    case 71u: goto L_0896C480;
    case 72u: goto L_0896C4A8;
    case 73u: goto L_0896C4B0;
    case 74u: goto L_0896C4CC;
    case 75u: goto L_0896C4D8;
    case 76u: goto L_0896C4F8;
    case 77u: goto L_0896C508;
    case 78u: goto L_0896C52C;
    case 79u: goto L_0896C544;
    case 80u: goto L_0896C558;
    case 81u: goto L_0896C574;
    case 82u: goto L_0896C57C;
    case 83u: goto L_0896C598;
    case 84u: goto L_0896C5A4;
    case 85u: goto L_0896C5F0;
    case 86u: goto L_0896C5FC;
    case 87u: goto L_0896C608;
    case 88u: goto L_0896C610;
    case 89u: goto L_0896C624;
    case 90u: goto L_0896C63C;
    case 91u: goto L_0896C644;
    case 92u: goto L_0896C664;
    case 93u: goto L_0896C66C;
    case 94u: goto L_0896C688;
    case 95u: goto L_0896C69C;
    case 96u: goto L_0896C6A0;
    case 97u: goto L_0896C6B4;
    case 98u: goto L_0896C6C4;
    case 99u: goto L_0896C6CC;
    case 100u: goto L_0896C6E0;
    case 101u: goto L_0896C6F8;
    case 102u: goto L_0896C700;
    case 103u: goto L_0896C708;
    case 104u: goto L_0896C714;
    case 105u: goto L_0896C754;
    case 106u: goto L_0896C764;
    case 107u: goto L_0896C770;
    case 108u: goto L_0896C780;
    case 109u: goto L_0896C78C;
    case 110u: goto L_0896C794;
    case 111u: goto L_0896C79C;
    case 112u: goto L_0896C7B0;
    case 113u: goto L_0896C7C4;
    case 114u: goto L_0896C7CC;
    case 115u: goto L_0896C7D8;
    case 116u: goto L_0896C7E4;
    case 117u: goto L_0896C7EC;
    case 118u: goto L_0896C7F4;
    case 119u: goto L_0896C804;
    case 120u: goto L_0896C830;
    case 121u: goto L_0896C838;
    case 122u: goto L_0896C848;
    case 123u: goto L_0896C850;
    case 124u: goto L_0896C858;
    case 125u: goto L_0896C860;
    case 126u: goto L_0896C868;
    case 127u: goto L_0896C874;
    case 128u: goto L_0896C88C;
    case 129u: goto L_0896C898;
    case 130u: goto L_0896C89C;
    case 131u: goto L_0896C8A8;
    case 132u: goto L_0896C8B0;
    case 133u: goto L_0896C8C8;
    case 134u: goto L_0896C8F0;
    case 135u: goto L_0896C90C;
    case 136u: goto L_0896C918;
    case 137u: goto L_0896C92C;
    case 138u: goto L_0896C94C;
    case 139u: goto L_0896C960;
    case 140u: goto L_0896C974;
    case 141u: goto L_0896C988;
    case 142u: goto L_0896C990;
    case 143u: goto L_0896C9A4;
    case 144u: goto L_0896C9AC;
    case 145u: goto L_0896C9BC;
    case 146u: goto L_0896C9C4;
    case 147u: goto L_0896C9CC;
    case 148u: goto L_0896C9D4;
    case 149u: goto L_0896C9DC;
    case 150u: goto L_0896C9F4;
    case 151u: goto L_0896CA18;
    case 152u: goto L_0896CA24;
    case 153u: goto L_0896CA34;
    case 154u: goto L_0896CA40;
    case 155u: goto L_0896CA4C;
    case 156u: goto L_0896CA58;
    case 157u: goto L_0896CA60;
    case 158u: goto L_0896CA70;
    case 159u: goto L_0896CA94;
    case 160u: goto L_0896CAA0;
    case 161u: goto L_0896CAA8;
    case 162u: goto L_0896CAAC;
    case 163u: goto L_0896CAB4;
    case 164u: goto L_0896CABC;
    case 165u: goto L_0896CAC4;
    case 166u: goto L_0896CAD0;
    case 167u: goto L_0896CAD4;
    case 168u: goto L_0896CAEC;
    case 169u: goto L_0896CB0C;
    case 170u: goto L_0896CB14;
    case 171u: goto L_0896CB1C;
    case 172u: goto L_0896CB24;
    case 173u: goto L_0896CB30;
    case 174u: goto L_0896CB3C;
    case 175u: goto L_0896CB48;
    case 176u: goto L_0896CB54;
    case 177u: goto L_0896CB58;
    case 178u: goto L_0896CB60;
    case 179u: goto L_0896CB68;
    case 180u: goto L_0896CB7C;
    case 181u: goto L_0896CBA4;
    case 182u: goto L_0896CBB4;
    case 183u: goto L_0896CBC0;
    case 184u: goto L_0896CBCC;
    case 185u: goto L_0896CBDC;
    case 186u: goto L_0896CBF8;
    case 187u: goto L_0896CC08;
    case 188u: goto L_0896CC10;
    case 189u: goto L_0896CC1C;
    case 190u: goto L_0896CC24;
    case 191u: goto L_0896CC2C;
    case 192u: goto L_0896CC34;
    case 193u: goto L_0896CC4C;
    case 194u: goto L_0896CC58;
    case 195u: goto L_0896CC68;
    case 196u: goto L_0896CC70;
    case 197u: goto L_0896CC8C;
    case 198u: goto L_0896CCA4;
    case 199u: goto L_0896CCB4;
    case 200u: goto L_0896CCD4;
    case 201u: goto L_0896CCDC;
    case 202u: goto L_0896CCE4;
    case 203u: goto L_0896CCEC;
    case 204u: goto L_0896CCF8;
    case 205u: goto L_0896CD04;
    case 206u: goto L_0896CD10;
    case 207u: goto L_0896CD1C;
    case 208u: goto L_0896CD20;
    case 209u: goto L_0896CD28;
    case 210u: goto L_0896CD30;
    case 211u: goto L_0896CD44;
    case 212u: goto L_0896CD64;
    case 213u: goto L_0896CD74;
    case 214u: goto L_0896CD84;
    case 215u: goto L_0896CD8C;
    case 216u: goto L_0896CD98;
    case 217u: goto L_0896CDB4;
    case 218u: goto L_0896CDC0;
    case 219u: goto L_0896CDC8;
    case 220u: goto L_0896CDD0;
    case 221u: goto L_0896CDEC;
    case 222u: goto L_0896CDF8;
    case 223u: goto L_0896CE04;
    case 224u: goto L_0896CE24;
    case 225u: goto L_0896CE2C;
    case 226u: goto L_0896CE38;
    case 227u: goto L_0896CE44;
    case 228u: goto L_0896CE50;
    case 229u: goto L_0896CE5C;
    case 230u: goto L_0896CE68;
    case 231u: goto L_0896CE6C;
    case 232u: goto L_0896CE7C;
    case 233u: goto L_0896CE9C;
    case 234u: goto L_0896CEAC;
    case 235u: goto L_0896CEB8;
    case 236u: goto L_0896CEC4;
    case 237u: goto L_0896CED0;
    case 238u: goto L_0896CEEC;
    case 239u: goto L_0896CEFC;
    case 240u: goto L_0896CF0C;
    case 241u: goto L_0896CF28;
    case 242u: goto L_0896CF44;
    case 243u: goto L_0896CF50;
    case 244u: goto L_0896CF5C;
    case 245u: goto L_0896CF90;
    case 246u: goto L_0896CFA8;
    case 247u: goto L_0896CFB0;
    case 248u: goto L_0896CFB8;
    case 249u: goto L_0896CFC8;
    case 250u: goto L_0896CFD0;
    case 251u: goto L_0896CFD8;
    case 252u: goto L_0896CFE0;
    case 253u: goto L_0896CFE8;
    case 254u: goto L_0896CFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0896C004:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5728));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0896C01Cu);
    aot_gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 220u, 0x08960CC0u>(ctx, &aot_mem) && ctx.pc == 0x0896C01Cu) goto L_0896C01C;
    return;
L_0896C01C:
    aot_gpr[4] = (aot_gpr[17] & 1u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[4] = (aot_gpr[16] | 0u);
      if (branch_taken) {
          goto L_0896C064;
      }
      goto L_0896C028;
    }
L_0896C028:
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C05C;
      }
      goto L_0896C038;
    }
L_0896C038:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0896C054u);
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896C054u) goto L_0896C054;
    return;
L_0896C054:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C064;
      }
      goto L_0896C05C;
    }
L_0896C05C:
    aot_gpr[31] = (0x0896C064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0896C064u) goto L_0896C064;
    return;
L_0896C064:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C078:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[5] << 4u);
    aot_gpr[7] = (aot_gpr[5] + aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] + aot_gpr[7]);
    aot_gpr[5] = (2220u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-30968));
    aot_gpr[16] = (aot_gpr[16] + aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(0)));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[7]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(8), aot_gpr[8]);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(12), aot_gpr[5]);
    aot_gpr[5] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(16), aot_gpr[5]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0896C0D8u);
    aot_gpr[5] = (aot_gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 2u, 0x08961018u>(ctx, &aot_mem) && ctx.pc == 0x0896C0D8u) goto L_0896C0D8;
    return;
L_0896C0D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C178;
      }
      goto L_0896C0E8;
    }
L_0896C0E8:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-21536)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C100:
    aot_gpr[31] = (0x0896C108u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 62u, 0x0896D348u>(ctx, &aot_mem) && ctx.pc == 0x0896C108u) goto L_0896C108;
    return;
L_0896C108:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896C184;
      }
      goto L_0896C118;
    }
L_0896C118:
    aot_gpr[31] = (0x0896C120u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 100u, 0x0896D634u>(ctx, &aot_mem) && ctx.pc == 0x0896C120u) goto L_0896C120;
    return;
L_0896C120:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896C184;
      }
      goto L_0896C130;
    }
L_0896C130:
    aot_gpr[31] = (0x0896C138u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 230u, 0x0896DE34u>(ctx, &aot_mem) && ctx.pc == 0x0896C138u) goto L_0896C138;
    return;
L_0896C138:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896C184;
      }
      goto L_0896C148;
    }
L_0896C148:
    aot_gpr[31] = (0x0896C150u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 12u, 0x0896E0D8u>(ctx, &aot_mem) && ctx.pc == 0x0896C150u) goto L_0896C150;
    return;
L_0896C150:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896C184;
      }
      goto L_0896C160;
    }
L_0896C160:
    aot_gpr[31] = (0x0896C168u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 137u, 0x0896D8C0u>(ctx, &aot_mem) && ctx.pc == 0x0896C168u) goto L_0896C168;
    return;
L_0896C168:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896C184;
      }
      goto L_0896C178;
    }
L_0896C178:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(44)));
    aot_gpr[2] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(20)));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0896C184;
L_0896C184:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(44), aot_gpr[4]);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C19C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[4] = (aot_gpr[4] << 4u);
    aot_gpr[6] = (aot_gpr[4] + aot_gpr[4]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] + aot_gpr[6]);
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-30968));
    aot_gpr[17] = (aot_gpr[17] + aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0896C218;
      }
      goto L_0896C1D4;
    }
L_0896C1D4:
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr[4] != 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(44), aot_gpr[4]);
      if (branch_taken) {
          goto L_0896C218;
      }
      goto L_0896C1E0;
    }
L_0896C1E0:
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(16), aot_gpr[4]);
    aot_gpr[4] = (0u | 5000u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[31] = (0x0896C1F8u);
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0383_entry, 383u, 71u, 0x08983384u>(ctx, &aot_mem) && ctx.pc == 0x0896C1F8u) goto L_0896C1F8;
    return;
L_0896C1F8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896C218;
      }
      goto L_0896C208;
    }
L_0896C208:
    aot_gpr[31] = (0x0896C210u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 1u, 0x0896E000u>(ctx, &aot_mem) && ctx.pc == 0x0896C210u) goto L_0896C210;
    return;
L_0896C210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C218;
      }
      goto L_0896C218;
    }
L_0896C218:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C22C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] << 4u);
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-30968));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[6] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 5u);
      if (branch_taken) {
          goto L_0896C2A4;
      }
      goto L_0896C25C;
    }
L_0896C25C:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0896C294;
      }
      goto L_0896C264;
    }
L_0896C264:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896C284;
      }
      goto L_0896C26C;
    }
L_0896C26C:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C2B4;
      }
      goto L_0896C274;
    }
L_0896C274:
    aot_gpr[31] = (0x0896C27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 89u, 0x0896D574u>(ctx, &aot_mem) && ctx.pc == 0x0896C27Cu) goto L_0896C27C;
    return;
L_0896C27C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C2B4;
      }
      goto L_0896C284;
    }
L_0896C284:
    aot_gpr[31] = (0x0896C28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 126u, 0x0896D800u>(ctx, &aot_mem) && ctx.pc == 0x0896C28Cu) goto L_0896C28C;
    return;
L_0896C28C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C2B4;
      }
      goto L_0896C294;
    }
L_0896C294:
    aot_gpr[31] = (0x0896C29Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 42u, 0x0896E2D8u>(ctx, &aot_mem) && ctx.pc == 0x0896C29Cu) goto L_0896C29C;
    return;
L_0896C29C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C2B4;
      }
      goto L_0896C2A4;
    }
L_0896C2A4:
    aot_gpr[31] = (0x0896C2ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 160u, 0x0896DA14u>(ctx, &aot_mem) && ctx.pc == 0x0896C2ACu) goto L_0896C2AC;
    return;
L_0896C2AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C2B4;
      }
      goto L_0896C2B4;
    }
L_0896C2B4:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C2C0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[5] << 4u);
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[7] = (aot_gpr[6] + aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[6] + aot_gpr[7]);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-30968));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[6] = (0u | 6u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 5u);
      if (branch_taken) {
          goto L_0896C338;
      }
      goto L_0896C2F0;
    }
L_0896C2F0:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    aot_gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0896C328;
      }
      goto L_0896C2F8;
    }
L_0896C2F8:
    { const bool branch_taken = aot_gpr[5] == aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896C318;
      }
      goto L_0896C300;
    }
L_0896C300:
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C348;
      }
      goto L_0896C308;
    }
L_0896C308:
    aot_gpr[31] = (0x0896C310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 98u, 0x0896D60Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C310u) goto L_0896C310;
    return;
L_0896C310:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C348;
      }
      goto L_0896C318;
    }
L_0896C318:
    aot_gpr[31] = (0x0896C320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 135u, 0x0896D898u>(ctx, &aot_mem) && ctx.pc == 0x0896C320u) goto L_0896C320;
    return;
L_0896C320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C348;
      }
      goto L_0896C328;
    }
L_0896C328:
    aot_gpr[31] = (0x0896C330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 45u, 0x0896E324u>(ctx, &aot_mem) && ctx.pc == 0x0896C330u) goto L_0896C330;
    return;
L_0896C330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C348;
      }
      goto L_0896C338;
    }
L_0896C338:
    aot_gpr[31] = (0x0896C340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 169u, 0x0896DA94u>(ctx, &aot_mem) && ctx.pc == 0x0896C340u) goto L_0896C340;
    return;
L_0896C340:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C348;
      }
      goto L_0896C348;
    }
L_0896C348:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C354:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896C368u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0349_entry, 349u, 3u, 0x0896102Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C368u) goto L_0896C368;
    return;
L_0896C368:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(5728));
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(4), aot_gpr[4]);
    aot_gpr[2] = (aot_gpr[16] | 0u);
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C388:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[4] = (2218u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    aot_gpr[31] = (0x0896C39Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(10232));
    goto L_0896C354;
L_0896C39C:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0896C3A8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-26688));
    if (rt.invoke_chained_direct<&recomp_unit_0552_entry, 552u, 146u, 0x08A2CF0Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C3A8u) goto L_0896C3A8;
    return;
L_0896C3A8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C3B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-80));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(44), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(48), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(52), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(56), aot_gpr[19]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(60), aot_gpr[20]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[18] = (0u | 1u);
    aot_gpr[20] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    aot_gpr[16] = (aot_gpr[7] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(64), aot_gpr[31]);
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-26663), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_gpr[31] = (0x0896C3F8u);
    aot_gpr[4] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0896C3F8u) goto L_0896C3F8;
    return;
L_0896C3F8:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24824));
    { const bool branch_taken = aot_gpr[4] == 0u;
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0896C424;
      }
      goto L_0896C408;
    }
L_0896C408:
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[18]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(36));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[6] = (aot_gpr[19] | 0u);
    aot_gpr[7] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0896C424u);
    aot_gpr[8] = (aot_gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 42u, 0x0896722Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C424u) goto L_0896C424;
    return;
L_0896C424:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C478;
      }
      goto L_0896C430;
    }
L_0896C430:
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C470;
      }
      goto L_0896C438;
    }
L_0896C438:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[4]);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(8)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[5]);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(12)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[4]);
    aot_gpr[31] = (0x0896C45Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x0896C45Cu) goto L_0896C45C;
    return;
L_0896C45C:
    aot_gpr[16] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C480;
      }
      goto L_0896C468;
    }
L_0896C468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C4B0;
      }
      goto L_0896C470;
    }
L_0896C470:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0896C4D8;
      }
      goto L_0896C478;
    }
L_0896C478:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0896C4D8;
      }
      goto L_0896C480;
    }
L_0896C480:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(4)));
    aot_gpr[5] = (0u | 5u);
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(16));
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[5]);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[16] + aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(40));
    jump_target = aot_gpr[7];
    aot_gpr[31] = (0x0896C4A8u);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(20));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896C4A8u) goto L_0896C4A8;
    return;
L_0896C4A8:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26668), aot_gpr[2]);
    goto L_0896C4B0;
L_0896C4B0:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26672), aot_gpr[17]);
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[16] = (0u | 5u);
    aot_gpr[4] = (0u | 5u);
    aot_gpr[31] = (0x0896C4CCu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-14812));
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 52u, 0x08962354u>(ctx, &aot_mem) && ctx.pc == 0x0896C4CCu) goto L_0896C4CC;
    return;
L_0896C4CC:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-26664), static_cast<std::uint8_t>(aot_gpr[18]));
    aot_gpr[2] = (aot_gpr[16] | 0u);
    goto L_0896C4D8;
L_0896C4D8:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(44)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(48)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(52)));
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(56)));
    aot_gpr[20] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(60)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C4F8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896C508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x0896C508u) goto L_0896C508;
    return;
L_0896C508:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(4)));
    aot_gpr[6] = (aot_gpr[4] + static_cast<std::uint32_t>(24));
    aot_gpr[5] = (0u | 5u);
    aot_gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[5]);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    aot_gpr[4] = (aot_gpr[2] + aot_gpr[4]);
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0896C52Cu);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896C52Cu) goto L_0896C52C;
    return;
L_0896C52C:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(-26672), 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD8(aot_gpr[4] + static_cast<std::uint32_t>(-26663)));
    aot_gpr[31] = (0x0896C544u);
    aot_gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 54u, 0x08962384u>(ctx, &aot_mem) && ctx.pc == 0x0896C544u) goto L_0896C544;
    return;
L_0896C544:
    aot_gpr[4] = (2216u << 16u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-26664), static_cast<std::uint8_t>(0u));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C558:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-48));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(32), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(36), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(40), aot_gpr[31]);
    aot_gpr[31] = (0x0896C574u);
    aot_gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896C574u) goto L_0896C574;
    return;
L_0896C574:
    aot_gpr[31] = (0x0896C57Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x0896C57Cu) goto L_0896C57C;
    return;
L_0896C57C:
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(4));
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[31] = (0x0896C598u);
    aot_gpr[5] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 270u, 0x08960FE8u>(ctx, &aot_mem) && ctx.pc == 0x0896C598u) goto L_0896C598;
    return;
L_0896C598:
    aot_gpr[17] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x0896C5A4u);
    aot_gpr[4] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0896C5A4u) goto L_0896C5A4;
    return;
L_0896C5A4:
    aot_gpr[4] = (aot_gpr[16] << 4u);
    PSPRECOMP_AOT_STORE8(aot_gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_gpr[5] = (0u + aot_gpr[4]);
    aot_gpr[6] = (0u | 2u);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[6]);
    aot_gpr[6] = (aot_gpr[5] - aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[4] << 3u);
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    aot_gpr[4] = (aot_gpr[6] + aot_gpr[4]);
    aot_gpr[7] = (aot_gpr[7] + aot_gpr[4]);
    aot_gpr[6] = (aot_gpr[7] + static_cast<std::uint32_t>(396));
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(28));
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(392));
    aot_gpr[9] = (aot_gpr[29] + static_cast<std::uint32_t>(24));
    aot_gpr[8] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896C5F0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24824));
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 42u, 0x0896722Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C5F0u) goto L_0896C5F0;
    return;
L_0896C5F0:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C610;
      }
      goto L_0896C5FC;
    }
L_0896C5FC:
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[31] = (0x0896C608u);
    PSPRECOMP_AOT_STORE8(aot_gpr[4] + static_cast<std::uint32_t>(-26663), static_cast<std::uint8_t>(0u));
    goto L_0896C4F8;
L_0896C608:
    aot_gpr[31] = (0x0896C610u);
    aot_gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 57u, 0x089623C4u>(ctx, &aot_mem) && ctx.pc == 0x0896C610u) goto L_0896C610;
    return;
L_0896C610:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(32)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(36)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C624:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    aot_gpr[31] = (0x0896C63Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x0896C63Cu) goto L_0896C63C;
    return;
L_0896C63C:
    { const bool branch_taken = aot_gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C6A0;
      }
      goto L_0896C644;
    }
L_0896C644:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-30968));
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(240));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(20)));
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26668)));
    { const bool branch_taken = aot_gpr[17] == aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896C6A0;
      }
      goto L_0896C664;
    }
L_0896C664:
    aot_gpr[31] = (0x0896C66Cu);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 227u, 0x08960D28u>(ctx, &aot_mem) && ctx.pc == 0x0896C66Cu) goto L_0896C66C;
    return;
L_0896C66C:
    aot_gpr[4] = (0u | 5u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[4]);
    aot_gpr[5] = (aot_gpr[29] + static_cast<std::uint32_t>(8));
    aot_gpr[6] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    aot_gpr[7] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x0896C688u);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0348_entry, 348u, 270u, 0x08960FE8u>(ctx, &aot_mem) && ctx.pc == 0x0896C688u) goto L_0896C688;
    return;
L_0896C688:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[6] = (2216u << 16u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(-26672)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0896C69Cu);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896C69Cu) goto L_0896C69C;
    return;
L_0896C69C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(-26668), aot_gpr[17]);
    goto L_0896C6A0;
L_0896C6A0:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C6B4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[5] = (aot_gpr[5] & 1u);
      if (branch_taken) {
          goto L_0896C708;
      }
      goto L_0896C6C4;
    }
L_0896C6C4:
    { const bool branch_taken = aot_gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C708;
      }
      goto L_0896C6CC;
    }
L_0896C6CC:
    aot_gpr[5] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C700;
      }
      goto L_0896C6E0;
    }
L_0896C6E0:
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(0)));
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(8));
    aot_gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(PSPRECOMP_AOT_LOAD16(aot_gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[6];
    aot_gpr[31] = (0x0896C6F8u);
    aot_gpr[4] = (aot_gpr[4] + aot_gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896C6F8u) goto L_0896C6F8;
    return;
L_0896C6F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C708;
      }
      goto L_0896C700;
    }
L_0896C700:
    aot_gpr[31] = (0x0896C708u);
    aot_gpr[4] = (aot_gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0565_entry, 565u, 117u, 0x08A39618u>(ctx, &aot_mem) && ctx.pc == 0x0896C708u) goto L_0896C708;
    return;
L_0896C708:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C714:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(0), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(324), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(328), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(332), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(30337), static_cast<std::uint8_t>(0u));
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(0u));
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(337));
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0896C754u);
    aot_gpr[6] = (0u | 30000u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C754u) goto L_0896C754;
    return;
L_0896C754:
    aot_gpr[4] = (aot_gpr[17] + static_cast<std::uint32_t>(8));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896C764u);
    aot_gpr[6] = (0u | 316u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C764u) goto L_0896C764;
    return;
L_0896C764:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[31] = (0x0896C770u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27928));
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 54u, 0x0896E3ACu>(ctx, &aot_mem) && ctx.pc == 0x0896C770u) goto L_0896C770;
    return;
L_0896C770:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0896C780u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24880));
    if (rt.invoke_chained_direct<&recomp_unit_0355_entry, 355u, 242u, 0x08967F30u>(ctx, &aot_mem) && ctx.pc == 0x0896C780u) goto L_0896C780;
    return;
L_0896C780:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[31] = (0x0896C78Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24824));
    if (rt.invoke_chained_direct<&recomp_unit_0354_entry, 354u, 230u, 0x08966DBCu>(ctx, &aot_mem) && ctx.pc == 0x0896C78Cu) goto L_0896C78C;
    return;
L_0896C78C:
    aot_gpr[31] = (0x0896C794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 148u, 0x0896381Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C794u) goto L_0896C794;
    return;
L_0896C794:
    aot_gpr[31] = (0x0896C79Cu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 62u, 0x089633A8u>(ctx, &aot_mem) && ctx.pc == 0x0896C79Cu) goto L_0896C79C;
    return;
L_0896C79C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C7B0:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    aot_gpr[31] = (0x0896C7C4u);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 148u, 0x0896381Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C7C4u) goto L_0896C7C4;
    return;
L_0896C7C4:
    aot_gpr[31] = (0x0896C7CCu);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0351_entry, 351u, 128u, 0x08963750u>(ctx, &aot_mem) && ctx.pc == 0x0896C7CCu) goto L_0896C7CC;
    return;
L_0896C7CC:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[31] = (0x0896C7D8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24824));
    if (rt.invoke_chained_direct<&recomp_unit_0354_entry, 354u, 264u, 0x08966FF0u>(ctx, &aot_mem) && ctx.pc == 0x0896C7D8u) goto L_0896C7D8;
    return;
L_0896C7D8:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C7F4;
      }
      goto L_0896C7E4;
    }
L_0896C7E4:
    aot_gpr[31] = (0x0896C7ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C7ECu) goto L_0896C7EC;
    return;
L_0896C7EC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(328), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(332), 0u);
    goto L_0896C7F4;
L_0896C7F4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C804:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[7] = (2216u << 16u);
    aot_gpr[18] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(-26504)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[6] | 0u);
      if (branch_taken) {
          goto L_0896C858;
      }
      goto L_0896C830;
    }
L_0896C830:
    aot_gpr[31] = (0x0896C838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 160u, 0x0896E98Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C838u) goto L_0896C838;
    return;
L_0896C838:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr[5] = (static_cast<std::int32_t>(aot_gpr[4]) < 2 ? 1u : 0u);
    if (aot_gpr[5] == 0u) {
    aot_gpr[4] = (static_cast<std::int32_t>(aot_gpr[4]) < 5 ? 1u : 0u);
        goto L_0896C860;
    }
    goto L_0896C848;
L_0896C848:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C874;
      }
      goto L_0896C850;
    }
L_0896C850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C8B0;
      }
      goto L_0896C858;
    }
L_0896C858:
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(324), 0u);
      if (branch_taken) {
          goto L_0896C8B0;
      }
      goto L_0896C860;
    }
L_0896C860:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C8B0;
      }
      goto L_0896C868;
    }
L_0896C868:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(324), aot_gpr[4]);
      if (branch_taken) {
          goto L_0896C8B0;
      }
      goto L_0896C874;
    }
L_0896C874:
    aot_gpr[4] = (0u | 1u);
    PSPRECOMP_AOT_STORE8(aot_gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr[4]));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 24u);
    aot_gpr[31] = (0x0896C88Cu);
    aot_gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 152u, 0x08962B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C88Cu) goto L_0896C88C;
    return;
L_0896C88C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C89C;
      }
      goto L_0896C898;
    }
L_0896C898:
    PSPRECOMP_AOT_STORE32(aot_gpr[18] + static_cast<std::uint32_t>(324), 0u);
    goto L_0896C89C;
L_0896C89C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C8B0;
      }
      goto L_0896C8A8;
    }
L_0896C8A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C8B0;
      }
      goto L_0896C8B0;
    }
L_0896C8B0:
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
L_0896C8C8:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[5] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    aot_gpr[31] = (0x0896C8F0u);
    aot_gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C8F0u) goto L_0896C8F0;
    return;
L_0896C8F0:
    aot_gpr[4] = (0u | 15u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), aot_gpr[4]);
    aot_gpr[16] = (2216u << 16u);
    aot_gpr[5] = (2199u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26504)));
    aot_gpr[31] = (0x0896C90Cu);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-11552));
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 85u, 0x0896F3F8u>(ctx, &aot_mem) && ctx.pc == 0x0896C90Cu) goto L_0896C90C;
    return;
L_0896C90C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(-26504)));
    aot_gpr[31] = (0x0896C918u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 79u, 0x0896F37Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C918u) goto L_0896C918;
    return;
L_0896C918:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C92C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[17]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(20), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[31]);
    aot_gpr[31] = (0x0896C94Cu);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0896C94Cu) goto L_0896C94C;
    return;
L_0896C94C:
    aot_gpr[18] = (1u << 16u);
    aot_gpr[17] = (0u | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(332), aot_gpr[18]);
    aot_gpr[31] = (0x0896C960u);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 60u, 0x089623E8u>(ctx, &aot_mem) && ctx.pc == 0x0896C960u) goto L_0896C960;
    return;
L_0896C960:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(328), aot_gpr[2]);
    aot_gpr[4] = (aot_gpr[2] | 0u);
    aot_gpr[5] = (0u | 0u);
    aot_gpr[31] = (0x0896C974u);
    aot_gpr[6] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0566_entry, 566u, 175u, 0x08A3A90Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C974u) goto L_0896C974;
    return;
L_0896C974:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    aot_gpr[4] = (2216u << 16u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(-26504)));
    aot_gpr[31] = (0x0896C988u);
    aot_gpr[6] = (aot_gpr[16] + static_cast<std::uint32_t>(332));
    if (rt.invoke_chained_direct<&recomp_unit_0363_entry, 363u, 103u, 0x0896F4C8u>(ctx, &aot_mem) && ctx.pc == 0x0896C988u) goto L_0896C988;
    return;
L_0896C988:
    { const bool branch_taken = aot_gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C9A4;
      }
      goto L_0896C990;
    }
L_0896C990:
    aot_gpr[17] = (0u | 1u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[5] = (0u | 24u);
    aot_gpr[31] = (0x0896C9A4u);
    aot_gpr[6] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 152u, 0x08962B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C9A4u) goto L_0896C9A4;
    return;
L_0896C9A4:
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C9CC;
      }
      goto L_0896C9AC;
    }
L_0896C9AC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(328)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C9CC;
      }
      goto L_0896C9BC;
    }
L_0896C9BC:
    aot_gpr[31] = (0x0896C9C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C9C4u) goto L_0896C9C4;
    return;
L_0896C9C4:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(328), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(332), 0u);
    goto L_0896C9CC;
L_0896C9CC:
    { const bool branch_taken = aot_gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C9DC;
      }
      goto L_0896C9D4;
    }
L_0896C9D4:
    aot_gpr[4] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), aot_gpr[4]);
    goto L_0896C9DC;
L_0896C9DC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(12)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(16)));
    aot_gpr[18] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(20)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C9F4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[7] = (aot_gpr[6] | 0u);
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(320)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[8] = (0u | 1u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] == aot_gpr[8];
    aot_gpr[4] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0896CA24;
      }
      goto L_0896CA18;
    }
L_0896CA18:
    aot_gpr[7] = (0u | 3u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0896CA40;
      }
      goto L_0896CA24;
    }
L_0896CA24:
    aot_gpr[6] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[31] = (0x0896CA34u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24880));
    if (rt.invoke_chained_direct<&recomp_unit_0356_entry, 356u, 170u, 0x08968A48u>(ctx, &aot_mem) && ctx.pc == 0x0896CA34u) goto L_0896CA34;
    return;
L_0896CA34:
    aot_gpr[4] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), aot_gpr[4]);
      if (branch_taken) {
          goto L_0896CA60;
      }
      goto L_0896CA40;
    }
L_0896CA40:
    aot_gpr[4] = (0u | 2u);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896CA60;
      }
      goto L_0896CA4C;
    }
L_0896CA4C:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[31] = (0x0896CA58u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27928));
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 112u, 0x0896E70Cu>(ctx, &aot_mem) && ctx.pc == 0x0896CA58u) goto L_0896CA58;
    return;
L_0896CA58:
    aot_gpr[4] = (0u | 9u);
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), aot_gpr[4]);
    goto L_0896CA60;
L_0896CA60:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896CA70:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[16] = (aot_gpr[5] | 0u);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[31]);
    aot_gpr[31] = (0x0896CA94u);
    aot_gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x0896CA94u) goto L_0896CA94;
    return;
L_0896CA94:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CAAC;
      }
      goto L_0896CAA0;
    }
L_0896CAA0:
    aot_gpr[31] = (0x0896CAA8u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x0896CAA8u) goto L_0896CAA8;
    return;
L_0896CAA8:
    aot_gpr[18] = (aot_gpr[2] | 0u);
    goto L_0896CAAC;
L_0896CAAC:
    { const bool branch_taken = aot_gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CAC4;
      }
      goto L_0896CAB4;
    }
L_0896CAB4:
    aot_gpr[31] = (0x0896CABCu);
    aot_gpr[4] = (aot_gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 116u, 0x0895F700u>(ctx, &aot_mem) && ctx.pc == 0x0896CABCu) goto L_0896CABC;
    return;
L_0896CABC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CAD4;
      }
      goto L_0896CAC4;
    }
L_0896CAC4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD8(aot_gpr[17] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CAD4;
      }
      goto L_0896CAD0;
    }
L_0896CAD0:
    PSPRECOMP_AOT_STORE8(aot_gpr[17] + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(0u));
    goto L_0896CAD4;
L_0896CAD4:
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
L_0896CAEC:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(328)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0896CB1C;
      }
      goto L_0896CB0C;
    }
L_0896CB0C:
    aot_gpr[31] = (0x0896CB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x0896CB14u) goto L_0896CB14;
    return;
L_0896CB14:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(328), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(332), 0u);
    goto L_0896CB1C;
L_0896CB1C:
    aot_gpr[31] = (0x0896CB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x0896CB24u) goto L_0896CB24;
    return;
L_0896CB24:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CB68;
      }
      goto L_0896CB30;
    }
L_0896CB30:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896CB3Cu);
    aot_gpr[5] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x0896CB3Cu) goto L_0896CB3C;
    return;
L_0896CB3C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896CB58;
      }
      goto L_0896CB48;
    }
L_0896CB48:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896CB54u);
    aot_gpr[5] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x0896CB54u) goto L_0896CB54;
    return;
L_0896CB54:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_0896CB58;
L_0896CB58:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CB68;
      }
      goto L_0896CB60;
    }
L_0896CB60:
    aot_gpr[31] = (0x0896CB68u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 123u, 0x0895F75Cu>(ctx, &aot_mem) && ctx.pc == 0x0896CB68u) goto L_0896CB68;
    return;
L_0896CB68:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896CB7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    aot_gpr[5] = (2219u << 16u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(24), aot_gpr[16]);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-24880));
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (0u | 14u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(28), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896CC10;
      }
      goto L_0896CBA4;
    }
L_0896CBA4:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896CBCC;
      }
      goto L_0896CBB4;
    }
L_0896CBB4:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[31] = (0x0896CBC0u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27928));
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 112u, 0x0896E70Cu>(ctx, &aot_mem) && ctx.pc == 0x0896CBC0u) goto L_0896CBC0;
    return;
L_0896CBC0:
    aot_gpr[4] = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), aot_gpr[4]);
      if (branch_taken) {
          goto L_0896CCA4;
      }
      goto L_0896CBCC;
    }
L_0896CBCC:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[5] = (0u | 1u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896CCA4;
      }
      goto L_0896CBDC;
    }
L_0896CBDC:
    aot_gpr[6] = (2220u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-27928));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (0u | 7u);
    aot_gpr[5] = (0u | 4u);
    if (aot_gpr[6] == aot_gpr[5]) {
    aot_gpr[4] = (0u | 11u);
        goto L_0896CBF8;
    }
    goto L_0896CBF8;
L_0896CBF8:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0896CC08u);
    aot_gpr[5] = (0u | 24u);
    goto L_0896CA70;
L_0896CC08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CCA4;
      }
      goto L_0896CC10;
    }
L_0896CC10:
    aot_gpr[5] = (0u | 15u);
    { const bool branch_taken = aot_gpr[4] == aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896CC2C;
      }
      goto L_0896CC1C;
    }
L_0896CC1C:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CC70;
      }
      goto L_0896CC24;
    }
L_0896CC24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CCA4;
      }
      goto L_0896CC2C;
    }
L_0896CC2C:
    aot_gpr[31] = (0x0896CC34u);
    aot_gpr[4] = (aot_gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0896CC34u) goto L_0896CC34;
    return;
L_0896CC34:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24880));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[4] = (aot_gpr[29] | 0u);
    aot_gpr[31] = (0x0896CC4Cu);
    aot_gpr[5] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 142u, 0x089629F0u>(ctx, &aot_mem) && ctx.pc == 0x0896CC4Cu) goto L_0896CC4C;
    return;
L_0896CC4C:
    aot_gpr[16] = (aot_gpr[29] + static_cast<std::uint32_t>(12));
    aot_gpr[31] = (0x0896CC58u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 140u, 0x089629C8u>(ctx, &aot_mem) && ctx.pc == 0x0896CC58u) goto L_0896CC58;
    return;
L_0896CC58:
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[5] = (0u | 24u);
    aot_gpr[31] = (0x0896CC68u);
    aot_gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 152u, 0x08962B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0896CC68u) goto L_0896CC68;
    return;
L_0896CC68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CCA4;
      }
      goto L_0896CC70;
    }
L_0896CC70:
    aot_gpr[6] = (2220u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-27928));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(32)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 4u);
    if (aot_gpr[6] == aot_gpr[5]) {
    aot_gpr[4] = (0u | 10u);
        goto L_0896CC8C;
    }
    goto L_0896CC8C;
L_0896CC8C:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), aot_gpr[4]);
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24880));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(48)));
    aot_gpr[31] = (0x0896CCA4u);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    goto L_0896CAEC;
L_0896CCA4:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(24)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896CCB4:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[17] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[17] + static_cast<std::uint32_t>(328)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[4] == 0u;
    aot_gpr[16] = (aot_gpr[5] | 0u);
      if (branch_taken) {
          goto L_0896CCE4;
      }
      goto L_0896CCD4;
    }
L_0896CCD4:
    aot_gpr[31] = (0x0896CCDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0350_entry, 350u, 63u, 0x0896241Cu>(ctx, &aot_mem) && ctx.pc == 0x0896CCDCu) goto L_0896CCDC;
    return;
L_0896CCDC:
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(328), 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[17] + static_cast<std::uint32_t>(332), 0u);
    goto L_0896CCE4;
L_0896CCE4:
    aot_gpr[31] = (0x0896CCECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 150u, 0x0895F93Cu>(ctx, &aot_mem) && ctx.pc == 0x0896CCECu) goto L_0896CCEC;
    return;
L_0896CCEC:
    aot_gpr[17] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CD30;
      }
      goto L_0896CCF8;
    }
L_0896CCF8:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896CD04u);
    aot_gpr[5] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x0896CD04u) goto L_0896CD04;
    return;
L_0896CD04:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    { const bool branch_taken = aot_gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896CD20;
      }
      goto L_0896CD10;
    }
L_0896CD10:
    aot_gpr[4] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896CD1Cu);
    aot_gpr[5] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 244u, 0x0895FEA8u>(ctx, &aot_mem) && ctx.pc == 0x0896CD1Cu) goto L_0896CD1C;
    return;
L_0896CD1C:
    aot_gpr[4] = (aot_gpr[2] | 0u);
    goto L_0896CD20;
L_0896CD20:
    { const bool branch_taken = aot_gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CD30;
      }
      goto L_0896CD28;
    }
L_0896CD28:
    aot_gpr[31] = (0x0896CD30u);
    aot_gpr[5] = (aot_gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0347_entry, 347u, 129u, 0x0895F7D4u>(ctx, &aot_mem) && ctx.pc == 0x0896CD30u) goto L_0896CD30;
    return;
L_0896CD30:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[17] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896CD44:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2220u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-27928));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    aot_gpr[7] = (0u | 4u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[6] != aot_gpr[7];
    // nop
      if (branch_taken) {
          goto L_0896CDC8;
      }
      goto L_0896CD64;
    }
L_0896CD64:
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[4] + static_cast<std::uint32_t>(320)));
    aot_gpr[6] = (0u | 3u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896CD8C;
      }
      goto L_0896CD74;
    }
L_0896CD74:
    aot_gpr[5] = (0u | 11u);
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(324), aot_gpr[5]);
    aot_gpr[31] = (0x0896CD84u);
    aot_gpr[5] = (0u | 24u);
    goto L_0896CA70;
L_0896CD84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CDF8;
      }
      goto L_0896CD8C;
    }
L_0896CD8C:
    aot_gpr[6] = (0u | 2u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896CDF8;
      }
      goto L_0896CD98;
    }
L_0896CD98:
    aot_gpr[7] = (2219u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-24880));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(44)));
    aot_gpr[5] = (0u | 10u);
    aot_gpr[6] = (0u | 14u);
    if (aot_gpr[7] == aot_gpr[6]) {
    aot_gpr[5] = (0u | 11u);
        goto L_0896CDB4;
    }
    goto L_0896CDB4;
L_0896CDB4:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(324), aot_gpr[5]);
    aot_gpr[31] = (0x0896CDC0u);
    aot_gpr[5] = (0u | 24u);
    goto L_0896CA70;
L_0896CDC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CDF8;
      }
      goto L_0896CDC8;
    }
L_0896CDC8:
    { const bool branch_taken = aot_gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896CDF8;
      }
      goto L_0896CDD0;
    }
L_0896CDD0:
    aot_gpr[8] = (2219u << 16u);
    aot_gpr[8] = (aot_gpr[8] + static_cast<std::uint32_t>(-24880));
    aot_gpr[8] = (PSPRECOMP_AOT_LOAD32(aot_gpr[8] + static_cast<std::uint32_t>(44)));
    aot_gpr[6] = (0u | 0u);
    aot_gpr[7] = (0u | 14u);
    if (aot_gpr[8] == aot_gpr[7]) {
    aot_gpr[6] = (0u | 7u);
        goto L_0896CDEC;
    }
    goto L_0896CDEC;
L_0896CDEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(324), aot_gpr[6]);
    aot_gpr[31] = (0x0896CDF8u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(36)));
    goto L_0896CCB4;
L_0896CDF8:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896CE04:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    aot_gpr[16] = (aot_gpr[4] | 0u);
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[4] = (0u | 3u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == aot_gpr[4];
    aot_gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_0896CE2C;
      }
      goto L_0896CE24;
    }
L_0896CE24:
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896CE44;
      }
      goto L_0896CE2C;
    }
L_0896CE2C:
    aot_gpr[4] = (2220u << 16u);
    aot_gpr[31] = (0x0896CE38u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-27928));
    if (rt.invoke_chained_direct<&recomp_unit_0362_entry, 362u, 113u, 0x0896E718u>(ctx, &aot_mem) && ctx.pc == 0x0896CE38u) goto L_0896CE38;
    return;
L_0896CE38:
    aot_gpr[4] = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), aot_gpr[4]);
      if (branch_taken) {
          goto L_0896CE6C;
      }
      goto L_0896CE44;
    }
L_0896CE44:
    aot_gpr[6] = (0u | 1u);
    { const bool branch_taken = aot_gpr[5] != aot_gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896CE68;
      }
      goto L_0896CE50;
    }
L_0896CE50:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[31] = (0x0896CE5Cu);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24880));
    if (rt.invoke_chained_direct<&recomp_unit_0356_entry, 356u, 181u, 0x08968AF4u>(ctx, &aot_mem) && ctx.pc == 0x0896CE5Cu) goto L_0896CE5C;
    return;
L_0896CE5C:
    aot_gpr[4] = (0u | 14u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), aot_gpr[4]);
      if (branch_taken) {
          goto L_0896CE6C;
      }
      goto L_0896CE68;
    }
L_0896CE68:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(320), aot_gpr[4]);
    goto L_0896CE6C;
L_0896CE6C:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896CE7C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2220u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-27928));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(32)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    aot_gpr[16] = (aot_gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896CEFC;
      }
      goto L_0896CE9C;
    }
L_0896CE9C:
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[16] + static_cast<std::uint32_t>(320)));
    aot_gpr[5] = (0u | 3u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896CEC4;
      }
      goto L_0896CEAC;
    }
L_0896CEAC:
    aot_gpr[4] = (2219u << 16u);
    aot_gpr[31] = (0x0896CEB8u);
    aot_gpr[4] = (aot_gpr[4] + static_cast<std::uint32_t>(-24880));
    if (rt.invoke_chained_direct<&recomp_unit_0356_entry, 356u, 181u, 0x08968AF4u>(ctx, &aot_mem) && ctx.pc == 0x0896CEB8u) goto L_0896CEB8;
    return;
L_0896CEB8:
    aot_gpr[4] = (0u | 14u);
    { const bool branch_taken = 0u == 0u;
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), aot_gpr[4]);
      if (branch_taken) {
          goto L_0896CEFC;
      }
      goto L_0896CEC4;
    }
L_0896CEC4:
    aot_gpr[5] = (0u | 2u);
    { const bool branch_taken = aot_gpr[4] != aot_gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896CEFC;
      }
      goto L_0896CED0;
    }
L_0896CED0:
    aot_gpr[6] = (2219u << 16u);
    aot_gpr[6] = (aot_gpr[6] + static_cast<std::uint32_t>(-24880));
    aot_gpr[6] = (PSPRECOMP_AOT_LOAD32(aot_gpr[6] + static_cast<std::uint32_t>(44)));
    aot_gpr[4] = (0u | 0u);
    aot_gpr[5] = (0u | 14u);
    if (aot_gpr[6] == aot_gpr[5]) {
    aot_gpr[4] = (0u | 7u);
        goto L_0896CEEC;
    }
    goto L_0896CEEC;
L_0896CEEC:
    PSPRECOMP_AOT_STORE32(aot_gpr[16] + static_cast<std::uint32_t>(324), aot_gpr[4]);
    aot_gpr[4] = (aot_gpr[16] | 0u);
    aot_gpr[31] = (0x0896CEFCu);
    aot_gpr[5] = (0u | 23u);
    goto L_0896CA70;
L_0896CEFC:
    aot_gpr[16] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896CF0C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-16));
    aot_gpr[5] = (2219u << 16u);
    aot_gpr[5] = (aot_gpr[5] + static_cast<std::uint32_t>(-24880));
    aot_gpr[5] = (PSPRECOMP_AOT_LOAD32(aot_gpr[5] + static_cast<std::uint32_t>(44)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896CF50;
      }
      goto L_0896CF28;
    }
L_0896CF28:
    aot_gpr[7] = (2220u << 16u);
    aot_gpr[7] = (aot_gpr[7] + static_cast<std::uint32_t>(-27928));
    aot_gpr[7] = (PSPRECOMP_AOT_LOAD32(aot_gpr[7] + static_cast<std::uint32_t>(32)));
    aot_gpr[5] = (0u | 0u);
    aot_gpr[6] = (0u | 4u);
    if (aot_gpr[7] == aot_gpr[6]) {
    aot_gpr[5] = (0u | 10u);
        goto L_0896CF44;
    }
    goto L_0896CF44;
L_0896CF44:
    PSPRECOMP_AOT_STORE32(aot_gpr[4] + static_cast<std::uint32_t>(324), aot_gpr[5]);
    aot_gpr[31] = (0x0896CF50u);
    aot_gpr[5] = (0u | 23u);
    goto L_0896CA70;
L_0896CF50:
    aot_gpr[31] = (PSPRECOMP_AOT_LOAD32(aot_gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr[31];
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896CF5C:
    aot_gpr[29] = (aot_gpr[29] + static_cast<std::uint32_t>(-32));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(12), aot_gpr[19]);
    aot_gpr[19] = (aot_gpr[4] | 0u);
    aot_gpr[4] = (PSPRECOMP_AOT_LOAD32(aot_gpr[19] + static_cast<std::uint32_t>(324)));
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(8), aot_gpr[18]);
    aot_gpr[18] = (aot_gpr[5] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(4), aot_gpr[17]);
    aot_gpr[5] = (aot_gpr[4] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    aot_gpr[17] = (aot_gpr[6] | 0u);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(0), aot_gpr[16]);
    PSPRECOMP_AOT_STORE32(aot_gpr[29] + static_cast<std::uint32_t>(16), aot_gpr[31]);
    { const bool branch_taken = aot_gpr[5] == 0u;
    aot_gpr[16] = (aot_gpr[7] | 0u);
      if (branch_taken) {
          goto L_0896CFA8;
      }
      goto L_0896CF90;
    }
L_0896CF90:
    aot_gpr[4] = (aot_gpr[4] << 2u);
    aot_gpr[1] = (2215u << 16u);
    aot_gpr[1] = (aot_gpr[1] + aot_gpr[4]);
    aot_gpr[1] = (PSPRECOMP_AOT_LOAD32(aot_gpr[1] + static_cast<std::uint32_t>(-21504)));
    jump_target = aot_gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896CFA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 21u, 0x0896D0E4u>(ctx, &aot_mem); return;
      }
      goto L_0896CFB0;
    }
L_0896CFB0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 21u, 0x0896D0E4u>(ctx, &aot_mem); return;
      }
      goto L_0896CFB8;
    }
L_0896CFB8:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896CFC8u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_0896C804;
L_0896CFC8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 21u, 0x0896D0E4u>(ctx, &aot_mem); return;
      }
      goto L_0896CFD0;
    }
L_0896CFD0:
    aot_gpr[31] = (0x0896CFD8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_0896C8C8;
L_0896CFD8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 21u, 0x0896D0E4u>(ctx, &aot_mem); return;
      }
      goto L_0896CFE0;
    }
L_0896CFE0:
    aot_gpr[31] = (0x0896CFE8u);
    aot_gpr[4] = (aot_gpr[19] | 0u);
    goto L_0896C92C;
L_0896CFE8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr[19] = (PSPRECOMP_AOT_LOAD8(aot_gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0361_entry, 361u, 21u, 0x0896D0E4u>(ctx, &aot_mem); return;
      }
      goto L_0896CFF0;
    }
L_0896CFF0:
    aot_gpr[4] = (aot_gpr[19] | 0u);
    aot_gpr[5] = (aot_gpr[17] | 0u);
    aot_gpr[31] = (0x0896D000u);
    aot_gpr[6] = (aot_gpr[16] | 0u);
    goto L_0896C9F4;
}

void recomp_unit_0360(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0360_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_360(Runtime &runtime) {
    runtime.register_generated_unit(360u, 0x0896C000u, 4096u, &recomp_unit_0360, &recomp_unit_0360_entry);
    runtime.register_function(0x0896C004u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C01Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C028u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C038u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C054u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C05Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C064u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C078u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C0D8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C0E8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C100u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C108u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C118u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C120u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C130u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C138u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C148u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C150u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C160u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C168u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C178u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C184u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C19Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C1D4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C1E0u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C1F8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C208u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C210u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C218u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C22Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C25Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C264u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C26Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C274u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C27Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C284u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C28Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C294u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C29Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C2A4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C2ACu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C2B4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C2C0u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C2F0u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C2F8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C300u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C308u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C310u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C318u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C320u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C328u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C330u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C338u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C340u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C348u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C354u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C368u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C388u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C39Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C3A8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C3B4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C3F8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C408u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C424u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C430u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C438u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C45Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C468u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C470u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C478u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C480u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C4A8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C4B0u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C4CCu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C4D8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C4F8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C508u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C52Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C544u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C558u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C574u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C57Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C598u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C5A4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C5F0u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C5FCu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C608u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C610u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C624u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C63Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C644u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C664u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C66Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C688u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C69Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C6A0u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C6B4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C6C4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C6CCu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C6E0u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C6F8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C700u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C708u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C714u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C754u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C764u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C770u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C780u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C78Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C794u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C79Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C7B0u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C7C4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C7CCu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C7D8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C7E4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C7ECu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C7F4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C804u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C830u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C838u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C848u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C850u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C858u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C860u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C868u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C874u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C88Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C898u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C89Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C8A8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C8B0u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C8C8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C8F0u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C90Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C918u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C92Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C94Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C960u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C974u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C988u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C990u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C9A4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C9ACu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C9BCu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C9C4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C9CCu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C9D4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C9DCu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896C9F4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CA18u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CA24u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CA34u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CA40u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CA4Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CA58u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CA60u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CA70u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CA94u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CAA0u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CAA8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CAACu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CAB4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CABCu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CAC4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CAD0u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CAD4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CAECu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CB0Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CB14u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CB1Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CB24u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CB30u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CB3Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CB48u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CB54u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CB58u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CB60u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CB68u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CB7Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CBA4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CBB4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CBC0u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CBCCu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CBDCu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CBF8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CC08u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CC10u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CC1Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CC24u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CC2Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CC34u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CC4Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CC58u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CC68u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CC70u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CC8Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CCA4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CCB4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CCD4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CCDCu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CCE4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CCECu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CCF8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CD04u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CD10u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CD1Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CD20u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CD28u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CD30u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CD44u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CD64u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CD74u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CD84u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CD8Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CD98u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CDB4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CDC0u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CDC8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CDD0u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CDECu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CDF8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CE04u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CE24u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CE2Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CE38u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CE44u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CE50u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CE5Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CE68u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CE6Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CE7Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CE9Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CEACu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CEB8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CEC4u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CED0u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CEECu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CEFCu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CF0Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CF28u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CF44u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CF50u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CF5Cu, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CF90u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CFA8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CFB0u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CFB8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CFC8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CFD0u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CFD8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CFE0u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CFE8u, &recomp_unit_0360, "recomp_unit_0360");
    runtime.register_function(0x0896CFF0u, &recomp_unit_0360, "recomp_unit_0360");
}
} // namespace psprecomp
